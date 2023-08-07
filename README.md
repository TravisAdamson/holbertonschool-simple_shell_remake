.\" Shellshocked - A Cool Shell
.\"
.\" Your Shellshocked Logo Goes Here
.\"
.TH SHELLSHOCKED "1" "August 2023" "Shellshocked Cool README"

.SH NAME
Shellshocked \- A Cool Shell

.SH DESCRIPTION
Shellshocked is a super cool shell program that allows you to execute commands and navigate through your system using a command-line interface. It provides a stylish and interactive shell experience with additional cool features to make your terminal sessions awesome!

.SH TABLE OF CONTENTS
1. Project's Title
2. Project Description
3. Table of Contents
4. How to Install and Run the Project
5. How to Use the Project
6. Include Credits
7. Add a License
8. Badges
9. How to Contribute to the Project
10. Include Tests
11. include the gcc used and why: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
12. valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./hsh
13. Show Examples of What It Does and the Features It Has
14. The Shell Can Run Any Command Specified by the User, with Full PATH Provided or in the PATH Directory.

.SH HOW TO INSTALL AND RUN THE PROJECT
1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the project using GCC with cool flags for error checking and style:
   .IP
   \fBgcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh\fR
   .LP
4. Run the shell:
   .IP
   \fB./hsh\fR
   .LP

.SH HOW TO USE THE PROJECT
1. Once the cool shell is running, you can enter commands as you would in a regular shell.
2. Shellshocked supports basic commands such as \fBls\fR, \fBpwd\fR, \fBcd\fR, and more.
3. You can also use environmental variables by typing \fB$VAR_NAME\fR to access their values.
4. To exit the shell, use the \fBexit\fR command.

.SH CREDITS
Shellshocked is developed and maintained by \fBCool Developer Name\fR (\fByour-cool-username\fR).

.SH LICENSE
Shellshocked is licensed under the \fBCool MIT License\fR (https://opensource.org/licenses/MIT).

.SH BADGES
[![Awesome Badge](https://your-awesome-badge-link-here)](https://coolbadgeprovider.com)

.SH HOW TO CONTRIBUTE TO THE PROJECT
1. Fork the repository.
2. Create a new branch: \fBgit checkout -b feature/your-cool-feature-name\fR.
3. Make your changes and commit them: \fBgit commit -m "Add your cool message here"\fR.
4. Push to the branch: \fBgit push origin feature/your-cool-feature-name\fR.
5. Create a pull request.

.SH TESTS
Shellshocked includes cool unit tests to ensure its functionalities are working correctly. To run the tests, use the following command:
.IP
\fBmake test\fR
.LP

.SH GCC COMPILATION
The shell is compiled using the GCC compiler with the following cool flags for strict error checking and style:
.IP
\fBgcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh\fR
.LP

.SH VALGRIND FOR MEMORY LEAK CHECK
To check for memory leaks in the cool shell, use Valgrind with the following command:
.IP
\fBvalgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./hsh\fR
.LP

.SH SHOW EXAMPLES OF WHAT IT DOES AND THE FEATURES IT HAS
Example 1: Running basic commands
.IP
\fB$ ls\fR
\fBcheck_run.c  README.md  shellshocked.h  turtle_path.c\fR
.LP

Example 2: Running ls with flags
.IP
\fB$ ls -la\fR
\fBtotal 56
drwxr-xr-x 2 root root  328 Aug  7 07:41 .
drwxr-xr-x 6 root root 4096 Aug  7 07:26 ..
-rw-r--r-- 1 root root  686 Aug  7 07:26 check_run.c
-rw-r--r-- 1 root root 1188 Aug  7 07:26 check_turtle.c
...
\fR
.LP

Example 3: Displaying the current working directory
.IP
\fB$ pwd\fR
\fB/holbertonschool-simple_shell_remake/readme\fR
.LP

Example 4: Echoing an environmental variable
.IP
\fB$ echo SHELLSHOCKED\fR
\fBSHELLSHOCKED\fR
.LP

.SH THE SHELL CAN RUN ANY COMMAND SPECIFIED BY THE USER, WITH FULL PATH PROVIDED OR IN THE PATH DIRECTORY
You can run any cool command in the cool shell by providing its full path or if the command is in the PATH directory, you can just type the command name and press Enter. The cool shell will take care of the rest!

Enjoy the cool shell and have a blast with your terminal adventures! Happy hacking!

