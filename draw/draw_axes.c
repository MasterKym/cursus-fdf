#include "../fdf.h"

void draw_axes(t_connection *connection)
{
  double i;
  double square_root_3 = 1.7;

  double x_zero = 100;
  double y_zero = 100;
  double axe_length = 30;
  i = 0;
  while (i < axe_length)
  {
    mlx_pixel_put(connection->mlx_ptr, connection->window, x_zero, i + y_zero - axe_length, 16711680);
    mlx_pixel_put(connection->mlx_ptr, connection->window,
                  x_zero + square_root_3 * i,
                  y_zero +
                      i / square_root_3,
                  16711680);
    mlx_pixel_put(connection->mlx_ptr, connection->window,
                  x_zero - i * square_root_3,
                  y_zero + i * square_root_3, 16711680);
    i++;
  }
}