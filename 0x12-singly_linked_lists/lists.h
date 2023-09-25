#ifndef _LIST_H_
#define _LIST_H_

/**
 * struct list_s - single link list 
 *
 * @str: sttring
 * @len: length
 * @next: pointer
 * Description: single link list structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void before_main() __attribute__((constructor));

#endif
