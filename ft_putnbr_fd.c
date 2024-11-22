/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaaziz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:54:28 by ibaaziz           #+#    #+#             */
/*   Updated: 2024/11/22 15:39:34 by ibaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long		nb;
	char	c;

	nb = n;
	if (n < 0)
	{
		nb = nb * - 1;
		write(fd, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(fd, &c, 1);
		return;
	}
	else
		ft_putnbr_fd(nb / 10, fd);
	c = nb % 10 + '0';
	write(fd, &c, 1);
}

/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
}*/
