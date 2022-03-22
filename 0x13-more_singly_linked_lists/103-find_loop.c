/**
 *
 *
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_loop *slow = head, *fast = head;

	if (head == NULL)
		return (NULL);

	for (; fast;)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast = slow)
		{
			slow = head;

			for (; fast;)
			{
				slow = slow->next;
				fast = faste->next;
				
				if (slow == fast)
					return (slow);
			}	
		}
	}

	return (NULL);
}
