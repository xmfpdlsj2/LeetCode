class Solution {
public:
    string defangIPaddr(string address) {
        std::string ret{};
        for(auto& e : address)
        {
            if (e == '.')
            {
                ret.append("[.]");
            }
            else ret.push_back(e);
        }
        return ret;
    }
};