/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 20:33:36 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/15 20:33:39 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_rewrite_num(int *ptr)
{
    *ptr = 9;
}

int     main()
{
    int i;
    int *ptr;

    ptr = &i;
    ft_rewrite_num(ptr);
    ft_putnbr(i);
    return (0);
}