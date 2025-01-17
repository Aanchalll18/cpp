#include<iostream>>
using namespace std;

void checkpl(int n){
    int rev=0;
    int temp=n;
    while(temp>0){
        int digit=temp%10;
        rev=rev*10 + digit;
        temp=temp/10;
    }
    if(rev==n){
        cout<< "pali";
    }else{
        cout<<"not";
    }
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    checkpl(n);
    return 0;
}