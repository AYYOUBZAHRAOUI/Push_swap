# Push_swap

## Description
Push_swap is a sorting algorithm project that sorts data on a stack, with a limited set of instructions, and the smallest number of moves. The goal is to sort a randomly generated list of integers using two stacks and a set of specific operations.

## Table of Contents
1. [Installation](#installation)
2. [Usage](#usage)
3. [Project Structure](#project-structure)
4. [Algorithm](#algorithm)
5. [Operations](#operations)
6. [MVC Architecture](#mvc-architecture)
7. [Example](#example)
8. [Testing](#testing)
9. [Contributing](#contributing)
10. [License](#license)

## Installation
```bash
git clone https://github.com/yourusername/push_swap.git
cd push_swap
make
```

## Usage
```bash
./push_swap [list of integers]
```
For example:
```bash
./push_swap 3 1 4 2
```

## Project Structure
The project follows this directory structure:
```  not yet implemented ```

## Algorithm
``` not yet implemented ```

## Operations
The following operations are available:

- `sa`: swap a - swap the first 2 elements at the top of stack a
- `sb`: swap b - swap the first 2 elements at the top of stack b
- `ss`: `sa` and `sb` at the same time
- `pa`: push a - take the first element at the top of b and put it at the top of a
- `pb`: push b - take the first element at the top of a and put it at the top of b
- `ra`: rotate a - shift up all elements of stack a by 1
- `rb`: rotate b - shift up all elements of stack b by 1
- `rr`: `ra` and `rb` at the same time
- `rra`: reverse rotate a - shift down all elements of stack a by 1
- `rrb`: reverse rotate b - shift down all elements of stack b by 1
- `rrr`: `rra` and `rrb` at the same time


## Example
[Provide a simple example of how the program works]

## Testing
[Explain how to run tests, if applicable]
