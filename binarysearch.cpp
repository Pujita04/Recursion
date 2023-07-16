#include<iostream>
#include<vector>

using namespace std;

bool binarySearch(int arr[], int s, int e, int k) {

    //base case
    if(s>e) 
        return false;
    
    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k) 
        return true;
    

    if(k > arr[mid]) {
        return binarySearch(arr, mid+1, e, k);
    }

    else {
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[6] = {1,4,5,7,8,9};

    int key = 2;

    int ans = binarySearch(arr, 0, 5, key);

    if(ans) 
        cout<< "The key is present in array " << endl;
    
    else 
        cout << "The key is absent " << endl;
}