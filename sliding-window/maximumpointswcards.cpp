class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int cumsum=0;
        for(auto num:cardPoints)
            cumsum+=num;
        int start=0;
        int end=0;
        int currsum=0;
        int size=0;
        int score=INT_MIN;
        for(int end=0;end<cardPoints.size();end++)
        {
            size++;
            currsum+=cardPoints[end];
            if(size<cardPoints.size()-k)
                continue;
            else if(size==cardPoints.size()-k)
            {
                score=max(score,cumsum-currsum);
            }
            else if(size>cardPoints.size()-k)
            {
                size--;
                currsum-=cardPoints[start];
                start++;
                score=max(score,cumsum-currsum);
            }
        }
        return score;

        
    }
};