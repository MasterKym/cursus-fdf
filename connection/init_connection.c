#include "../fdf.h"

t_connection *init_connection()
{
  t_connection *connection;

  connection = malloc(sizeof(t_connection));
  if (!connection)
    return (0);
  connection->mlx_ptr = mlx_init();
  if (!connection->mlx_ptr)
    exit(1);
  connection->window = 0;
  return (connection);
}