#ifdef TEST

#include <stdio.h>

int	main(void) 
{
	char *test_cases[] = {
        "  -1",                  // Case: Negative number with spaces
        "1",                     // Case: Positive number
        "  37141978",            // Case: Positive number with leading spaces
        "1325632167",            // Case: Large positive number (overflow test)
        "-1325632167",           // Case: Large negative number (overflow test)
        "0",                     // Case: Zero
        "2147483647",            // Case: Large number that exceeds INT_MAX
        "-2147483648",           // Case: Large negative number that exceeds INT_MIN
        "     2",                // Case: Positive number with leading spaces
        "abc",                   // Case: Invalid number
        "-0"                     // Case: Negative zero
	};

	for (int i = 0; i < 11; i++) 
	{
		int result = ft_atoi(test_cases[i]);
		printf("Input: \"%s\", ft_atoi result: %d\n", test_cases[i], result);
	}
	
	
    // 테스트 케이스 1: 기본 숫자
    printf("Test 1: '123' -> %d\n", ft_atoi("123"));

    // 테스트 케이스 2: 공백 후 숫자
    printf("Test 2: '   456a' -> %d\n", ft_atoi("   456"));

    // 테스트 케이스 3: 부호와 숫자
    printf("Test 3: '-789' -> %d\n", ft_atoi("-789"));

    // 테스트 케이스 4: 여러 부호
    printf("Test 4: '---123' -> %d\n", ft_atoi("---123"));

    // 테스트 케이스 5: 숫자가 아닌 문자 후 숫자
    printf("Test 5: 'abc123' -> %d\n", ft_atoi("abc123"));

    // 테스트 케이스 6: 부호와 공백
    printf("Test 6: '+   987' -> %d\n", ft_atoi("+   987"));

    // 테스트 케이스 7: 0으로 시작
    printf("Test 7: '00001234' -> %d\n", ft_atoi("00001234"));

    // 테스트 케이스 8: 숫자와 문자 혼합
    printf("Test 8: '5678xyz' -> %d\n", ft_atoi("5678xyz"));

    // 테스트 케이스 9: 부호만 있는 경우
    printf("Test 9: '--++---7' -> %d\n", ft_atoi("--++---7"));

    // 테스트 케이스 10: 숫자가 없는 경우
    printf("Test 10: 'hello world' -> %d\n", ft_atoi("hello world"));

	return 0;
}

#endif
