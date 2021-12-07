# CMake generated Testfile for 
# Source directory: D:/Kuliah/PMC/Tugas Akhir/test
# Build directory: D:/Kuliah/PMC/Tugas Akhir/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[TugasAkhir]=] "D:/Kuliah/PMC/Tugas Akhir/build/test/Debug/TugasAkhir.exe")
  set_tests_properties([=[TugasAkhir]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;15;add_test;D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[TugasAkhir]=] "D:/Kuliah/PMC/Tugas Akhir/build/test/Release/TugasAkhir.exe")
  set_tests_properties([=[TugasAkhir]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;15;add_test;D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[TugasAkhir]=] "D:/Kuliah/PMC/Tugas Akhir/build/test/MinSizeRel/TugasAkhir.exe")
  set_tests_properties([=[TugasAkhir]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;15;add_test;D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[TugasAkhir]=] "D:/Kuliah/PMC/Tugas Akhir/build/test/RelWithDebInfo/TugasAkhir.exe")
  set_tests_properties([=[TugasAkhir]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;15;add_test;D:/Kuliah/PMC/Tugas Akhir/test/CMakeLists.txt;0;")
else()
  add_test([=[TugasAkhir]=] NOT_AVAILABLE)
endif()
