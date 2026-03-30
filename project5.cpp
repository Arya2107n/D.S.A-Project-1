#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, -5, 0, 23, -11, 7, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int positive = 0, negative = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positive++;
        }
        else if(arr[i] < 0) {
            negative++;
        }
    }

    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative;

    return 0;
}