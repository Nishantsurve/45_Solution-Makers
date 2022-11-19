#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[4]={3,12,9,6};
    int k=3;
      int c=0;
      int ans1;
    for(int i=0;i<4;i++){
          ans1=0;
        for(int j=i;j<4;j++){
          ans1=__gcd(ans1,a[j]);
          cout<<ans1<<endl;
            if(ans1==k){
                c++;
            }
        }
      }
 cout<<"answer "<<c;
     int a1,b;
    // cin>>a1>>b;
   //  int ans=__gcd(a1,b);

    //  cout<<ans;
}