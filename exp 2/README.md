AIM: 
To understand and practice basic Linux commands used for file and directory management, 
process and system status monitoring, text file operations, and file permission handling in a Linux 
operating system environment. 
 
DESCRIPTION: 
Linux provides a powerful command-line interface that allows users to interact with the 
operating system efficiently. In this experiment, commonly used Linux commands are practiced 
and categorized into file and directory related commands, process and status information 
commands, text-related commands, and file permission commands. These commands help users 
manage files, monitor system performance, manipulate text files, and control access permissions. 
 
a. File and Directory Related Commands 
These commands are used to navigate the file system and manage files and directories. 
1. pwd (Print Working Directory) 
Displays the current working directory. 
pwd 
2. ls (List) 
Lists files and directories. 
ls 
ls -l 
ls -a 
3. cd (Change Directory) 
Changes the current directory. 
cd Documents 
4. mkdir (Make Directory)
5. Creates a new directory. 
mkdir oslab 
5. mkdir -p 
Creates parent and subdirectories. 
mkdir -p cse/os/lab 
6. rmdir 
Deletes an empty directory. 
rmdir oslab 
7. touch 
Creates an empty file. 
touch file.txt 
8. cp (Copy) 
Copies files or directories. 
cp file1.txt file2.txt 
cp -r dir1 dir2 
9. mv (Move / Rename) 
Moves or renames files. 
mv old.txt new.txt 
10. rm (Remove) 
Deletes files or directories. 
rm file.txt 
rm -r folder 
11. file 
Identifies file type. 
file file.txt 
12. stat 
Displays detailed file information.
stat file.txt 
 
b. Process and Status Information Commands 
These commands help monitor processes and system performance. 
1. ps 
Displays running processes. 
ps 
ps -ef 
2. top 
Shows real-time process and CPU usage. 
top 
3. htop 
Enhanced interactive process viewer. 
htop 
4. kill 
Terminates a process using PID. 
kill 1234 
5. pkill 
Terminates process by name. 
pkill firefox 
6. jobs 
Displays background jobs. 
jobs 
7. fg 
Brings job to foreground. 
fg 
8. bg
9. Resumes job in background. 
bg 
9. uptime 
Displays system running time. 
uptime 
10. who 
Shows logged-in users. 
who 
11. whoami 
Displays current user. 
whoami 
12. free 
Displays memory usage. 
free -h 
13. df 
Shows disk space usage. 
df -h 
14. du 
Shows directory size. 
du -sh folder 
 
c. Text Related Commands 
These commands are used to view, search, and process text files. 
1. cat 
Displays file contents. 
cat file.txt 
2. tac
Displays file in reverse order. 
tac file.txt 
3. more 
Displays file page by page. 
more file.txt 
4. less 
Scrollable file viewing. 
less file.txt 
5. head 
Displays first lines of file. 
head file.txt 
6. tail 
Displays last lines of file. 
tail file.txt 
7. grep 
Searches text pattern. 
grep "Linux" file.txt 
8. wc 
Counts lines, words, and characters. 
wc file.txt 
9. sort 
Sorts text data. 
sort names.txt 
10. uniq 
Removes duplicate lines. 
uniq file.txt
chown user file.txt 
4. chgrp 
Changes group ownership. 
chgrp staff file.txt 
5. umask 
Displays default permission settings. 
umask 
Permission Format Example -rwxr-xr-- 
• r – Read 
• w – Write 
• x – Execute
Result: 
Thus, Linux commands related to file and directory management, process monitoring, 
text processing, and file permission handling were successfully practiced and executed.
