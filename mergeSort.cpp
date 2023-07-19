#include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {

    int mid = s + (e-s)/2;

    int len1 = mid - s +1;    //length of first array
    int len2 = e-mid;         //length of second array

    //creating two arrays dynamically
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainarrayIndex = s;
    for(int i= 0; i < len1; i++) {
        first[i] = arr[mainarrayIndex++];
    }

    mainarrayIndex = mid +1;
    for(int i= 0; i<len2; i++) {
        second[i] = arr[mainarrayIndex++];
    }

    //merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainarrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        
        if(first[index1] < second[index2]) {
            arr[mainarrayIndex++] = first[index1++];
        }

        else {
            arr[mainarrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1) {
        arr[mainarrayIndex++] = first[index1++];
    }

    while(index2 < len2) {
        arr[mainarrayIndex++] = second[index2++];
    }

}

void mergeSorted(int arr[], int s, int e, int n) {

    //base case
    if(s >= e) {
        return;
    }

    int mid = s + (e -s)/2;

    //left part sort
    mergeSorted(arr, s, mid, n);

    //right part sort
    mergeSorted(arr, mid+1, e, n);

    merge(arr, s, e);     
}


int main() {

    int arr[7] = {1, 32, 27, 82, 10, 9, 5};
    int n = 7;

    mergeSorted(arr, 0, n-1, n);

    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }

    return 0;

}