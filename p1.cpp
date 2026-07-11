/*Given an array of integers, find the second largest distinct element.
If there is no second largest distinct element, print -1*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }
    }

    if (secondLargest == INT_MIN)
        cout << -1;
    else
        cout << secondLargest;

    return 0;
}