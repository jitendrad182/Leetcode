class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans =-1;
        
        int sum =0,size = nums.size();
        for(int i =0;i<size;i++){
            sum = sum+nums[i];
        }
        
        int i =0,j=size-1;
        while(i<=j){
            
            int left =0,right =0;
            for(int k =i-1;k>=0;k--){
                left = left+nums[k];
            }
            right = sum-left -nums[i];
            
            if(left==right){
                ans = i;
                break;
            }
            i++;
        }
        return ans;
    }
};