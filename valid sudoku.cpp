class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                if(num=='.')continue;

                string row="row"+to_string(i)+num;
                string col="col"+to_string(j)+num;
                string box="box"+to_string(i/3)+to_string(j/3)+num;
                if(seen.count(row)||seen.count(col)||seen.count(box)){
                    return false;
                }
                seen.insert(row);
                seen.insert(col);
                seen.insert(box);
            }
        }
        return true;
    }
};
