class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int  max_len=0;
        int i=0;
        while(i<s.size()){
            
            int count=0;
            unordered_map<char,int>m;
            for(int j=i;j<s.size();j++){
                if(m[s[j]]==0){
                    count++;
                    m[s[j]]++;
                    max_len=max(max_len,count);
                    if(j==s.size()-1){
                        i++;
                    }

                }
                else {
                    i++;
                    break;
                }
            }
        }
        return max_len;
    }
};