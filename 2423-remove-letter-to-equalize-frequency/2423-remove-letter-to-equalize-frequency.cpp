class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> mp1;
        unordered_map<char,int>::iterator itr;
        // create a map for frequency of characters
        for(int i = 0;i < word.size();i++)
        {
            mp1[word[i]]++;
        }
        // create a map to know the frequency of occurrence of characters
        unordered_map<int, int> mp2;
        for(itr=mp1.begin();itr!=mp1.end();itr++){
            mp2[itr->second]++;
        }
        // if there are more than two frequencies the answer is false
        if(mp2.size()>2) return false;
        
        unordered_map<int,int>::iterator itr1;
        unordered_map<int,int>::iterator itr2;
        
        itr1=mp2.begin();
        if(mp2.size()==1){
            
            // here check if one char occus multiple times or multiple char occur once
            if(itr1->first==1 || itr1->second==1)return true;
            else return false;
        }
        itr2=mp2.begin();
        itr2++;
        if((itr1->first-itr2->first==1 && itr1->second==1)||//if the diff b/w freq is 1 and the no. of char comes once 
           (itr2->first-itr1->first==1 && itr2->second==1)||
           (itr1->first==1&&itr1->second==1)||// if any char occurs once with 1 freq
           (itr2->first==1&&itr2->second==1))return true;
        
        return false;
    }
};