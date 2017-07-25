cmake_minimum_required (VERSION 3.1) # 3.1 adds C_STANDARD
project (calc-sum LANGUAGES C)
add_executable (calc-sum calc-sum.c)
set_property (TARGET calc-sum PROPERTY C_STANDARD 99)
install (TARGETS calc-sum DESTINATION bin)
