#!/bin/bash
echo " enter the log file to search"
read filename
echo "enter the search term"
read search_term
grep -v -n "$search_term" "$filename"

