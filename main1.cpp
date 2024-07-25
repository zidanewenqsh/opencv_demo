// #include <opencv2/opencv.hpp>
// #include <iostream>

// int main(int argc, char** argv) {
//     // // 检查是否提供了视频文件路径
//     // if (argc != 2) {
//     //     std::cerr << "Usage: " << argv[0] << " <video_path>" << std::endl;
//     //     return -1;
//     // }

//     // // 打开视频文件
//     // std::string video_path = argv[1];
//     std::string video_path = "/home/wen/Downloads/openpose/examples/media/video.avi";
//     cv::VideoCapture cap(video_path);

//     if (!cap.isOpened()) {
//         std::cerr << "Error: Could not open video." << std::endl;
//         return -1;
//     }

//     while (true) {
//         cv::Mat frame;
//         // 读取视频帧
//         cap >> frame;

//         if (frame.empty()) {
//             std::cout << "End of video." << std::endl;
//             break;
//         }

//         // 显示帧
//         cv::imshow("Video", frame);

//         // 按下 'q' 键退出
//         if (cv::waitKey(25) == 'q') {
//             break;
//         }
//     }

//     // 释放视频捕获对象
//     cap.release();
//     // 关闭所有 OpenCV 窗口
//     cv::destroyAllWindows();

//     return 0;
// }
// #include <opencv2/opencv.hpp>
// #include <iostream>

// int main(int argc, char** argv) {
//     // 检查是否提供了视频文件路径
//     // std::string video_path = "/home/wen/Downloads/openpose/examples/media/video.avi";
//     std::string video_path = "/home/wen/Projects/opencv_demo/SampleVideo_1280x720_1mb.mp4";
//     cv::VideoCapture cap(video_path);

//     if (!cap.isOpened()) {
//         std::cerr << "Error: Could not open video at " << video_path << std::endl;
//         return -1;
//     }

//     while (true) {
//         cv::Mat frame;
//         // 读取视频帧
//         cap >> frame;

//         if (frame.empty()) {
//             std::cout << "End of video." << std::endl;
//             break;
//         }

//         // 显示帧
//         cv::imshow("Video", frame);

//         // 按下 'q' 键退出
//         if (cv::waitKey(25) == 'q') {
//             break;
//         }
//     }

//     // 释放视频捕获对象
//     cap.release();
//     // 关闭所有 OpenCV 窗口
//     cv::destroyAllWindows();

//     return 0;
// }

#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {
    // 视频文件路径
    std::string video_path = "/home/wen/Downloads/openpose/examples/media/video.avi";

    // 打开视频文件
    cv::VideoCapture cap(video_path);

    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open video at " << video_path << std::endl;
        return -1;
    }

    // 打印视频文件的属性
    double fps = cap.get(cv::CAP_PROP_FPS);
    double frame_count = cap.get(cv::CAP_PROP_FRAME_COUNT);
    double width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
    double height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);

    std::cout << "FPS: " << fps << std::endl;
    std::cout << "Frame count: " << frame_count << std::endl;
    std::cout << "Frame width: " << width << std::endl;
    std::cout << "Frame height: " << height << std::endl;

    while (true) {
        cv::Mat frame;
        // 读取视频帧
        cap >> frame;

        if (frame.empty()) {
            std::cout << "End of video." << std::endl;
            break;
        }

        // 显示帧
        cv::imshow("Video", frame);

        // 按下 'q' 键退出
        if (cv::waitKey(25) == 'q') {
            break;
        }
    }

    // 释放视频捕获对象
    cap.release();
    // 关闭所有 OpenCV 窗口
    cv::destroyAllWindows();

    return 0;
}
