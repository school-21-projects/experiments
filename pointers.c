/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:48:34 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/09 14:48:38 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main()
{
    int target;
    int source;
    int *ptr; //указатель на переменную типа int

    source = 10;
    ptr = &source; //переменной типа int, на которую указывает указатель, присваивается адрес, по которому расположена перемелнная source
    target = *ptr; //Оператор * является унарным оператором, он возвращает значение объекта, расположенного по указанному адресу. Т.е. оператор записывает значение переменной source в переменную target.
    ft_putnbr(target);
    return (0);
}

// Программа записывает значение source в переменную target
