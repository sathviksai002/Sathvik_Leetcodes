class Solution {
public:
    int mySqrt(int x){
	long long l=0,r=(x/2)+1;
	long long mid;
	long long ans;
	while (l<=r){
		mid = (l+r)/2;
		
		if (mid * mid == x){
			ans=mid;
			break;
		}
		if (mid * mid < x){
			l = mid+1;
			ans=mid;
		}
		else{
			r=mid-1;
		}
	}
	
	return ans;
	
    }
};