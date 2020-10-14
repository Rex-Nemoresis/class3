#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
void threshod_Mat(int th,void* data)
{
    Mat src =*(Mat*)(data);
    Mat dst;
    threshold(src,dst,th,255,0);
    imshow("kt",dst);
}
int main()
{
    cv::Mat src_color =imread("D:\\1.jpg",0);
    Mat result;
    int low=30;
    int max=255;
    cvtColor(src_color, result, COLOR_BGR2GRAY);
    imshow("kt",result);
    createTrackbar("threshold","kt",&low,max,threshod_Mat,&result);
    waitKey(0);
    return 0;
}