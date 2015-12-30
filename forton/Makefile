ARCHS = armv7 armv7s arm64
include theos/makefiles/common.mk
Forton_FRAMEWORKS = UIKit
TWEAK_NAME = Forton
Forton_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk


SUBPROJECTS += fortonprefs
include $(THEOS_MAKE_PATH)/aggregate.mk
