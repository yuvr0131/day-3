class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        int y=abs(n);
        while(y>0)
        {   if(y%2==0)
            {x*=x;
            y/=2;}

            else
            {
                ans*=x;
                y-=1;
            }
        }
        if(n<0)
        {
            ans=1/ans;
            
        }
        return ans;
    }
};