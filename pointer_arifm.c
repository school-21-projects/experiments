/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_arifm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:02:14 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/17 15:02:17 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int *ptr1;
    int *ptr2;

    ptr1 = &a;
    ptr2 = &b;
    c = *ptr1;
    d = *ptr2;
    e = *ptr2 + 2; // вернул бы значение, расположенное по адресу p1, увеличенное на 1, а не значение по адресу p1+1.
    ft_putnbr(c);
    ft_putchar('\n');
    ft_putnbr(d);
    ft_putchar('\n');
    ft_putnbr(e);
    return (0);
}
