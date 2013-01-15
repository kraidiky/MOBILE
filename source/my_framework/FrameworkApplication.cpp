#include "s3e.h"
#include "FrameworkApplication.h"
#include "IwDebug.h"
#include "display\Stage.h"

FrameworkApplication::FrameworkApplication (void) {
	IwTrace(FUNCTIONS, ("new FrameworkApplication()"));
	stage = new Stage;
}
FrameworkApplication::~FrameworkApplication (void) {
	IwTrace(FUNCTIONS, ("~ FrameworkApplication()"));
}
int FrameworkApplication::MainLoop (void)  {
	IwTrace(FUNCTIONS, ("FrameworkApplication -> MainLoop()"));
	// ����� �� �������� ����� �� ������� ������� ����������� ��� ���� ���������� ������� ���������� ��������������� ��� ������� �� �����.
	while (!s3eDeviceCheckQuitRequest()) {
		// �������������� ������� ����

		// ��������� ��������

		// ����� �� ���������� ���������� ������ ��������, ����� ������� ����� ����� Stage �������������.
		s3eKeyboardUpdate();
		if ((s3eKeyboardGetState(s3eKeyEsc) & S3E_KEY_STATE_DOWN) ||
			(s3eKeyboardGetState(s3eKeyLSK) & S3E_KEY_STATE_DOWN))
                break;
		s3eDeviceYield(0); // ����� ����� ���� � FPS-��.
	}
	return 0;
}

//s3eDeviceYield(0); // �������� �����, � ������ ���������� ����������� �� �����.
//s3eKeyboardUpdate(); // �������� ����������
//s3eKeyboardGetState(keyCode); // �������� ��������� ����� �� ������.
//s3eDeviceCheckQuitRequest(); // ������, �� ����������� �� � ��� ������������ ������� �������� ����������

//IwGxInit() // ������������ ����������� ������
//IwGxSetColClear() // ���������� ������� ����� ����
//IwGxClear() // �������� ������� ����� ����������. � ���������� ��������� ������.
//IwGxPrintString() // �������� ������ �� ������.
//IwGxFlush() // ����������� ��������� �������� �����.
//IwGxSwapBuffers() // �������� ����� ��������� � ����� � ������� ����� ����� ��� ������ ��� ��������� ������.
//IwGxTerminate() // ������� ����������� ������
