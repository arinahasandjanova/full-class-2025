#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    cv::VideoCapture video("/home/stud-12/Desktop/arina/full-class-2025/19mart/video/video.mp4");
    if(!video.isOpened()) {
        std::cerr << "File can not be opened\n";
        return -1;
    }
    cv::Mat frame;
    while(video.read(frame)) {
        cv::imshow("Birds", frame);
        if(cv::waitKey(25) == 'h') {
            break;
        }
    }
    video.release();cv::destroyAllWindows();

    return 0;
}
