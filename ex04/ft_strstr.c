/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:17:53 by sohan             #+#    #+#             */
/*   Updated: 2021/04/03 09:28:14 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int len;
	int i;
	char *location_found;

	index = 0;
	i = 0;
	len = 0;
	while (to_find[len] != 0)
	{
		len++;
	}
	while (str[i] != 0 )
	{
	}
	return (location_found);
}
