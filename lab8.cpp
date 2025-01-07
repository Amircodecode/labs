#include <iostream>
using namespace std;

// int sumTen(int *arr, int size);

// int *sorted(int *arr, int size);

// int *score(int arr[], int size);

char * scoreFinder(int arr[], int size) {
	char *results = new char[size / 2];

	for (int i = 0; i < size; i+=2) {
		if (arr[i]<arr[i+1]) {
			results[i / 2] = 'O';
		}else {
			results[i / 2] = 'Y';
		}
	}
	return results;
}

int main() {
    // int n;
    // cout << "enter the size: ";
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++){
    //     cout << "enter " << i + 1 << " element: ";
    //     cin >> arr[i];
    // }
    // cout << "the sum is: " << sumTen(arr, n) << endl;
    
    // delete[] arr;

    // int arr[9] = {11,29,15,16,17,31,1,4,5};
    // int *sorted2 = sorted(arr, 9);
    // for (int i = 0; i < 9; i++){
    //     cout << sorted2[i] << endl; 
    // }
    // return 0;

    // int score[10] = {5, 10, 18, 30, 15, 40, 60, 14, 12, 10};
    // char *sorted = score(score, 10);
    // for (int i = 0; i < 10; i++) {
    //     cout << sorted[i] << endl;
    // }
    int score[10] = {5, 10, 18, 30, 15, 40, 60, 14, 12, 10};
	char* results = scoreFinder(score, 10);

	for (int i = 0; i < 5; i++) {
		cout << results[i] << " ";
	}
}

// int *score(int arr[], int size) {
//     char *charcters = new char[size / 2];
//     for (int i = 0; i < size; i+=2) {
//         if (arr[i]<arr[i+1]) {
// 			charcters[i / 2] = 'O';
// 		}else {
// 			charcters[i / 2] = 'Y';
// 		}
//     }
//     return charcters;
// }

// int sumTen(int *arr, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++){
//         if (arr[i] > 10) {
//             sum += arr[i];
//         }
//     }
//     return sum;
// }

// int *sorted(int *arr, int  size) {
//     int *sorted = new int[size];
//     for (int i = 0; i < size; i++) {
//         sorted[i] = arr[i];
//     }
//     int temp;
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size - 1; j++) {
//             if (sorted[j] > sorted[j+1]){
//                 temp = sorted[j];
//                 sorted[j] = sorted[j + 1];
//                 sorted[j + 1] = temp;
//             }
//         }
//     }
    
//     return sorted;
    
// }


