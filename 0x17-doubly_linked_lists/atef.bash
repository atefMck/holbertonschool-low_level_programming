#!/bin/bash
for (( counter=9; counter>0; counter-- ))
do
touch "$counter-main.c"
done
printf "\n"
