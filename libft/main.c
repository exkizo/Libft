/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:47:43 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/25 18:47:43 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


void *ft_lstupper(void *content)
{
   size_t   i;
   char     *str;

   str = ft_strdup((char *)content);

   i = 0;
   while (str[i])
   {
      str[i] = ft_toupper(str[i]);
      i++;
   }
   return(str);
}



int main()
{
   char  *c[2];
   int   i = 0;
   int   size = 0;


   c[0] = "hello";
   c[1] = "world";

   t_list   *first = ft_lstnew(c[0]);
   t_list   **list = &first;

   ft_lstadd_back(list, ft_lstnew(c[1]));
   ft_lstadd_front(list, ft_lstnew(c[0]));

   t_list   *newlist = ft_lstmap(first, ft_lstupper, &free);

   while (newlist != NULL)
   {
      printf("%s\n", (char *)newlist->content);
      newlist = newlist->next;
   }

   return (0);
}


