#!/bin/bash

echo "지금부터 컴파일을 하겠습니다."

gcc -o $1 $1.c

echo "실행 파일이 만들어졌어요."

ls -al
echo "start!"
./$1

