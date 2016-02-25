CXX = g++
CXXFLAGS = -Wall -g
OPENCV_DIR=/Users/user/logiciels/opencv-3.1.0/
OPENCV_BUILD_DIR=/Users/user/logiciels/opencv-3.1.0/build/lib/

DisplayImage: DisplayImage.o
	$(CXX) $(CXXFLAGS) -v DisplayImage.o \
	-L '$(OPENCV_BUILD_DIR)' \
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
	-o DisplayImage

DisplayImage.o: 
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
	-Wall -c DisplayImage.cpp
