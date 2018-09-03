class Solution {
public:
    int myAtoi(string str) {
        int num=0;
        int sign=1;
        const int n = str.length();
        int i=0;
        while (str[i]==' '&& i<n) i++;

        if(str[i]=='+')
            i++;
        else if(str[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(str[i]!='+'&&str[i]!='-'&&(str[i]<'0'||str[i]>'9'))
            return 0;

        for(;i<n;i++)
        {
            if(str[i]<'0'||str[i]>'9')
                break;
            if(num>INT_MAX/10||(num==INT_MAX/10&&str[i]-'0'>7))
                return sign==-1? INT_MIN:INT_MAX;
            else
                num=num*10+str[i]-'0';
        }

        return num*sign;
    }
};
