class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        for(int i=1;i<n+1;i++){
            sum=sum+i;
        }
        int sum1=0;
        int sum2=0;
        for(int i=1;i<=n;i++){
            sum1=sum1+i;
            sum2=i+sum-sum1;
            if(sum1==sum2){
                return i;
            }
            else{
                sum2=0;
            }
        }
        return -1;
    }
};