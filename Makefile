.PHONY: all build install lib test doc

# Make all will do all the job of building and installing then make the library test
all: build install lib

# build the library from the source files .cpp & .h
build:
	mkdir -p build
	cd build && cmake ..
	$(MAKE) -C build

# do the installing job for the library and header files to build/Release
install:
	sudo $(MAKE) -C build install
	@echo "Library Installed Successfully!"

# Make the Test binray file and link the library
library:
	mkdir -p tests/test
	cd tests/test && cmake ..
	$(MAKE) -C tests/test

# make the test by running the ctest 
test:
	cd tests/test && ctest

# make and create the library documents files with doxygen
doc:
	doxygen dconfig

# do the clean job for the installation directories
clean:
	$(MAKE) -C build clean
	$(MAKE) -C tests/test clean
	@echo "Cleaned Build Files"

