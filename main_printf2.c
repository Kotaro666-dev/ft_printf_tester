#include "includes/ft_printf.h"

int	main()
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

	int	og = 0;
	int my = 0;

	a = -2;
	b = 3;

	og +=	 printf("%*.*d, %*.*d\n", a, b, m,  a, b, e);
	my += ft_printf("%*.*d, %*.*d\n", a, b, m,  a, b, e);

	a = -1;
	b = 2;

	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);
	og =	 printf("%*.*d\n", a, b, j);
	my =  ft_printf("%*.*d\n", a, b, j);

	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);

	a = 3;
	b = 3;

	og =	 printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
	my =  ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);


	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);

	a = 3;
	b = 3;

	og =	 printf("%*.*d\n",a, b, j);
	my =  ft_printf("%*.*d\n",a, b, j);

	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);

	a = 42;
	b = 25;

	og =	 printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n",a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	my =  ft_printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n",a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);

	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);
	a = 45;
	b = 25;

	og =	 printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	my =  ft_printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);


	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);

	a = 42;
	b = 25;

	og =	 printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	my =  ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n",  a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);

	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);

	a = 3;
	b = 3;

	og =	 printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n",NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	my =  ft_printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n",NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);

	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);

	a = 12;
	b = 18;

	printf(" --- Return : %d\n", printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, i, a, i, a, i, a, i, a, i));
	printf(" --- Return : %d\n", printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, j, a, j, a, j, a, j, a, j));
	printf(" --- Return : %d\n", printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, l, a, l, a, l, a, l, a, l));
	printf(" --- Return : %d\n", ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, i, a, i, a, i, a, i, a, i));
	printf(" --- Return : %d\n", ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, j, a, j, a, j, a, j, a, j));
	printf(" --- Return : %d\n", ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, l, a, l, a, l, a, l, a, l));

	printf("\n--------------\nog = %d\nmy = %d\n--------------\n",og,my);

	d = -9;

	printf("1-->|%*d|<--\n", 3, d);
	printf("2-->|%*d|<--\n", 4, d);
	printf("3-->|%0.d|<--\n", d);

	printf("4-->|%0.*d|<--\n", -4, d);
	printf("5-->|%0.*d|<--\n", -9, d);
	printf("6-->|%08.0d|<--\n", d);
	printf("7-->|%08d|<--\n", d);

 	printf("8-->|%--4.d|<--\n", d);
 	printf("9-->|%--4.*d|<--\n", -4, d);
 	printf("0-->|%--4.*d|<--\n", -3, d);
	printf("-----------------\n");
	ft_printf("1-->|%*d|<--\n", 3, d);
	ft_printf("2-->|%*d|<--\n", 4, d);
	ft_printf("3-->|%0.d|<--\n", d);

	ft_printf("4-->|%0.*d|<--\n", -4, d);
	ft_printf("5-->|%0.*d|<--\n", -9, d);
	ft_printf("6-->|%08.0d|<--\n", d);
	ft_printf("7-->|%08d|<--\n", d);

 	ft_printf("8-->|%--4.d|<--\n", d);
 	ft_printf("9-->|%--4.*d|<--\n", -4, d);
 	ft_printf("0-->|%--4.*d|<--\n", -3, d);

	a = 4;
	b = 0;

	printf("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n",  a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);

	a = 4;
	b = -2;
	j = -12;

	printf("%0*.*i\n",a, b, j);
	ft_printf("%0*.*i\n",a, b, j);

	a = 4;
	b = 1;
	printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n",  a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
	ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);

	// while (1)
	// 	;
	return (1);
}
