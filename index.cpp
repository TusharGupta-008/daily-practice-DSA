// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {4, 9, 2, 7, 5};
//     int n = 5;

//     int maxVal = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > maxVal)
//             maxVal = arr[i];
//     }

//     cout << "Largest = " << maxVal;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;

    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-1-i]);
    }

    for(int x : arr)
        cout << x << " ";
}

