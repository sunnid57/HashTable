//
// Created by 51474 on 2/8/18.
//

#ifndef HASHTABLE_HASH_H
#define HASHTABLE_HASH_H
#include <iostream>
#include <string>

class Hashes {
public:
    Hashes();
    //hashes name and number
    int myBoi();
    void insert(std::string name, int number);
private:
    int tabLength;
    int key;
    int input;
};


#endif //HASHTABLE_HASH_H
