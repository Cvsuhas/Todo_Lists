#! /bin/bash

echo "generating executable for Todo_Lists"

if [ ! -d "binary" ]; then
	mkdir binary
fi

cd binary
rm -rf *
cmake ..
make

echo "**Build Successfull"

echo "to run the executable go to binary directory and execute ./todo to enter the Todo_Lists"


