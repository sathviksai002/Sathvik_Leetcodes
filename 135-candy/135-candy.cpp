#define ll long long
class Solution {
public:
    int candy(vector<int>& ratings) {
        ll n = ratings.size();
	vector <ll> left_arr(n,1); // check from array of left whether the element is greater than left neighbour
	vector <ll> right_arr(n,1); //check from array of right whether the element is greater than right neighbour
	for(ll i = 1; i < ratings.size();i++){
		if (ratings[i]>ratings[i-1]){
			left_arr[i]=left_arr[i-1]+1;
		}
	}
	for(ll i =ratings.size()-2 ; i >= 0;i--){
		if (ratings[i]>ratings[i+1]){
			right_arr[i]=right_arr[i+1]+1;
		}
	}
	// for(auto i:left_arr){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	// for(auto j: right_arr){
	// 	cout<<j<<" ";
	// }
	
	// Main constraint needed for the problem is to find the minimum of the candies that can be distributed among the children
	// for that we need to find the max of the candies from left to right and max of candies from right to left, so it can be minimum of intersection cases.
	ll sum=0;
	for(ll i = 0; i < n; i++){
		sum+=std::max(left_arr[i],right_arr[i]);
	}
	
        
        return sum;
	
        
    }
};