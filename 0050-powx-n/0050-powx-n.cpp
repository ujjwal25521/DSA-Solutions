class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;;
        if(x==-1 && n%2==0) return 1;
        if(x==-1 && n%2!=0) return -1;
        if(x==1) return ans;
        if(n>0){
            if(n>1000){
                double z;
                z=x*x;
            
                for(int i=0;i<n/2;i++){
                    ans=ans*z;
                }
                if (n%2!=0) {ans=ans*x;
                return ans;}
                if(x<0 && n%2!=0) return -ans;
                else return ans;
            }
        for(int i=0;i<n;i++){
            ans =ans*x;
        }
        return ans;
        }
        else if(n==0){
            return 1.00000;
        }
        else{
           // n=n*(-1);
           long long y=n;
           y=-y;
           if(y>1000){
            x=x*x;
            for(int i=0;i<y/2;i++){
                ans=ans*x;
            }
            return 1/ans;
           }
           
        
            for(long long  i=0;i<y;i++){
                ans=ans*x;
            }
            return 1/ans;
        }
        return ans;
    }
};