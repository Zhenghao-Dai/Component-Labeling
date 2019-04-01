#!/bin/bash
make
valgrind --tool=memcheck --leak-check=yes ./label test_queue
valgrind --tool=memcheck --leak-check=yes ./label gray coins.bmp coins_gray.bmp
valgrind --tool=memcheck --leak-check=yes ./label binary coins.bmp coins_binary.bmp
valgrind --tool=memcheck --leak-check=yes ./label segment coins.bmp coins_segment.bmp


