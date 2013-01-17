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
	// Выход из главного цикла по прямому запросу операционки или если фреймоворк событие клавиатуры интерпретировал как команду на выход.
	while (!s3eDeviceCheckQuitRequest()) {
		// Содержательный игровой цикл

		// Рендеринг объектов

		// Выход по клавиатуре происходит отсюда временно, потом событие будет через Stage прокидываться.
		s3eKeyboardUpdate();
		if ((s3eKeyboardGetState(s3eKeyEsc) & S3E_KEY_STATE_DOWN) ||
			(s3eKeyboardGetState(s3eKeyLSK) & S3E_KEY_STATE_DOWN))
                break;
		s3eDeviceYield(0); // Здесь будут игры с FPS-ом.
	}
	return 0;
}

//s3eDeviceYield(0); // Прервать поток, и отдать управление операционке на время.
//s3eKeyboardUpdate(); // Опросить клавиатуру
//s3eKeyboardGetState(keyCode); // Получить состояние одной из кнопок.
//s3eDeviceCheckQuitRequest(); // Узнать, не запрашивала ли у нас операционная система закрытие приложения

//IwGxInit() // Активировать графический движок
//IwGxSetColClear() // Установить текущий чисты цвет
//IwGxClear() // Очистить текущий буфер рендеринга. В константах очищаемые каналы.
//IwGxPrintString() // Печатать Строку на экране.
//IwGxFlush() // Заканчиваем рендеринг текущего кадра.
//IwGxSwapBuffers() // Заливает буфер рндеринга в экран и готовит новый буфер для работы над следующим кадром.
//IwGxTerminate() // Погасть графический движок
