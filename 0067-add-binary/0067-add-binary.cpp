class Solution {
public:
    string addBinary(string a, string b) {
        char x='0';
        char y='0';
        char c='0';

        int s1=a.size()-1;
        int s2=b.size()-1;
        int p=max(s1,s2);

        string ans;

        while(p+1!=0){
            if(s1<0) {
                x='0';
            }
            else{
            x=a[s1];


            }
            if(s2<0){
                y='0';
            }
            else{
                y=b[s2];
            }
            
            if(c=='0'){
                if(x=='1' && y=='1'){
                    ans='0'+ans;;
                    c='1';
                }
                else if(x=='0' && y=='0'){
                    ans='0'+ans;
                }
                else{
                    ans='1'+ans;
                }
            }
            else{
                if(x=='1'&& y=='1' && c=='1'){
                    ans='1'+ans;
                    c='1';
                }
                else if(x=='0' && y=='0'){
                    ans ='1'+ans;
                    c='0';
                }
                else{
                    ans='0'+ans;
                    c='1';
                }
        
            }
            s1--;
            s2--;
            p--;
        }
        if(c=='1') return '1'+ans;
        return ans;





        
    }
};