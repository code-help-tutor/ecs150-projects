WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#! /usr/bin/env python

import random
import string

for i in range(1000000):
    x = ''
    for i in range(40):
        x += random.choice(string.letters + ' ')
    print(x)
