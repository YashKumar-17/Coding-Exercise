#include<iostream>

using namespace std;

int main(){

	int n,i,j;

	cout<<"Enter the number: ";

	cin>>n;

	int x[n];

	cout<<"FIBBONACCI SEQUENCE: "<<endl;

	for(i=0;i<n;i++){

	if(i==0)

	{x[i]=0;

	cout<<x[0]<<" ";

	}

	else if(i==1){

	x[i]=1;

	cout<<x[1]<<" ";

	}

	else if(i>1){

  x[i] = x[i-1] + x[i-2];

  cout<<x[i]<<" ";

	}

}

cout<<"\nMISSING NUMBERS: "<<endl;

for(i=4;i<n-1;i++){

	for(j=x[i] +1 ;j<x[i+1];j++){

	cout<<j<<" ";

	}

}

	return 0;

}