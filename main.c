/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:02:52 by zwalad            #+#    #+#             */
/*   Updated: 2021/11/25 21:02:58 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "lib_printf.h"
#include	<unistd.h>

/*
int    myprint(const char *str, ...)
{
	va_list args;
	int i;
	int size;
	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{
		//while (str[i] != '%' && str[i])
		//{
		//	ft_putchar(str[i]);
		//	i++;
		//	size++;
		//}
		if (str[i] == '%')
		{	
			i++;
			if (str[i] == 'c')
				size += ft_putchar(va_arg(args, int));
			else if (str[i] == 'd')
				size += ft_putnbr(va_arg(args, int));
			else if (str[i] == 's')
				size += ft_putstr(va_arg(args, char *));
			else if (str[i] == '%')
				size += ft_putchar(str[i]);
			else if (str[i] == 'i')
				size += ft_putnbr(va_arg(args, int));
			else if (str[i] == 'u')
				size += ft_putuns(va_arg(args, unsigned	int));
			else if (str[i] == 'x')
				size += ft_mixa(va_arg(args, unsigned int), "0123456789abcdef");
			else if (str[i] == 'X')
				size += ft_maxa(va_arg(args, unsigned int), "0123456789ABCDEF");
			else if (str[i] == 'p')
				size += ft_pupo(va_arg(args, unsigned int), "0123456789abcdef");
		}
		else 
		{
			ft_putchar(str[i]);
			size++;
		}
		i++;
	}
	va_end(args);
	return (size);
}

int main()
{
	int k;
	k = printf("size-->%d",myprint("pf: a%%aa %s %s %d %p \n", "hgtrf\n", "hello", 125, 125));
	return (0);
}
*/