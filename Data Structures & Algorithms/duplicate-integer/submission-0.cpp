class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty() or nums.size() == 1)
        {
            return false;
        }
        std::set<int> checked{};
        for(auto num : nums)
        {
            if(checked.count(num))
            {
                return true;
            }
            checked.insert(num);
        }
        return false;
    }
};