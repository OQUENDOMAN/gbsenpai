#include "main.h"

#include "shim/gb_shim.h"
#include "shim/platform.h"

#include "Core_Main.h"
#include "states/Adventure.h"
#include "states/Platform.h"
#include "states/Shmup.h"
#include "states/TopDown.h"
#include "states/PointNClick.h"

const Void_Func_Void startFuncs[] = {0, Start_TopDown, Start_Platform, Start_Adventure,
                                     Start_Shmup, Start_PointNClick};
const Void_Func_Void updateFuncs[] = {0, Update_TopDown, Update_Platform, Update_Adventure,
                                      Update_Shmup, Update_PointNClick};
const UBYTE stateBanks[] = {0, 5, 5, 5, 5, 5};

int main() {
	gbsa_init(); // GBSA
    core_start();
	gbsa_exit(); // GBSA
    return 0;
}
