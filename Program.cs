using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Emgu.CV;//Use namespace
using Emgu.CV.Structure;
using Emgu.CV.CvEnum;
using Emgu.Util;
using System.IO;
using CliRef;

namespace CsProject
{
    class Program
    {
        static void Main(string[] args)
        {
            Mat srcImg = CvInvoke.Imread(@"C:\Users\a.rostami\Desktop\github\Ronaldo.jpg");
            int Height = srcImg.Height;
            int Width = srcImg.Width;
            Tester test = new Tester();
            test.Passing_Ref(srcImg.GetData(), Height, Width);
        }
    }
}
