#include<iostream>
using namespace std;
class Array{
    int size;
    int *arr;
public:
    Array();        //default declare
    Array(int);     //parameterized declare
    void Display();
    void Accept();
    Array(Array &);     //COPY DECLARE
   ~Array();   //destructor declare
};

Array::Array(){     //DEFAULT define
    size=5;
	arr=new int[size];
	for(int i=0; i<size; i++)
		arr[i]=0;
}
Array::Array(int s):size(s){    //PARAMETERIZED DEFINE
    arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
}   

Array::Array(Array & arrobj){       //COPY CONSTRUCTOR
    size=arrobj.size;
	arr=new int[size];
	for(int i=0; i<size; i++)
		arr[i]=arrobj.arr[i];	
    
}
void Array::Display(){
cout<<"Array elements : "<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
void Array::Accept(){
    cout<<"Enter array elements \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
Array::~Array(){
	delete []arr;
}


int main(){
    //Array a1();
    // int size;
    // cout<<"Enter the size of array :";
    // cin>>size;
    Array a2(4);
    a2.Accept();
    cout<<"object 2 array ";
    a2.Display();

    cout<<"\n Object 3 Array ";
    Array a3(a2);   //Calling copy constructor
    a3.Display();

    return 0;
}