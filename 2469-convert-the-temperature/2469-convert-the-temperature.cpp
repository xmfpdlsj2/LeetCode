class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        std::vector<double> ret(2);
        ret[0] = celsius + 273.15;
        ret[1] = celsius * 1.80 + 32.00;
        return ret;
    }
};