#include <iostream>
using namespace std;

int main(){
    // finding unique element from an array
/*    int N2=5;
    int c2[N2]={1,2,1,3,2};
    int r=0;
    for(int i=0;i<N2;i++){
           r= r^c2[i];
    }  
    cout<<r<<endl;
    int n=5;
    int a[n]={5,4,1,2};
    //int N=n+1;
    // sum of  n number n(n+1)/2
    int ans= (n *(n+1))/2;
     int sum=0;
    for(int i=0;i<4;i++){
        sum +=a[i];
    }
    cout<<ans-sum;
    */
   // time complexcity is O(n)
   // second approach to solve the problem
   int sz=7;
   int b[sz]={5,3,6,7,2,1,4};
   int b1=0,b2=1;
   for(int i=0,j=2;i<sz,j<=sz+1;i++,j++){
       b1=b1^b[i];
       b2=b2^j;
   }
   // int b3=b1^b2;
    cout<<(b1^b2)<<endl;
}