#!/bin/bash

BLUE="\033[1;34m"
GREEN="\033[1;32m"
RED="\033[1;31m"
YELLOW="\033[1;33m"
MAGENTA="\033[0;95m"
BOLD="\033[1;37m"
RESET="\033[0m"

OK=" ${GREEN}[ OK ]${RESET}"
KO=" ${YELLOW}[ KO ]${RESET}"
FAIL=" ${RED}[ KO ]${RESET}"

clear
make fclean
make
make clean

printf "\n${BLUE}============== ${BOLD}Tests${BLUE} ==============${RESET}\n"

# Test 1
./pipex tests/file.txt "cat" "wc -l" tests/mand-test-1-result.txt 2> /dev/null
< tests/file.txt cat | wc -l > tests/mand-test-1-expected.txt

if [ $(diff tests/mand-test-1-result.txt tests/mand-test-1-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-1*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 1:${RESET} cat | wc -l"

# Test 2
./pipex tests/file.txt "cat" "head -n 5" tests/mand-test-2-result.txt 2> /dev/null
< tests/file.txt cat | head -n 5 > tests/mand-test-2-expected.txt

if [ $(diff tests/mand-test-2-result.txt tests/mand-test-2-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-2*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 2:${RESET} cat | head -n 5"

# Test 3
./pipex tests/file.txt "cat" "grep Temos" tests/mand-test-3-result.txt 2> /dev/null
< tests/file.txt cat | grep Temos > tests/mand-test-3-expected.txt

if [ $(diff tests/mand-test-3-result.txt tests/mand-test-3-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-3*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 3:${RESET} cat | grep Temos"

# Test 4
./pipex tests/file.txt "cat" "uniq" tests/mand-test-4-result.txt 2> /dev/null
< tests/file.txt cat | uniq > tests/mand-test-4-expected.txt

if [ $(diff tests/mand-test-4-result.txt tests/mand-test-4-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-4*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 4:${RESET} cat | uniq"

# Test 5
./pipex tests/file.txt "grep -i a" "wc -l" tests/mand-test-5-result.txt 2> /dev/null
< tests/file.txt grep -i a | wc -l > tests/mand-test-5-expected.txt

if [ $(diff tests/mand-test-5-result.txt tests/mand-test-5-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-5*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 5:${RESET} grep -i a | wc -l"

# Test 6
./pipex tests/file.txt "grep -i a" "uniq" tests/mand-test-6-result.txt 2> /dev/null
< tests/file.txt grep -i a | uniq > tests/mand-test-6-expected.txt

if [ $(diff tests/mand-test-6-result.txt tests/mand-test-6-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-6*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 6:${RESET} grep -i a | uniq"

# Test 7
./pipex tests/file.txt "ls -l" "wc -l" tests/mand-test-7-result.txt 2> /dev/null
< tests/file.txt ls -l | wc -l > tests/mand-test-7-expected.txt

if [ $(diff tests/mand-test-7-result.txt tests/mand-test-7-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-7*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 7:${RESET} ls -l | wc -l"

# Test 8
./pipex tests/file.txt "ls -a" "sort" tests/mand-test-8-result.txt 2> /dev/null
< tests/file.txt ls -a | sort > tests/mand-test-8-expected.txt

if [ $(diff tests/mand-test-8-result.txt tests/mand-test-8-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-8*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 8:${RESET} ls -a | sort"

# Test 9
./pipex tests/file.txt "sort" "awk \'{print \$1}\'" tests/mand-test-9-result.txt 2> /dev/null
< tests/file.txt sort | awk '{print $1}' > tests/mand-test-9-expected.txt

if [ $(diff tests/mand-test-9-result.txt tests/mand-test-9-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-9*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 9:${RESET} sort | awk '{print \$1}'"

# Test 10
./pipex tests/file.txt "sort" "ola" tests/mand-test-10-result.txt 2> /dev/null
< tests/file.txt sort | ola > tests/mand-test-10-expected.txt

if [ $(diff tests/mand-test-10-result.txt tests/mand-test-10-expected.txt | wc -l) == 0 ]
then
    printf "\n${OK}"
    rm tests/mand-test-10*
else
    printf "\n${FAIL}"
fi
printf " ==> ${MAGENTA}Test 9:${RESET} sort | ola"



printf "\n\n${YELLOW}Fin de los tests${RESET}\n\n"
