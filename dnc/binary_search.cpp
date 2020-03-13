#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

const int MAXN = 10;


bool find(vector<int> v, int key){

    int first = 0 , last = v.size()-1;

    while(first <= last){

        int mid = first + (last-first)/2;
        /*
        int mid = first + last >> 1;
        int mid = (first + last) /2     => BE CAREFUL : if first + last > MAX_INT
        */

        if(v[mid] == key)
            return true ;
        else if(v[mid] > key)
            last = mid - 1;
        else
            first = mid + 1;
    }

    return false ;
}

int main(){

    vector<int> v = {10,20,30,30,20,10,10,20};

    sort(v.begin(),v.end()); //10 10 10 20 20 20 30 30

    cout << find(v,10)  << endl;
    cout << find(v,99) << endl;



}
