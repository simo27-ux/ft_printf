#include "ft_printf.h"

size_t	ft_strlen_pf(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_bzero_pf(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

void	*ft_calloc_pf(size_t number, size_t size)
{
	void	*dest;

	if (size && number > SIZE_MAX / size)
		return (NULL);
	dest = malloc(number * size);
	if (!dest)
		return (NULL);
	ft_bzero_pf(dest, number * size);
	return (dest);
}

static size_t	ft_len(unsigned long long n, char *base)
{
	size_t	len;
	size_t	base_len;

	len = 1;
	base_len = ft_strlen_pf(base);
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_aux_pf(unsigned long long n, char *base)
{
	char	*str;
	size_t	num_len;
	size_t	base_len;

	base_len = ft_strlen_pf(base);
	if (base_len < 2)
		return (NULL);
	num_len = ft_len(n, base);
	str = ft_calloc_pf(num_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (num_len > 0)
	{
		num_len--;
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}