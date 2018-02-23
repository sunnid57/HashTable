#include <iostream>
#include "Hash.h"
#include <fstream>
#include <array>
using namespace std;

int main() {
    //Read from the file
    ifstream inFile;
    inFile.open("NamesAndNumbers.csv");
    //getline()

    //test name and number
    string theBoi = "test";
    int daBoi = 1234;

    Hash yaBoi;

    //hash function
    for (int i = 0; i < 100; ++i) {
        //inserts name and number
        yaBoi.insert(theBoi, daBoi);
    }

    return 0;
}