#include <stdio.h>
    int main() {
    // Escape sequences are special characters used in strings to represent certain whitespace or control characters.   
    // They are preceded by a backslash (\) and are used to format output or to include special characters in strings.
    // Common escape sequences in C:
    
    // \n : Newline - Moves the cursor to the next line.
    // \t : Horizontal Tab - Moves the cursor to the next tab stop.
    // \\ : Backslash - Represents a literal backslash character.
    // \' : Single Quote - Represents a literal single quote character.
    // \" : Double Quote - Represents a literal double quote character.
    // \r : Carriage Return - Moves the cursor to the beginning of the line.
    // \b : Backspace - Moves the cursor one position back (deletes the previous character).
    // \f : Form Feed - Moves the cursor to the next page (not commonly used).
    // \v : Vertical Tab - Moves the cursor down to the next vertical tab stop (printing a vertical tab is not commonly supported).

    printf("Hello, World!\n"); // Newline
    printf("Hello,\tWorld!\n"); // Horizontal Tab  
    printf("This is a backslash: \\\n"); // Backslash
    printf("She said, \'Hello!\'\n"); // Single Quote   
    printf("He said, \"Hello!\"\n"); // Double Quote
    printf("Hello, World!\r"); // Carriage Return
    printf("Hello, World!\b!\n"); // Backspace
    printf("Hello, World!\f\n"); // Form Feed
    printf("Hello,\vWorld!\n"); // Vertical Tab

    return 0;
}

