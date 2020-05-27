#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * tris;
  struct matrix * edges;
  struct matrix * transform;

  tris = new_matrix(4, 0);
  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  if ( argc == 2 )
    parse_file( argv[1], transform, tris, s );
  else
    parse_file( "stdin", transform, tris, s );

  free_matrix( tris );
  free_matrix( transform );
}  
