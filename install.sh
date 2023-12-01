#! /bin/zsh
echo "Installing..."
cmake -B build
cd build
make install
make clean
echo "Installation Completed"
echo "Start Testing of Library"
cd ..
mkdir -p tests/bin
cmake -S tests/ -B tests/bin
cd tests/bin
make
ctest
echo "Testing Complete "
