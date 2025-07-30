#include <iostream>
#include <math.h> // -> includes all the math algo
#include <string.h> // -> libraries in strings 

using namespace std;

// PAIRS

void explainPair(){
    pair<int, int> p = {1,3};

    cout << p.first, " ", p.second;
}

// pair can store only one datatype, using nested property of pair can help us to store mulitiple datatypes.
/*
pair<int, pair<int,int>> p = {1, {3,4}};

cout << p.first << " ", p.second.second << " ", p.second.first;

// we can also use pair to store arrays

pair <int,int> arr[] = { {1,2}, {3,4}. {5,6}}  // indexing starts from 0,1,2...

cout << arr[1].second // will return 2nd element of 1st index ie 4.
*/
