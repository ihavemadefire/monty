#ifndef MONTY_H
#define MONTY_H

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bringoutyourdead(int c);
void spam(char* its, stack_t **head);
void get_command(stack_t **head, char *opr, unsigned int i);
void push(stack_t **head, int i);
void pall(stack_t **head, unsigned int i);
void pint(stack_t **head, unsigned int i);
void remove_endOfLine(char *line);
void pop(stack_t **head, unsigned int i);
void swap(stack_t **head, unsigned int i);
void add(stack_t **head, unsigned int i);
void nop(stack_t **head, unsigned int i);
void weeweesebwian(stack_t *h);
void prterr1(unsigned int i);
void prterr2(unsigned int i);
void camelot(char *str, unsigned int i);
void sub(stack_t **head, unsigned int i);
void dive(stack_t **head, unsigned int i);
void mul(stack_t **head, unsigned int i);
void mod(stack_t **head, unsigned int i);
void pchar(stack_t **head, unsigned int i);
void pstr(stack_t **head, unsigned int i);
void rotl(stack_t **head, unsigned int i);
void rotr(stack_t **head, unsigned int i);
#endif
