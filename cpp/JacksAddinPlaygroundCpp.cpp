
#include <Core/CoreAll.h>
#include <Fusion/FusionAll.h>
#include <Cam/CamAll.h>

using namespace adsk::core;
using namespace adsk::fusion;
using namespace adsk::cam;

Ptr<Application> app;
Ptr<UserInterface> ui;

extern "C" XI_EXPORT bool run(const char* context)
{
    app = Application::get();
    if (!app)
        return false;

    ui = app->userInterface();
    if (!ui)
        return false;

    // ui->messageBox("Hello C++ add-in");
    ui->messageBox("Context: " + adsk::to_string(context) + " !");

    // Create a button command definition.
12     Ptr<CommandDefinitions> cmdDefs = ui->commandDefinitions();
13     sampleCmdDef = cmdDefs->addButtonDefinition("sampleCmdID", "Sample", 
14                                                 "Sample tooltip",
15                                                 "./Resources/icon32");
16
17     // Connect to the Command Created event.
18     Ptr<CommandCreatedEvent> commandCreatedEvent = sampleCmdDef->commandCreated();
19     commandCreatedEvent->add(&_cmdCreated);

    return true;
}

extern "C" XI_EXPORT bool stop(const char* context)
{
    if (ui)
    {
        ui->messageBox("Stop C++ add-in");
        ui = nullptr;
    }

    return true;
}

#ifdef XI_WIN

#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hmodule, DWORD reason, LPVOID reserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

#endif // XI_WIN
