#include<iostream>
using namespace std;

void prime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) cnt++;
    }
    if(cnt==2) cout<<"Prime!!";
    else cout<<"Not Prime";
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    prime(n);
    return 0;
}