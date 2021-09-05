#!/bin/bash

echo "git auto push start..."
git add *
git commit -m $1
echo "git提交注释:$1"
git push origin master
echo "git auto push end..."