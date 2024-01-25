class Solution {
public:
    string toHex(int num) 
    {
        unsigned int ourNum = num;
        std::string ret; // Our result
        char ourArray[17] = "0123456789abcdef"; 
        do 
        {
            ret += ourArray[ourNum % 16];
            ourNum /= 16;
        } while (ourNum); 

        return {ret.rbegin(), ret.rend()};
    }
};