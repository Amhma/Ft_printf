/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_pct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:00:05 by amahla            #+#    #+#             */
/*   Updated: 2022/05/02 13:00:06 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	init_ptrflag(t_flag *fg)
{
	fg->zero = 0;
	return (2);
}

int	init_pctflags(t_flag *fg)
{
	fg->point = 0;
	if (fg->minus)
		fg->zero = 0;
	return (0);
}

void	ft_fill_ptr(t_flag *fg, char *str, unsigned long long nb)
{
	int	size;

	if (fg->minus)
		size = 2;
	else
		size = ft_strlen(str) - fg->nbrlen;
	if (fg->nbrlen)
		ft_ptrtoa(nb, str, size);
	str[size - 1] = 'x';
	str[size - 2] = '0';
}

char	*ft_printf_ptr(t_flag *fg, void *ptr)
{
	char				*str;
	unsigned long long	nb;
	int					option;

	str = NULL;
	nb = (unsigned long long)ptr;
	option = init_ptrflag(fg);
	fg->nbrlen = ptrlen(nb);
	if (nb == 0 && fg->point && !(fg->precision))
		fg->nbrlen = 0;
	str = ft_flag(fg, option);
	if (!str)
	{
		str = ft_calloc(fg->nbrlen + option + 1, sizeof(char));
		ft_memset(str, '0', fg->nbrlen + option);
	}
	ft_fill_ptr(fg, str, nb);
	return (str);
}

char	*ft_print_pct(t_flag *fg)
{
	char	*str;
	int		option;

	str = NULL;
	option = init_pctflags(fg);
	fg->nbrlen = 1;
	str = ft_flag(fg, option);
	if (!str)
	{
		str = ft_calloc(fg->nbrlen + option + 1, sizeof(char));
		ft_memset(str, '0', fg->nbrlen + option);
	}
	if (fg->minus)
		str[0] = '%';
	else
		str[ft_strlen(str) - 1] = '%';
	return (str);
}
