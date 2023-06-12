#include <iostream>

using namespace std;

int main()
{
   int arr[]={1,4,20,3,10,5};
   int start,end;
   int ok=0;
   int n=sizeof(arr)/sizeof(arr[0]);
   int targetsum=33;
   for(int i=0; i<n;i++){
       if(ok==1){
           break;
       }
       int sum=arr[i];
       start=i;
       for(int j=i+1; j<n;j++){
           //cout<<j<<endl;
           if(sum<targetsum){
               sum+=arr[j];
           }
           if(sum==targetsum){
               end=j;
               ok=1;
               break;
           }
           if(sum>targetsum){
               break;
           }
       }
       
   }
      for(int k=start; k<=end;k++){
          cout<<arr[k]<<" ";
      }
       

    return 0;
}