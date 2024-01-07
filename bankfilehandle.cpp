#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Account
{
private:
    int Account_num;
    string Account_name;
    string Account_type;
    double Account_bal;

public:
    static int AccCount;
    Account() : Account_name(""), Account_type("") {}
    Account(string name, int type);
    void Display();
    void IncAccountCount()
    {
        AccCount++;
        this->Account_num = AccCount;
    }
    int getAccountNumber()
    {
        return this->Account_num;
    }
    void setAccountBal(double currentAccountBal)
    {
        this->Account_bal = currentAccountBal;
    }
    int getAccountBal()
    {
        return this->Account_bal;
    }
    void SaveData();
};
void Account::SaveData(){
    ofstream fout;
    fout.open("Account_file.txt",ios::app);
    if(!fout.is_open()){
        cerr << "!!!! File not Opened !!!!";
        return;
    }
    fout << "Account Number :" << Account_num<<endl;
    fout << "Account Name :" << Account_name<<endl;
    fout << "Account Type :" << Account_type<<endl;
    fout << "Account Balance :" << Account_bal<<endl;
    fout << "-------------------" << endl;
    fout.close();
}
Account::Account(string name, int type)
{
    this->Account_num = AccCount;
    this->Account_name = name;
    if (type == 1)
    {
        this->Account_type = " SAVING ";
        this->Account_bal = 0;
    }
    else if (type == 2)
    {
        this->Account_type = " CURRENT ";
        this->Account_bal = 1000;
    }
    else
        cout << "------Invalid Input-----" << endl;
}
Account addAccount()
{
    string name;
    int type;
    cout << "Enter your name : ";
    cin.ignore();
    getline(cin, name);
    cout << "Select your account type \n1) SAVING \t2) CURRENT : ";
    cin >> type;
    Account acc(name, type);
    acc.IncAccountCount();
    cout << "Your account number is " << acc.getAccountNumber() << endl;
    return acc;
}
void Account::Display()
{
    cout << "Your Name is : " << this->Account_name << endl;
    cout << "Your Account Balance is : " << this->Account_bal << endl;
    cout << "Your Account Type is : " << this->Account_type << endl;
    cout << "Your Account Number is : " << this->Account_num << endl;
    cout << "--------------------------------------------------" << endl;
}
void displayOldAccount(){
    ifstream finput;
    finput.open("Account_file.txt");
    if(!finput.is_open()){
        cerr << "File not opened ";
        return;
    }
    string str;
    while(getline(finput,str)){
        cout<<str<<endl;
    }
    
   finput.close();
}
void displayAllAccount(Account list[], int AcCount)
{   
    displayOldAccount();
    for (int i = 0; i < AcCount; i++)
    {
        list[i].Display();
    }
}
int FindAccount(Account list[], int AcCount)
{
    int checkAcc, found = 0;
    cout << "Enter your account number : ";
    cin >> checkAcc;
    for (int i = 0; i < AcCount; i++)
    {
        if (checkAcc == list[i].getAccountNumber())
        {
            found = 1;
            return i;
            break;
        }
    }
    if (found == 0)
        cout << " Sorry! No Record Found " << endl;
    return -1;
}

void display(Account list[], int AcCount)
{
    int index;
    index = FindAccount(list, AcCount);
    if (index >= 0)
    {
        list[index].Display();
    }
}
void withdrawAmmount(Account list[], int AcCount)
{
    int withdrawAmount, index;
    double amount;
    index = FindAccount(list, AcCount);
    if (index >= 0)
    {
        amount = list[index].getAccountBal();
        cout << "Enter the amount you want to withdraw : ";
        cin >> withdrawAmount;
        if (withdrawAmount > amount)
            cout << "!!!!!!!! INSUFFICIENT BALANCE !!!!!!!";
        else
        {
            amount -= withdrawAmount;
            list[index].setAccountBal(amount);
            cout << "******Withdraw Successfull******* \nRemaining balance = " << amount << endl;
        }
    }
}
void depositAmmount(Account list[], int AcCount)
{
    int Depositamount, index;
    double amount;
    index = FindAccount(list, AcCount);
    if (index >= 0)
    {
        cout << "Enter the amount to deposit : ";
        cin >> Depositamount;
        amount = list[index].getAccountBal();
        amount += Depositamount;
        list[index].setAccountBal(amount);
        cout << "*****Deposit Successfully***** \nCurrent Balance = " << amount << endl;
    }
}

int Account::AccCount = 100; // static number initialize it will be done only once in a program
int main()
{
   ifstream infile("Account_file.txt");        //loading the file when starting the program into infile OBJECT
    int lastAccountNumber=100;                  //assuming last account number is 100 coz we starting the account number list from 100
    while (infile)                              //finding in the INFILE obj
    {
        string line;                            
        getline(infile, line);                  //storing each string in line variable of the infile obj
        if (line.find("Account Number :") != string::npos)       //finding until we get the "Account Number:" in each line
        {
            int accountNumber = stoi(line.substr(line.find(":") + 1));      // when we get : then +1 mean from the next value convert the string into integer using stoi and store into accountnumber
            //string original = "Hello, World!";        WORKING OF substr(starting index,length[optional])
            //string part1 = original.substr(0, 5);   // "Hello"
            //string part2 = original.substr(7);      // "World!"
            if (accountNumber > lastAccountNumber)
            {
                lastAccountNumber = accountNumber;      // if file account number > last buffer account number then assign in the last account number so that new account number will be assign after this
            }
        }
    }
    Account::AccCount = lastAccountNumber; //now the accCount will start from last account number
    Account accountList[100];
    int ch, OpenAccCount = 0;
    do
    {
        cout << "Welcome\n1. Open Account \n2. Withdraw \n3. Deposit \n4. Display \n5. DisplayAll \n6. Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            accountList[OpenAccCount] = addAccount();
            OpenAccCount++;
            break;
        case 2:
            withdrawAmmount(accountList, OpenAccCount);
            break;
        case 3:
            depositAmmount(accountList, OpenAccCount);
            break;
        case 4:
            display(accountList, OpenAccCount);
            break;
        case 5:
            displayAllAccount(accountList, OpenAccCount);
            break;
        case 6:
            cout << "Thank you" << endl;
            for (int i = 0; i < OpenAccCount; i++)
            {
                accountList[i].SaveData();
            }
            break;
        default:
            cout << "Enter Valid Option" << endl;
            break;
        }
    } while (ch != 6);
    return 0;
}