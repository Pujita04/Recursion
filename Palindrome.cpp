#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string &str, int i, int j) {

    //base case 
    if(i > j) {
        return true;
    }

    if(str[i] != str[j]) {
        return false;
    }

    else {
        return checkPalindrome(str, i+1, j-1);
    }
}


int main() {
    string name = "bookkoob";

    bool ans = checkPalindrome(name, 0, name.length()-1);


    if(ans) {
        cout << "Palindrome string" << endl;
    }

    else { 
        cout << "Not a Palindrome string" << endl;
    }


    return 0;
    
}