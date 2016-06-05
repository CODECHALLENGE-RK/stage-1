/*********************************************************************
* hello_word.c - prints hello word messgae
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

/* 
* Compile me: 
* gcc <program name> -o <binary name> -DDEBUG=<log level> 
* gcc hello_word.c -o hello_word -DDEBUG=2
* Note: Refere debug_level.h for more details on -DDEBUG flag
*/

/* include headers*/
#include <stdio.h>
#include "debug_level.h"

/* main function*/
int main(int argc, char *argv[])
{	
	trace_print("\n %s %s(): Debug level set to %d\n",__FILE__,__func__,DEBUG);

	/* print the message */
	info_print ("\n** Hello word **\n");
	return 0;
}
