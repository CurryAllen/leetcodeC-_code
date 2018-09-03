//��������ָ�룬�ֱ�λ���ַ����Ŀ�ͷ��ĩβ�� ����ͷ��ĩβ�����������ĸ�����־�������
//����ǣ��ͱȽ����ߵ�ֵ����ͬ�������������飬���������к󣬷���true����;����в���Ⱦ� ����false��
class Solution {
public:
    bool isPalindrome(string s)
    {
        int left=0, right=s.size()-1;
        while(left<right) //ʼ�ձ�֤��ָ�������ָ��
    {
        if(!isAlphanum(s[left])) ++left;
        else if(!isAlphanum(s[right])) --right;

        else if((s[left]+32-'a')%32!=(s[right]+32-'a')%32)  return false;  //���Ա�֤��ͬ�Ĵ�д��ĸ��Сд��ĸ�õ���ֵ��ȡ�
        else
        {
            ++left;
            --right;
        }


    }

        return true;

    }

    bool isAlphanum(char ch)
    {
        if(ch>='a'&&ch<='z') return true;
        else if(ch>='A'&&ch<='Z') return true;
        else if(ch>='0'&&ch<='9') return true;

        else return false;
    }
};
