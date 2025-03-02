#ifdef TEST

#include <stdio.h>

int main() 
{
    ft_putnbr_base(-255, "01"); // -11111111
    ft_putnbr_base(-255, "0123456789ABCDEF"); // -FF
    ft_putnbr_base(-255, "poneyvif"); // -eff

    ft_putnbr_base(0, "01"); // 0
    ft_putnbr_base(0, "0123456789ABCDEF"); // 0
    ft_putnbr_base(0, "poneyvif"); // 0

    ft_putnbr_base(255, "01"); // 11111111
    ft_putnbr_base(255, "0123456789ABCDEF"); // FF
    ft_putnbr_base(255, "poneyvif"); // eff

    ft_putnbr_base(2147483647, "01"); // 1111111111111111111111111111111
    ft_putnbr_base(2147483647, "0123456789ABCDEF"); // 7FFFFFFF
    ft_putnbr_base(2147483647, "poneyvif"); // offffffffff

    ft_putnbr_base(-2147483648, "01"); // -10000000000000000000000000000000
    ft_putnbr_base(-2147483648, "0123456789ABCDEF"); // -80000000
    ft_putnbr_base(-2147483648, "poneyvif"); // -offffffffff

    return 0;
}

// ft_putnbr_base(-2147483648, "poneyvif"); // -offffffffff 오류 엉엉


#endif
