#include "printf.h"

int main()
{
//	ft_printf("hello\n");
	ft_printf("hello ca%----4c %1c%10c%-c ??\n", '\0', '\n', (char)56, 0);
	printf("hello ca%----4c %1c%10c%-c ??\n", '\0', '\n', (char)56, 0);
/**	ft_printf("%-c\n", 'a');
	printf("%-c\n", 'a');
	ft_printf("%-5c\n", 'a');
	ft_printf("%-*c\n", 5, 'a');
	ft_printf("%05c\n", 'a');
	ft_printf("%0c*\n",4, 'a');
	ft_printf("%*c\n",1, 'a');
	ft_printf("%-5c\n", 'a');
	ft_printf("%-*c\n", 5, 'a');
	ft_printf("%05c\n", 'a');
	ft_printf("%0*c\n",4, 'a');**/
/**	ft_printf("%c\n", 'A');
	ft_printf("%%\n");
	ft_printf("%s\n", "how are you");
	ft_printf("%d\n", 0);
	ft_printf("%i\n", -2147483648);
	ft_printf("%x\n", 12348);
	ft_printf("%X\n", 12348);
	ft_printf("%u\n", -214748);
	printf("%u\n", -214748);
	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	ft_printf("%p\n", &init);
	printf("%p\n", &init);
	ft_printf("%-5.5d\n", 0);
	ft_printf("%*.*i\n",5,5, -2147483648);**/
}
