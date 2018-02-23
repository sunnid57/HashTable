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
        hash += key;
    }
    //turns hash into a number
    input = hash % tabLength;
    return input;
}

void Hash::insert(std::string name, int number){
    number += (int)name;
    key += number;
    //call myBoi
    myBoi(key);
    //insert into array
    int myArray[tabLength];
    myArray[input];
}
