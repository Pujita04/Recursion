#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    //base condition
    if(n == 0)
        return true;
    if(n == 1) 
        return true;

    //recursive function
    if(arr[0] > arr[1]) {
        return false;
    }

    else {
        return isSorted(arr+1, n-1);
    }

}

int main() {

    int arr[5] = {1, 2, 4, 5, 7};

    int ans = isSorted(arr, 5);

    if(ans) 
        cout<< "The array is sorted" << endl;
    
    else 
        cout << "The array is not sorted " << endl;

}