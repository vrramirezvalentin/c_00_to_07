// #include <stdio.h>

char    *ft_strminimize(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if (str[i] > 64 && str[i] < 91)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

char    *ft_strcapitalize(char *str)
{
    int i;
    i = 0;

    ft_strminimize(str);
    while(str[i] != '\0')
    {
        if(!((str[i] > 47 && str[i] < 58) || (str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))) 
        {
            if(str[i + 1] != '\0' && (str[i + 1] > 96 && str[i + 1] < 123))
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }
    return str; 
}

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//         printf("%s\n", ft_strcapitalize(argv[1]));
//     else
//         printf("Echec\n");
//     return 0;
// }