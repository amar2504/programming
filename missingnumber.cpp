static auto io = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int a;
        unordered_map <int,int> m;
        
        for (int i=0; i<nums.size();i++)
        {  
            m.insert(make_pair(nums[i],1));            
        }
        
        for (int i=0;i<=nums.size();i++)
        {
          
            if(m.find(i)==m.end())
            {
                a = i;
                break;
            }          
        }
        return a;
    }
};
