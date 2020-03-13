#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

const int MAXN = 10;

int upper_bound(vector<int> v, int key){
    int first = 0, last = v.size() - 1;

    while(first <= last){
        int mid = first + last >> 1;

        if(v[mid] <= key)
            first = mid + 1;
        else
            last = mid - 1;
    }

    return first ;
}

int main(){

    vector<int> v = {10,20,30,30,20,10,10,20};

    sort(v.begin(),v.end()); //10 10 10 20 20 20 30 30

    cout << upper_bound(v,20) << endl;

}
