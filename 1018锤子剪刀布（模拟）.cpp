#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int jiayin = 0, yiyin = 0;  //��Ǽ���Ӯ����� 
	char s1, s2;
	int jia[2] = {0};  // ���ʯͷ����������ʤ�ʸ� 
	int yi[2] = {0};  // 
	for (int i = 0; i < n; i++) {  //�г�6����� 
		cin >> s1 >> s2;
		if (s1 == 'C' && s2 == 'J') {
			jiayin++;
			jia[0]++;
		} else if (s1 == 'J' && s2 == 'B') {
			jiayin++;
			jia[1]++;
		} else if (s1 == 'B' && s2 == 'C') {
			jiayin++;
			jia[2]++;
		} else if (s2 == 'C' && s1 == 'J') {
			yiyin++;
			yi[0]++;
		} else if (s2 == 'J' && s1 == 'B') {
			yiyin++;	
			yi[1]++;
		} else if (s2 == 'B' && s1 == 'C') {
			yiyin++;
			yi[2]++;
		}	
	}
	cout << jiayin << " " << n - jiayin - yiyin << " " << yiyin << endl;  //��� 
	cout << yiyin << " " << n - jiayin - yiyin << " " << jiayin << endl;
	int maxjia = jia[0] > jia[1] ? 0 : 1;  //�Ƚϳ�Ӯ��������� 
	maxjia = maxjia > jia[2] ? maxjia : 2;
	int maxyi = yi[0] > yi[1] ? 0 : 1;
	maxyi = maxyi > yi[2] ? maxyi : 2;
	char str[3] = {'C', 'J', 'B'};
	cout << str[maxjia] << " " << str[maxyi];
	return 0;
}
