# SIMPLE SHELL

### OBJECTIVIES

The main objective with this project is to make a simple shell similar to the Unix native 'sh', here we handle the "PATH" and we can execute all the commands we find in the "PATH" including also print the enviroment and the function exit to exit the simple shell

### ¿What is the SHELL? 📌

_Simply put, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as Linux. Nowadays, we have graphical user interfaces (GUIs) in addition to command line interfaces (CLIs) such as the shell.

On most Linux systems a program called bash (which stands for Bourne Again SHell, an enhanced version of the original Unix shell program, sh, written by Steve Bourne) acts as the shell program. Besides bash, there are other shell programs that can be installed in a Linux system. These include: ksh, tcsh and zsh._

### Authorized functions and macros:
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

### Compilation 🚀

* Your code will be compiled this way:

```sh
$ gcc -gdd  -Wall -Werror -Wextra -pedantic *.c -o hsh
```

### Execute 🚀

* Your code will be execue this:

```sh
$ ./hsh
MiShell$ _
```

### Shell Intereactive Run this

```sh
MiShell$ /bin/ls
'This command list the directories in current path'
MiShell$ ls
'This command list the directories in current path'
MiShell$ pwd 
 $HOME _
'The absolute path in current directoy'
```

### Shell No Intereactive Run this

```sh
$ echo "/bin/ls" | ./hsh
MiShell$ /bin/ls
'This command list the directories in current path'
exit
$ echo "ls" | ./hsh
MiShell$ ls
'This command list the directories in current path'
exit 
```

## buildt with 🛠️

_Project constructions tools_

* [C Language]() - Language of Programming
* [Bash]() - Is interpreto to the Shell
* [Vim](https://www.javascript.com/) - Editor
* [Emacs]() - Other Editor

## ⌨️  with ❤️  By 😊 :
* **Evert Escalante**
  * [@EscalanteEvert](https://twitter.com/EscalanteEvert)
* **Emmanuel Monsalve Parra**
  * [@MonsalveEmmus](https://twitter.com/MonsalveEmmus)
