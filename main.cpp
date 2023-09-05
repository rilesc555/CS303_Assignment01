#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
#include "Functions.h"

using namespace std;

int main() {
    cout << "Assignment 1" << endl;

    vector<int> intVector;
    char userAnswer;

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
    cout << "File read successfully.\n";

    while (userAnswer != 'Q' && userAnswer != 'q') {
        cout << endl << "What would you like to do?\n";
        cout << "C - Check if a value is in the array.\n";
        cout << "M - Modify a value in the array.\n";
        cout << "A - Add a value to the array.\n";
        cout << "R - Remove a value from the array.\n";
        cout << "Q - Exit.\n";
        cin >> userAnswer;

        if (userAnswer == 'C' || userAnswer == 'c') {
            int tempInt = checkArray(intVector);
            if (tempInt == -1) {
                cout << "Value not found.\n";
            }
            else {
                cout << "Value found at index " << tempInt << endl;
            }
        }
        else if (userAnswer == 'M' || userAnswer == 'm') {
            oldNewer tempStruct = modifyArray(intVector);
            cout << "Value at index " << tempStruct.old << " changed to " << tempStruct.newer << endl;
        }
        else if (userAnswer == 'A' || userAnswer == 'a') {
            addIntToArray(intVector);
            cout << "Value added to array.\n";
        }
        else if (userAnswer == 'R' || userAnswer == 'r') {
            removeInt(intVector);
            cout << "Value removed from array.\n";
        }
        else if (userAnswer == 'Q' || userAnswer == 'q') {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid input.\n";
        }

    }




    return 0;
}
