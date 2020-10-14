/*#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
    cv::Mat src_color =imread("D:\\1.jpg",0);
    Mat result;
    //threshold(src_color,result,100,255,THRESH_BINARY);
    adaptiveThreshold(src_color, result, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
    cv::imshow("2c",result);
    waitKey(0);
    return 0;
}*/