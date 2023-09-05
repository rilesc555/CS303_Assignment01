//
// Created by Riley Connors on 9/5/23.
//

#include "Functions.h"

#include <iostream>
#include <fstream>

using namespace std;

//A function to check if a value is in a vector.
//Returns the index of the value if it is in the vector, otherwise returns -1.
int checkArray(vector<int>& vectorToCheck) {
    int tempInt;
    cout << "Please enter a value to check for: ";
    cin >> tempInt;
    for (int i = 0; i < vectorToCheck.size(); i++) {
        if (vectorToCheck[i] == tempInt) {
            return i;
        }
    }
    return -1;
}

//A function to modify a value in a vector.
oldNewer modifyArray(vector<int>& vectorToModify) {
    oldNewer tempStruct{};
    int tempIndex;
    cout << "Please enter index of value to modify: ";
    cin >> tempIndex;
    int tempInt;
    cout << "Please enter new value: ";
    cin >> tempInt;
    tempStruct.old = vectorToModify[tempIndex];
    vectorToModify[tempIndex] = tempInt;
    tempStruct.newer = vectorToModify[tempIndex];
    return tempStruct;
}

void addIntToArray(vector<int>& vectorToAddTo) {
    int tempInt;
    cout << "Please enter a value to add to the array: ";
    cin >> tempInt;
    vectorToAddTo.push_back(tempInt);
}

void removeInt(vector<int>& vectorToRemoveFrom) {
    int tempIndex;
    cout << "Please enter index of value to remove from the array: ";
    cin >> tempIndex;
    vectorToRemoveFrom.erase(vectorToRemoveFrom.begin() + tempIndex);
}


