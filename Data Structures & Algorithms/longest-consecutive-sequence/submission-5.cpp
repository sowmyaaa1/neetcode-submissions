class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLen=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int start=nums[i];
            int len=1;
            for(int j=i+1;j<nums.size();j++){
                if((nums[j]-start) == 1){
                    len++;
                    start=nums[j];
                }
            }
            maxLen=max(len,maxLen);
        }
        return maxLen;
    }
};
