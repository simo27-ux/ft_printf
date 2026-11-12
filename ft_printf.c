int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')

			if (format[i + 1] == 's')

			if (format[i + 1] == 'p')

			if (format[i + 1] == 'd')

			if (format[i + 1] == 'i')

			if (format[i + 1] == 'u')

			if (format[i + 1] == 'x')
			
			if (format[i + 1] == 'X')

			if (format[i + 1] == '%')
			
		}
		else
		{
			write(1, &format[i], 1);
			i++;
		}
		count++;
	}
}