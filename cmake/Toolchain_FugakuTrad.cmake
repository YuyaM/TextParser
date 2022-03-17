set(CMAKE_SYSTEM_NAME Linux)

if(with_MPI)
  set(CMAKE_C_COMPILER       mpifccpx)
  set(CMAKE_CXX_COMPILER     mpiFCCpx)
  set(CMAKE_Fortran_COMPILER mpifrtpx)
else()
  set(CMAKE_C_COMPILER       fccpx)
  set(CMAKE_CXX_COMPILER     FCCpx)
  set(CMAKE_Fortran_COMPILER frtpx)
endif()


set(CMAKE_FIND_ROOT_PATH   /opt/FJSVxtclanga/tcsds-1.2.34)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(TARGET_ARCH "FugakuTrad")
set(USE_F_TCS "NO")
