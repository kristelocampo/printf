#include "printf.h"

int main()
{

	ft_printf("hello %----*.d this is a test\n", -2, 0);
	printf("hello %----*.d this is a test\n", -2, 0);
	ft_printf("%50d\n", 78900);
	printf("%50d\n", 78900);
	ft_printf("%-5d\n", 0);
	printf("%-5d\n", 0);
	ft_printf("%.4i\n", -2147483648);
	printf("%.4li\n", -2147483648);
	ft_printf("%05i\n", 2147483647);
	printf("%05i\n", 2147483647);
//	ft_printf("hello\n");
/**	ft_printf("hello ca%----4c %1c%10c%-c ??\n", '\0', '\n', (char)56, 0);
	printf("hello ca%----4c %1c%10c%-c ??\n", '\0', '\n', (char)56, 0);
	ft_printf("%-12c\n", '\n');
	printf("%-12c\n", '\n');
	ft_printf("%-1c\n", 12);
	printf("%-1c\n", 12);**/
/**	printf("%1.4s\net %-6.8s\net %4.2s\n", "tuuu", "12345", "hu");
	ft_printf("%1.4s\net %-6.8s\net %4.2s\n", "tuuu", "12345", "hu");
	printf("u%4.2ss\n %-1.s\n %---5.3s\n", "coco", NULL, "yooo");
	ft_printf("u%4.2ss\n %-1.s\n %---5.3s\n", "coco", NULL, "yooo");
	printf("Coucou %.0s\n%s%---12s\n", "hi", "coco", NULL);
	ft_printf("Coucou %.0s\n%s%---12s\n", "hi", "coco", NULL);
	printf("%-2s\n", "");
	ft_printf("%-2s\n", "");
	printf("%1s\n", "hi");
	ft_printf("%1s\n", "hi");**/
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
