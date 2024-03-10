#include <iostream>

int	main(int argc, char** argv)
{	
	int j;
	int k;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			j = 0;
			while (isspace(*((*(argv + i)) + j)))
				j++;
			k = (std::strlen(argv[i]) - 1);
			while (isspace(*((*(argv + i)) + k)))
				k--;
			while (j <= k)
			{
				std::cout << (char)toupper(*((*(argv + i)) + j));
				j++;
			}
			if (i < argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}