/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 02:58:45 by sohan             #+#    #+#             */
/*   Updated: 2021/04/02 04:06:23 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int index;
	unsigned int i;

	index = 0;
	i = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[i] != '\0' && nb != 0 && i < nb)
	{
		dest[index + i] = src[i];
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "";
	char src[] = "asdff";
	int nb = -1;
	printf("my       result:%s\n",ft_strncat(dest,src,nb));
	char dest1[20] = "";
	char src1[] = "adsfes";
	printf("desired  result:%s\n",strncat(dest1,src1,nb));
	return 0;
}
