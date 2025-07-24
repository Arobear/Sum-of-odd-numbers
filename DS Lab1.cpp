#include <iostream>
using namespace std;

int main() {

    int arr[5] = {11, 22, 33, 44, 55};
    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }


    int oddSum = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            oddSum += arr[i];
        }
    }


    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
