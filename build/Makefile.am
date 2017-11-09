AUTOMAKE_OPTIONS = foreign subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

AM_CPPFLAGS=-O3 -I ../eigen -I ../embree/include -I ../libigl/include -Wall -std=c++17 -fopenmp -msse2

bin_PROGRAMS = fix_orientation

LDFLAGS += -all-static -fopenmp -lpthread

fix_orientation_SOURCES = ../src/main.cpp
