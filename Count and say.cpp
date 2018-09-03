class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        if(n==1)
        {
            return s;
        }

        for(int i=1;i<n;++i)
        {
            char ch=s[0];
            int count=1;
            string str;

             for(int j=1;j<s.size();++j)
             {
                 if(ch==s[j])
                     ++count;
                 else
                 {
                     std::stringstream ss;
                     ss<<count<<ch;
                     str+=ss.str();
                       ch=s[j];
                        count=1;
                 }

             }
              std:: stringstream ss;
                 ss<<count<<ch;
            str+=ss.str();
            s=str;
        }
        return s;
    }
};
