#include <iostream> 
#include <cctype> 
#include <string>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	char c[80]; //�洢���ļ�����ĸ 
	int flag, index = 0; 
	for (int i = 0; i < a.length(); i++) { //�Ա�  ��flag��������ѭ����洢 
		flag = 0;
		for (int j = 0; j < b.length(); j++) {
			if (a[i] == b[j]) {
				flag = 1;
				break;
			}
		}
		if (!flag) c[index++] = toupper(a[i]);
	}
	for (int i = 1; i < index; i++) { //��c����ͬ��ĸ�á�#������ 
		for (int j = 0; j < i; j++) {
			if (c[i] == c[j]) {
				c[i] = '#';
				break;	
			}	
		}
	}
	for (int i = 0; i < index; i++) { //������ļ�����ĸ 
		if (c[i] != '#') 
			cout << c[i];
	}
	return 0;
}
