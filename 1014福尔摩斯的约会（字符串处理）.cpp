#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b, c, d;
    cin >> a >> b >> c >> d; //�����ĸ��ַ���
    int lena = a.length(); //�����ַ�������
    int lenb = b.length();
    int min1 = lena < lenb ? lena : lenb; //a��b��ȣ��洢�ַ����϶̵��ַ���
    int lenc = c.length(); //�����ַ�������
    int lend = d.length();
    int min2 = lenc < lend ? lenc : lend; //c��d��ȣ��洢�ַ����϶̵��ַ���
    char t[2];  //�����洢�ַ�������ͬ���ַ�
    int pos;
    int j;
    for (int i = 0; i < min1; i++) {  //�ҳ���һ����ͬ���ַ�����j���
        if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')) {
            t[0] = a[i];
            a[i] = '#';
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < min1; i++) { //�ҳ��ڶ�����ͬ���ַ�
        if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') ||
                             (a[i] >= '0' && a[i] <= '9'))) {
            t[1] = a[i];
            break;
        }
    }
    for (int i = 0; i < min2; i++) { //�ҳ���������ͬ���ַ�λ��
        if (c[i] == d[i] && ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))) {
            pos = i;
            break;
        }
    }
    string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
    int m;
    if (t[1] >= '0' && t[1] <= '9') { //���ַ�ת��������
        m = t[1] - '0';
    } else {
        m = t[1] - 'A' + 10;
    }
    cout << week[t[0]-'A']; //���
    if (m >= 0 && m <= 9) {
        cout << 0 << m << ":";
    } else {
        cout << m << ":";
    }
    if (pos >= 0 && pos <= 9) {
        cout << 0 << pos;
    } else {
        cout << pos;
    }
    return 0;
}
