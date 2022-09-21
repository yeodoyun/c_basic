#include <stdio.h>

// alt + shift + 아래 방향키 : 그 열 밑으로 복사 붙여넣기
// ctrl + x : 그 줄 다 삭제 
// alt + 위,아래 방향키 : 열 원하는 대로 바꾸는거 

// '' : 문자(character) 'A', 'c', '!'
// "" : 문자열(string) "A", "ABC", "A!"

// ※ 문자('')를 사용하는 경우
//    + 키보드 제어를 할 때 사용 

int main(void)
{
    /* code */
    printf("%c\n", 'A');
    printf("%c\n", "A");
    printf("%c은 %s입니다.\n", '1', "first");
    return 0;
}
