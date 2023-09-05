#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
    cout << "Assignment 1" << endl;

    vector<int> intVector;

    ifstream input;
    input.open("input.txt");
    while (!input.is_open()) {
        cout << "Unable to open \"input.txt\"\n";
        cout << "Please enter a new file name: ";
        string tempString;
        getline(cin, tempString);
        input.open(tempString);
    }

    while (!input.eof()) {
        int tempInt;
        input >> tempInt;
        intVector.push_back(tempInt);
    }
    input.close();

    return 0;
}
