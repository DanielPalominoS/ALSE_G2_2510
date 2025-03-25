cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Ejemplo5)

include_directories(include)

# Add the executable for CubeUnified.cpp
add_executable(cubeUnified Example1.cpp)

# Add the executable for ComplexUnified.cpp
add_executable(ComplexUnified Complex.cpp)

# Add the executable for VehicleUnified.cpp 
add_executable(VehicleUnified Vehicle.cpp)

# Add the executable for Cube.cpp
#add_executable(CubeSeparated src/Cube.cpp src/main.cpp)

# Add the executable for Complex.cpp
#add_executable(ComplexUnified src/Complex.cpp)

# Add the executable for Vehicle.cpp
#add_executable(VehicleUnified src/Vehicle.cpp)

# Add the library for Cube
add_library(Cube src/Cube.cpp)
 
# Add the library for Complex
add_library(Complex src/Complex.cpp)

# Add the library for Vehicle
add_library(Vehicle src/Vehicle.cpp)

# Add executable to use all classes
add_executable(AllClasses src/main.cpp)
target_link_libraries(AllClasses Cube Complex Vehicle)

add_executable(inheritance
    src/Vehicle.cpp
    src/Car.cpp
    src/AirVehicle.cpp
    src/mainInheritance.cpp
)
add_executable(mainCube src/mainCube.cpp)# Add the executable for mainCube.cpp
target_link_libraries(mainCube Cube)
