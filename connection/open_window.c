#include "../fdf.h"

void open_window(t_connection *connection, int height, int width)
{
  t_window *window;

  window = malloc(sizeof(t_window));
  if (!window)
    error_exit("window allocation failed");
  window->ptr = mlx_new_window(connection->mlx_ptr, height, width, "Test");
  if (!window->ptr)
    error_exit("window->ptr allocation failed");
  connection->window = window;
}
