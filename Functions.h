//
// Created by Riley Connors on 9/5/23.
//

#ifndef CS303_ASSIGNMENT01_FUNCTIONS_H
#define CS303_ASSIGNMENT01_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct oldNewer;

//A function to check if a value is in a vector.
//Returns the index of the value if it is in the vector, otherwise returns -1.
int checkArray(vector<int>& vectorToCheck);

//A function to modify a value in a vector
oldNewer modifyArray(vector<int>& vectorToModify);

void addIntToArray(vector<int>& vectorToAddTo);

void removeInt(vector<int>& vectorToRemoveFrom);



#endif //CS303_ASSIGNMENT01_FUNCTIONS_H
