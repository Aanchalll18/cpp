#include<iostream>
#include<math.h>
using namespace std;

void gcd(int n,int m){
    for(int i=min(n,m);i>=1;i--){
        if(n%i==0 && m%i==0){
            cout<<i;
            break;
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter value of one number: ";
    cin>>n;
    cout<<"Enter the value of secound number: ";
    cin>>m;

    gcd(n,m);
    return 0;
}