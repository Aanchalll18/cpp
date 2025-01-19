#include<iostream>
using namespace std;
void gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;
}

int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;

    gcd(a,b);
    return 0;
}

// tc=o(log phi(min(a,b)))
// phi because the value of a,b are continously flucting!!