#include <iostream>  
#include <string>  
using namespace std;  
int main()  
{  
    string s;  
    cin >> s;  
    if (s[0] == '-')  //�������������  
        cout << "-";  
    int pos = 0, after = 0, len = s.length();  
    for (int i = 1; i < len; i++) { //�ҳ�E��λ��  
        if (s[i] == 'E')  
            pos = i;  
    }  
    for (int i = pos+2; i < len; i++) { //�����E�����ֵĴ�С  
        after = (s[i] - '0') + 10 * after;  
    }  
    if(s[pos+1] == '-') { //E��Ϊ����ʱ  
        if (0 < after) {//��afterΪ����ʱ ��С����  
            cout << "0.";  
            for (int i = 1; i < after; i++) {  
                cout << 0;  
            }     
            for (int i = 1; i < pos; i++) {  
                if (s[i] >= '0' && s[i] <= '9') {  
                    cout << s[i];  
                }     
            }  
              
        } else { //afterΪ0ʱ��ԭ�����  
            for (int i = 1; i < pos; i++) {  
                if (i == 2 - after) {  
                    cout << ".";  
                }     
                if (s[i] >= '0' && s[i] <= '9') {  
                    cout << s[i];  
                }  
            }     
        }     
    }   
    else { //E��Ϊ����ʱ  
        if (pos - 3 < after) { //�ж�  ���������ں����0  
            if (s[1] != '0')  
                cout << s[1];  
            for(int i = 3; i < pos; i++) {  
                if (s[i] >= '0' && s[i] <= '9') {  
                    cout << s[i];  
                }  
            }  
            for (int i = 0; i < after - (pos - 3); i++) {  
                cout << 0;  
            }  
        } else { //�ж�  δ�������� ��С�������  
            if(s[1] != '0')  
                cout << s[1];  
            for (int i = 3; i < pos; i++) {  
                if (i == 3 + after) {  
                    cout << ".";  
                }  
                if (s[i] >= '0' && s[i] <= '9') {  
                    cout << s[i];   
                }   
            }  
        }     
    }  
    return 0;     
}  
