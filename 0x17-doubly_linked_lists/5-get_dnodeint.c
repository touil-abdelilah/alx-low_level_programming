#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 * Return: Address of the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;

    for (i = 0; head != NULL; i++)
    {
        if (i == index)
            return (head);
        head = head->next;
    }

    return (NULL);
}

