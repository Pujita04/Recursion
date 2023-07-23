#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {

    int pivotElement = arr[s];
    int count = 0;

    //counting the numbers smaller than pivot element
    for(int i=s+1; i<=e; i++) {
        if(arr[i] < pivotElement) {
            count++;
        }
    }
    //placing the pivot element at its correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);  


    //sort the array before and after the pivotElement 
    int i = s;
    int j = e;
    
    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] < pivotElement) {
            i++;
        }

        while(arr[j] > pivotElement) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
        
    }

    return pivotIndex;
}


void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) {
        return;
    }

    //partition
    int p = partition(arr, s, e);

    //left part sort
    quickSort(arr, s, p-1);

    //right part sort
    quickSort(arr, p+1, e);
}

int main() {

    int arr[10] = {1, 32, 27, 82, 10, 9, 5, 5, 5, 5};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }

    return 0;

}