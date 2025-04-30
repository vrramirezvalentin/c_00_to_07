int	ft_str_is_alpha(char *str){

	int i = 0;
	int a = 0;

	while(str[i]) {
		if((str[i] >= 0 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
	 		a++;
		}
		i++;
   	}

    if(a == 0){
        return 1;
    }else{
        return 0;
    }
}
