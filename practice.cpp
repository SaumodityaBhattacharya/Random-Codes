#include<iostream>
using namespace std;
int main(){
	int arr[10]={1,2,0,4,0,5,0,0,6,0};
	int n=sizeof(arr)/sizeof(int);
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[j++]=arr[i];
		}
	}
	while(j<n){
		arr[j++]=0;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}