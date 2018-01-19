#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) { return a > b;}

int main()
{
	int n;
	cin >> n;
	int *a = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	int t = 0;
	for (int i = 0; i < n; i++) {
		t = a[i];
		while (t != 1 && t != 999) {
			if (t % 2 == 0) {
				t = t / 2;
			} else {
				t = (3 * t + 1) / 2;
			}
			for (int j = 0; j < n; j++) {
				if (t == a[j] && j != i)
					a[j] = 999; //����ͬ�����ָ�Ϊ999 
			}	
	   }
	}
	sort(a, a+n, cmp);//999���������ǰ��
	int temp = 0;
	for (int i = n-1; i >= 0; i--) {
		if (a[i] != 999)
			temp = i;//��һ��������999���±�Ϊtemp
	}
	for (int i = temp; i < n-1; i++) {
		cout << a[i] << " ";
	}	
	cout << a[n-1];
	delete [] a;
	return 0;
}
