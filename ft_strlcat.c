#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i] && len < dstsize)
	{
		i++;
		len++;
	}
	while (src[j] && len < dstsize)
		{
			dst[i] = src[j];
			i++;
			j++;
			len ++;
		}
	if (len < dstsize)
		dst[i] = '\0';
	return (len);
}
