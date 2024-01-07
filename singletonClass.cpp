#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;
class Admin
{
private:
    char adminName[20];
    char adminPassword[20];
    static int AdminCount;
    // PRIVATE CONSTRUCTOR
    Admin()
    {
        strcpy(adminName, "ADMIN");
        strcpy(adminPassword, "ADMIN");
    }

public:
    void Show()
    {
        cout << "Admin Name : " << adminName << endl;
        cout << "Admin Password : " << adminPassword << endl;
    }
    // Creating Object in class bcoz constructor is private
    static Admin *getInstance()
    { // making object static so that the lifetime of object will be whole program
        if (AdminCount == 0)
        {
            Admin *ptr = new Admin(); // allocating dynamic memory for object
            AdminCount++;
            return ptr;
        }
        else
            return NULL;
    }
};
int Admin::AdminCount = 0;
int main()
{

    Admin *addObj;
    addObj = Admin::getInstance();
    if (addObj != NULL)
    {
        addObj->Show();
    }
    else
        cout << "\nNo More Admin Can be Created ";
    Admin *addObj2;
    addObj2 = Admin::getInstance();
    if (addObj2 != NULL)
    {
        addObj2->Show();
    }
    else
        cout << "\nNo More Admin Can be Created ";

    return 0;
}