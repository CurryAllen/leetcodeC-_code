class Solution {
public:
    string reverseString(string s)
    {


        string str=s;

        int i=0;
        int j=str.size()-1;
        while(i<j)
        {
            char tmp=str[i];
            str[i++]=str[j];
            str[j--]=tmp;
        }

        return str;
    }
};
