#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;

    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphones"] = 20;

    for(auto p: m){
        cout << p.first << " " <<  p.second << endl;
    }
    return 0;
}