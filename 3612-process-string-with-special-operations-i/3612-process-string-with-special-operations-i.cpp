class Solution {
public:
    string processStr(string s) {
        string result;
        for(int i=0;i<s.size();i++){
            if(result.size()==0 && s[i]=='*' || result.size()==0 && s[i]=='%' || result.size()==0 && s[i]=='#') continue;
            if(s[i]=='*'){
                result.pop_back();
            }
            else if(s[i]=='#'){
                result+=result;
            }
            else if(s[i]=='%'){
                reverse(result.begin(), result.end());
            }
            else{
                result+=s[i];
            }
        }
        return result;
    }
};