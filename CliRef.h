#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <opencv2/core.hpp>
#include<opencv2/opencv.hpp>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;
using namespace cv;
namespace CliRef {
	public ref class Tester
	{
		public:
			bool Passing_Ref(array<Byte>^ ImColorData, int Height, int Width, [Out]System::String^% Name)
			{
				unsigned char* ImDataTmp = new unsigned char[ImColorData->Length];
				Marshal::Copy(ImColorData, 0, (IntPtr)ImDataTmp, ImColorData->Length);
				Mat ImColor = cv::Mat(Height, Width, CV_8UC3, ImDataTmp);
				Name = "Ronaldo";
			
				return true;
			}
	};
}
