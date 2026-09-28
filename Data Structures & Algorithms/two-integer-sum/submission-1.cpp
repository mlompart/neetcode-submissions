class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() < 3)
        {
            return {0,1};
        }
        int a{}, b{1};
        while(a < nums.size() - 1)
        {
            if((nums[a] + nums[b]) == target)
            {
                return {a, b};
            }
            if((b + 1) < nums.size())
            {
                b++;
            }
            else{
                a++;
                b = a + 1;
            }
        }

    }
};
