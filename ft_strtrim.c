#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]) && s[i])
		i++;
	if (!s)
		return (NULL);
	str = ft_strdup((char *)s + i);
	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while (ft_isspace(str[--i]))
	str[i] = '\0';
	str = ft_strdup(str);
	return (str);
}
