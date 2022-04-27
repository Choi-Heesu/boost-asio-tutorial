CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
PROJECT(boost-asio-tutorial)

SET(CMAKE_CXX_STANDARD 14)

FIND_PACKAGE(Boost COMPONENTS thread REQUIRED)
IF (Boost_FOUND)
  INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS})
  LINK_LIBRARIES(Boost::thread)
ENDIF ()

ADD_EXECUTABLE(timer1 src/timer1.cpp)
ADD_EXECUTABLE(timer2 src/timer2.cpp)
ADD_EXECUTABLE(timer3 src/timer3.cpp)
ADD_EXECUTABLE(timer4 src/timer4.cpp)
ADD_EXECUTABLE(timer5 src/timer5.cpp)
ADD_EXECUTABLE(sync_tcp_client src/sync_tcp_client.cpp)
ADD_EXECUTABLE(sync_tcp_server src/sync_tcp_server.cpp)
ADD_EXECUTABLE(async_tcp_server src/async_tcp_server.cpp)
