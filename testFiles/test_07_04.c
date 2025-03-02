#ifdef TEST
#include <stdio.h>

int main(void)
{
    // Test 1: 정상적인 2진수 변환 (binary to decimal)
    char *str1 = "1011"; // 11 in decimal
    char *base1 = "01";
    char *base_to1 = "0123456789"; // 10진수로 변환
    printf("Test 1, %s, %s, %s: %s\n", str1, base1, base_to1, ft_convert_base(str1, base1, base_to1));
    // 예상결과: 1011, 01, 0123456789: 11

    // Test 2: 2진수에서 10진수로 변환 (binary to decimal)
    char *str2 = "1010"; // 10 in decimal
    char *base2 = "01";
    char *base_to2 = "0123456789"; // 10진수로 변환
    printf("Test 2, %s, %s, %s: %s\n", str2, base2, base_to2, ft_convert_base(str2, base2, base_to2));
    // 예상결과: 1010, 01, 0123456789: 10

    // Test 3: 2진수에서 8진수로 변환 (binary to octal)
    char *str3 = "101011"; // 43 in decimal, which is 53 in octal
    char *base3 = "01";
    char *base_to3 = "01234567"; // 8진수로 변환
    printf("Test 3, %s, %s, %s: %s\n", str3, base3, base_to3, ft_convert_base(str3, base3, base_to3));
    // 예상결과: 101011, 01, 01234567: 53

    // Test 4: 2진수에서 16진수로 변환 (binary to hexadecimal)
    char *str4 = "1010"; // 10 in decimal, which is A in hexadecimal
    char *base4 = "01";
    char *base_to4 = "0123456789ABCDEF"; // 16진수로 변환
    printf("Test 4, %s, %s, %s: %s\n", str4, base4, base_to4, ft_convert_base(str4, base4, base_to4));
    // 예상결과: 1010, 01, 0123456789ABCDEF: A

    // Test 5: 입력 값에 진법에 없는 문자 포함 (Invalid character in the string)
    char *str5 = "Z10";
    char *base5 = "0123456789";
    char *base_to5 = "0123456789"; // 10진수로 변환
    printf("Test 5, %s, %s, %s: %s\n", str5, base5, base_to5, ft_convert_base(str5, base5, base_to5));
    // 예상결과: Z10, 0123456789, 0123456789: NULL (invalid character)

    // Test 6: 진법 문자열에 중복 문자가 있는 경우 (Invalid base)
    char *str6 = "1010";
    char *base6 = "011";
    char *base_to6 = "0123456789"; // 10진수로 변환
    printf("Test 6, %s, %s, %s: %s\n", str6, base6, base_to6, ft_convert_base(str6, base6, base_to6));
    // 예상결과: 1010, 011, 0123456789: NULL (invalid base)

    // Test 7: 0 처리 테스트
    char *str7 = "0";
    char *base7 = "0123456789";
    char *base_to7 = "0123456789"; // 10진수로 변환
    printf("Test 7, %s, %s, %s: %s\n", str7, base7, base_to7, ft_convert_base(str7, base7, base_to7));
    // 예상결과: 0, 0123456789, 0123456789: 0

    // Test 8: 음수 처리 테스트
    char *str8 = "-1010";
    char *base8 = "01";
    char *base_to8 = "0123456789"; // 10진수로 변환
    printf("Test 8, %s, %s, %s: %s\n", str8, base8, base_to8, ft_convert_base(str8, base8, base_to8));
    // 예상결과: -1010, 01, 0123456789: -10

    // Test 9: 빈 문자열 처리
    char *str9 = "";
    char *base9 = "0123456789";
    char *base_to9 = "0123456789"; // 10진수로 변환
    printf("Test 9, %s, %s, %s: %s\n", str9, base9, base_to9, ft_convert_base(str9, base9, base_to9));
    // 예상결과: "", 0123456789, 0123456789: NULL (empty string)

        // Test 10: 음수 2진수에서 10진수로 변환 (binary to decimal)
    char *str10 = "-1101"; // -13 in decimal
    char *base10 = "01";
    char *base_to10 = "0123456789"; // 10진수로 변환
    printf("Test 10, %s, %s, %s: %s\n", str10, base10, base_to10, ft_convert_base(str10, base10, base_to10));
    // 예상결과: -1101, 01, 0123456789: -13

    // Test 11: 음수 16진수에서 10진수로 변환 (hexadecimal to decimal)
    char *str11 = "-1F"; // -31 in decimal
    char *base11 = "0123456789ABCDEF";
    char *base_to11 = "0123456789"; // 10진수로 변환
    printf("Test 11, %s, %s, %s: %s\n", str11, base11, base_to11, ft_convert_base(str11, base11, base_to11));
    // 예상결과: -1F, 0123456789ABCDEF, 0123456789: -31

    // Test 12: 큰 양수 16진수에서 2진수로 변환 (hexadecimal to binary)
    char *str12 = "7E4"; // 2020 in decimal
    char *base12 = "0123456789ABCDEF";
    char *base_to12 = "01"; // 2진수로 변환
    printf("Test 12, %s, %s, %s: %s\n", str12, base12, base_to12, ft_convert_base(str12, base12, base_to12));
    // 예상결과: 7E4, 0123456789ABCDEF, 01: 11111100100

    // Test 13: int 최소값 10진수에서 16진수로 변환 (decimal to hexadecimal)
    char *str13 = "-2147483648"; // int 최소값
    char *base13 = "0123456789";
    char *base_to13 = "0123456789ABCDEF"; // 16진수로 변환
    printf("Test 13, %s, %s, %s: %s\n", str13, base13, base_to13, ft_convert_base(str13, base13, base_to13));
    // 예상결과: -2147483648, 0123456789, 0123456789ABCDEF: -80000000

    // Test 14: int 최소값 근처의 값 10진수에서 2진수로 변환 (decimal to binary)
    char *str14 = "-2147483647"; // int 최소값 + 1
    char *base14 = "0123456789";
    char *base_to14 = "01"; // 2진수로 변환
    printf("Test 14, %s, %s, %s: %s\n", str14, base14, base_to14, ft_convert_base(str14, base14, base_to14));
    // 예상결과: -2147483647, 0123456789, 01: -1111111111111111111111111111111

// Test 15:
    char *str15 = "4403 "; 
    char *base15 = "0123456789";
    char *base_to15 = "0123456";
    printf("Test 15, %s, %s, %s: %s\n", str15, base15, base_to15, ft_convert_base(str15, base15, base_to15));
    return 0;
}

#endif
