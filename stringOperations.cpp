// It is designed to perform various operations on a string. 
// It first prompts the user to enter a string, followed by a character for counting its occurrences,
// and then it calculates the number of blank spaces, the number of characters (excluding spaces), 
// and the number of vowels in the entered string.
#include <iostream>
using namespace std;
void occur(char *str, char ch);
void blankspc(char *str);
void words(char *str);
void vowels(char *str);
int main()
{
    char str[100];
    char ch;
    cout << "Enter a string : ";
    cin.getline(str, sizeof(str));
    cout << "Enter a character to check the number of occurence : ";
    cin >> ch;
    occur(str, ch);
    blankspc(str);
    words(str);
    vowels(str);
    return 0;
}

void occur(char *str, char ch)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }
    cout << "TOTAL NUMBER OF " << ch << " CHARACTER : " << count << endl;
}

void blankspc(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    cout << "TOTAL NUMBER OF BLANK SPACE : " << count << endl;
}

void words(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            continue;
        else
            count++;
    }
    cout << "TOTAL NUMBER OF CHARACTER IN " << str << " : " << count << endl;
}

void vowels(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            count++;
    }
    cout << "TOTAL NUMBER OF VOWELS IN " << str << " ARE " << count;
}