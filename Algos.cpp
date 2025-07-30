#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


/*bool comparator(pair<int,int> p1, pair<int,int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;

        if(p1.first < p2.first) return true;
        else return false;
    }

int main()
{
   /* int arr[5] = {3,5,1,8,2};

    sort(arr, arr+5, greater<int>());

    for(int val:arr){
        cout << val << " "; 
    }
    cout << endl; */


    /*vector<pair<int,int>> vec = {{1,2},{4,1},{5,1},{7,3}};

    sort(vec.begin(), vec.end(),comparator);
    for(auto p:vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}*/

int main(){

    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin(), vec.end());

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}