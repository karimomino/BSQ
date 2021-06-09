/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_manipulation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:10:15 by kamin             #+#    #+#             */
/*   Updated: 2021/06/09 07:44:39 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	dest[i + 1] = '\0';
	return (dest);
}

int		ft_str_is_printable(char str)
{
	if (!((str >= 32 && str <= 127)))
		return (0);
	return (1);
}
