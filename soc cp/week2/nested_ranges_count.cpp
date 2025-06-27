#include <algorithm>
#include <iostream>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using indexed_multiset = tree<pair<T, int>, null_type, less<pair<T, int>>, rb_tree_tag, tree_order_statistics_node_update>;

 int main(){
    int n;
    cin >> n;
    vector<vector<int>> ranges1;
    vector<vector<int>> ranges2;
    vector<int> has(n);
    vector<int> hai(n);
    for(int i =0 ;i<n;i++){
        int x,y;
        cin >> x >> y;
        ranges1.push_back({y,-x,i});
        ranges2.push_back({x , -y , i});
    }
    vector<int>counts(n);
    sort(ranges1.begin(), ranges1.end());
    sort(ranges2.begin(), ranges2.end());
    indexed_multiset<int> s1;
    indexed_multiset<int> s2;
    int count = 0;
    for(auto range1 : ranges1){
        has[range1[2]] = s1.order_of_key({range1[1], count+1});
        s1.insert({range1[1], count++});
    }
    count = 0;
    for(auto range2 : ranges2){
        hai[range2[2]] = s2.order_of_key({range2[1], count+1});
        s2.insert({range2[1], count++});
    }
    for(int i=0;i<n;i++){
        cout << has[i]<<" ";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout << hai[i]<<" ";
    }
    cout << endl;
 }
 // We have used indexed sets in this problem as they can give you the position of our number in already placed numbers in log(n) time.
 // It ks observed that time complexity of this code is nlog(n).