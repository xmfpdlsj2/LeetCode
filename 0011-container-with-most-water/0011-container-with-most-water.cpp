class Solution {
public:
    int maxArea(std::vector<int>& height)
    {
        unsigned long lIndex{}, rIndex{ height.size() - 1 }, contain{};
        while (lIndex != rIndex)
        {
            if (height[lIndex] < height[rIndex])
            {
                contain = std::max(contain, height[lIndex] * (rIndex - lIndex));
                lIndex++;
            }		
            else
            {
                contain = std::max(contain, height[rIndex] * (rIndex - lIndex));
                rIndex--;
            }
        }
        return contain;
    }
};