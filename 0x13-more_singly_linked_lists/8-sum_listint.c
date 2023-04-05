#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of nodes in list
 * @head: first node in list
 *
 * Return: added sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum +=temp->n;
		temp = temp->next;
	}
	return (sum);
}
