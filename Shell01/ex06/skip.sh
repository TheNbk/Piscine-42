# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 17:53:43 by chayashi          #+#    #+#              #
#    Updated: 2023/09/13 18:04:42 by chayashi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#1/bin/bash
ls -l | awk "NR%2==1"