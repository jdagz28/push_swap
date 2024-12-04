
# push_swap

push_swap is a sorting algorithm project from the 42 Network curriculum. It requires writing a program that generates the smallest possible sequence of instructions to sort a stack of integers using two stacks (`A` and `B`) and a predefined set of operations.

## Operations
The program uses the following stack operations:

- **sa**: Swap the top two elements of stack `A`.
- **sb**: Swap the top two elements of stack `B`.
- **ss**: Perform `sa` and `sb` simultaneously.
- **pa**: Push the top element from stack `B` to `A`.
- **pb**: Push the top element from stack `A` to `B`.
- **ra**: Rotate stack `A` upwards.
- **rb**: Rotate stack `B` upwards.
- **rr**: Perform `ra` and `rb` simultaneously.
- **rra**: Rotate stack `A` downwards.
- **rrb**: Rotate stack `B` downwards.
- **rrr**: Perform `rra` and `rrb` simultaneously.
