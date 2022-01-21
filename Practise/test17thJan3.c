#include <stdio.h> 
#include <string.h> 

static char * reverse( char *s, size_t n ) 
{ 
    for ( size_t i = 0; i < n / 2; i++ ) 
    { 
        char c = s[ i ]; 
        s[ i ] = s[ n - i - 1 ]; 
        s[ n - i - 1 ] = c; 
    } 

    return s; 
} 

char * reverse_by_words( char *s ) 
{ 
    const char *delim = " \t\n"; 

    char *p = s; 

    while ( *p ) 
    { 
        p += strspn( p, delim ); 

        if ( *p ) 
        { 
            char *q = p; 

            p += strcspn( p, delim ); 

            reverse( q, p - q ); 
        } 
    } 

    return s; 
} 

int main(void)  
{
    enum { N = 100 };
    char s[N];

    printf( "Enter a sentence: " );

    fgets( s, N, stdin );   

    //  remove the appended new line character '\n'
    s[ strcspn( s, "\n" ) ] = '\0';

    puts( s ); 

    puts( reverse_by_words( s ) ); 

    return 0; 
}