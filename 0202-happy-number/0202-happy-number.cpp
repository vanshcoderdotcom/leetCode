class Solution {
public:
    bool isHappy(int n) {
        int rem ,sum=0;
    while(1)
    {
        while(n>0)
        {
        rem =n%10;
        sum  =sum + pow(rem,2);
        n =n/10;
        }
        if(sum==1||sum!=7 &&sum/10==0)
        {
            break;

        }
        n =sum;
        sum=0;
    
    }
        if(sum==1)return true;
        else return false;
    }
};