#include <iostream>
using namespace std;
bool isprime(int n){
    if(n<=1)
    return 0;

    for(int i=2;i<n;i++){
        if(n%i==0){
        return 0;
        }
    }
    return 1;
}

int countPrimes(int n) {
        int count=0;
       vector<bool>prime(n+1,true); 
       // vector<type>name(parameter);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]){           
                count++;
                // assigning zeros to multiple of prime number
                // eg 2 is not prime but multiple of 2 are are not prime 4,6,8,10
                 for(int j=2*i;j<n;j=j+i){ 
                     prime[j]=0;
                 }
            }
        }
        return count;
    }

int main(){
  /*  int num;
    cin>>num;
    if(isprime(num)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
*/
     cout<<countPrimes(10)<<endl;
}