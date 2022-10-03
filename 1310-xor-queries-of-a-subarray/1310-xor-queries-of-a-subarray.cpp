#define ll long long
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<ll> ps(arr.size());
	ps[0] = arr[0];
	for(ll i = 1;i<arr.size();i++){
		ps[i]=ps[i-1]^arr[i];
	}
	vector <int> res_xor;
	for (auto i: queries){
        ll first = i[0];
        ll second = i[1];
		if (first==0){
			res_xor.push_back(ps[second]);
		}
		else{
			res_xor.push_back(ps[first-1]^ps[second]);
		}
	}
 
	return res_xor;
        
    }
};