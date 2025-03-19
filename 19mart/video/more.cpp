#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat image = imread("/home/stud-12/Desktop/arina/full-class-2025/18mart/image/duck.jpg", cv::IMREAD_COLOR);
    if(!image.data) {
        std::cerr << "Can not create image\n";
        return -1;
    }
    cv::Point p1(30, 30);
    cv::Point p2(300, 255);
    cv::Point p3(50, 100);
    cv::Point p4(250, 100);
    cv::Point2f center(image.cols/2.0, (image.rows + 70)/2.0);
    int thickness = -1;
    int thickness1 = 2;
    int thickness2 = 4;
    int thickness3 = 1;
    cv::rectangle(image, p1, p2, cv::Scalar(208, 1, 21), thickness, cv::LINE_8);
    cv::circle(image, p3,50, cv::Scalar(208, 1, 213),  thickness, cv::LINE_8);
    cv::circle(image, p4,100, cv::Scalar(20, 100, 2),  thickness, cv::LINE_8);
    cv::circle(image, center,100, cv::Scalar(47, 162, 254),  thickness, cv::LINE_8);
    cv::circle(image, center,170, cv::Scalar(0, 0, 254),  thickness3, cv::LINE_8);
    cv::circle(image, center,200, cv::Scalar(0, 0, 254),  thickness1, cv::LINE_8);
    cv::circle(image, center,230, cv::Scalar(0, 0, 254),  thickness2, cv::LINE_8);
    cv::circle(image, center,50, cv::Scalar(0, 0, 254),  thickness, cv::LINE_8);
    cv::imshow("masterpiece", image);
    cv::waitKey(0);

    return 0;
}