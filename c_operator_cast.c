// Casting : ����ȯ
//  - int(����) -> double(�Ǽ�)

#include <stdio.h>

int main(void) {
    int a = 20, b = 3;
    double res;
    //int -> double (����Ÿ�� -> ūŸ��)
    // 6.7 = 20.0 / 3.0
    res =  (double)a / (double)b;
    printf("a = %d, b = %d\n", a, b);
    printf("a/bdml rufrhk : %.1lf\n", res);


    // double -> int (ūŸ�� -> ����Ÿ��) : ���� �ս� �߻� 
    a = (int)res; // res(6.7)
    printf("(int) %.1lf�� ��� : %d\n", res, a);

}
