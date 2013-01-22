#include "s3e.h"
#include "FrameworkApplication.h"
#include "IwDebug.h"
#include "IwGx.h"
#include "IwGraphics.h"

FrameworkApplication::FrameworkApplication (void) {
	IwTrace(FUNCTIONS, ("new FrameworkApplication()"));
	IwGxInit();
	IwGraphicsInit();

	IwGxSetLightType(1, IW_GX_LIGHT_DIFFUSE);
	CIwFVec3 dd(0xFF, 0xFF, 0xFF);
	IwGxSetLightDirn(1, &dd);

	IwGxSetPerspMul(0xAF);

}
FrameworkApplication::~FrameworkApplication (void) {
	//delete pModel;
	IwGraphicsTerminate();
	IwGxTerminate();
	IwTrace(FUNCTIONS, ("~FrameworkApplication()"));
}
int FrameworkApplication::MainLoop (void)  {
	IwTrace(FUNCTIONS, ("FrameworkApplication -> MainLoop()"));

	// ����� �� �������� ����� �� ������� ������� ����������� ��� ���� ���������� ������� ���������� ��������������� ��� ������� �� �����.
	while (!s3eDeviceCheckQuitRequest()) {
		// �������������� ������� ����
		if (EachFrame())
			break;
		// ��������� ��������
		Render();
		s3eDeviceYield(0); // ����� ����� ���� � FPS-��.
		// ����� �� ���������� ���������� ������ ��������, ����� ������� ����� ����� Stage �������������.
		s3eKeyboardUpdate();
		if ((s3eKeyboardGetState(s3eKeyEsc) & S3E_KEY_STATE_DOWN) ||
			(s3eKeyboardGetState(s3eKeyLSK) & S3E_KEY_STATE_DOWN))
				break;
	}
	return 0;
}

int FrameworkApplication::Render (void) {
//	root->Render();
	return 1;
}
// ���������������� �������, ������������ ���� ��� � ����.
int FrameworkApplication::EachFrame(void) {
	return 1;
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

// ����������
//s3eTimerGetMs() // ��������� � ������������