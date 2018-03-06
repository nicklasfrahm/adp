#!/usr/bin/env bash

RED='\033[1;31m'
BLUE='\033[1;34m'
RESET='\033[0m'

if [ -z "$*" ]
then
  echo -e "${RED}Supply at least one argument like so:${RESET} ./compile.sh counter"
  exit 1
fi

# find source file
echo -e "${BLUE}Searching source file ...${RESET}"
SOURCEFILE=$(find -iname $1.cpp)
if [ -z "$SOURCEFILE" ]
then
   echo -e "${RED}Source file not found:${RESET} $1.cpp"
   exit 1
else
  echo -e "${BLUE}Found source file:${RESET} ${SOURCEFILE}"
fi

# compile source file
echo -e "${BLUE}Compiling source file ...${RESET}"
g++ "$SOURCEFILE" -o $1.elf