if(argc > 0){
  
  t_data_checker *checker;
    checker = (t_data_checker*)malloc(sizeof(t_data_checker));
    ft_memset(checker,0,sizeof(t_data_checker));
    checker->args = malloc(sizeof(int)* (argc-1));
  int i = 1;
  checker->incre = 0;
    while(i < argc){
        if(argv[checker->incre] == NULL)
          break;
       checker->args[checker->incre] = ft_atoi(argv[i]);
        checker->incre++;
        i++;
    }
    
i = 0;
while( i < checker->incre){
ft_printf("%d\n",checker->args[i]);
i++;
}

  

}