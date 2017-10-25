#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
int temp=0;	
for(int i=0;i<n-1;i++){
	for(int j=1;j<n-1-i;j++)
	{    if(a[j]>a[j+1])

    {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
    }


	}

}
for(int k=0;k<n;k++){
	cout<<a[k];
}


}







int main(){
	int a[10];
     int n;
     cin>>n;
	for(int i=0;i<n;i++){
     cin>>a[i];}


     bubbleSort(a,n);






}