# CMakeList.txt : CMake project for Bomba_Wpierdol_Ostateczny, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Bomba_Wpierdol_Ostateczny "Bomba_Wpierdol_Ostateczny.cpp" "Bomba_Wpierdol_Ostateczny.h" "KapitanBomba.h" "KapitanBomba.cpp" "Kosmita.h" "Kosmita.cpp" "Postac.cpp" "Postac.h" "Robot.cpp" "Robot.h" "Plansza.cpp" "Plansza.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Bomba_Wpierdol_Ostateczny PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
