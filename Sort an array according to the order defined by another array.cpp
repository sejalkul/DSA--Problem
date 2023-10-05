#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr1[] = { 20, 1, 20, 5, 7, 1, 9, 39, 6, 18, 18 };
    int arr2[] = { 20, 1, 18, 39 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr1,arr1+n);
 vector<int> v;
   map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr1[i]]++;
    }
    for(int i=0;i<m;i++){
        while(mp[arr2[i]]!=0){
            v.push_back(arr2[i]);
            mp[arr2[i]]-=1;
        }
        mp.erase(arr2[i]);
    }
    for(int i=0;i<n;i++){
        while(mp[arr1[i]]!=0){
            v.push_back(arr1[i]);
            mp[arr1[i]]-=1;
        }
        mp.erase(arr1[i]);
    }
    for(auto a:v){
        cout<<a<<" ";
    }
    
    

    return 0;
}
