#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int k) {

    //base case
    if(n == 0) {
        return false;
    }

    //element found
    if(arr[0] == k) {
        return true;
    }

    else {
        return linearSearch(arr+1, n-1, k);
    }
}


int main() {

    int arr[5] = {2, 3, 1, 8, 5};

    int key =  0;

    int ans = linearSearch(arr, 5, key);

    if(ans) 
        cout<< "The key is present in array " << endl;
    
    else 
        cout << "The key is absent " << endl;
}