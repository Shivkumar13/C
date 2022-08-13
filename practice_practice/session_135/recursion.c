test_function(8) 
    printf exicuted     ===> n = 8
    test_function(7) 
        printf exicuted     ===> n = 7
        test_function(6)
            printf exicuted     ===> n = 6
            test_function(5)
                printf exicuted     ===> n = 5
                test_function(4)
                    printf exicuted     ===> n = 4
                    test_function(3)
                        printf exicuted     ===> n = 3
                        test_function(2)
                            printf exicuted     ===> n = 2
                            test_function(1)
                                printf exicuted     ===> n = 1
                                test_function(0)
                                    if(n==0) : (0==0) : TRUE
                                        return;
                                printf exicuted     ===> returning form n=1
                            printf exicuted     ===> returning form n=2
                        printf exicuted     ===> returning form n

                    printf exicuted     ===> returning form n=4
                printf exicuted     ===> returning form n=5
            printf exicuted     ===> returning form n=6
        printf exicuted     ===> returning form n=7
    printf exicuted     ===> returning form n=8
return(0);