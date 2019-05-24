void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *srcptr = (char *)src;
	char *destptr = (char *)dest;

	if(destptr < srcptr)
		while(n)
		{
			*destptr = *srcptr;
			*destptr++;
			*srcptr++;
			n--;
		}
	else if(srcptr < destptr && destptr < srcptr + n)
	{
		srcptr += (n + 1);
		destptr += (n + 1);
		while(n--)
		{
			*destptr = *srcptr;
			*destptr--;
			*srcptr--;
		}
	}
	return dest;
}

