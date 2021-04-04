/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:17:53 by sohan             #+#    #+#             */
/*   Updated: 2021/04/04 21:14:16 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int len;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = i;
		while (k < len && str[j] != '\0' && str[j] == to_find[k])
		{
			k++;
			j++;
		}
		if (k == len)
		{
			return (str + i);
		}
		k = 0;
		i++;
	}
	return ('\0');
}
