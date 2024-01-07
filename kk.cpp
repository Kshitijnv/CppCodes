#include<iostream>
class parent{
    private:
    int x;
    protected:
    int y;
    public:
    int z;

};
class child:protected parent{

    protected:
        int a;
        int y;          //child::y
        int z;      //child::z
//         base::y;
//         base::z;
};
class gChild:protected child{
    protected:
        int b;

};
int main() { 
return 0;
}