#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string a; 
	int b, i, j, t, temp;  //tΪ�� tempΪ���� 
	cin >> a >> b;
	t = (a[0] - '0') / b;
	if (a.length() == 1 || (t != 0 && a.length() > 1)) {//��Ϊ1�ʹ���1 
		cout << t;
	}
	temp = (a[0] - '0') % b;
	for (i = 1; i < a.length(); i++) {
		t = (temp * 10 + a[i] - '0') / b;
		cout << t;
		temp = (temp * 10 + a[i] - '0') % b;
	}
	cout << " " << temp;
	return 0;
}

