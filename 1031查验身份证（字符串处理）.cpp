#include <iostream>  
#include <string>  
using namespace std;  
bool func(string s);  //����bool��func����  
int main()   
{  
    int n;  
    cin >> n;   
    int count = 0;//������  ��������Ƿ�������  
    for (int i = 0; i < n; i++)   
    {  
        string a;  
        cin >> a;  
        if(func(a))   //���ú���  
            ++count;  
    }  
    if (count == 0)  
        cout << "All passed";  
    return 0;  
}  
  
bool func(string s)   
{  
    int sum = 0;  
    int a[18]; //�����洢�ַ������ַ� ����ת��������  
    for (int i = 0; i < 17; i++)   
    {  
        if (!isdigit(s[i]))   
        {  
            cout << s << endl;  
            return true;  
        }  
        a[i] = s[i] - '0';  
    }  
    if (s[17] == 'X')  //����18ΪX����ĳ�10  
        a[17] = 10;  
    else  
        a[17] = s[17] - '0';  
    int b[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; //��Ȩ���  
    for (int i = 0; i < 17; i++)  
    {  
        sum = sum + a[i] * b[i];  
    }  
    sum = sum % 11; //���У�����λ��  
    int c[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};  
    if (c[sum] != a[17])  //У��  
    {  
        for (int i = 0; i < 17; i++)  
            cout << s[i];  
        if (a[17] == 10)  
            cout << "X" << endl;  
        else  
        {  
            cout << a[17] << endl;  
        }     
        return true;  
    }  
    else   
    {  
        return false;  
    }     
}  
