#include <tchar.h>
#include <urlmon.h>

#pragma comment (lib,"urlmon.lib")

int main()
{
    DWORD YEAH = URLDownloadToFile(NULL, L"yes", L"C:\\sv_cheatsPLUS", 0, NULL);
    return 0;
}