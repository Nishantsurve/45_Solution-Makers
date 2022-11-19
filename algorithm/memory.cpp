#include<iostream>

using namespace std;
int main(){

int *a;
int *b;
int *c;
int avg;
a=new int;   // dynamic memory allocation
b=new int;
c=new int;

cout<<"enter the num: "<<endl;
cin>>*a;
cout<<"enter the num: "<<endl;
cin>>*b;
cout<<"enter the num: "<<endl;
cin>>*c;

avg=(*a+*b+*c)/3;
cout<<avg<<endl;
// deallocate the memory
delete a;
delete b;
delete c;


int n;
cin>>n;
int *arr;

arr=new int[n];      //dynamic memory allocation
cout<<"  enter the elememts : "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}

delete arr;         // deallocation of memory
}