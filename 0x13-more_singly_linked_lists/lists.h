#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s- Custom data type
 * @n: integer parmeter
 * @next: pointer to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t *add_nodeint(listint_t **head, const int n);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *reverse_listint(listint_t **head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
