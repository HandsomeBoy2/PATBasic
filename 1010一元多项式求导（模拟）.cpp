#include <cstdio>
using namespace std;
int main() {
    int a, b;
    bool flag = true;
    while(scanf("%d %d", &a, &b) != EOF) {  //���� 
        if(b == 0) continue; //����ָ���Ƿ�Ϊ0 
        if(!flag) 
            printf(" ");
        else
            flag = false;
        printf("%d %d", a * b, b - 1);//��� 
    }
    if(flag) {
        printf("0 0");
    }
    return 0;
}

