#include <iostream>
#include <string>
using namespace std;

int main() {
    string encoded;
    getline(cin, encoded);
    string decoded = "";

    for (char c : encoded) {
        decoded += static_cast<char>(c - 7);  // Shift -7
    }

    cout << decoded << endl;
    return 0;
}

// all sorts of casting in https://www.geeksforgeeks.org/static_cast-in-cpp/ 