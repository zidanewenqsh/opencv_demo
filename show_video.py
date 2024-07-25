import cv2

# 打开视频文件
# video_path = '/home/wen/Downloads/openpose/examples/media/video.avi'
video_path = '/home/wen/Projects/opencv_demo/SampleVideo_1280x720_1mb.mp4'
cap = cv2.VideoCapture(video_path)

if not cap.isOpened():
    print("Error: Could not open video.")
    exit()

while True:
    # 读取视频帧
    ret, frame = cap.read()

    if not ret:
        print("End of video.")
        break

    # 显示帧
    cv2.imshow('Video', frame)

    # 按下 'q' 键退出
    if cv2.waitKey(25) & 0xFF == ord('q'):
        break

# 释放视频捕获对象
cap.release()
# 关闭所有 OpenCV 窗口
cv2.destroyAllWindows()
