# OpenCV Experimentation

- test0: simple compilation
- test1: use a header file
- test2: use a shared lib
- test3: use a well-know lib `OpenCV`

## Open CV 3.1.0 compilation

```
cd ~/opencv
$ mkdir build
$ cd build
$ cmake -D CMAKE_BUILD_TYPE=RELEASE \
	-D CMAKE_INSTALL_PREFIX=/Users/user/logiciels/opencv-3.1.0/build \
	-D INSTALL_C_EXAMPLES=OFF \
	-D INSTALL_PYTHON_EXAMPLES=OFF \
	-D BUILD_EXAMPLES=ON ..
$ make -j3
$ make install
```

## To compile test3 on linux
- You might need to launch a new make AFTER the make install of OpenCV
- Launch the following command so that ``ld`` finds the OpenCV libs:

```
$ LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<OpenCV-path>/build/lib
```

