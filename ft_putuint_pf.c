#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_aux_pf(num, "0123456789");
	if (!str)
		return ;
	ft_putstr_pf(str, counter);
	free(str);
}