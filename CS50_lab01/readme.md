This is CS50
CS50’s Introduction to Computer Science


Population Growth

Implementation Details
Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.

Your program should first prompt the user for a starting population size.
If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
Your program should then prompt the user for an ending population size.
If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.


Hints
If you want to repeatedly re-prompt the user for the value of a variable until some condition is met, you might want to use a do ... while loop. For example, recall the following code from lecture, which prompts the user repeatedly until they enter a positive integer.

```c
  int n;
  do
  {
      n = get_int("Positive Integer: ");
  }
  while (n < 1);
```
  
How might you adapt this code to ensure a start size of at least 9, and an end size of at least the start size?

To declare a new variable, be sure to specify its data type, a name for the variable, and (optionally) what its initial value should be.
For example, you might want to create a variable to keep track of how many years have passed.
To calculate how many years it will take for the population to reach the end size, another loop might be helpful! Inside the loop, you’ll likely want to update the population size according to the formula in the Background, and update the number of years that have passed.

To print an integer n to the terminal, recall that you can use a line of code like

```c
  printf("The number is %i\n", n);
```
  
to specify that the variable n should fill in for the placeholder %i.


How to Test Your Code
Your program should behave per these examples below.

```bash
$ ./population
Start size: 1200
End size: 1300
Years: 1
```

```bash
$ ./population
Start size: -5
Start size: 3
Start size: 9
End size: 5
End size: 18
Years: 8
```

```bash
$ ./population
Start size: 20
End size: 1
End size: 10
End size: 100
Years: 20
```

```bash
$ ./population
Start size: 100
End size: 1000000
Years: 115
```
