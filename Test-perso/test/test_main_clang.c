#include<stdio.h>
#include<limits.h>
#include<unistd.h>
#include"../../Printf-42/includes/ft_printf.h"

/* Check retour fonction
	
	Activate :
	%s/ft_printf("%d\n", ft_printf(/ft_printf("%d\n", ft_printf("%d\\n", ft_printf("%d\n", ft_printf(/g
	%s/)/))/g


	Desactivate :
	%s/ft_printf("%d\n", ft_printf("%d\\n", ft_printf("%d\n", ft_printf(/ft_printf("%d\n", ft_printf(/g
	%s/))/)/g
*/

int	main(void)
{
//	test c

	ft_printf("%d\n", ft_printf("Le caracter est %c$\n", 'c'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Le caracter est %c$\n", '0' + 256));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Le caracter est %c$\n", '0' - 256));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %c, %c et %c$\n", ' ', ' ', ' '));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %c, %c et %c$\n", '1', '2', 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %c, %c et %c$\n", 0, '1', '2'));


	ft_printf("%d\n", ft_printf("Les caracteres sont %10c, %10c$\n", 'c', 'd'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %c, %c$\n", 'c', 'd'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %-10c, %-10c$\n", 'c', 'd'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %-c, %-c$\n", 'c', 'd'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %-10c, %-10c$\n", 'c', 'd'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %.c, %.c$\n", 'c', 'd'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les caracteres sont %.c, %.c$\n", 'c', 'd'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Le caracter est %-30.c$\n", 'c'));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Le caracter est %30.c$\n", 'c'));

	ft_printf("%d\n", ft_printf("\n"));



//	test s
	char *c = "Salut comment tu va !!";

	ft_printf("%d\n", ft_printf("La phrase est %s$\n", ""));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %s$\n", (char *)NULL));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %s$\n", c));


	ft_printf("%d\n", ft_printf("La phrase est %30s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %10s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-30s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-10s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %.30s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %.10s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %.0s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %.s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %30.10s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %30.0s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %10.30s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %30.30s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %10.10s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %5.s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %.5s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %.s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-30.10s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-30.0s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-10.30s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-30.30s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-10.10s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-.s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-5.s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-.5s$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("La phrase est %-.s$\n", c));


//	Test flag p

	ft_printf("%d\n", ft_printf("L'adresse memoire est %p $\n", (void *)-1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %p $\n", (void *)1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %p $\n", (void *)15));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %p $\n", (void *)16));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %p $\n", (void *)17));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les adresses memoires sont %p $\n", NULL, NULL));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Les adresses memoires sont %p, %p, %p $\n", (void *)INT_MAX, (void *)LONG_MAX, (void *)ULONG_MAX));


	ft_printf("%d\n", ft_printf("L'adresse memoire est %30p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %8p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %30.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %8.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-30p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-8p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-30.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-8.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %30.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %8.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %.p $\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	c = NULL;

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-5.p$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-.p$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-.p$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %-p$\n", c));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("L'adresse memoire est %.p$\n", c));

	ft_printf("%d\n", ft_printf("\n"));
	

	//	Test flag %


	ft_printf("%d\n", ft_printf("Test flag %%$\n"));


	ft_printf("%d\n", ft_printf("Test flag %.%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %0.10%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %+04%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %+-4%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %-+10%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %0+10.%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %+10.%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %+-.%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag %+-.0%$\n"));

	ft_printf("%d\n", ft_printf("\n"));

//	Test flag x :

	ft_printf("%d\n", ft_printf("Test flag x : %x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %x$\n", 15));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %x$\n", 16));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %x$\n", 17));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %x$\n", -320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %x, %x$\n", 0, 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %x, %x$\n", INT_MAX, INT_MIN));


	ft_printf("%d\n", ft_printf("Test flag x : %x\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %.x$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %0x\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-x$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %.30x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));


	ft_printf("%d\n", ft_printf("Test flag x : %.8x$\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %.0x\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %030x\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %08x\n", 320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %00x\n", 1632));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-30x\n", INT_MAX));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-8x\n", INT_MIN));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-x$\n", -39));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-30.30x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-30.10x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-30.0x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-10.30x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-.30x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-.x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %030.30x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %030.10x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %030.0x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %010.30x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %00.30x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %0.x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#2x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#2.20x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-20.x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#20.10x$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#30x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#2x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#0x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-3.3x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#3.3x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-30.30x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#030.30x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-30.10x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#030.10x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-10.30x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-.30x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-10.30x$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

//	test avec zero !!

	ft_printf("%d\n", ft_printf("Test flag x : %x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %.x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %0x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %0.x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %-.x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#0.x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-.x$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag x : %#-.x$\n", 0));


