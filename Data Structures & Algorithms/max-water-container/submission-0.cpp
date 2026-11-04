class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while(i < j){
            int l = heights[i];
            int r = heights[j];

            int smBar = min(l,r);

            ans = max(ans,(smBar * (j-i)));

            if(l > r){
                 j--;
            }
            else{
                 i++;
            }
        }
        return ans;
    }
};
