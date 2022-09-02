class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> hashmap;
        for(int i = 0; i<nums.size();i++){
            if (hashmap[target-nums[i]] != 0){
                result.push_back(hashmap[target-nums[i]]-1);
                result.push_back(i);
                return result;
            }
            else{
                hashmap[nums[i]] = i+1;
            }
            
        }
        return {};
    }
};
