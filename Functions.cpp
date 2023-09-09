//
// Created by Riley Connors on 9/5/23.
//

#include "Functions.h"

#include <iostream>
#include <fstream>

using namespace std;

//A function to check if a certain integer exists in the array if the number is present return the index where the number is FIRST present.
//If the number is not present return -1.
int checkArray(const int intVector[],size_t size, int value) {
    for (int i = 0; i < size; i++) {
        if (intVector[i] == value) {
            return i;
        }
    }
    return -1;
}

// A function that can modify the value of an integer when called with the index of the integer in the
// array and return the new value and old value back to the user.
oldNewer modifyArray(int intVector[], size_t size, int index, int value) {
    oldNewer temp{};
    temp.old = intVector[index];
    intVector[index] = value;
    temp.newer = intVector[index];
    return temp;
}

//A function that adds a new integer to the end of the array
void addIntToArray(int intVector[], size_t size, int value) {
    intVector[size] = value;
}

//A function which intakes an index of an array and replaces the value with either 0 or removes the integer altogether.
void removeInt(int intVector[], size_t size, int index) {
    intVector[index] = 0;
}







