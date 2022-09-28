class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
        int vote=0;  
        int counter=0;
        
        for(int i = 0; i < n; i++){
            
            
            if (vote==0){
                counter = nums[i]; //assinging any new number to it.
            }
            if (counter==nums[i]){ //checking if that leader is the next number or present number
                vote++;   // if its the same leader increase the counter or vote counter for him
            }
            else{
                vote--; // if its not the same leader the decrease the vote counter for that leader
            }
            
        }
            return counter; 
            
    }
};