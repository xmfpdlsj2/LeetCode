class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        string s="";
        int count=0;
        while(low<=high){
            s=to_string(low);
            if(s.size()%2==0){
                if(accumulate(s.begin(),s.begin()+s.size()/2,0)==accumulate(s.begin()+s.size()/2,s.end(),0)){
                    count++;
                }
            }
            low++;
        }
        return count;
    }
};