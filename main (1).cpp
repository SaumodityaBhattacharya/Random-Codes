#include<iostream>
using namespace std;
void toh(int n, char help, char dest, char src){
    if(n==0){
        return;
    }
    toh(n-1,dest,help,src);
    cout<<"Disc "<<n<<" is moved from "<<src<<" to "<<dest<<endl;
    toh(n-1,src,dest,help);
}
int  main(){
    int n;
    cin>>n;
    toh(n,'B','C','A');
    return 0;
}