//
// Created by Riley Connors on 9/5/23.
//

#include "Functions.h"

#include <iostream>
#include <fstream>

using namespace std;

struct oldNewer{
    int old;
    int newer;
};

int checkArray(vector<int>& vectorToCheck, int toCheck){
    for (int i = 0; i < vectorToCheck.size(); i++){
        if (vectorToCheck[i] == toCheck){
            return i;
        }
    }
    return -1;
}

oldNewer modifyArray(vector<int>& vectorToModify, int toModify, int newValue){
    oldNewer toReturn{};
    toReturn.old = vectorToModify[toModify];
    vectorToModify[toModify] = newValue;
    toReturn.newer = vectorToModify[toModify];
    return toReturn;
}

void addIntToArray(vector<int>& vectorToAddTo, int toAdd) {
    vectorToAddTo.push_back(toAdd);
}

void removeInt(vector<int>& vectorToRemoveFrom, int toRemove) {
    vectorToRemoveFrom.erase(vectorToRemoveFrom.begin() + toRemove);
}
