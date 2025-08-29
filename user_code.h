#ifndef USER_CODE_H
#define USER_CODE_H

// Feel free to include more library functions
#include <vector>
#include <string>
#include <utility>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;


/* 
Complete this function
*/

vector<vector<int>> question_one(const vector<vector<int>>& parcels) {
    // TODO: Implement function
    unordered_map<int,int> id_to_weight_map;
    // O(n) implementation using hashmap
    for(auto parcel: parcels) {
        int parcel_id=parcel[0];
        int parcel_weight=parcel[1];
        if(id_to_weight_map.find(parcel_id) != id_to_weight_map.end()) {
            id_to_weight_map[parcel_id] = min(id_to_weight_map[parcel_id], parcel_weight);
        }
        else {
            id_to_weight_map[parcel_id]=parcel_weight;
        }
    }
    vector<vector<int>> deduplicated_parcels;
    for(auto id_to_weight_element: id_to_weight_map) {
        int parcel_id=id_to_weight_element.first;
        int parcel_weight=id_to_weight_element.second;
        deduplicated_parcels.push_back({parcel_id, parcel_weight});
    }
    return deduplicated_parcels;
}



/* 
Complete this function
*/

vector<int> question_two(
    const vector<int>& preorder,
    const vector<int>& inorder,
    const vector<vector<int>>& leafParcels,
    const vector<vector<int>>& query
) {
    // TODO: Implement function
    vector<int> ans;
    return ans;
}




/* 
Complete this function
*/
long long question_three(
    const vector<vector<int>>& edges,
    const vector<int>& metro_cities
) {
    // TODO: Implement function
    return 0;
}




#endif // USER_CODE_H