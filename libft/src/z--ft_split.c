static size_t  word_count(const char *s, char c)
{
    size_t  count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}

static char    *word_dup(const char *s, size_t start, size_t end)
{
    char    *word = malloc(end - start + 1);
    size_t  i = 0;

    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t  i = 0, j = 0, start = 0;

    if (!s || !(arr = malloc((word_count(s, c) + 1) * sizeof(char *))))
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > start)
            arr[j++] = word_dup(s, start, i);
    }
    arr[j] = NULL;
    return (arr);
}
