class Solution {
public:
    int distMoney(int money, int children) {
        if(money < children) return -1; 
        int ans=0;

        for(int n=1; n<=children; n++)
        {
            int rem = money - n*8; 
            if(rem < children-n) continue; 
            if(rem > 0 && (children-n)==0) continue;
            if(rem==4 && (children-n)==1) continue; 
            if(rem==0 && (children-n)>0) continue;
            else ans = n; 
        }
        return ans;
    }
};