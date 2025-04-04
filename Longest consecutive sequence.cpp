class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        int maxlen=1;
        unordered_set<int> s(nums.begin(),nums.end());
        for(int ele:s){
            if(s.find(ele-1)==s.end()){
                int num=ele;
                int len=1;

                while(s.find(num+1)!=s.end()){
                    num++;
                    len++;
                }
                maxlen=max(len,maxlen);
            }
        }
        return maxlen;
    }
};
