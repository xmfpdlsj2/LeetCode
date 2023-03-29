class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int first{}, last = needle.size() - 1;
        int result{ -1 };
        if (haystack.size() < needle.size())
        {
            return result;
        }
        
        for (int i = 0; i < haystack.size() - needle.size() + 1; i++)
        {
            if (haystack[i] == needle[0] && haystack[i + last] == needle[last])
            {
                bool isPart = true;
                for (int j = 0; j < needle.size(); j++)
                {
                    if (haystack[i + j] != needle[j])
                    {
                        isPart = false;
                    }
                }
                if (isPart)
                {
                    result = i;
                    break;
                }
            }
        }

        return result;
    }
};