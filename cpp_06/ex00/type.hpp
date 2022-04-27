#pragma once
#ifndef __TYPE_H__

#include <string>

#define log(x) std::cout << x << std::endl;

typedef enum e_type {
	t_error = 0,
	t_char,
	t_int,
	t_float,
	t_double
}	t_type;

t_type	getType( const std::string &str );

#endif