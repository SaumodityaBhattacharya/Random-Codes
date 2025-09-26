
#include <iostream>
#include<cmath>
using namespace std;
int area(int a,int b, int c, int s){
    int H;
    H=sqrt(s*(s-a)*(s-b)*(s-c));
    return H;
}
int main() {
    int arr[3];
    int sum=0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    
    if(arr[0]+arr[1]>arr[2]){
        cout<<"A triangle is possible:"<<endl;
        cout<<area(arr[0],arr[1],arr[2],sum/2);
    }
    else if(arr[1]+arr[2]>arr[0]){
        cout<<"A triangle is possible:"<<endl;
        cout<<area(arr[0],arr[1],arr[2],sum/2);
    }
    else if(arr[0]+arr[2]>arr[1]){
        cout<<"A triangle is possible:"<<endl;
        cout<<area(arr[0],arr[1],arr[2],sum/2);
    }
    else{
        cout<<"Triangle with this measurements is not possible";
    }
    return 0;
}