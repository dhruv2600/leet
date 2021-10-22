class Solution {
public:
    int removeBoxes(vector<int>& boxes) {

      for(int i=0;i<boxes.size();i++)
      {
        if(boxes[i]!=-99)
        {
          if(i<boxes.size()-1 && boxes[i]==boxes[i+1])
          {
            int j=i+1;
            int local=1;
            while(boxes[j]==boxes[i] || boxes[j]==-99)
            {
              {
                if(boxes[j]==boxes[i])
                  local++;

              }
            }
            int a=local*local+removeBoxes(boxes);


          }
        }
      }




    }
};
