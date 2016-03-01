CXX = g++
CXXFLAGS = -Wall -g
OPENCV_DIR=/usr/local/include/
OPENCV_BUILD_DIR=/usr/local/lib/

BP_Height:BP_Height.o
	$(CXX) $(CXXFLAGS) \
	-o BP_Height \
	BP_Height.o \
	-lcurl \
	-lmicrohttpd \
	-lhttpserver \
	-L$(OPENCV_BUILD_DIR) \
	-lopencv_objdetect \
	-lopencv_calib3d \
	-lopencv_photo \
	-lopencv_core \
	-lopencv_shape \
	-lopencv_features2d \
	-lopencv_stitching \
	-lopencv_flann \
	-lopencv_superres \
	-lopencv_highgui \
	-lopencv_video \
	-lopencv_imgcodecs \
	-lopencv_videoio \
	-lopencv_imgproc \
	-lopencv_videostab \
	-lopencv_ml \
	-L./build \
	-ltest


BP_Height.o:BP_test.so
	$(CXX) $(CXXFLAGS) \
	-I$(OPENCV_DIR)include \
	-I$(OPENCV_DIR)modules/core/include \
	-I$(OPENCV_DIR)modules/imgproc/include \
	-I$(OPENCV_DIR)modules/photo/include \
	-I$(OPENCV_DIR)modules/video/include \
	-I$(OPENCV_DIR)modules/features2d/include \
	-I$(OPENCV_DIR)modules/flann/include \
	-I$(OPENCV_DIR)modules/objdetect/include \
	-I$(OPENCV_DIR)modules/calib3d/include \
	-I$(OPENCV_DIR)modules/imgcodecs/include \
	-I$(OPENCV_DIR)modules/videoio/include \
	-I$(OPENCV_DIR)modules/highgui/include \
	-I$(OPENCV_DIR)modules/ml/include \
	-c BP_Height.cpp

BP_test.so: BP_test.o
	$(CXX) $(CXXFLAGS) \
	-L$(OPENCV_BUILD_DIR) \
	-shared -Wl,-soname,build/libtest.so -o ./build/libtest.so \
	BP_test.o \
	-lopencv_objdetect \
	-lopencv_calib3d \
	-lopencv_photo \
	-lopencv_core \
	-lopencv_shape \
	-lopencv_features2d \
	-lopencv_stitching \
	-lopencv_flann \
	-lopencv_superres \
	-lopencv_highgui \
	-lopencv_video \
	-lopencv_imgcodecs \
	-lopencv_videoio \
	-lopencv_imgproc \
	-lopencv_videostab \
	-lopencv_ml
	

BP_test.o: 
	$(CXX) $(CXXFLAGS) \
	-I$(OPENCV_DIR)include \
	-I$(OPENCV_DIR)modules/core/include \
	-I$(OPENCV_DIR)modules/imgproc/include \
	-I$(OPENCV_DIR)modules/photo/include \
	-I$(OPENCV_DIR)modules/video/include \
	-I$(OPENCV_DIR)modules/features2d/include \
	-I$(OPENCV_DIR)modules/flann/include \
	-I$(OPENCV_DIR)modules/objdetect/include \
	-I$(OPENCV_DIR)modules/calib3d/include \
	-I$(OPENCV_DIR)modules/imgcodecs/include \
	-I$(OPENCV_DIR)modules/videoio/include \
	-I$(OPENCV_DIR)modules/highgui/include \
	-I$(OPENCV_DIR)modules/ml/include \
	-fPIC -c BP_test.cpp

