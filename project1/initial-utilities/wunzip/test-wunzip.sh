WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#! /bin/bash

if ! [[ -x wunzip ]]; then
    echo "wunzip executable does not exist"
    exit 1
fi

../../tester/run-tests.sh $*


