#include<bits/stdc++.h>
using namespace std;

vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
{
    map<int,int> mp;
    for(int i=1;i<=M;i++)
        mp[A2[i-1]] = i;
    
    /*
        customised comparator function to sort the vector elements of 
        A1 based on order present in vector A2.
    */
    auto cmp = [&](int a, int b){
        if(!mp.count(a) and !mp.count(b))
            return a < b;
        if(!mp.count(a) || !mp.count(b)){
            if(mp.count(a))
                return true;
            return false;
        }           
    return mp[a] < mp[b];
    };
    sort(A1.begin(), A1.end(), cmp);
        
    return A1;
} 