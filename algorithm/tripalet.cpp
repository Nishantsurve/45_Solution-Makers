#include<bits/stdc++.h>
using namespace std;
                                                // triplet by two pointer approach
                                            // in this case we fix 1st ele of triplet iterate for the 2 values
//or create 2 pointers l=i+1 , h=n-1 put in it while loop(l<h) 
//  sum =n1+n2+n3  if(sum==trg) return elements elseif(sum<trg) l++ else h--
                                            // Time complexcity -O(n^2)
void triplet_(int a[],int n,int target){
    int l ,h;
    sort(a,a+n);                         // sort the array elements
    for(int i =0;i<n;i++ ){
        l=i+1;
        h=n-1;
        while(l<h){
            if(a[i] +a[l]+a[h]==target){
             cout<<a[i]<<" "<<a[l]<<" "<<a[h]<<endl;
             break;
            }
            else if ( a[i] +a[l]+a[h]< target){
                l++;
            }
            else{
                h--;
            }
        }
    }
}
int main(){
    //int sum=22;
   int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum=22;
     int arr_size = sizeof(A) / sizeof(A[0]);  
      int n=6;
   /*   int a[n]={1,4,45,6,10,8};
      for(int i=0;i<n-2;i++){

         for(int j=i+1;i<n-1;j++){

            for(int k=j+1;k<n;k++){

              if((a[i]+a[j]+a[k]) == sum){

                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                break;
              }
            }
         }
      }
*/                                                
                                              // Time complexcity is worstcase worst - O(n^3)
  for (int i = 0; i < arr_size ; i++)
    {
        // Fix the second element as A[j]
        for (int j = i + 1; j < arr_size ; j++)
        {
            // Now look for the third number
            for (int k = j + 1; k < arr_size; k++)
            {
                if (A[i] + A[j] + A[k] == sum)
                {
                    cout << "Triplet is " << A[i] <<
                        ", " << A[j] << ", " << A[k]<<endl
                        break;;
                }
            }
        }
    }


triplet_(A,arr_size,sum);

 
  /*  int p; 
       for(int i=0;i<arr_size;i++){    
        p=0;
       for(int j=i+1;j<arr_size-1;j++){
        p=j+1;
        if(A[i] +A[j]+ A[p]==sum){
            cout << "Triplet is " << A[i] <<
                        ", " << A[j] << ", " << A[p];

        }
        else{
            p++;}
    }
}*/




}