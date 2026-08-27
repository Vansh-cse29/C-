#include <iostream>
using namespace std;

int main() {
    int arr[5] = {8, 6, 7, 1, 4};
    int n = 5; 


    for (int i = 0; i < n - 1; i++) {
        int index = i; // Declare index variable
        for (int j = i + 1; j < n; j++) { // Declare j variable
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}