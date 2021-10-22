class Solution {
public:
    unordered_map<string,int> dead;
    unordered_map<string,int> v;
    queue<string> q;

    vector<string> allperms(string s)
    {
      vector<string>res;
      for(int i=0;i<4;i++)
      {
        if(s[i]!='0' && s[i]!='9')
        {
          s[i]=s[i]+1;
          s[i]=s[i]-1;
        }
        else if(s[i]=='0')
        {
          s[i]='9';
          s[i]='0';
        }
        else if(s[i]=='9')
        {
          s[i]='0';
          s[i]='8'
        }
      }
    }


    int shortestturns(string s,string t)
    {
      auto it=v.find(s)
      if(it==v.end())
      {
        return INT_MAX;
      }
      else if(s==t)
      {
        return 0;
      }
      else
      {
        string a=s;
        string b=s;
        string c=s;
        string d=s;
        string e=s;
        string f=s;
        string g=s;
        string h=s;
        a[0]=a[0]+1;
        b[0]=b[0]-1;
        c[1]=c[1]+1;
        d[1]=d[1]-1;
        e[2]=e[2]-1;
        f[2]=f[2]-1;
        g[3]=g[3]-1;
        h[3]=h[3]-1;
        if(dead.find(a)==dead.end() && v.find(a)==v.end())
            int q=1+shortestturns(a,t);
        if(dead.find(b)==dead.end() && v.find(b)==v.end())
              int w=1+shortestturns(b,t);
        if(dead.find(c)==dead.end() && v.find(c)==v.end())
              int e=1+shortestturns(c,t);
              if(dead.find(d)==dead.end() && v.find(d)==v.end())
                  int r=1+shortestturns(d,t);
                  if(dead.find(e)==dead.end() && v.find(e)==v.end())
                      int t=1+shortestturns(e,t);
                      if(dead.find(f)==dead.end() && v.find(f)==v.end())
                          int y=1+shortestturns(f,t);
                          if(dead.find(g)==dead.end() && v.find(g)==v.end())
                              int q=1+shortestturns(g,t);
                              if(dead.find(h)==dead.end() && v.find(h)==v.end())
                                  int q=1+shortestturns(h,t);



      }

    }





    int openLock(vector<string>& deadends, string target) {
      for(int i = 0; i < deadends.size();i++)
      {
        dead.insert({deadends[i],1});
      }
      string start="0000";
      return shortestturns(start,target);

    }
};
