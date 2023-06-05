#ifndef MOSTAFA_H
#define MOSTAFA_H

#include <stdlib.h>
/**
 * struct listint_s single linked list
 * @i: int
 * @next: next node
 * @Description: single node struct
 */

typedef struct listint_s
{
	int i;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);
#endif
