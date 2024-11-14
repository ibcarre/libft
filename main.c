#include <stdio.h>

int	main()
{
	printf("isalpha 1, res : %i\n", ft_isalpha('a'));
	printf("isalpha 1, res : %i\n", ft_isalpha('z'));
	printf("isalpha 1, res : %i\n", ft_isalpha('A'));
	printf("isalpha 1, res : %i\n", ft_isalpha('G'));
	printf("isalpha 1, res : %i\n", ft_isalpha('Z'));
	printf("isalpha 0, res : %i\n", ft_isalpha(65));
	printf("isdig 0, res : %i\n", ft_isdigit('a'));
	printf("isdig 1, res : %i\n", ft_isdigit('0'));
	printf("isdig 1, res : %i\n", ft_isdigit('9'));
	printf("isdig 1, res : %i\n", ft_isdigit('5'));
	printf("isdig 0, res : %i\n", ft_isdigit(47));

}
