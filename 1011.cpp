#include <iostream>
using namespace std;
int main()
{	
 	int n;
	cin >> n;
	long long int a, b, c;  //用long long int 不然会被扣分 
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

