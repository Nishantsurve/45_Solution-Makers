#include<iostream>
// imp to include header file while applying Binary STL
#include<algorithm>
using namespace std;

int main(){
/*
int a[4]={1,2,3,4};
 // binary_search(a,a+n,num_t0_search)
//int ind= binary_search(a,a+4,2);
cout<< binary_search(a,a+4,1)<<endl;

int b[3]={1,3,12};
// lower_bound returns the number if found either return next greater element
int ans= lower_bound(b,b+3,11)-b;
cout<<ans<<endl;

int c[4 ]={1,2,5,9};
// upper_bound function always returns the next greater element
int ans1=upper_bound(c,c+4 ,5)-c;
cout<<ans1<<endl;

// program for last occurences
cout<<" last occurences" <<endl;
int d[4]={1,2,2,3};
int ans3=upper_bound(d,d+4,2)-d;
ans3--;
if(ans>=0 && d[ans3]==12){
    cout<<ans3<<endl;
}
else{
    cout<<-1<<endl;
}
*/
// program for smallest number smaller than X
int f[4]={1,2,4,7};
int x=2;
int ans4=lower_bound(f,f+4,x)-f;
ans4--;
if(ans4>=0){
    cout<<f[ans4]<<endl;
}
else{
    cout<<-1<<endl;
}

 // program for   smallest number greater than x
int ans5=upper_bound(f , f+4 ,x)-f;
if(ans5<4){
    cout<<f[ans5]<<endl;
}
else{
    cout<<-1<<endl;
}

}