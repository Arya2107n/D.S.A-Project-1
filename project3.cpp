#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 32, 45, 67, 67, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != largest) {
            if(secondLargest == largest || arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second Largest: " << secondLargest;

    return 0;
}