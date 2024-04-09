class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int previous = -1;
        int answer = 0;

        for (int i : timeSeries)
        {        
            answer += duration;
            //checking if the poisoned times are overlapping
            if (previous >= i)
            {
                //removing the overlapped time from the answer
                answer = answer - abs(previous - i) - 1; 
            }
            // keeping track of the previous time
            previous = i + duration - 1;
        }
        return answer;
    }
};