#include <iostream>
#include <vector> 
typedef struct   //�ṹ�� 
{
	char a[100];
	int one, two;
}stu;
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <stu> a(n);  //������Ԫ��Ϊ�ṹ�� 
	for (int i = 0; i < n; i++) {  //���� 
		cin >> a[i].a >> a[i].one >> a[i].two;
	}
	int m, temp = 0;
	cin >> m;
	for (int i = 0; i < m; i++) {  //���Ҳ���� 
		cin >> temp;
		for (int j = 0; j < n; i++) {
			if (a[j].one == temp) 
				cout << a[j].a  << " " << a[j].two << endl;
		}
	}
	return 0;
}

