#include <stdio.h>

int main (void) { 
    int a = 10, b = 20, res;

    //���׿����� = (����) ? ��1 : ��2 
    // ������ ���̸� ��1, �����̸� ��2
    res = (a > b) ? a : b;
    printf("ū �� : %d\n", res);   
}