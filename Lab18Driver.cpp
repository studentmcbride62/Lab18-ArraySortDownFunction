#include <iostream>
using namespace std;

// sortDn function prototype statement goes here


int main() {
    int setA[] = {10, 40, 20, 15, 35, 30};
    int setB[] = {123, 456, 231, 876, 649, 39, 90, 1278, 178};
    int setC[] = {34, 42, 12, 33, 52, 11, 10, 128};
    // initialize size of each array here
    int setASize;
    int setBSize;
    int setCSize;

    cout << "Set A original order: ";
    for (int i=0; i<setASize; i++) cout << setA[i] << " " ;
    // call to sortDn function for setA goes here
    sortDn(setA,setASize);
    cout << "\nDescending order: ";
    for (int i=0; i<setASize; i++) cout << setA[i] << " " ;

    cout << "\n\nSet B original order: ";
    for (int i=0; i<setBSize; i++) cout << setB[i] << " " ;
    // call to sortDn function for setB goes here
    sortDn(setB,setBSize);
    cout << "\nDescending order: ";
    for (int i=0; i<setBSize; i++) cout << setB[i] << " " ;

    cout << "\n\nSet C original order: ";
    for (int i=0; i<setCSize; i++) cout << setC[i] << " " ;
    // call to sortDn function for setC goes here
    sortDn(setC,setCSize);
    cout << "\nDescending order: ";
    for (int i=0; i<setCSize; i++) cout << setC[i] << " " ;

    return 0;
}

