#include <iostream>
#include <vector>
using namespace std;

int prime(int n){
    int c=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            c++;
            if(c==2) return i;
        }
    }
    return 0;
}

void primefactor(int n,vector<int> v)
{
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if(n%i==0){
            if(prime(i)){
                v.push_back(i);
            }
        }
    }
}
int main()
{
    vector<int>v;
    int n;
    cout << "Enter the number: ";
    cin >> n;

    primefactor(n,v);
    return 0;
}