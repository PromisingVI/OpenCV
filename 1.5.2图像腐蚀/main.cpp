#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main()
{
	Mat srcImage = imread("E:/testingimage/52.jpg");
	imshow("oringin image",srcImage);
	Mat element = getStructuringElement(MORPH_RECT,Size(15,15));
	Mat dstImage;
	erode(srcImage,dstImage,element);
	imshow("erode", dstImage);
	waitKey(300000);
	return 0;
}