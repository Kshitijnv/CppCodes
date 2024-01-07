#include <iostream>
#include <cstring>
#include<fstream>
using namespace std;
class Account
{
private:
    string Account_name;
    int Account_num;
    double Account_balance;
    string Account_type;

public:
    static int accountCount;
    int getAccountNum(){
        return this->Account_num;
    }
     void SaveToFile(ofstream& file) {
        file << Account_name << "," << Account_num << "," << Account_balance << "," << Account_type << endl;
    }

    void LoadFromFile(ifstream& file) {
        getline(file, Account_name, ',');
        file >> Account_num;
        file.ignore(); // Consume the comma
        file >> Account_balance;
        file.ignore(); // Consume the comma
        getline(file, Account_type);
    }
    void Add_account()
    {
        int ch;
        Account acc;
        cout << "enter your name : " << endl;
        cin >> Account_name;
        do
        {
            cout << "Enter the account type \n1) Saving \n2)Current " << endl;
            cin >> ch;
            if (ch == 1)
            {
                Account_balance = 0;
                Account_type = " SAVING ";
            }
            else if (ch == 2)
            {
                Account_balance = 1000;
                Account_type = " Current ";
            }
            else
                cout << "invalid input " << endl;
        } while (ch != 1 && ch != 2);

        accountCount += 1;
        Account_num = accountCount;
        cout << "Your account number is : " << Account_num << endl;
    }

    void DisplayAll()
    {
        cout << "Your name is : " << Account_name << endl;
        cout << "Your balance is " << Account_balance << endl;
        cout << "Your account type is " << Account_type << endl;
        cout << "Your Account number is : " << Account_num << endl;
    }
    void Display(){
        cout << "Your name is : " << this->Account_name << endl;
        cout << "Your balance is " << this->Account_balance << endl;
        cout << "Your account type is " << this->Account_type << endl;
        cout << "Your Account number is : " << this->Account_num << endl;
    }

    double getAccountBal(){
        return this->Account_balance;
    }
    void setAccountBal(int withdraw_amount){
        this->Account_balance-=withdraw_amount;
    }
    void setAccountBalDeposit(int deposit_bal){
        this->Account_balance+=deposit_bal;
    }
};

 void Deposit(Account obj[],int count){
    cout<<"Enter the account number to deposit: ";
    int checkAccNum,deposit_bal;
    cin>>checkAccNum;
    int found=0;
    for(int i=0;i<count;i++){
        if(checkAccNum==obj[i].getAccountNum()){
            found=1;
            cout<<"Enter the amount to be deposit : ";
            cin>>deposit_bal;
                obj[i].setAccountBalDeposit(deposit_bal);
            }
        }
         if(found==0)
            cout<<"No record found"<<endl;
    }

void Withdraw(Account obj[],int count){
    cout<<"Enter the account number to withdraw : ";
    int checkAccNum,withdraw_amount;
    cin>>checkAccNum;
    int found=0;
    for(int i=0;i<count;i++){
        if(checkAccNum==obj[i].getAccountNum()){
            found=1;
            cout<<"Enter the amount to be withdraw : ";
            cin>>withdraw_amount;
            if(withdraw_amount<obj[i].getAccountBal()){
                obj[i].setAccountBal(withdraw_amount);
            }
            else
                cout<<"Insufficient funds"<<endl;
        }
    }
    if(found==0)
            cout<<"No record found"<<endl;
}
void Display(Account obj[],int count){
    cout<<"Enter the account number : ";
    int checkAccNum;
    cin>>checkAccNum;
    int found=0;
    for(int i=0;i<count;i++){
        if(checkAccNum==obj[i].getAccountNum()){
            found=1;
            obj[i].Display();
        }     
    }
    if(found==0)
    cout<<"No record Found"<<endl;
}
int Account::accountCount = 100;
int main()
{
    Account obj[100];
    int choice;
    int OpenAccCount = 0;
     ifstream inputFile("accounts.txt");
    if (inputFile.is_open()) {
        while (!inputFile.eof() && OpenAccCount < 100) {
            obj[OpenAccCount].LoadFromFile(inputFile);
            OpenAccCount++;
        }
        inputFile.close();
    }
    ofstream outputFile;
    do
    {
        cout << "Enter the choice : \n1)Open Account \n2)Display all acoount details \n3)Display \n4)Withdraw \n5)Deposit \n6)EXIT" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (OpenAccCount < 100){
                obj[OpenAccCount].Add_account();
                 obj[OpenAccCount].SaveToFile(outputFile); 
                OpenAccCount++;
            }
            break;
        case 2:
            for (int i = 0; i < OpenAccCount; i++)
            {
                obj[i].DisplayAll();
            }
            break;
        case 3:
            Display(obj,OpenAccCount);
            break;
        case 4:
                Withdraw(obj,OpenAccCount);
            break;
        case 5:
                Deposit(obj,OpenAccCount);
            break;
        case 6:
                // Save data to file before exiting
                outputFile.open("accounts.txt"); // Open the file for writing
                if (outputFile.is_open()) {
                    for (int i = 0; i < OpenAccCount; i++) {
                        obj[i].SaveToFile(outputFile);
                    }
                    outputFile.close();
                } else {
                    cout << "Unable to open the file for writing." << endl;
                }
                cout << "*****THANK YOU*****" << endl;

        break;
        default:
            cout << "Invalid input ";
            break;
        }
    } while (choice != 6);

    return 0;
}