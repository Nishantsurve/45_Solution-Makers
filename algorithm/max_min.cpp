#include<iostream>
// input /output 
#include<math.h>
// math module
//#include<climits>
using namespace std;

int factorial(int n,int fac){
    
    for (int i=1;i<n+1;i++){
       fac=fac*i;
    }
    return fac;
}
bool isprime(int num){
    for (int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;   
}
 int fibinaco(int n){
    if(n==0){
        return 0;
        }
    if(n==1){
        return 1;
    }        
    int fibinaco1=fibinaco(n-1);
    int fibinaco2=fibinaco(n-2);
    int result=fibinaco1 +fibinaco2;
    return result;
 }
/*bool anagram(string s1,string s2){
    if(s1.length!=s2.length){
        return 0;
    } 
}*/
int main(){
    int n=234;
    //cin >> n;
    // method to reduce the given number
  /*  int s=n/100;
    cout << s;
    int x=1234;
    int y=x%10;
    cout << y<<endl;*/
// To reverse the program
    int p;
    cin>> p;
    int reverse;
    while(p>0 | p<0){
        // get the last number
        int lastd=p%10;
        // adding the number to once's place
        reverse=reverse *10 +  lastd;
        // remove the last number 
        p=p/10;
    }
    cout << reverse;
     
    /* ////////////////////////////////////////Armstrong number////////////////////////////////////////////////
     if sum of cube of each number in the given number is equal to to original 
     then it is called armstrong  number                              */
 /*    int z;
     cout<<"armstrong"<< endl;
     cin >> z;
    int armn=0;
    int result=z;
    int sum=0;
     while(z>0){
        // to get the last digit
          int ld=z%10;
          sum+=ld;
          armn+=pow(ld,3);
          // to remove the one last digit
          z=z/10;
     }
      if(armn==result){
        cout <<"Armstrong" << endl;
      }
      else{
        cout <<"not Armstrong" << endl;
      }

      cout <<factorial(5,1)<< endl;
/////////////////////////////////////////////prime number///////////////////////////////////////////////
      int a,b;
      cin>>a>>b;
      for(int i=a;i<b;i++){
        if(isprime(i)){
            cout << i<< endl;
        }
      }

      int d;
      cin >>d;
      cout << fibinaco(d) << endl;
*/
    /*  int e;
      cin >>e;
     // int result;
      for(int i=2;i<=e;i++){
        if(e%i==0){
            cout <<"non prime" <<endl;
            break;
        }
        else{
            cout<<"prime" << endl;
            break;
        }
        //result=(e%i==0) ? "non prime" : "prime";

      }
  ////////////////////////////////////////////max and min in array //////////////////////////////////////
      int f[4]={1,2,3,4};
      int max1=INT_MIN;
      int min1=INT_MAX;
      for(int i=0;i<4;i++){
        if(f[i]>max1){
            max1=f[i];
        }
         if(f[i]<min1){
            min1 =f[i];
        }
        //int r=(f[i]>max1) ? max1=f[i] : min1=f[i];
      }
      /*
      max1=max(max1,f[i])
      min1=min(min1,f[i]) */
     /* cout<< max1 <<" "<< min1<< endl;
 ///////////////////////////////////////////////Sorting Arrays////////////////////////////////////////
 // by swaping
      int h[5]={2,5,1,7,9};
      for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(h[j]>h[i]){
                int temp=h[j];
                h[j]=h[i];
                h[i]=temp;
            }
        }
      }
      for(int i= 0;i<5;i++){ 
      cout << h[i] << " ";
      }
      /////////////////////////////////////Another way to check palindrone //////////////////////////////////
      bool chk=1;
      int k=4;
      char c1[k];
       for(int i=0;i<k;i++){
          cin>>c1[i];
      }
      for(int i=0;i<k;i++){
        if(c1[i]!=c1[k-1]){
           chk=0;
           break;
        }
      }
      if(chk==true){
        cout << "palindrone";
      }
      else{
        cout <<"not palindrone";
      }*/
}

