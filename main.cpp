#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
#include <stdexcept>
#include "Functions.h"

using namespace std;

int main() {
    cout << "Assignment 1" << endl;

    //create an array of 150 integers. This leaves an overhead of 50 integers to add to the array after the file is read.
    //variable size keeps track of the size of the array.
    int intVector[150];
    size_t size = 0;
    char userAnswer = 'x';

    //read the file "input.txt" and check for validity
    ifstream input;
    input.open("input.txt");
    while (!input.is_open()) {
        cout << "Unable to open \"input.txt\"\n";
        cout << "Please enter a new file name: ";
        string tempString;
        getline(cin, tempString);
        input.open(tempString);
    }

    // add the integers to the array
    while (!input.eof()) {
        int tempInt;
        input >> tempInt;
        addIntToArray(intVector, size, tempInt);
        size++;
    }

    input.close();
    cout << "File read successfully.\n";

   //main loop
   //user can check if a value is in the array, modify a value in the array, add a value to the array, remove a value from the array, or exit.
   //the loop will continue until the user enters 'Q' or 'q'
   //the loop will also continue if the user enters an invalid input or index
    while (userAnswer != 'Q' && userAnswer != 'q') {
        cout << endl << "What would you like to do?\n";
        cout << "C - Check if a value is in the array.\n";
        cout << "M - Modify a value in the array.\n";
        cout << "A - Add a value to the array.\n";
        cout << "R - Remove a value from the array.\n";
        cout << "Q - Exit.\n";
        cin >> userAnswer;

        if (userAnswer == 'C' || userAnswer == 'c') {
            cout << "Enter a value to check for: ";
            int tempInt;
            cin >> tempInt;
            int tempInt2 = checkArray(intVector, size, tempInt);
            if (tempInt2 == -1) {
                cout << "The value " << tempInt << " is not in the array.\n";
            }
            else {
                cout << "The value " << tempInt << " is in the array at index " << tempInt2 << ".\n";
            }

        }
        else if (userAnswer == 'M' || userAnswer == 'm') {
            cout << "Enter an index to modify: ";
            int tempInt, tempInt2;
            try {
                cin >> tempInt;
                if (!cin) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw runtime_error("Invalid input.");
                }
                cout << "Enter a value to modify the index with: ";
                cin >> tempInt2;
                if (!cin) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw runtime_error("Invalid input.");
                }
            }
            catch (...) {
                cout << "Invalid input.\n";
                continue;
            }

            oldNewer tempOldNewer = modifyArray(intVector, size, tempInt, tempInt2);
            cout << "The value at index " << tempInt << " was changed from " << tempOldNewer.old << " to " << tempOldNewer.newer << ".\n";
        }
        else if (userAnswer == 'A' || userAnswer == 'a') {
            cout << "Enter a value to add to the array: ";
            int tempInt;
            cin >> tempInt;
            try{
                if (!cin) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw runtime_error("Invalid input.");
                }
            }
            catch (...) {
                cout << "Invalid input.\n";
                continue;
            }
            addIntToArray(intVector, size, tempInt);
            size++;
            cout << "The value " << tempInt << " was added to the array.\n";
        }
        else if (userAnswer == 'R' || userAnswer == 'r') {
            cout << "Enter an index to remove from the array: ";
            int tempInt;
            cin >> tempInt;
            removeInt(intVector, size, tempInt);
            size--;
            cout << "The value at index " << tempInt << " was removed from the array.\n";
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
