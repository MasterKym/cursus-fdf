#include "../fdf.h"

void draw_3d_point(t_connection *connection, double x, double y, double z)
{
  double three_d_x;
  double three_d_y;
  double square_root_3;
  double offset;

  offset = connection->window->width / 2;

  square_root_3 = 1.7;
  three_d_x = x * 1 + y * -1;
  three_d_y = x * 0.5 + y * 0.5 - z;
  mlx_pixel_put(connection->mlx_ptr, connection->window->ptr, 2 * offset + three_d_x, offset + three_d_y, 16711680);
}
