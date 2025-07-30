#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,int>> vec = {{1,2}, {2,3}};

    for(auto p :vec){
        cout << p.first << " " << p.second << " " << endl;
    }

    //pair<int, pair<int,int>> p = {1,{2,3}};
    //cout << p.second.second << endl;
    cout << endl;
    return 0;
}

