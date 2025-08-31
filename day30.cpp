class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& nm) {
        unordered_set<string>mp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(nm[i][j]=='.') continue;

                string r=to_string(i)+"r"+to_string(nm[i][j]);
                string c=to_string(j)+"c"+to_string(nm[i][j]);
                string m=to_string(i/3)+":"+to_string(j/3)+"m"+to_string(nm[i][j]);


                if(mp.find(r)!=mp.end()||mp.find(c)!=mp.end()||mp.find(m)!=mp.end())
                return false;
                
                mp.insert(r);
                 mp.insert(c);
                  mp.insert(m);


            }
        }
        return 1;
    }
};