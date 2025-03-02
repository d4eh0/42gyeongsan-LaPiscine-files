#ifdef TEST

typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
} t_stock_str;

#include <stdio.h>

int main(int argc, char **argv)
{
    // ft_strs_to_tab 함수 호출하여 문자열 배열을 구조체 배열로 변환
    t_stock_str *stock = ft_strs_to_tab(argc - 1, argv + 1);

    if (!stock) {
        printf("Error: ft_strs_to_tab returned NULL\n");
        return 1;
    }

    // 변환된 구조체 배열 출력
    for (int i = 0; stock[i].str != NULL; i++) {
        printf("size: %d\n", stock[i].size);
        printf("str: %s\n", stock[i].str);
        printf("copy: %s\n", stock[i].copy);
    }

    // 메모리 해제
    for (int i = 0; stock[i].str != NULL; i++) {
        free(stock[i].copy);  // 복사본 메모리 해제
    }
    free(stock);  // 구조체 배열 메모리 해제

    return 0;
}

#endif
