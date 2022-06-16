class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int ans = false;
        
        sort(nums.begin(),nums.end());
        
        int start =0,end = nums.size()-1;
        
        while(start<=end){
            int mid = start +((end-start)/2);
            
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};