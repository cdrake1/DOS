#!/bin/bash
<<COMMENT1
  bash script for compiling the project on mac.  Windows users can use gitbash, their
  ubuntu terminal, create and contribute a .bat file (which shows ingenuity
  and is good), or whine (which lowers their grade and is bad) and run the
  commands manually.
COMMENT1

if [ ! -d "dist" ]
then
  # dist folder does not exist, create.
  mkdir dist
  echo Created distrib directory
fi

tsc --version
echo Starting TypeScript compile
tsc --rootDir src/ --outDir dist/

# This file is borrowed from Prof. Gormanly @ marist