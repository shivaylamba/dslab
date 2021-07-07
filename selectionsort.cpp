#include<iostream>
using namespace std;
 void selectionSort(int a[],int n){
int temp=0;
int index;
for(int i=0;i<n-1;i++){
	index=i;
   for(int j=i+1;j<n;j++){
    if(a[j]<a[index])
    index=j;
   }

int temp=a[index];
a[index]=a[i];
a[i]=temp;

}

    for(int k=0;k<n;k++){

    cout<<a[k];
    }




 }



int main(){
	int a[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{

      cin>>a[i];

	}


   selectionSort(a,n);

cout<<"kuchhbhi";

}
