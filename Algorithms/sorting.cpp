#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {

    for (int i = 0;i < size - 1; ++i) {
        int min = i;

        for (int j = i + 1; j < size - 1; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

void insertionSort(int arr[],int size) {
    for (int i = 1;i < size - 1; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[],int size) {
    for (int i = 0;i < size - 1; ++i) {
        cout << arr[i] << ", ";
    }
    cout << " \n\n";
}

int main() {
    int arr[] = {1,11,3,6,14,13,15,78,45,25,32,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,size);
    // selectionSort(arr,size);
    insertionSort(arr,size);
    printArray(arr,size);
    
    return 0;
}