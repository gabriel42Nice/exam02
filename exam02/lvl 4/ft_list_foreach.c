#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *lst;

	lst = begin_list;
	while (lst)	
	{
		(*f)lst->data;
		lst = lst->next;
	}
}

// -------------------
FILE.H
// ------------------
   #ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void		*data;
}                       t_list;

#endif 
