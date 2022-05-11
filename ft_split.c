/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:46:53 by jkiragu           #+#    #+#             */
/*   Updated: 2022/05/11 14:46:58 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char     **ft_alloc_split(char const *s, char c) //creates the array that will be allocated with the split values
{
    size_t i;
    char **split;
    size_t total;

    i = 0;
    total = 0;
    while (s[i])
    {
        if (s[i] == c)
            total++;
        i++;  
    }

    split = (char **)malloc(sizeof(s) * (total + 2));
    if (!split)
        return (NULL);
    return (split);
}

void *ft_free_all_split_alloc(char **split, size_t lt)
{
    size_t i;

    i = 0;
    while (i < lt)
    {
        free(split[i]);
        i++;
    }
    free(split);
    return (NULL);
}

static void //asigns the split values new split array
    *ft_split_range(char **split, char const *s, t_split_next *st, t_split_next *lt) 
{
    split[lt->length ] = ft_substr(s, st->start, st->length); // takes position of lt offsets it by the length and assigns value to it.
    if (!split[lt->length])
        return (ft_free_all_split_alloc(split, lt->length));
    lt->length++; //assigns the pointer lt to the value after the length plus 1 in the split array
    return (split);
}


static void *ft_split_by_char(char **split, char const *s, char c)
{
    size_t  i;
    t_split_next    st; // variable to hold a constant value of start
    t_split_next    lt; // variable to hold a constant value of length

    i = 0;
    lt.length = 0;
    st.start = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            st.start = lt.start;
            st.length = (i - lt.start);
            if (i > lt.start && !ft_split_range(split, s, &st, &lt)) //loops assigning values to the split array
                    return (NULL);
            lt.start = i + 1; //sets the lt.start pointer to the beginning of the next array element
        }
        i++;
    }
    st.start = lt.start;
    st.length = (i - lt.start);
    if (i > lt.start && i > 0 && !ft_split_range(split, s, &st, &lt))
        return (NULL);
    split[lt.length] = 0; //assigns value of last element as zero
    return (split);
}

char **ft_split(char const *s, char c)
{
    char **split; //declaring an array to carry the split string

    if (!(split = ft_alloc_split(s, c))) // function to create the split array in memory
        return (NULL);
    if (!ft_split_by_char(split, s, c)) // function to assign the split values into split
        return (NULL);
        return (split);
}
