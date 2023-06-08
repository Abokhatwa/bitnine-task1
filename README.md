
# How to Compile and run
First we will need to compile the code by using the following piece of code: 

```bash
make
```
then you will need to run the compiled output file and enter the number which you wanna apply the formula on:
```bash
./output 6 1
```
Here 6 will be used in the program and 1 is for the function number\
You will need to provide a number ranging from 1-3 in the function number to run the code\
Then the output of the functions will be printed on your beautiful console ^_^

# Quick review of each of the functions
func1 is a straightforward recursive implementation of the Fibonacci sequence using the given formula. It has no memoization, meaning it recalculates the same values multiple times. This results in exponential time complexity, making it inefficient for large inputs.

func2 is a recursive implementation with memoization. It uses an array memo to store previously calculated Fibonacci values, avoiding redundant calculations. By checking and utilizing the memoized values, it improves the efficiency significantly. The time complexity is reduced to linear, making it much faster than func1.

func3 is an iterative implementation of the Fibonacci sequence using a bottom-up approach. It uses an array fib to store the Fibonacci values iteratively, starting from the base cases and building up to the desired value. This approach has a linear time complexity and does not require recursion or memoization. It is the most efficient implementation among the three.

In terms of efficiency:

func1 has exponential time complexity.
func2 has linear time complexity with the benefit of memoization.
func3 has linear time complexity and does not require recursion or memoization.
Therefore, func3 is the most efficient implementation in terms of time complexity. It should be the preferred choice for calculating Fibonacci numbers, especially for large inputs.
