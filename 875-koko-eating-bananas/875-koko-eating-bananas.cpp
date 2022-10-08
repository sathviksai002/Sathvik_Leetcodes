class Solution {
public:
    
    bool eatable(vector<int> piles,int mid,int h){
        int cnt=0;
        //int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            int temp=piles[i]/mid;
            cnt=cnt+temp+1;
            if(piles[i]%mid==0) cnt--;
        }
        
        return cnt<=h;
        
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=INT_MAX;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(eatable(piles,mid,h)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        
        return ans;
    }
};