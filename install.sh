#! /bin/zsh
echo "Installing..."
cmake -B build
cd build
make install
make clean
echo "Installation Completed"
