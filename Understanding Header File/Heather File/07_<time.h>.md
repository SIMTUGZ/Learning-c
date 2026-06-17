<time.h> header is a standard C library component that provides functions, 
macros, and types for manipulating date and time.

<time.h>

    The time() function retrieves the current time since the beginning of Unix period( 1st Jan, 1970) 
    in the form of time_t value stores it in the variable pointed by the pointer passed to it as an argument.
    
    The localtime() function to convert the time retrieved by time() function into local time components such as hours,
    minutes, seconds, day, month and year. It takes one parameter which is a pointer to a time value that is to be converted 
    in local time.
    
    The asctime() function to convert the obtained time into a string representation of the local time in 
    a human readable format which is "Day Mon Date HH:MM:SS YYYY\n". The asctime() accepts a pointer to a structure
    (struct tm) that contains the time component that is to be converted.
