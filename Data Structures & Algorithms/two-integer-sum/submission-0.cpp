class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        
        int i = 0;
        for(auto num : nums){
            
            if(m.find(target - num) != m.end()){
                  return {m[target - num],i};
            }

            m[num] = i++;

        }

        return {0,0};
    }
};
