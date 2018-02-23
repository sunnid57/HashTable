#include <iostream>
#include "Hashes.h"
#include <fstream>

int main() {
    //Read from the file
    std::ifstream inFile;
    inFile.open("NamesAndNumbers.csv");
    //getline()

    //test name and number
    std::string theBoi = "test";
    int maBoi = 1234;
    Hashes yaBoi;

    //hash function
    for (int i = 0; i < 100; ++i) {
        //inserts name and number
        yaBoi.insert(theBoi, maBoi);
    }

    return 0;
}