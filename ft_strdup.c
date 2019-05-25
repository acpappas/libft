char	*ft_strdup(const char *s)
{
	char *dup;
	size_t len;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(len);

	if(dup == '\0')
	return NULL;

	ft_memcpy(dup, s, len);
	
return dup;
}


