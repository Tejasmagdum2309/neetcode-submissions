class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n;

        for(int &num : nums){
            if(n.find(num) != n.end()){
                return 1;
            }
            n.insert(num);
        }

        return false;


    }
};