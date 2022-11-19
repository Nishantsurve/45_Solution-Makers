#include<iostream>
using namespace std;
int main(){
   int n=4;
    int b[n]={-1,-2,-3,-4};
int sum=0,maxi=b[0];
   for(int i=0;i<n;i++) 
   {
    sum=sum+b[i];  //step-1
    maxi=max(maxi,sum);  // step-2

   if(sum<0){     // step-3
    sum=0;
   }
   }

   cout<<maxi<<endl;
/*
 for(int i=0;i<9;i++){
    for(int j=i;j<9;j++){
        for (int k=i; k<=j; k++)
                cout << b[k] << " ";
  
            cout << endl;
        }
    }*/
  /*  int mlen=0,count=0;
    int n1;
    cin>>n1;
    int arr[n1+1];
    for(int i=0;i<n1;i++){
        cin>>arr[i];
        }
   
       for(int i=0;i<n1;i++){
         count=count+1;
        if(arr[i]!=arr[i+1]){
             mlen=max(count,mlen);
            count =0;
        }
       }
       cout<<mlen<<endl;*/
   }

   
