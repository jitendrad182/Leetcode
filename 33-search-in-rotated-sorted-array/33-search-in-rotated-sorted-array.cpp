class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        
        int size = nums.size();
        int start =0,end = size-1;
        
        while(start<end){
            int mid = start +((end-start)/2);
            if(nums[mid]>=nums[0]){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        
        end = size -1;

        if(nums[start]<=target && target<=nums[end]){
            while(start<=end){
                int mid = start +((end-start)/2);
                if(nums[mid]==target){
                    ans = mid;
                    break;
                }
                else if(nums[mid]>target){
                    end = mid-1;
                }
                else{
                    start =  mid+1;
                }
            }
        }
        else{
            end = start-1;
            start =0;
            while(start<=end){
                int mid = start +((end-start)/2);
                if(nums[mid]==target){
                    ans = mid;
                    break;
                }
                else if(nums[mid]>target){
                    end = mid-1;
                }
                else{
                    start =  mid+1;
                }
            }
        }
        
        return ans;
    }
};