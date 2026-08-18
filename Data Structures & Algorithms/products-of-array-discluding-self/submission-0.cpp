class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
 
        vector<int> l_r(nums.size()),r_l(nums.size());
           
        
        for(int i = 0;i<nums.size();i++){
              if(i == 0) l_r[i] = nums[i];
               else{
                  l_r[i] = nums[i] * l_r[i-1];
               }   
        }

        for(int i = nums.size()-1;i >= 0;i--){
              if(i == nums.size()-1) r_l[i] = nums[i];
               else{
                  r_l[i] = nums[i] * r_l[i+1];
               }
        }
        
        
        for(int i = 0;i<nums.size();i++){
            nums[i] = (i-1 < 0 ? 1 : l_r[i-1]) * ( i+1 == nums.size() ? 1 : r_l[i+1]);
        }

        return nums;

    }
};
