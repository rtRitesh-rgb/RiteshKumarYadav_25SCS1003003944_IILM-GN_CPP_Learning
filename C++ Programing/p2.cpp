/*Given a sorted array, remove duplicates in-place and return the number of unique elements.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "Number of unique elements: " << i + 1 << endl;
    cout << "Array after removing duplicates: ";

    for (int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}