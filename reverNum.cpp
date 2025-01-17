#include<iostream>
using namespace std;

int revNum(int n){
    int rev=0;

    while(n>0){
        int digit=n%10;
        n=n/10;
         rev=rev*10+digit;
    }
    return rev;
}

int main(){
    int n;
    cout<<"enter digit :";
    cin>>n;

     int revDigit=revNum(n);
     cout<<revDigit;
     return 0;
    
}