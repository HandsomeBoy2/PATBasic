#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;
int main()
{
	stack <string> s;
	string a;
	getline(cin, a); 
	istringstream it(a);  //istringstream��ɨ���ַ���  �����ո�ֹͣ 
	while (it >> a) {
		s.push(a);	
	}
	bool isfirst = true;
	while (!s.empty()) {
		if (isfirst) {
			isfirst = false;
			cout << s.top();
		} else {
			cout << " " << s.top();
		}
		s.pop();
	}
	return 0;
}

