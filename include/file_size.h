/*********************************************************************
* file_size.h 
* Copyright (C) <2016>  <CODE.CHALLENGE.RK@gmail.com>
*
* This is a exeprimental set of files created for 
* learning purpose. 
*
* It is a free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* It is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/

/* Include headers */
#include <stdio.h>
#include <unistd.h>
#include "debug_level.h"
#include <asm-generic/errno-base.h>

/* Calucalte the size of file */
int calc_file_size(const char *file);

/* validate input arguments */
int validate_input_args(int argc, char* argv[]);
