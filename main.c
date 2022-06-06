#include "fdf.h"

int main(int argc, char **argv)
{
  t_connection *connection;
  (void)argc;
  (void)argv;

  connection = init_connection();
  open_window(connection, 1000, 1000);
  pause();
}
