/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_of_spaces.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:14:31 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/14 21:14:33 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Подсчет количества пробелов */
#include <stdio.h>

int main(void)
{
  char s[80];
  char *str;
  int space;

  printf("Введите строку: ");
  gets(s);
  str = s; 

  for(space=0; *str; str++) {
    if(*str != ' ') 
        continue;
    space++;
  }
  printf("%d пробелов\n", space);

  return 0;
}
