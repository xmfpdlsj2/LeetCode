class Solution {
public:
    void Check(std::vector<std::vector<int>>& image, int sr, int sc, int color, int compC)
    {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
        {
            return;
        }

        if (image[sr][sc] == compC)
        {
            image[sr][sc] = color;
            Check(image, sr - 1, sc, color, compC);
            Check(image, sr, sc + 1, color, compC);
            Check(image, sr + 1, sc, color, compC);
            Check(image, sr, sc - 1, color, compC);
        }
        else
        {
            return;
        }
    }
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color)
    {
        int sColor{};
        sColor = image[sr][sc];
        if (sColor != color)
        {
            Check(image, sr, sc, color, sColor);
        }

        return image;
    }
};