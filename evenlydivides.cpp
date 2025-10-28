#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int temp=n;
	int c=0;
	while(temp!=0){
		temp=temp/10;
		c++;
	}
	int q;
	int count=0;
	int t=n;
	for(int i=0;i<c;i++){
     q=t%10;
     if(n%q==0){
     	count++;
     }
     t=t/10;
	}
	cout<<count;
	return 0;
}