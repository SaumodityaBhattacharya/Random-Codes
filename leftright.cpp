#include<iostream>
using namespace std;
int main(){
	int left,right;
	cin>>left>>right;
	int bit=0;
	while(left<right){
		left >>=1;
		right >>=1;
		bit++;
	}
	int k=left<<bit;
	cout<<k;
	}