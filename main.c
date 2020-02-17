#include "printf.h"

int main()
{

	ft_printf("------------integer-------------- \n");
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
	ft_printf("-------------char------------ \n\n");
	ft_printf("hello\n");
	ft_printf("hello ca%----4c %1c%10c%-c ??\n", '\0', '\n', (char)56, 0);
	printf("hello ca%----4c %1c%10c%-c ??\n", '\0', '\n', (char)56, 0);
	ft_printf("%-12c\n", '\n');
	printf("%-12c\n", '\n');
	ft_printf("%-1c\n", 12);
	printf("%-1c\n", 12);
	ft_printf("-------------string------------ \n\n");
	printf("%1.4s\net %-6.8s\net %4.2s\n", "tuuu", "12345", "hu");
	ft_printf("%1.4s\net %-6.8s\net %4.2s\n", "tuuu", "12345", "hu");
	printf("u%4.2ss\n %-1.s\n %---5.3s\n", "coco", NULL, "yooo");
	ft_printf("u%4.2ss\n %-1.s\n %---5.3s\n", "coco", NULL, "yooo");
	printf("Coucou %.0s\n%s%---12s\n", "hi", "coco", NULL);
	ft_printf("Coucou %.0s\n%s%---12s\n", "hi", "coco", NULL);
	printf("%-2s\n", "");
	ft_printf("%-2s\n", "");
	printf("%1s\n", "hi");
	ft_printf("%1s\n", "hi");
	ft_printf("%%\n");
	ft_printf("-------------hexa------------ \n\n");
	ft_printf("%x\n", -5310);
	printf("%x\n", -5310);
	ft_printf("%X\n", 2147483647);
	printf("%X\n", 2147483647);
	ft_printf("toto %.0xet %.X%.1x\n", 0, 0, 0);
	printf("toto %.0xet %.X%.1x\n", 0, 0, 0);
	ft_printf("%010.0x %0x\n", 12345, 0);
	printf("%010.0x %0x\n", 12345, 0);
	ft_printf("%010.0x\n", 0);
	printf("%010.0x\n", 0);
	ft_printf("test%---10.6x et %01X !!\n", 0xaabb, 0);
	printf("test%---10.6x et %01X !!\n", 0xaabb, 0);
	ft_printf("t %7.5X%0006.2x et %X!\n", 0xab, 0x876, 0xff11ff1);
	printf("t %7.5X%0006.2x et %X!\n", 0xab, 0x876, 0xff11ff1);
	ft_printf("-------------unsigned------------ \n\n");
	ft_printf("toto et %02u coco %-5.u mimi\n", 19, -20);
	printf("toto et %02u coco %-5.u mimi\n", 19, -20);
	ft_printf("\ntoto et %00009u%-u mimi et titi%--14u\n", 0, 14, 200);
	printf("\ntoto et %00009u%-u mimi et titi%--14u\n", 0, 14, 200);
	ft_printf("ko%-4.2u et %05.2u!\n", -456, 0);
	printf("ko%-4.2u et %05.2u!\n", -456, 0);
	ft_printf("%05.1u %3.4u %-4.7u\n", 45, -1789, 147);
	printf("%05.1u %3.4u %-4.7u\n", 45, -1789, 147);
	ft_printf("-------------pointer------------ \n\n");
	ft_printf("%----24p et hello %2p %12p\n", &handle_format, &ft_printf, NULL);
	printf("%----24p et hello %2p %12p\n", &handle_format, &ft_printf, NULL);
	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	ft_printf("%20p\n", &get_hex);
	printf("%20p\n", &get_hex);

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