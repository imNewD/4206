int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                ft_putchar(argv[i][j]);
                j++;
            }
            i++;
            ft_putchar('\n');
        }
    }
    return (0);
}
