#include <iostream>
using namespace std;
int partition(int arr[], int start, int end) {
    int pi = arr[end];
    int j = start;
    for(int i = start; i < end; i++) {
        if(arr[i] < pi) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    swap(arr[j], arr[end]);
    return j;
}
void quicksort(int arr[], int start, int end) {
    if(start >= end) {
        return ;
    }
    int pi = partition(arr, start, end);
    quicksort(arr, start, pi - 1);
    quicksort(arr, pi + 1, end);
}
void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[] = {1, 5, 4, 3, 4, 11, 45, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
