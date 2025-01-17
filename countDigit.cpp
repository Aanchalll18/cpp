#include <iostream>
using namespace std;

int main() {
    long long n;
    int cnt = 0;

    cout << "Enter the number: ";
    cin >> n;

    // Handle negative numbers
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        cnt++;
        n = n / 10;
    }

    cout << "Number of digits: " << cnt << endl;

    return 0;
}
