#include<iostream>
using namespace std;

void armg(int n){
    int temp=n;
    int rev=0;
    while(temp>0){
        int digit=temp%10;
        rev=rev+digit*digit*digit;
        temp=temp/10;
    }
    if(rev==n){
        cout<<"armg";
    }
    else{
        cout<<"not armg";
    }
}
int main(){
    int n;
    cout<<"enter a nmber: ";
    cin>>n;
    armg(n);
    return 0;
}