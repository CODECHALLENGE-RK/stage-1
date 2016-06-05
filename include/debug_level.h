/*********************************************************************
* debug_level.h - includes log helpers
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
#include <stdarg.h>

/* enum to define log levels */
enum enum_log
{	
	LOG_ERROR = 0,
	LOG_WARNING,
	LOG_INFO,
	LOG_TRACE,
	LOG_MAX
};

/* Function name: err_print 
*  Arguments    : variable number of arguments
*  Return value : None
*  Descritpion  : Prints error message on console
*		  prints the received arguments to standard output (console)
*		  based on the log level selected by the user during 'compilation'
*/
void err_print(const char *format, ...)
{
	va_list arg;
	//int stat = 0 ; 	

	if (DEBUG >= LOG_ERROR)
	{
		/* start printing */
		va_start(arg,format);
		/* stat = */ vfprintf (stdout, format, arg);
		va_end(arg);
	}
	return ;		
}

/* Function name: warn_print 
*  Arguments    : variable number of arguments
*  Return value : None
*  Descritpion  : prints warning messages on console
*		  prints the received arguments to standard output (console)
*		  based on the log level selected by the user during 'compilation'
*/
void warn_print(const char *format, ...)
{
	va_list arg;
	//int stat = 0 ; 	

	if (DEBUG >= LOG_WARNING)
	{
		/* start printing */
		va_start(arg,format);
		/* stat = */ vfprintf (stdout, format, arg);
		va_end(arg);
	}
	return ;		
}

/* Function name: info_print 
*  Arguments    : variable number of arguments
*  Return value : None
*  Descritpion  : prints useful informations on console
*		  prints the received arguments to standard output (console)
*		  based on the log level selected by the user during 'compilation'
*/
void info_print(const char *format, ...)
{
	va_list arg;
	//int stat = 0 ; 	

	if (DEBUG >= LOG_INFO)
	{
		/* start printing */
		va_start(arg,format);
		/* stat = */ vfprintf (stdout, format, arg);
		va_end(arg);
	}
	return ;		
}

/* Function name: trace_print 
*  Arguments    : variable number of arguments
*  Return value : None
*  Descritpion  : prints debug messages on console
*		  prints the received arguments to standard output (console)
*		  based on the log level selected by the user during 'compilation'
*/
void trace_print(const char *format, ...)
{
	va_list arg;
	//int stat = 0 ; 	

	if (DEBUG >= LOG_TRACE)
	{
		/* start printing */
		va_start(arg,format);
		/* stat = */ vfprintf (stdout, format, arg);
		va_end(arg);
	}
	return ;		
}
