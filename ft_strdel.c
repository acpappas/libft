#include <string.h>
#include <stdlib.h>

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
return(0);
}
