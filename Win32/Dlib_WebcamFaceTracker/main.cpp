#include "FacetrackingSystem.h"
#include "CameraDetector.h"

int main(void) {
	// �J�����f�o�C�X�̎擾
	int dev_id;
	if(CameraDeviceDetect() != 0) return -1;

	// �I��
	std::cout << "Select device: ";
	std::cin >> dev_id;

	// �J�����I�[�v��
	cv::VideoCapture cap(dev_id);
	if (!cap.isOpened()) {

		std::cout << "Unable to connect." << std::endl;
		return -1;

	}

	FACE_PARAM face_p;
	Trackingsystem(cap, face_p, TRUE);

	return 0;
}