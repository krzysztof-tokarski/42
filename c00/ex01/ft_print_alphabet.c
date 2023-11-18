void ft_print_alphabet(void) {
	char* alphabet = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;
	while (alphabet[i] != '\0') {
    write(1, &alphabet[i], 1);
    i++;
	}
}

int main()
{
	ft_print_alphabet();
}
