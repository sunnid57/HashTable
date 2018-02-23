//
// Created by 51474 on 2/8/18.
//

#include "Hash.h"
Hash(){
    tabLength = 100;
}

int Hash::myBoi(){
    int hash = 0;
    //hashes key
    for (int i = 0; i < key; ++i) {
        hash += key[i];
    }
    //turns hash into a number
    input = hash % tabLength;
    return input;
}

void Hash::insert(string name, int number){
    number += (int)name;
    key += number;
    myBoi(key);
    int myArray[tabLength];
    myArray[input];
}
