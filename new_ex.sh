#!/usr/bin/env bash
mkdir $1
touch $1/Makefile $1/$1.c
if [ $? -eq 0 ] 
then
	echo $1 directory is created successfully.
	echo cd ./$1 to start programming with C.
fi
