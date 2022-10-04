Static Libraries
- Library ar a collection of pre-compiled codes called function that people have written. The format of a static library ia an archive.
- ar is the command used to create a ststic library from object file. Use ar to create, modify and extract from archives.
- ranlib - indexes an archive, generate an index to an archives.
- nm - list symbols stored in a static library.
- if you need to make changes in a static library you need to go back to your original c code , make changes compile it into an object code then link it with ar to make an .a file then you have a static library which is the executable.
The different between static and dynamic is that a static library are  just a collection of object files linked into the program during the linking phase of compilation. The dynamic or shared library just makes reference to the library no coping. no size proble and you code is not to large.
- Task 0:creates a static library  called libmy.a containing functions.
- Task1: create a script that create a static library called liball.a from all the .c. files that are in the current working directory
