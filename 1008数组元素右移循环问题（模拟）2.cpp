#include <iostream> 
#include <vector> 
using namespace std;
int main()
{
	int n, m;
	cin >> n >>  m;
	vector <int> a(n);  //��̬���� 
	if(m > n)  //���ƶ�λ����������Ԫ�ظ��� 
		m = m - n;
	for (int i = 0; i < n; i++)
        cin >> a[i];
	int *b = new int[m]; //�洢m��Ԫ�� 
	int j = m;
	for (int i = n-1; i >= 0; i--) {  //���������m��Ԫ�ط���b�� 
		if (i >= n-m) {
			b[--j] = a[i];
		} else {  //��0 - m-1��Ԫ�غ���mλ 
			a[i+m] = a[i];
		}
	}
	for (int i = 0; i < m; i++) { //��m��Ԫ����ӵ�a�� 
		a[i] = b[i];
	}
	for (int i = 0; i < n - 1; i++) 
			cout << a[i] << " ";
	cout << a[n-1];
	delete [] b;
	return 0;
}
