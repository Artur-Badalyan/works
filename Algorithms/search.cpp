#include <iostream>
using namespace std;

int linerSearch(int arr[],int num,int size){
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            return i;
        }
    }

    return -1;
}

int binarySearch(int arr[],int num,int start,int end) {
    if (start > end) {
        return -1;
    }

    int mid = ((start + end) / 2);

    if (num == arr[mid]) {
        return mid;
    }

    if (num > arr[mid]) {
        return binarySearch(arr,num,mid + 1,end);
    }
    return binarySearch(arr,num,start,mid - 1);
}

int main() {
    int arr[] = {1,5,8,11,14,25,28,45,78,87,89,95};
    int size = sizeof(arr)/sizeof(arr[0]);

    int res1 = binarySearch(arr,87,0,size - 1);
    int res2 = linerSearch(arr,25, size);


    (res1 == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << res1;

    cout << "\n\n";

    (res2 == -1)
    ? cout << "Element is not present in array"
    : cout << "Element is present at index " << res2;

    cout << "\n\n";

    return 0;
}