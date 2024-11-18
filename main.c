#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isprint(int c);
int	ft_isascii(int c);

int	main()
{
	printf("isalpha 1, res : %i\n", ft_isalpha('a'));
	printf("isalpha 1, res : %i\n", ft_isalpha('z'));
	printf("isalpha 1, res : %i\n", ft_isalpha('A'));
	printf("isalpha 1, res : %i\n", ft_isalpha('G'));
	printf("isalpha 1, res : %i\n", ft_isalpha('Z'));
	printf("isalpha 0, res : %i\n", ft_isalpha(64));
	printf("isdig 0, res : %i\n", ft_isdigit('a'));
	printf("isdig 1, res : %i\n", ft_isdigit('0'));
	printf("isdig 1, res : %i\n", ft_isdigit('9'));
	printf("isdig 1, res : %i\n", ft_isdigit('5'));
	printf("isdig 0, res : %i\n", ft_isdigit(47));
	printf("isalnum 1, res : %i\n", ft_isalnum('a'));
	printf("isalnum 1, res : %i\n", ft_isalnum('z'));
	printf("isalnum 0, res : %i\n", ft_isalnum(64));
	printf("isalnum 1, res : %i\n", ft_isalnum('a'));
	printf("isalnum 1, res : %i\n", ft_isalnum('0'));
	printf("isalnum 0, res : %i\n", ft_isalnum(0));
	printf("isascii 1, res : %i\n", ft_isascii('a'));
	printf("isascii 1, res : %i\n", ft_isascii(0));
	printf("isascii 1, res : %i\n", ft_isascii(127));
	printf("isascii 1, res : %i\n", ft_isascii(89));
	printf("isascii 0, res : %i\n", ft_isascii(-56));
	printf("isprint 1, res : %i\n", ft_isprint('a'));
	printf("isprint 0, res : %i\n", ft_isprint(31));
	printf("isprint 0, res : %i\n", ft_isprint(127));
	printf("isprint 1, res : %i\n", ft_isprint(32));
	printf("isprint 1, res : %i\n", ft_isprint(126));

}
