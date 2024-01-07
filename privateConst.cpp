#include<iostream>
#include<cstring>
using namespace std;
class Admin{
    private:
        char adminName[20];
        char adminPassword[20];
        //PRIVATE CONSTRUCTOR
        Admin(){
            strcpy(adminName,"ADMIN");
             strcpy(adminPassword,"ADMIN");
        }
    public:
        void Show(){
            cout<<"Admin Name : "<<adminName<<endl;
            cout<<"Admin Password : "<<adminPassword<<endl;
        }
        //Creating Object in class bcoz constructor is private
        static Admin* getInstance(){    //making object static so that the lifetime of object will be whole program
            Admin *ptr = new Admin();   // allocating dynamic memory for object
            return ptr;
        }
};
int main() { 
    Admin *addObj;
    addObj = Admin::getInstance();
    addObj->Show();

return 0;
}