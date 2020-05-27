#ifndef PARSER_H
#define PARSER_H

#include "matrix.h"
#include "ml6.h"

int check_str(char * line, char * value);

void parse_file ( char * filename, 
		  struct matrix * transform, 
		  struct matrix * edges,
		  screen s);

#endif
