# OpenCV Experimentation

- test0: simple compilation
- test1: use a header file
- test2: use a shared lib
- test3: use a well-know lib `OpenCV`

## Open CV compilation

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

