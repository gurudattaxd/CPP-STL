//Lists are internally implemented as doubly linked lists. (push from back and push from front also pop)

#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
    list<int> l = {1,2,3};
   /* l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.emplace_back(4);
    l.emplace_front(5);*/
    for (int val: l){
        cout << val << " ";
    }

    deque<int> d = {1,2,3,4};

for(int val : d){
    cout << val << " ";
}

    cout << endl;
    return 0;
}


// DEQUEU -> DOUBLE ENDED QUEUE, VERY SIMILAR TO LISTS.

