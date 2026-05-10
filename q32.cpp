#include <iostream>
using namespace std;

int main() {
    int a[5];
    int largest, secondLargest;

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    
    largest = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    
    secondLargest = -99999;   // very small value
    for (int i = 0; i < 5; i++) {
        if (a[i] > secondLargest && a[i] < largest) {
            secondLargest = a[i];
        }
    }

    cout << "Largest number = " << largest << endl;
    cout << "Second largest number = " << secondLargest;

    return 0;
}
