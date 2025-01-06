class Solution {
  public:
    bool twoSum(vector<int>& nums, int target) {
        // code here
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(map.find(diff) != map.end()){
            return true;
            }
            map[nums[i]]=i;
        }
        return false;
    }
        
};
