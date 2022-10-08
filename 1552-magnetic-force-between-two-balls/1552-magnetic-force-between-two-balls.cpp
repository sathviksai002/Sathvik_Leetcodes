#define ll long long
class Solution {
public:
    bool ispossible(vector <int>& position, ll m, ll mid){
	ll n = position.size();
	ll first = position[0];
	ll counter=1;
	for(ll i =1; i< n; i++){
		if (position[i]-first >= mid){
			counter++;
			first = position[i];
		}
 
		if(counter>=m){
			return true;
		}
	}
	return false;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        ll low = 1;
        ll high = position[position.size()-1] - position[0];
        ll res=0;
        while(low <= high){
		ll mid = (low+high)/2;
		if (ispossible(position,m,mid)){
			res = mid;
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return res;
        
    }
};