void ft_print_numbers(void) {
	int i = 0;
	while (i <= 9) {
		char digit = '0' + i;
		write(1, &digit, 1);
		i++;
	}
}

int main()
{
	ft_print_numbers();
}
