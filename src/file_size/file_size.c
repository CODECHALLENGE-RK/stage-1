/*********************************************************************
* file_size.c - calculates size of given input file file
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

/* include headers*/
#include "file_size.h"

/* main function*/
int main(int argc, char *argv[])	
{	
	trace_print("\n %s %s(): Debug level set to %d\n",__FILE__,__func__,DEBUG);

	/*call the validation module*/
	validate_input_args(argc, argv);

	/* calculate and print the file size */
	calc_file_size(argv[1]);

	return 0;
}

/* Function name: validate_input_args
*  Arguments    : command line arguments
*  Return value : 0 on success
*		  error number on failure (asm-generic/errno-base.h)
*  Descritpion  : checks the input aruments and verify that give file exists or not.  
*	
*/
int validate_input_args(int argc, char* argv[])
{
	/* check for input args */
	/* strictly 1 argument only */
	if(argc!=2 || argv[1] == NULL)
	{
		trace_print("%s %s: Invalid input arguments\n",__FILE__,__func__);
		trace_print("try: <binary name> <file name>\n");
		return -EINVAL;
	}

	if (access (argv[1], F_OK) != -1)
	{
		trace_print("%s %s: File %s exist\n",__FILE__,__func__,argv[1]);
		return 0;
	}
	else
	{
		err_print("%s %s(): File %s doesn't exist\n",__FILE__,__func__,argv[1]);
		return -ENOENT;
	}
}


/* Function name: calc_file_size 
*  Arguments    : file name
*  Return value : File size
*  Descritpion  : prints the file size and return it to the caller.
*/
int calc_file_size(const char *file)
{
	FILE *fp;
	int size = 0 ;

	if (file == NULL)
	{
		trace_print("%s %s: Invalid file name\n",__FILE__,__func__);
		return -EINVAL;
	}

	fp = fopen(file, "r");
	if(fp == NULL)
	{
		err_print("%s %s(): File %s doesn't exist\n",__FILE__,__func__,file);
		return -ENOENT;		
	}

	fseek(fp,0,SEEK_END);
	size = ftell(fp);

	info_print("%s %s: file size = %d Bytes \n",__FILE__,__func__,size);

	fclose(fp);

	return size;			
}
