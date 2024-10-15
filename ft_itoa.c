#include "libft.h"

static int	ft_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += 1;
	}
	if (n == 0)
		return 1;
	while(n >= 10)
	{
		n /= 10;
		len ++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		len;

	len = ft_len(n);
	i = len;
	res = malloc(len * sizeof(char) + 1);
	if (!res)
		return (NULL);
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	if (n == -2147483648)
		return "-2147483648";
	while (n != 0)
	{
		res[i--] = (n % 10) + '0';
		n /= 10;
	}
	res[len + 1] = '\0';
	return (res);
}

#include <stdio.h>
int main(void)
{
	int n = 100;
	char *res = ft_itoa(n);
	printf("%s", res);
}
