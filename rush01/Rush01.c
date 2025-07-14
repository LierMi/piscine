/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvirgil- <bvirgil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:24:33 by bvirgil-          #+#    #+#             */
/*   Updated: 2025/01/26 13:48:12 by bvirgil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 4

int GridVisible(int grid[SIZE][SIZE], int Constrain[SIZE * 4]) {
    for (int row = 0; row < SIZE; row++) {
        int max_height = 0, visible_count = 0;
        for (int col = 0; col < SIZE; col++) {
            if (grid[row][col] > max_height) {
                max_height = grid[row][col];
                visible_count++;
            }
        }
        if (visible_count != Constrain[row]) {
            return 0;
        }
    }
    return 1;
}

void check_top_view_constraints(int constraints[SIZE], int grid[SIZE][SIZE], int *is_valid) {
    for (int col = 0; col < SIZE; col++) {
        int max_height = 0, visible_count = 0;
        for (int row = 0; row < SIZE; row++) {
            if (grid[row][col] > max_height) {
                max_height = grid[row][col];
                visible_count++;
            }
        }
        if (visible_count != constraints[col]) {
            *is_valid = 0;
            return;
        }
    }
    *is_valid = 1;
}
