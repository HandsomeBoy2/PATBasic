#include <iostream>  
#include <string>  
#include <sstream>   //ͷ�ļ��а���istringstream
#include <stack>  
using namespace std;  
string str;  
stack<string> s;  //ջ�д洢string
int main() {  
    while(getline(cin,str)) { //�����ַ���       
        istringstream it(str);  //�ַ���ɨ����
        bool isfirst = true;  
        while ( it >> str ) {  //��ʼɨ�� �����ո��ֹͣɨ��
            s.push(str);  //ѹ��ջ
        }  
        while (!s.empty()) {  
            if (isfirst) {  
                isfirst = false;  
                cout<<s.top();  //���ջ��Ԫ��
            }  
            else {  
                cout<<" "<<s.top();  
            }  
            s.pop();  //����ջ��Ԫ��
        }  
        cout<< endl;  
    }  
  
    return 0;  
}  
