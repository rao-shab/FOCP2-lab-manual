#include <iostream>
using namespace std;

int main() {
    int a[5];
    int evenSum = 0, oddSum = 0;

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            evenSum += a[i];
        else
            oddSum += a[i];
    }

    cout << "Sum of Even Numbers = " << evenSum << endl;
    cout << "Sum of Odd Numbers = " << oddSum << endl;

    return 0;
}
