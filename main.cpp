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
    //inserts name and number
    yaBoi.insert(theBoi, daBoi);
    //hash function
    yaBoi.myBoi();

    //array stuff
    int myArray[100];
    //myArray[yaBoi.myBoi()];



    return 0;
}