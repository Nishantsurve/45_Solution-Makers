#include<iostream>
using namespace std;
int main(){
  /*0 int sz;
   cin>>sz;
   int a[sz];
   for(int i=0;i<sz;i++){
    cin>>a[i];
   }
   
   //1, 3, 4, 2, 6, 5, 8, 7
   if(sz%2!=0){
    cout<<(float)a[sz/2]<<endl;
    }
    else{
        cout<<((float)a[sz/2] + (float)a[(sz/2)-1])/2.0<<endl;
    }
*/
int n=4;
int a[n]={2,1,3,4};
cout<<(a[2]%n)<<endl;

}