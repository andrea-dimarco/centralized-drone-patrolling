#!/bin/sh

# MODELICA

sudo apt-get update
sudo apt-get install
sudo apt update
sudo apt install openmodelica


# NEVERGRAD

pip install nevergrad


# NOMAD

sudo apt-get install python-is-python3
pip3 install cython

export NOMAD_HOME=./nomad-v.4.2.0

#curl https://codeload.github.com/bbopt/nomad/tar.gz/refs/tags/v.4.2.0 --output NOMAD42.tar.gz
#tar -xvf NOMAD42.tar.gz && mv nomad-v.4.2.0 NOMAD42 && rm -r NOMAD42.tar.gz

cd ${NOMAD_HOME}

cmake -DTEST_OPENMP=OFF -DBUILD_INTERFACE_PYTHON=ON -S . -B build/release && \
    cmake --build build/release && \
    cmake --install build/release


export LD_LIBRARY_PATH="${LD_LIBRARY_PATH}:${NOMAD_HOME}/build/release/lib"
