#include<iostream>
using namespace std;

int main(){
    //////////// Time complexcity O(n)
    int t;
    cin>>t;
    int n=4;
    while(t--){
         int a[n]={20,30,10,40};
         //step -1 of Kandennes algo
         int sell=a[0];
         int buy=a[0];
         int maxprofit=0;

         for(int i=0;i<n;i++){
            // step-2
            if(a[i]>=buy){
             sell=a[i];
             //step-3
            maxprofit=max(sell-buy,maxprofit);      // max1=max(codition,max1)
            }
            else{
                buy=a[i];
            }

         }
            cout<<maxprofit<<endl;
    }
}