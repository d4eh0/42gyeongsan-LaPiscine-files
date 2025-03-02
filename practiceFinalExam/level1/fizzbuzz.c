#include <unistd.h>

void    putnbr(int num)
{
    if (num >= 10)
    {
        putnbr(num / 10);
        write(1, &"0123456789"[num % 10], 1);
    }
    else
    	write(1, &"0123456789"[num % 10], 1);
}

int main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 || i % 5 ==0)
        {
            if (i % 3 == 0)
                write(1, "fizz", 4);
            if (i % 5 == 0)
                write(1, "buzz", 4);
        }
        else
            putnbr(i);
        write(1, "\n", 1);
        i++;
    }
    return(0);
}
