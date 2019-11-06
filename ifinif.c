/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifinif.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:24:31 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/09 18:24:35 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Магическое число, программа N3. */ 
#include <stdio.h>
#include <stdlib.h> 

int main(void) 
{
  int magic; /* магическое число */
  int guess; /* попытка игрока */

  magic = rand(); /* генерация магического числа */

  printf("Угадай магическое число: ");
  scanf("%d", &guess); 

  if (guess == magic) {
    printf("** Верно **");
    printf("Магическое число равно %d\n", magic);
  }
  else {
    printf("** Неверно, ");
    if(guess > magic) printf("слишком большое\n");
                         /* вложенный if */
    else printf("слишком малое\n");
  }

  return 0;
}
