class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;

        for(int num : nums){
            s.insert(num);
        }
         
        int cnt = 0;int pre = 0;int currStreak = 0;
        for(auto num : s){
            if(cnt == 0){
                pre = num;
                cnt = 1;
                currStreak = 1;
            }
            else{
                if(pre == num-1){
                    currStreak++;
                    cnt = max(cnt,currStreak);
                }
                else{
                    currStreak = 1;
                }
                pre = num;
            }
        }
        return cnt;
    }
};
