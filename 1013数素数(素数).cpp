#include <iostream>

bool isprime(int a)  //�ж��Ƿ�Ϊ���� 
{
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) 
			return false;
	}
	return true;
}
using namespace std;
int main()
{
	int M = 0, N = 0;
	int t = 0, k = 2;
	int a[10000];
	int j = 0;
	cin >> M >> N;
	while (t < N) {     //�洢��N-M��֮���������a������ 
		if (isprime(k)) {
			t++;
			if (t >= M) 
				a[j++] = k;
		}
		k++;	
	}
	for (int i = 0; i < j; i++) {  //��� 
		cout << a[i];
		if ((i + 1) % 10 == 0)  //��ӿո���� ���һ�������󲻽��κζ��� 
         	cout << endl;
        else if (i != j-1)  
        	cout << " "; 
	}
	return 0;
}

