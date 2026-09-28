class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
        std::unordered_map<char,int> dict{};
        for(auto sign : s)
        {
            dict[sign]++;
        }
        for(auto sign : t)
        {
            dict[sign]--;
        }
        for(auto [key, value] : dict)
        {
            if(value != 0)
            {
                return false;
            }
        }
        return true;
    }
};
