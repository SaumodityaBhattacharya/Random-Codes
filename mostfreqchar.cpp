#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	unordered_map<char,int> freq;
	for(char c:s){
		freq[c]++;
	}
	char most='\0';
	int max=0;
	for(auto& p: freq){
		if(p.second>max){
			most=p.first;
			max=p.second;
		}
	}
		cout<<most;
	return 0;
}
