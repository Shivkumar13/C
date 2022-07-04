#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 0; i < 100; i = i * 2)
        for(j = 100; j >= 0; --j)
            printf("i = %d, j = %d\n", i , j);
    exit(0);

}

/*

Track i = 0
    checking i < 100 : TRUE
        Track j = 100
            checking j >= 0: TRUE
                i = 0, j = 100
        --j
        Track j = 99
            checking j >= 0: TRUE
                i = 0, j = 99
        --j
        Track j = 98
            checking j >= 0: TRUE
                i = 0, j = 98
        --j
        Track j = 97
            checking j >= 0: TRUE
                i = 0, j = 97
        --j
        Track j = 96
            checking j >= 0: TRUE
                i = 0, j = 96
        --j 
        Track j = 95
            checking j >= 0: TRUE
                i = 0, j = 95
        --j
        Track j = 94
            checking j >= 0: TRUE
                i = 0, j = 94
        --j
        Track j = 93
            checking j >= 0: TRUE
                i = 0, j = 93 
        --j
        Track j = 92
            checking j >= 0: TRUE
                i = 0, j = 92
        --j
        Track j = 91
            checking j >= 0: TRUE
                i = 0, j = 91
        --j
        Track j = 90
            checking j >= 0: TRUE
                i = 0, j = 90
        --j
        Track j = 89
            checking j >=0 : TRUE
                i = 0, j = 89
        --j
        Track j = 88
            checking j >=0 : TRUE
                i = 0, j = 88
        --j
        Track j = 87
            checking j >= 0 : TRUE
                i = 0, j = 87
        --j
        Track j = 86
            checking j >= 0: TRUE
                i = 0, j = 86
        --j
        Track j = 87
            checking  j >= 0: TRUE
                i = 0, j = 87
        --j
        Track j = 86
            checking j >= 0: TRUE
                i = 0, j = 86
        --j
        Track j = 85
            checking j >=0 : TRUE
                i = 0, j = 85
        --j
        Track j = 84
            checking j >= 0 : TRUE
                i = 0, j = 84
        --j
        Track j = 83
            checking j >= 0: TRUE
                i = 0, j = 83
        --j
        Track j = 82
            checking j >= 0: TRUE
                i = 0, j = 82
        --j
        Track j = 81
            checking j >= 0 : TRUE
                i = 0, j = 81
        --j
        Track j = 80
            checking j >= 0; TRUE
                i = 0, j = 80
        --j
        Track j = 79
            checking j >= 0: TRUE
                i = 0, j = 79
        --j
        Track j = 78
            checking j >= 0: TRUE
                i = 0, j = 78
        --j
        Track j = 77
            checking j >= 0: TRUE
                i = 0, j = 77
        --j
        Track j = 76
            checking j >= 0: TRUE
                i = 0, j = 76
        --j
        Track j = 75
            checking j >= 0: TRUE
            i = 0, j = 75
        --j
        Track j = 74
            checking j >=0 : TRUE
            i = 0, j = 74
        --j
        Track j = 73
            checking j >=0 : TRUE
                i  =0, j = 73
        --j
        Track j = 72
            checking j >=0 : TRUE
                i = 0, j = 72
        --j
        Track j = 71
            checking j >= 0: TRUE
                i =0, j = 71
        --j
        Track j = 70
            checking j >= 0: TRUE
                i = 0, j = 70
        --j
        Track j = 69
            checking j >= 0: TRUE
                i = 0, j = 69
        --j
        Track j = 68
            checking j >= 0: TRUE
                i = 0, j = 68
        --j
        Track j = 67
            checking j >= 0: TRUE
                i  =0, j = 67
        --j
        Track j = 66
            checking j >= 0: TRUE
                i = 0, j = 66
        --j
        Track j = 65
            checking j >= 0: TRUE
                i = 0, j = 65
        --j
        Track j = 64
            checking j >= 0: TRUE
                i = 0, j = 64
        --j
        Track j = 63
            checking j >= 0: TRUE
                i = 0, j = 63
        --j
        Track j = 62
            checking j >= 0: TRUE
                i = 0, j = 62
        --j
        Track j = 61
            checking j >= 0: TRUE
                i = 0, j = 61
        --j
        Track j = 60
            checking j >= 0: TRUE
                i = 0, j = 60
        --j
        Track j = 59
            checking j >= 0: TRUE
                i = 0, j = 59
        --j
        Track j = 58
            checking j >= 0: TRUE
                i = 0, j = 58
        --j
        Track j = 57
            checking j >= 0: TRUE
                i  =0 , j = 57
        --j
        Track j = 56
            checking j >= 0: TRUE
                i =0, j = 56
        --j
        Track j = 55
            checking j >= 0: TRUE
                i =0, j = 55
        --j
        Track j = 54
            checking j >= 0: TRUE
                i = 0, j = 54
        --j
        Track j = 53
            checking j >= 0: TRUE
                i =0 , j = 53
        --j
        Track j = 52
            checking j >= 0: TRUE
                i =0, j = 52
        --j
        Track j = 51
            checking j >= 0: TRUE
                i =0, j = 51
        --j 
        Track j = 50
            checking j >=0 : TRUE
                i = 0, j = 50
        --j
        Track j = 49
            checking j >= 0: TRUE
                i =0, j = 49
        --j
        Track j = 48
            checking j >= 0: TRUE
                i = 0, j = 48
        --j
        Track j = 47
            checking j >= 0: TRUE
                i = 0, j = 47
        --j
        Track j = 46
            checking j >= 0: TRUE
                i = 0, j = 46
        --j
        Track j = 45
            checking j >= 0: TRUE
                i =0, j = 45
        --j
        Track j = 44
            checking j >=0 : TRUE
                i = 0, j = 44
        --j
        Track j = 43
            checking j >= 0: TRUE
                i = 0, j = 43
        --j
        Track j = 42
            checking j >= 0: TRUE
                i = 0, j = 42
        --j
        Track j = 41
            checking j >= 0: TRUE
                i =0, j = 41
        --j
        Track j = 40
            checking j >= 0: TRUE
                i = 0, j = 40
        --j
        Track j = 39
            checking j >= 0: TRUE
                i =0, j = 39
        --j
        Track j = 38
            checking j >= 0: TRUE
                i =0, j = 38
        --j
        Track j = 37
            checking j >=0 : TRUE
                i =0, j = 37
        --j
        Track j = 36    
            checking j >=0 : TRUE
                i =0, j = 36
        --j
        Track j = 35
            checking j >= 0: TRUE
                i =0, j = 35
        --j
        Track j = 34
            checking j >=0 : TRUE
                i =0, j = 34
        --j
        Track j = 33
            checking j >= 0: TRUE
                i =0, j =33
        --j
        Track j = 32
            checking j >= 0: TRUE
                i =0, j = 32
        --j
        Track j = 31
            checking j >= 0: TRUE
                i =0, j = 31
        --j
        Track j = 30
            checking j >= 0: TRUE
                i = 0, j = 30
        --j
        Track j = 29
            checking j >= 0: TRUE
                i = 0, j = 29
        --j
        Track j = 28
            checking j >= 0: TRUE
                i = 0, j = 28
        --j
        Track j = 27
            checking j >= 0: TRUE
                i = 0, j = 27
        --j
        Track j = 26
            checking j >= 0: TRUE
                i = 0, j = 26
        --j
        Track j = 25
            checking j >= 0: TRUE
                i = 0, j = 25
        --j
        Track j = 24
            checking j >= 0: TRUE
                i = 0, j = 24
        --j
        Track j = 23
            checking j >= 0: TRUE
                i =0, j = 23
        --j
        Track j = 22
            checking j >= 0: TRUE
                i = 0, j = 22
        --j
        Track j = 21
            checking j >= 0: TRUE
                i =0 , j = 21
        --j
        Track j = 20:
            checking j >= 0: TRUE
                i = 0, j = 20
        --j
        Track j = 19:
            checking j >= 0: TRUE
                i = 0, j = 19
        --j
        Track j = 18:
            checking j >= 0: TRUE
                i = 0, j = 18
        --j
        Track j = 17:
            checking j >= 0: TRUE
                i = 0, j = 17
        --j
        Track j = 16
            checking j >= 0: TRUE
                i = 0, j = 16
        --j
        Track j = 15
            checking j >= 0: TRUE 
                i = 0, j = 15
        --j
        Track j = 14
            checking j >= 0 : TRUE
                i  = 0, j = 14
        --j
        Track j = 13
            checking j >= 0: TRUE
                i = 0, j = 13
        --j
        Track j = 12
            checking j >= 0: TRUE
                i =0, j = 12
        --j
        Track j = 11
            checking j >= 0: TRUE
                i = 0, j =11
        --j
        Track j = 10
            checking j >= 0: TRUE
                i = 0, j = 10
        --j
        Track j = 9
            checking j >= 0: TRUE
                i  = 0, j = 9
        --j
        Track j = 8
            checking j >= 0 : TRUE
                i = 0, j = 8
        --j
        Track j = 7
            checking j >= 0: TRUE
                i = 0, j = 7
        --j
        Track j = 6
            checking j >= 0: TRUE
                i = 0, j = 6
        --j
        Track j = 5
            checking j >= 0: TRUE
                i = 0, j = 5
        --j
        Track j = 4
            checking j >= 0: TRUE
                i = 0, j = 4
        --j
        Track j = 3
            checking j >= 0: TRUE
                i = 0, j = 3
        --j
        Track j = 2
            checking j >= 0: TRUE
                i = 0, j = 2
        --j
        Track j = 1
            checking j >= 0: TRUE
                i = 0, j = 1
        --j
        Track j = 0
            checking j >= 0: TRUE
                i = 0 , j = 0
        --j
        Track j = -1
            checking j >= 0 : FALSE

i = i * 2: i = 0 * 2
    Track i = 0
*/