# Practice Programs

Answer the following questions for every program given below.  

* Will the program compile?
* How many times will the loop iterate?
* What will be the values of all the variables used?
* What will be the output of the program?



1. ```c
   #include <stdio.h>
   int main()
   {
       int i = 0, j = 0;
       while (i < 5, j < 10)
       {
           printf("i is %d, j is %d\n", i, j);
           i++;
           j++;
       }
       printf("%d %d", i, j);
   }
   ```

2. ```c
   #include <stdio.h>
   int main()
   {
       int i = 0, j = 0;
       while (i < 5 & j < 10)
       {
           i++;
           j++;
       }
       printf("%d %d", i, j);
   }
   ```

3. ```c
   #include<stdio.h>
   int main()
   {
       int up, down;
       for (up = 0, down = 10 ; up < down ; up++, down--)
       {
           printf("up = %d, down = %d\n", up, down);
       }
       return 0;
   }
   ```

4. ```c
   #include <stdio.h>
   int main()
   {
       int i, j, rows;
   
       rows = 5;
   
       for(i=rows; i>=1; --i)
       {
           for(j=1; j<=i; ++j)
           {
               printf("%d ",j);
           }
           printf("\n");
       }
   
       return 0;
   }
   ```

5. ```c
   #include <stdio.h>
   int main()
   {
       int i, j, rows;
   
       rows = 5;
   
       for(i=rows; i>=1; --i)
       {
           for(j=1; j<=i; ++j)
           {
               printf("* ");
           }
           printf("\n");
       }
   
       return 0;
   }
   ```

6. ```c
   #include <stdio.h>
   int main()
   {
       int i, j, rows;
   
       rows = 5;
   
       for(i=1; i<=rows; ++i)
       {
           for(j=1; j<=i; ++j)
           {
               printf("%d ",j);
           }
           printf("\n");
       }
       return 0;
   }
   ```

7. ```c
   #include<stdio.h>
   int main()
   {
       int i;
       int j = 1;
       while (j < 10)
       {
           i = 1;
           while (i < j)
           {
               printf("* ", i);
               i++;
           }
           printf("\n", j);
           j++;
       }
       return 0;
   }
   ```

8. ```c
   #include <stdio.h>
   int main()
   {
       int tally = 0;
       for( ; ; )
       {
           if(tally == 10)
               break;
           printf("%d ", ++tally);
       }
       return 0;
   }
   ```

9. ```c
   #include<stdio.h>
   int main()
   {
       int a;
       for(a = 1 ; a <= 10 ; a++)
       {
           printf("%d", a);
           printf("\n");
       }
       return 0;
   }
   ```

10. ```c
    #include <stdio.h>
    int main()
    {
        int i;
        for (i = 1; i > 0; i++)
            printf("%d\n", i);
    }
    ```

11. ```c
    #include <stdio.h>
    void main()
    {
        double k;
        for (k = 0.0; k < 3.0; k++);
            printf("%lf", k);
    }
    ```

12. ```c
    #include <stdio.h>
    void main()
    {
        char cnt = 0;
        for ( ; cnt++ ; printf("%d", cnt) );
            printf("%d",cnt);
    }
    ```

13. ```c
    #include <stdio.h>
    void main()
    {
        int i = 0, j = 0;
        for (i = 0 ; i < 5 ; i++)
        {
            for (j = 0 ; j < 1 ; )
            {
                break;
            }
            printf("Hello\n");
        }
    }
    ```

14. ```c
    #include<stdio.h>
    int main()
    {
        char ch;
        for (ch = '*' ; ch != '\n' ; ch = getchar())
        {
            printf("%c", ch);
        }
        return 0;
    }
    ```

15. ```c
    #include<stdio.h>
    int main()
    {
        int a;
        for (a = 2 ; a <= 1000 ; a = a * a)
        {
            printf("%d ", a);
        }
        return 0;
    }
    ```

16. ```c
    #include <stdio.h>
    int main()
    {
        int rows, i, j, number= 1;
    
        rows = 5;
    
        for(i=1; i <= rows; i++)
        {
            for(j=1; j <= i; ++j)
            {
                printf("%d ", number);
                ++number;
            }
            printf("\n");
        }
        return 0;
    }
    ```

17. ```c
    #include<stdio.h>
    int main()
    {
        int  i = 5;
        while (i--)
        {
            printf("The value of i is %d\n", i);
        }
        return 0;
    }
    ```

18. ```c
    #include<stdio.h>
    int main()
    {
        int i = 5;
        while(i > 0)
        {
            printf("%d\n", i);
            i--;
        }
        return 0;
    }
    
    ```

19. ```c
    #include<stdio.h>
    int main()
    {
        int n;
        for (n = 7 ; n != 0 ; n--)
            printf("n = %d", n--);
        return 0;
    }
    ```

20. ```c
    #include<stdio.h>
    int main()
    {
        int a = 1;
        while (42)
        {
            printf("a is %d ", a);
            a = a * 2;
            if (a > 100)
            {
                break;
            }
            else if (a == 64)
            {
                continue;
            }
            printf(", a is not 64\n");
        }
    }
    ```
