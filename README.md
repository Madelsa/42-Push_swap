# Push_swap

The Push_swap project is a sorting algorithm project at 42 School. The goal is to create an efficient algorithm to sort a stack of integers using a set of predefined operations. The project emphasizes algorithmic efficiency, optimization, and understanding of sorting techniques.

## Table of Contents

- [Description](#description)
- [Rules](#rules)
- [Algorithm](#algorithm)
- [Usage](#usage)

## Introduction

Push_swap challenges students to implement a sorting algorithm using two stacks (`A` and `B`) and a set of operations. The objective is to sort the stack `A` in ascending order using the fewest possible operations. The program must output a series of operations that, when executed, result in a sorted stack.

## Rules

- The program can use the following operations:
  - `sa`: Swap the first two elements at the top of stack `A`.
  - `sb`: Swap the first two elements at the top of stack `B`.
  - `ss`: Perform `sa` and `sb` simultaneously.
  - `pa`: Push the top element of stack `B` to stack `A`.
  - `pb`: Push the top element of stack `A` to stack `B`.
  - `ra`: Rotate stack `A` upward (move the first element to the bottom).
  - `rb`: Rotate stack `B` upward (move the first element to the bottom).
  - `rr`: Perform `ra` and `rb` simultaneously.
  - `rra`: Rotate stack `A` downward (move the last element to the top).
  - `rrb`: Rotate stack `B` downward (move the last element to the top).
  - `rrr`: Perform `rra` and `rrb` simultaneously.

## Algorithm

The description of the algorithm implementation can be found in the following link:
https://medium.com/@ayogun/push-swap-c1f5d2d41e97

## Usage

1. Clone the repository:

   ```bash
   https://github.com/Madelsa/42-Push_swap.git
   ```
   
2. Change into the project directory:
   
   ```bash
   cd 42-push_swap
   ```
   
3. Compile the program:

   ```bash
   cd 42-push_swap
   ```
   
4. Run the program with a list of integers to sort:

   ```bash
   ./push_swap 3 1 4 2
   ```
   `OR`
   ```bash
   ./push_swap "3 1 4 2"
   ```

5. Optionally, you can use the checker program to verify the correctness of the output:

   ```bash
   ARG="3 1 4 2"; ./push_swap $ARG | ./checker $ARG
   ```
   `NOTE:`Make sure to change the checker's file permissions to be able to use it as shown below:
   ```bash
   chmod 777 checker_Mac
   ```
   
