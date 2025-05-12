#include <unistd.h>

int str_length(char *str)
{
    int len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return (len);
}

int space(char chr)
{
    return (chr == ' ' || chr == '\t');
}

void print_reverse(char *str)
{
    int fast = str_length(str) - 1;
    int slow = fast;
    int curr = fast;

    while (fast >= 0)
    {
        slow = fast;
        curr = fast;
        while (fast >= 0 && !space(str[fast]))
            fast--;
        fast++;
        curr = fast;
        while (slow >= curr)
        {
            write(1, &str[curr], 1);
            curr++;
        }
        if (fast > 0)
            write(1, " ", 1);
        fast -= 2;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_reverse(av[1]);
    write(1, "\n", 1);
    return (1);
}

