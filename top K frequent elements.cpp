class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for(auto num :nums){
            m[num]++;
        }
        vector<pair<int, int>> vec;
        for(auto& [num,count]: m){
            vec.push_back({count,num});
        }

        sort(vec.begin(),vec.end(),greater<pair<int,int>>());

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
