int *num = (int *)malloc(sizeof(int));
float *flt = (float *)malloc(sizeof(float));
char *ch = (char *)malloc(sizeof(char));

if (num && flt && ch) 
{
	*num = 10;
	*flt = 3.14;
	*ch = 'A';

	printf("num: %d, flt: %f, ch: %c\n", *num, *flt, *ch);

	free(num);
	free(flt);
	free(ch);
}

char *ft_strdup(const char *s)
{
	char *dup = (char *)malloc((strlen(s) + 1) * sizeof(char));
	if (dup == NULL) return NULL;
}
