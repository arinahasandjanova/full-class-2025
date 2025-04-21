#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    //cv::Mat img = cv::imread("/home/stud-12/Desktop/arina/full-class-2025/18mart/image/dog.jpg", cv::IMREAD_COLOR);
    //cv::Mat img1 = cv::imread("/home/stud-12/Desktop/arina/full-class-2025/18mart/image/photo.jpg", cv::IMREAD_COLOR);
    cv::Mat img2 = cv::imread("/home/stud-12/Desktop/arina/full-class-2025/18mart/image/duck.jpg", cv::IMREAD_COLOR);
    //cv::Mat resized;
    //int new_width = 200;
    //int new_height = 250;
    //cv::resize(img2, resized, cv::Size(new_width, new_height));
    //int x = 100, y = 50, width = 200, height = 150;
    //cv::Mat cropped = img2(cv::Rect(x, y, width, height));
    double angle = 180.0;
    cv::Point2f center(img2.cols/2.0, img2.rows/2.0);
    cv::Mat rotation_matrix = cv::getRotationMatrix2D(center, angle, 1.0);
    cv::Mat rotated;
    cv::warpAffine(img2, rotated, rotation_matrix, img2.size());
    if(/*img.empty() || img1.empty() || */img2.empty()) {
        std::cerr << "Can't load the image\n";
        return -1;
    }

    //cv::imshow("berry", img);
    //cv::imshow("flowers", img1);
    cv::imshow("duckies", img2);
    //cv::imshow("duckies 2.0", resized);
    //cv::imshow("duckies 3.0", cropped);
    cv::imshow("antiducks", rotated);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
