/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:32:09 by sohan             #+#    #+#             */
/*   Updated: 2021/04/04 21:37:26 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int index;
	unsigned int i;

	index = 0;
	i = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[i] != '\0' && size != 0 && i < size - 1)
	{
		dest[index + i] = src[i];
		i++;
	}
	dest[index + i] = '\0';
	return (index + i);
}

int main()
{
	char dest[] = "asdf";
	char src[] = "asdfes";
	int nb = 4;
	printf("my       result:%d\n",ft_strlcat(dest,src,nb));
	char dest1[20] = "asdf";
	char src1[] = "asdfes";
	printf("desired  result:%d\n",strlcat(dest1,src1,nb));
	return 0;
}
