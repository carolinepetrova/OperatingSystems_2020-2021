#!/bin/bash

# --- task 1 ---

tee f1
touch f2
cp f1 f3
mkdir dir1
cd dir1
mv ../f1 ff1
mv ../f2 ff2
mv ../f3 ff3

# --- task 2 ---

find / -name dir -type d 2>/dev/null

# --- task 3 ---

wc -c passwd.txt

# --- task 4 ---

grep Georgi passwd.txt 

# if we want only the word "Georgi" to be search (not be part of a word, for example "Georgiev")

grep -w Georgi passwd.txt

# --- task 5 ---

cut -d ":" -f 5 passwd.txt

# --- task 5 --- 

find / -user <your-username> -exec tail -n 5 {} \; 2>/dev/null



