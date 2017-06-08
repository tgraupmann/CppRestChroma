SET PATH=%PATH%;c:\cygwin64\bin

CD "ChromaSDK\SDK\Swagger"

SET VER=chromasdk_cpprest
rm -r -f "chroma"
IF EXIST "chroma" PAUSE
mkdir "chroma"
cp -r -f "C:\Public\tgraupmann-swagger-codegen\samples\chromasdk\%VER%" "chroma"

SET VER=razer_cpprest
rm -r -f "razer"
IF EXIST "razer" PAUSE
mkdir "razer"
cp -r -f "C:\Public\tgraupmann-swagger-codegen\samples\chromasdk\%VER%" "razer"

PAUSE
