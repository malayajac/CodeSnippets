#!/bin/bash
# Suppose I have a set of files named:
# MyFile0.txt
# MyFile2.txt
# MyFile4.txt
# MyFile6.txt
# MyFile8.txt
#
# But I want to change their names such that they are now, respectively:
# MyFile00.txt
# MyFile02.txt
# MyFile04.txt
# MyFile06.txt
# MyFile08.txt
#
for (( i=0; i<=9; i=i+2 ))
do
	mv MyFile${i}.txt MyFile0${i}.txt
done