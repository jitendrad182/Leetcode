class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size(),m = nums2.size(),i =0,j =0;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(i<n && j<m){
            if(nums1[i]<nums2[j] &&i<n){  
                    i++;     
            }
            else if(nums1[i]==nums2[j]){
                if(i ==0){
                    ans.push_back(nums1[i]);
                }
                else if(nums1[i-1]!=nums1[i]){
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};