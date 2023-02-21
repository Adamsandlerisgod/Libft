/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:11:16 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/20 21:31:14 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd(("-2147483648"), fd);
	}
	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(((n / 10) + '0'), fd);
		ft_putnbr_fd(((n % 10) + '0'), fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((n + '0'), fd);
}
/*		
int main()
{
    int n = 12345;  // example input integer
    int fd = STDOUT_FILENO;  // example file descriptor (stdout)

    ft_putnbr_fd(n, fd);  // output integer to specified file descriptor

    return 0;
}
*/
