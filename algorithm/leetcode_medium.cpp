#include<iostream>
using namespace std;

int sum2(long long num){
int ans=0;
while(num){
     ans+=num%10;;
     num=num/10;
}
return ans;
}

int main(){
   int num,target;
   cin>>num>>target;
   long long num2=num,power=1;
   // cout<<sum2(num);
int sum1=sum2(num);

while(num>target){
    num=num/10+1;
    power*=10;
  //  num/=10;
}

cout<<num*power-num2<<endl;
   cout<<7/10+1<<endl;
}






   