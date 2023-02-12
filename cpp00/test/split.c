#include <stdio.h>

int main()
{
	char *str = "hello world !!";
	char **tab;
	int i = 0;
	tab = ft_split(str);
	while(tab[i])
	{
		printf("%s\n",tab[i]);
		i++;
	}
	return 0;
}