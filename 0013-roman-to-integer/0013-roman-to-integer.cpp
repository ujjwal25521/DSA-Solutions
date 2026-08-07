class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int ans=0;

        int size=0;
        while(size<s.size()){
            char a=s[size];
            char b=s[size+1];
            if(m[a] >= m[b]){
                ans=ans+m[a];
                size++;
            }
            else{
                ans=ans+m[b]-m[a];
                size=size+2;
            }
        }

        return ans;
        
    }
};