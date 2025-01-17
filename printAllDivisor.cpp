#include<iostream>
using namespace std;

void printDivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i << "|";
        }
    }
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    printDivisor(n);
    return 0;
}