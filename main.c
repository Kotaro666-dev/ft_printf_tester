/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:58:37 by kkamashi          #+#    #+#             */
/*   Updated: 2020/08/05 09:25:26 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main()
{
	int		a = 123456789;
	char	c = '4';
	char	*s = "Born2Code";

	printf("========== Simple Conversion Management ==========\n\n");
	printf("<<<<<<<<<< Standard Input >>>>>>>>>>\n");
	printf("---- %%c ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%c", c));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%c", c));

	printf("---- %%s ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%s", s));

	printf("---- %%p ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%p", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%p", s));

	printf("---- %%d ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%d", a));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%d", a));

	printf("---- %%i ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%i", a));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%i", a));

	printf("---- %%u ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%u", a));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%u", a));

	printf("---- %%x ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%x", a));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%x", a));

	printf("---- %%X ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%X", a));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%X", a));

	printf("<<<<<<<<<< Special Case >>>>>>>>>>\n");
	printf("---- %%c NULL ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%c", NULL));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%c", NULL));

	printf("---- %%s NULL ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%s", NULL));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%s", NULL));

	printf("---- %%p NULL ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%p", NULL));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%p", NULL));

	printf("---- %%d -2147483648 ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%d", -2147483648));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%d", -2147483648));

	printf("---- %%i -2147483648 ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%i", -2147483648));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%i", -2147483648));

	printf("---- %%u -2147483648 ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%u", -2147483648));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%u", -2147483648));

	printf("---- %%x NULL ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%x", NULL));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%x", NULL));

	printf("---- %%X NULL ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%X", NULL));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%X", NULL));

	printf("<<<<<<<<<< Multiple Args / Conversions >>>>>>>>>>\n");
	printf("---- %%c %%s %%p ----\n");
	printf("printf    :");
	printf("|%d\n", printf("aaa %c bbb %s ccc %p ddd", '4', "42tokyo", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("aaa %c bbb %s ccc %p ddd", '4', "42tokyo", s));

	printf("========== Simple Flags Management ==========\n\n");
	printf("<<<<<<<<<< Min Field Width (string) >>>>>>>>>>\n");
	printf("---- %%20s (bigger) ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%20s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%20s", s));

	printf("---- %%9s (equal) ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%9s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%9s", s));

	printf("---- %%3s (small) ---\n");
	printf("printf    :");
	printf("|%d\n", printf("%3s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%3s", s));

	printf("<<<<<<<<<< Min Field Width (string with -) >>>>>>>>>>\n");
	printf("---- %%-20s (bigger) ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%-20s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%-20s", s));

	printf("---- %%-9s (equal) ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%-9s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%-9s", s));

	printf("---- %%-3s (small) ---\n");
	printf("printf    :");
	printf("|%d\n", printf("%-3s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%-3s", s));

	printf("<<<<<<<<<< Min Field Width (string with 0) >>>>>>>>>>\n");
	printf("---- %%020s (bigger) ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%020s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%020s", s));

	printf("---- %%09s (equal) ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%09s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%09s", s));

	printf("---- %%03s (small) ---\n");
	printf("printf    :");
	printf("|%d\n", printf("%03s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%03s", s));

	printf("<<<<<<<<<< Multiple Presicions >>>>>>>>>>\n");
	printf("---- %%020.5s (bigger) ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%020.5s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%020.5s", s));

	printf("========== Advanced Flags Management ==========\n\n");
	printf("<<<<<<<<<< Check '*' as Min Field Width >>>>>>>>>>\n");
	printf("---- %%*s ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%*s %*s %*s", 20, s, -20, s, 0, s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%*s %*s %*s", 20, s, -20, s, 0, s));

	printf("<<<<<<<<<< Check '*' as Precisions >>>>>>>>>>\n");
	printf("---- %%.*s ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%.*s %.*s %.*s", 20, s, -20, s, 0, s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%.*s %.*s %.*s", 20, s, -20, s, 0, s));

	printf("<<<<<<<<<< Check '*' as Both with >>>>>>>>>>\n");
	printf("---- %%*.*s ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%*.*s %*.*s %*.*s", 20, 20, s, 0, -20, s, 20, 0, s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%*.*s %*.*s %*.*s", 20, 20, s, 0, -20, s, 20, 0, s));

	printf("========== Get Crazy ==========\n\n");
	printf("<<<<<<<<<< Any combination of flags and conversions >>>>>>>>>>\n");
	printf("printf    :");
	printf("|%d\n", printf("c%ccs%ssp%ppd%ddi%iiu %u ux %x xX %X X%%%%", 'z', "abc", c, 123, 123, 123, 123, 123));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("c%ccs%ssp%ppd%ddi%iiu %u ux %x xX %X X%%%%", 'z', "abc", c, 123, 123, 123, 123, 123));

	printf("<<<<<<<<<< Duplicate flags >>>>>>>>>>\n");
	printf("---- %%-00-0-0*.*s ----\n");
	printf("printf    :");
	printf("|%d\n", printf("%-00-0-s", s));
	printf("ft_printf :");
	fflush(stdout);
	printf("|%d\n\n", ft_printf("%-00-0-0s", s));
}
