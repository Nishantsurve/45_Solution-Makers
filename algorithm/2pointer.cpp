#include<iostream>
using namespace std;
                    // two pointer algorithm 
                    // we keep first element of triplet fixed and iterate over 2 element 
                    // and create two pointer l and h
                    // l=i+1  h =n-1
                    // if target ==sum print else if target > sum l++ and else h--;
void two_pointer(int a[],int n,int target){
        for(int i=0;i<n;i++){
            int l=i+1;
            int h=n-1;
            while(l<h){
                if(a[i] +a[l] +a[h]==target){
                     cout<<a[i]<<" "<<a[l]<<" "<<a[h]<<endl;
                     break;
                }
                else if(a[i] +a[l]+a[h] < target){
                    l++;
                }
                else{
                    h--;
                }
            }
        }
}
int main (){
    int trg;
    cout<<"enter the target "<<endl;
    cin>>trg;
int a[5]={2,4,5,12,18};

two_pointer(a,5,trg); 
}