#include <opencv4/opencv2/opencv.hpp>

int main()
{
    float dummy_query_kernel_data [9] = {1, 1, 2, 3, 4, 5, 6, 7, 8};
    cv::Mat kernel = cv::Mat(3, 3, CV_32F, dummy_query_kernel_data);
    cv::Mat dstImage;
    float dummy_query_src_data [16] = {15, 14.1, 13, 12,
                                         11, 10.1, 9, 8,
                                         7, 6.1, 5, 4,
                                         3, 2.1, 1, 0};
    cv::Mat srcImage = cv::Mat(4, 4, CV_32F, dummy_query_src_data);
    cv::filter2D(srcImage, dstImage, srcImage.depth(), kernel);

    return 0;
}