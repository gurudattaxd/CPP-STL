#include<iostream>
#include<vector>

using namespace std; 

int main(){
    // vector<int> vec = {1,2,3,4,5};
    // vector<int> vec(4,6); // will create a vector of size 4 with all the values as 6.

    vector<int> vec = {1,2,3,4,5};

   //  vector<int> vec2(vec1); // can initialize a new vector inside an exsisting vector.

    // vec.erase(vec.begin()+1, vec.begin()+3);  // erase changes the size of the vector not the capacity.

    //vec.insert(vec.begin() + 2, 100);

    // cout << vec.size() << endl; // number of elements in the vector.
    // cout << vec.capacity() << endl; // capacity gets doubled at each level.

    /*for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;*/


    /*cout << "value at index 2" << " " << vec[2] << "or" << vec.at(2) << endl; 
    cout << vec.front() << endl;
    cout << vec.back() << endl; */


    // ITERATORS 

    /*vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }*/

    vector<int> :: reverse_iterator it;
    for(it = vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << " ";

    }
    cout << endl;
    return 0;

}


// vectors :
/* size and capacity 
push_back and pop_back 
emplace_back 
at() or []
front and back */