#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Palindrome numbers from 1 to " << n << " are:\n";

    for (int num = 1; num <= n; num++) { 
        int temp = num;
        int reverse = 0;

       
        while (temp > 0) {
            int  digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        if (reverse == num) {
            cout << num << " ";
        }
    }

    return 0;
}
