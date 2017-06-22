//@https://leetcode.com/problems/two-sum/#/description
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int> indices;
        
        for(int i = 0 ; i < nums.size() ; i++){
            
            for(int j = 0 ; j < nums.size() ; j++){
                
                
                if (i==j){
                    if(nums[j] == target)
                        indices.push_back(j);
                }
                
                else{
                    if((nums[j] + nums[i]) == target){
                        indices.clear();
                        indices.push_back(i);
                        indices.push_back(j);
                     
                        return indices;
                    }
                }
            }
        }
        return indices;
    }
};
