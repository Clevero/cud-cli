#!/bin/bash

DEPS=true

# test if all depencies are installed
echo "Check if you have all depencies installed"
echo ""

# shc - for compiling the bash scripts
command -v shc >/dev/null 2>&1 || { echo >&2 -e "shc: [\033[31mFALSE\033[31m]"; DEPS=false; }

# jq - for colored json string parsing
command -v jq >/dev/null 2>&1 || { echo >&2 "jq: [\033[31mFALSE\033[31m]"; DEPS=false; }
echo ""
if [	$DEPS == true	] 
    then
	echo -e "\033[1;32mReady to install cud-cli! \033[1;32m"
    else
	echo -e "\033[1;33mSome of the depencies are not installed. Please check that\033[1;33m"
fi


# compile cud-cli
shc -T -f cud-cli.sh

# now we have a compiled file named cud-cli.sh.x
# rename it
mv cud-cli.sh.x cud-cli

# delete temp files
rm cud-cli.sh.x.c

# reset console colors
echo -e "\033[0m"

echo "now run ./cud-cli to connect to the default server"
