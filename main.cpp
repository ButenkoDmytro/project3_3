#include <iostream>
using namespace std;

int main() {
    int n, q;
    cout << "Enter number: ";
    cin >> n;
    q = n;
    cout << "Numbers: " << n << ": ";
    int num_digits = 0;
    int sum_digits = 0;
    while (n != 0) {
        int digit = n % 10;
        cout << digit << " ";
        num_digits++;
        sum_digits += digit;
        n /= 10;
    }
    cout << endl;
    cout << "Num digits: " << num_digits << endl;
    cout << "Sum digits: " << sum_digits << endl;
    int reversed = 0;
    q = abs(q);
    while (q != 0) {
        reversed = reversed * 10 + q % 10;
        q /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}