//	Test flag X :

	ft_printf("%d\n", ft_printf("Test flag X : %X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %X$\n", 15));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %X$\n", 16));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %X$\n", 17));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %X$\n", -320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %X, %X$\n", 0, 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %X, %X$\n", INT_MAX, INT_MIN));


	ft_printf("%d\n", ft_printf("Test flag X : %X\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %.X$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %0X\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-X$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %.30X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));


	ft_printf("%d\n", ft_printf("Test flag X : %.8X$\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %.0X\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %030X\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %08X\n", 320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %00X\n", 1632));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-30X\n", INT_MAX));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-8X\n", INT_MIN));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-X$\n", -39));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-30.30X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-30.10X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-30.0X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-10.30X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-.30X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-.X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %030.30X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %030.10X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %030.0X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %010.30X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %00.30X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %0.X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#30X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#2X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#2.20X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-20.X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#20.X$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#0X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-30.30X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#030.30X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-30.10X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#030.10X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-10.30X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-.30X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-10.30X$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));
//	test avec zero !!

	ft_printf("%d\n", ft_printf("Test flag X : %X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %.X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %0X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %0.X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %-.X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#0.X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#3X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-.X$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag X : %#-.X$\n", 0));

//	Test flag d :

	ft_printf("%d\n", ft_printf("Test flag d : %d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %d$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %d$\n", 15));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %d$\n", 16));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %d$\n", 17));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %d$\n", -320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %d, %d$\n", 0, 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %d, %d$\n", INT_MAX, INT_MIN));


	ft_printf("%d\n", ft_printf("Test flag d : %d\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %.d$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %0d\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-d$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %.30d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));


	ft_printf("%d\n", ft_printf("Test flag d : %.8d$\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %.0d\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %030d\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %08d\n", 320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %00d\n", 1632));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-30d\n", INT_MAX));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-8d\n", INT_MIN));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-d$\n", -39));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-30.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-30.10d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-30.0d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-10.30d$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-.30d$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %030.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %030.10d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %030.0d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %010.30d$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %00.30d$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %0.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % 30d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % 2d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % 0d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -30.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % 030.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -30.10d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % 030.10d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -10.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -10.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));
	ft_printf("%d\n", ft_printf("Test flag d : %+30d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+2d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+0d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-30.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+030.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-30.10d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+030.10d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-10.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-10.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-.30d$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));
//	test avec zero !!

	ft_printf("%d\n", ft_printf("Test flag d : %d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %0d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %0.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %-.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % 0.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : % -.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+0.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag d : %+-.d$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

//	Test flag i :

	ft_printf("%d\n", ft_printf("Test flag i : %i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %i$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %i$\n", 15));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %i$\n", 16));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %i$\n", 17));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %i$\n", -320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %i, %i$\n", 0, 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %i, %i$\n", INT_MAX, INT_MIN));


	ft_printf("%d\n", ft_printf("Test flag i : %i\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %.i$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %0i\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-i$\n", -234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %.30i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));


	ft_printf("%d\n", ft_printf("Test flag i : %.8i$\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %.0i\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %030i\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %08i\n", 320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %00i\n", 1632));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-30i\n", INT_MAX));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-8i\n", INT_MIN));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-i$\n", -39));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-30.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-30.10i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-30.0i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-10.30i$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-.30i$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %030.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %030.10i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %030.0i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %010.30i$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %00.30i$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %0.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % 30i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % 2i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % 0i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -30.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % 030.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -30.10i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % 030.10i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -10.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -10.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));
	ft_printf("%d\n", ft_printf("Test flag i : %+30i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+2i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+0i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+4i$\n", 22));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+-30.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+030.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+-30.10i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+030.10i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+-10.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+-.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+-10.30i$\n", -1));

	ft_printf("%d\n", ft_printf("\n"));
//	test avec zero !!

	ft_printf("%d\n", ft_printf("Test flag i : %i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %0i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %0.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %-.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % 0.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : % -.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+0.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+-.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag i : %+-.i$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

//	Test flag u :

	ft_printf("%d\n", ft_printf("Test flag u : %u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %u$\n", 15));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %u$\n", 16));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %u$\n", 17));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %u$\n", 320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %u, %u$\n", 0, 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %u, %u$\n", INT_MAX, INT_MAX));


	ft_printf("%d\n", ft_printf("Test flag u : %u\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %.u$\n", 234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %0u\n", 35));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-u$\n", 234));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %.30u$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));


	ft_printf("%d\n", ft_printf("Test flag u : %.8u$\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %.0u\n", 99));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %030u\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %08u\n", 320));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %00u\n", 1632));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-30u\n", INT_MAX));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-8u\n", INT_MAX));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-u$\n", 39));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-30.30u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-30.10u$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-30.0u$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-10.30u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-.30u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %-.u$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %030.30u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %030.10u$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %030.0u$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %010.30u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %00.30u$\n", 1));

	ft_printf("%d\n", ft_printf("\n"));

	ft_printf("%d\n", ft_printf("Test flag u : %0.u$\n", 0));

	ft_printf("%d\n", ft_printf("\n"));

	return (0);
}
