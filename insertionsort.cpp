#include<iostream>
using namespace std;
void insertionSort(int a[],int n){
	
  int temp,i,j,k;

  for(i=1;i<n;i++){
 temp=a[i];
 j=i;
 while(j>0&&a[j-1]>temp){

 a[j]=a[j-1];
 j--;
 } 
  if(j!=i){a[j]=temp;

  }


  }

for(k=0;k<n;k++)
cout<<a[k];


}



int main(){
	int a[10];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){

	cin>>a[i];
	}

   insertionSort(a,n); 



}