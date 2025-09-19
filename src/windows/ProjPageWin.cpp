#include "windows/ProjPageWin.h"
#include <AUI/Util/UIBuildingHelpers.h>
#include <AUI/View/ALabel.h>
#include <AUI/View/AButton.h>
#include <AUI/View/ASpacerExpanding.h>
#include <AUI/View/ASpacerFixed.h>
#include <AUI/Platform/APlatform.h>
#include <AUI/View/ADrawableView.h>
#include <AUI/View/AProgressBar.h>
#include <AUI/ASS/ASS.h>

using namespace declarative;
using namespace ass;

ProjPageWin::ProjPageWin()
  : AWindow("Project template app", 768_dp, 640_dp) {
    setContents(Vertical { 
        Horizontal { Label { "PRAISE THE CODE" } } << "titleBar", 
        Horizontal { Vertical { Label { "PRAISE THE CODE" } } << "" } << "mainArea",
        Horizontal { Label { "PRAISE THE CODE" } } << "statusBar"

        
        }

    );
    AStylesheet::global().addRules({
      { 
        t<AView>(),
        BackgroundSolid { 000000_rgb }, 
        TextColor { AColor::WHITE }, 
        Border(1_dp, AColor::WHITE)
        },
        {
        c("titleBar"), 
        BackgroundSolid {AColor::RED}
        },
        { c("mainArea"), 
        BackgroundSolid { AColor::GREEN } 
        },
        { c("statusBar"), 
        BackgroundSolid { AColor::BLUE } 
        }
    });
}


