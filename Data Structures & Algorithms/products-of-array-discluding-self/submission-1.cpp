class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int end = nums.size();
        vector<int> output;

        for(int i=0;i<end;i++){
            int num=1;
            for(int j=0;j<end;j++){
                if(i==j){
                    continue;
                }
                num=num*nums[j];
            }
            output.push_back(num);
        }
        return output;
    }
};
