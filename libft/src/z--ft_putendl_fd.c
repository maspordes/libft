void ft_putendl_fd(char *s, int fd)
{
    if (s)
    {
        ft_putstr_fd(s, fd);   // Write the string
        write(fd, "\n", 1);    // Write the newline character
    }
}
