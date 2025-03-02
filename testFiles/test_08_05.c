#ifdef TEST

#include <stdio.h>

void free_split(char **split) {
    if (!split) return;
    for (int i = 0; split[i]; i++) {
        free(split[i]);
    }
    free(split);
}

int main(void) {
    //--------------------------------------------------------------------------//
    char *str = "Hello~World$C~Programming";
    char *charset = "~$";
    char **result = ft_split(str, charset);

    if (!result) {
        printf("Error: ft_split returned NULL\n");
        return (1);
    }
    for (int i = 0; result[i]; i++) {
        printf("Segment %d: %s\n", i, result[i]);  // Hello / World / C / Programming
    }
    free_split(result);
    //--------------------------------------------------------------------------//
    char *str1 = "/ab/cd/ef/gh";
    char *charset1 = "/";
    char **result1 = ft_split(str1, charset1);
    
    if (!result1) {
        printf("Error: ft_split returned NULL\n");
        return (1);
    }
    for (int i = 0; result1[i]; i++) {
        printf("Segment %d: %s\n", i, result1[i]);  // ab / cd / ef / gh
    }
    free_split(result1);
    //--------------------------------------------------------------------------//
    char *str2 = "/";
    char *charset2 = "/";
    char **result2 = ft_split(str2, charset2);
    
    if (!result2) {
        printf("Error: ft_split returned NULL\n");
        return (1);
    }
    for (int i = 0; result2[i]; i++) {
        printf("Segment %d: %s\n", i, result2[i]);  // (empty)
    }
    free_split(result2);
    //--------------------------------------------------------------------------//
    char *str3 = " ~ ";
    char *charset3 = "~$";
    char **result3 = ft_split(str3, charset3);
    if (!result3) {
        printf("Error: ft_split returned NULL\n");
        return (1);
    }
    for (int i = 0; result3[i]; i++) {
        printf("Segment %d: %s\n", i, result3[i]);  // 빈 배열일 경우 (없음)
    }
    free_split(result3);

    return (0);
}

#endif
