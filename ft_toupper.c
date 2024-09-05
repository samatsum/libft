/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samatsum  <samatsum@student.42tokyo.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:17:29 by samatsum          #+#    #+#             */
/*   Updated: 2023/05/16 21:21:00 by samatsum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int alpha)
{
	if (alpha <= 'z' && alpha >= 'a')
	{
		alpha = alpha + 'A' - 'a';
	}
	return (alpha);
}
