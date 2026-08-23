#include <iostream>
#include <climits> // Required for INT_MIN
#include <algorithm> // Required for max()

using namespace std;

int main() {
    int arr[7] = {0, 1, 2, 3, 4, 5, 6};
    
    // Step 1: Find the maximum element
    int ans = INT_MIN;
    for (int i = 0; i < 7; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }

    // Step 2: Find the second maximum element
    int second_ans = INT_MIN;
    for (int i = 0; i < 7; i++) {
        if (arr[i] != ans) {
            second_ans = max(second_ans, arr[i]);
        }
    }

    cout << "Second Maximum: " << second_ans << endl;
    return 0;
}