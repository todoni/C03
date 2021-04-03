/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 02:58:45 by sohan             #+#    #+#             */
/*   Updated: 2021/04/02 03:50:05 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int i;

	index = 0;
	i = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[i] != '\0')
	{
		dest[index + i] = src[i];
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "abcd";
	char src[] = "efgh";
	printf("my       result:%s\n",ft_strcat(dest,src));
	char dest1[20] = "abcd";
	char src1[] = "efgh";
	printf("desired  result:%s\n",strcat(dest1,src1));
	return 0;
}
