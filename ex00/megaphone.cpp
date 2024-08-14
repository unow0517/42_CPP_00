#include <iostream>
#include <cctype>

char to_upper(char c)
{
	return std::toupper(static_cast<unsigned char>(c));
}
int main(int argc, char **argv)
{
	int i,j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;	
	while (++i < argc)
	{
		while (argv[i][j])
		{
			std::cout << to_upper(argv[i][j]) ;
			j++;
		}
		j = 0;
		if (i + 1 != argc)
			std::cout << ' ' ;
	}

	return 0;
}