#include "../fdf.h"

int **hard_coded_map()
{
  int **map;

  int row0[] = {0, 0, 0, 0};
  int row1[] = {1, 1, 1, 1};
  map = malloc(sizeof(int *) * 4);
  map[0] = row0;
  map[1] = row0;
  map[2] = row1;
  map[3] = row0;
  return (map);
}