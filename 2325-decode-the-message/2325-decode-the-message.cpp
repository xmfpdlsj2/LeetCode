class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> map;
        char var='a';
        int i,len=key.size();
        for(i=0;i<len;i++)
        {
            if(key[i]==' ')
            continue;
            auto it=map.find(key[i]);
            if(it==map.end())
            map[key[i]]=var++;
        }
        string ans;
        for(i=0;i<message.size();i++)
        {
            if(message[i]==' ')
            ans.push_back(' ');
            else ans.push_back(map[message[i]]);
        }
        return ans;
    }
};