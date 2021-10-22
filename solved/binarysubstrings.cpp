#define MIN(x, y) (((x) < (y)) ? (x) : (y))
class Solution {
public:
    vector <int>groups;
    int countBinarySubstrings(string s) {
        int size=s.size();
        int i=0;
        int count;
        while(i<size)
        {

            if(s[i]=='0')
            {
                count=0;
                while(s[i]!='1' && i<size)
                {
                    i++;
                    count++;

                }
                groups.push_back(count);
            }
            else
            {
                count=0;
                while(s[i]!='0' && i<size )
                    {
                        i++;
                        count++;

                    }
                groups.push_back(count);
            }
        }
        i=0;
        size=groups.size();
        int sum=0;
        for(i=0;i<size;i++)
        {
            if(i+1<size)
                sum+=MIN(groups[i],groups[i+1]);
        }
        return sum;
    }
};
