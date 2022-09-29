class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int j =0;
    for(int i = nums1.size()-n; i<nums1.size(); i++){
         (nums1[i] = nums2[j]);
        j++;
    }
     
    int gap = ceil(float((m+n)/2));
    
    while(gap > 0){
        int i =0, j = gap;
        
        while(j < (n+m)){
            
            if(nums1[i] > nums1[j])
                swap(nums1[i], nums1[j]);
            i++,j++;
        }
        if(gap == 1)
            gap = 0;
        else
            gap = ceil((float)gap/2);
    }
}
};