#include <iostream>
using namespace std;
int main()
{	
 	int n;
	cin >> n;
	long long int a, b, c;  //��long long int ��Ȼ�ᱻ�۷� 
	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> c;
		if (a + b > c) {
			cout << "Case #" << i << ": true" << endl;
			continue;
		} 
		cout << "Case #" << i << ": false" << endl;
	}
	return 0;
}

