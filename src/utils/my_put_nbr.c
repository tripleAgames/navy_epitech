/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** task07
*/

#include	"navy.h"
#include	"utils.h"

int	my_put_nbr(int nb)
{
	if (nb < 0) {
		nb *= -1;
		my_putchar('-');
	}
	if (nb > 9)
		my_put_nbr(nb / 10);
	my_putchar((nb % 10) + 48);
	return (0);
}
