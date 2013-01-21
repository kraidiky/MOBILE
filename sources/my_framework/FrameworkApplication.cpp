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
	return 0;
}
// ���������������� �������, ������������ ���� ��� � ����.
int FrameworkApplication::EachFrame(void) {
	IwGxClear( IW_GX_COLOUR_BUFFER_F | IW_GX_DEPTH_BUFFER_F );
	IwGxLightingOn();

	CIwFMat view = CIwFMat::g_Identity;
	view.t.z = -80;
	view.t.y = 80;
	view.t.x = -60;
	view.LookAt(view.GetTrans(), CIwFVec3(0, 0, 0), -CIwFVec3::g_AxisY);
	IwGxSetViewMatrix(&view);

	CIwFMat modelMatrix = CIwFMat::g_Identity;
	IwGxSetModelMatrix(&modelMatrix);

	//pModel->Render();

	IwGxFlush();
	IwGxSwapBuffers();
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

// ����������
//s3eTimerGetMs() // ��������� � ������������