# Practice Programs for loops

Try to implement the following programs with all of the three looping constructs i.e **while**, **for** and **do-while**.  

1. Study the program given below.

   ```c
   #include<stdio.h>
   int main()
   {
       int x = 1;
       int limit = 60;
       int val = 1;
       while(val < limit)
       {
           x *= 2;
       }
       printf("%d", x);
       return 0;
   }
   ```

   Now, answer the following questions: -

   1. Will the above program compile? [Is there any kind of error in the program?]
   2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
   3. What will be the range of values for variables `x`, `limit` and `val`.
   4. What will be the output of the above code?
   5. What does the program do?




2. Study the program given below.

```c
#include<stdio.h>
int main()
{
    int a = 1;
    while (a <= 200)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}
```

Now, answer the following questions: -

1. Will the above program compile? [Is there any kind of error in the program?]
2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
3. What will be the range of values for variable `a`.
4. What will be the output of the above code?
5. What does the program do?



3. Study the program given below.

   ```c
   #include<stdio.h>
   int main()
   {
       int n = 80;
       int factor = 2;
       while (n % factor != 0)
       {
           factor++;
       }
       printf("The first factor of %d is %d.\n", n, factor);
       return 0;
   }
   ```

   Now, answer the following questions: -

   1. Will the above program compile? [Is there any kind of error in the program?]
   2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
   3. What will be the range of values for variables `n` and `factor`.
   4. What will be the output of the above code?
   5. What does the program do?

4. Study the program given below.

   ```c
   #include <stdio.h>
   int main()
   {
       char c;
       for(c = 'A'; c <= 'Z'; ++c)
       {
           printf("%c ", c);
       }    
       return 0;
   }
   ```

   Now, answer the following questions: -

   1. Will the above program compile? [Is there any kind of error in the program?]
   2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
   3. What will be the range of values for variable `c`.
   4. What will be the output of the above code?
   5. What does the program do?

5. Study the program given below.

   ```c
   #include <stdio.h>
   int main()
   {
       int number = 144, i;
       printf("Factors of %d are: \n", number);
       for(i = 1 ; i <= number ; ++i)
       {
           if (number % i == 0)
           {
               printf("%d ",i);
           }
       }
       return 0;
   }
   ```

   Now, answer the following questions: -

   1. Will the above program compile? [Is there any kind of error in the program?]
   2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
   3. What will be the range of values for variable `i`.
   4. What will be the output of the above code?
   5. What does the program do?

6. Study the program given below.

   ```c
   #include <stdio.h>
   int main()
   {
       int i, n, t1 = 0, t2 = 1, nextTerm;
       n = 10;
       printf("Fibonacci Series: ");
       for (i = 1; i <= n; ++i)
       {
           printf("%d, ", t1);
           nextTerm = t1 + t2;
           t1 = t2;
           t2 = nextTerm;
       }
       return 0;
   }
   ```



The output of the above program is as follows
   > `Fibonacci Series:`
   >
   > `0, 1, 1, 2, 3, 5, 8,13, 21, 34,`
   >
   > This series is known as Fibonacci Series. 
   >
   > The n^th^ term is the sum of the (n-1)^th^ term and the (n-2)^th^ term.
   >
   > $n = (n-1) + (n-2)$
   >
   > The first two terms of the series are already defined as `0` and `1`.
   >
   > You can calculate the other terms of the series by adding the two terms, 
   >
   > `0 + 1 = 1`
   >
   > `1 + 1 = 2`
   >
   > `1 + 2 = 3`
   >
   > `2 + 3 = 5`
   >
   > and so on...

   Now, answer the following questions: -

      1. Will the above program compile? [Is there any kind of error in the program?]
      2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
      3. What will be the range of values for variables `i`, `n`, `t1`, `t2` and `nextTerm`.
      4. What will be the output of the above code?
      5. What does the program do?



7. Study the program given below.

```c
#include<stdio.h>
int main()
{
    int a;
    for (a = 1 ; a <= 10 ; a++)
    {
        printf("%d", a);
        printf("\n");
    }
    return 0;
}
```

Now, answer the following questions: -

1. Will the above program compile? [Is there any kind of error in the program?]
2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
3. What will be the range of values for variable `a`.
4. What will be the output of the above code?
5. What does the program do?



8. Study the program given below.

```c
#include<stdio.h>
int main()
{
    int a = 1;
    for ( ; a <= 20 ; )
    {
        printf("%d", a);
        a++;
    }
    return 0;
}
/*
*	omitting the initialization and the updation(increment) parts of a for loop 
*	will essentially convert it into a while loop.
*/
```

Now, answer the following questions: -

1. Will the above program compile? [Is there any kind of error in the program?]
2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
3. What will be the range of values for variable `a`.
4. What will be the output of the above code?
5. What does the program do?



9. Study the program given below.

```c
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

Now, answer the following questions: -

1. Will the above program compile? [Is there any kind of error in the program?]
2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
3. What will be the range of values for variable `a`.
4. What will be the output of the above code?
5. What does the program do?



10. Study the program given below.

```c
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

Now, answer the following questions: -

1. Will the above program compile? [Is there any kind of error in the program?]
2. If the program will compile, what will be the number of iterations? [How many times will the loop work?]
3. What will be the range of values for variables `up` and `down`.
4. What will be the output of the above code?
5. What does the program do?

