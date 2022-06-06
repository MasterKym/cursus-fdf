#ifndef FDF_H
#define FDF_H

// Imports
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Types

typedef struct s_window
{
  void *ptr;
  int height;
  int width;
} t_window;

typedef struct s_connection
{
  void *mlx_ptr;
  t_window *window;
} t_connection;

typedef struct s_three_d_point
{
  double x;
  double y;
} t_three_d_point;

typedef struct s_two_d_point
{
  double x;
  double y;
} t_two_d_point;

// connection
t_connection *init_connection();
void open_window(t_connection *connection, int height, int width);

// Draw
void draw_3d_point(t_connection *connection, double x, double y, double z);
void draw_axes(t_connection *connection);

// Helpers
void error_exit(char *err);
int **hard_coded_map();

#endif
