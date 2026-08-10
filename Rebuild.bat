
msbuild  -restore  -t:Clean     ^
    -p:Configuration="Release"  -p:Platform=x64     ^
    NesDebugger.sln

msbuild  -restore  -t:Rebuild   ^
    -p:Configuration="Release"  -p:Platform=x64     ^
    NesDebugger.sln
