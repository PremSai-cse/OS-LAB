AIM: 
To study and practice Linux pipes and filter commands such as grep, awk, and sed for processing 
and manipulating text data in the Linux environment. 
DESCRIPTION: 
Linux provides powerful text processing utilities known as filters, which take input, 
process it, and produce output. These filters can be combined using pipes (|) to perform complex 
operations efficiently. In this experiment, commonly used filter commands—grep, awk, and 
sed—are practiced along with pipes to search, extract, and modify text data. 
 
a. Linux Pipes (|) 
Description 
A pipe is used to pass the output of one command as input to another command. 
Syntax 
command1 | command2 
Example 
ls -l | grep ".txt" 
 
Explanation: 
Lists only .txt files from the directory. 
 
b. grep Command 
Description 
grep is used to search for a specific pattern or word in a file. 
Syntax 
grep [options] pattern filename 
Common Options 
• -i : Case insensitive search 
• -r : Recursive search 
• -n : Display line numbers
Examples 
grep "Linux" file.txt 
Searches for the word Linux in file.txt. 
grep -i "os" file.txt 
Searches for os ignoring case. 
ps -ef | grep root 
Displays processes owned by the root user using pipe. 
 
c. awk Command 
Description 
awk is a powerful pattern scanning and processing language used to extract and manipulate data 
from files. 
Syntax 
awk 'pattern {action}' filename 
Examples 
awk '{print $1}' file.txt 
Prints the first column of the file. 
awk '{print $1, $3}' file.txt 
Prints first and third columns. 
df -h | awk '{print $1, $5}' 
Displays file system name and disk usage using pipe. 
 
d. sed Command 
Description 
sed (Stream Editor) is used to perform text transformations such as substitution, deletion, and 
insertion. 
Syntax 
sed 'command' filename 
Examples 
sed 's/Linux/UNIX/' file.txt 
Replaces the first occurrence of Linux with UNIX in each line. 
sed 's/Linux/UNIX/g' file.txt 
Replaces all occurrences of Linux with UNIX. 
sed '2d' file.txt 
Deletes the second line of the file.
ls | sed 's/.txt/.doc/' 
Replaces .txt with .doc in output using pipe. 
 
e. Combined Use of Pipes and Filters 
Examples 
cat file.txt | grep "OS" 
Searches for lines containing OS. 
ps -ef | grep root | awk '{print $2}' 
Displays process IDs of root processes. 
cat file.txt | sed 's/error/ERROR/g' 
Replaces lowercase error with uppercase ERROR. 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
Result 
Thus, Linux pipes and filter commands such as grep, awk, and sed were successfully executed to 
process and manipulate text data.
