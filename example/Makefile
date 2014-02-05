THEOS_DEVICE_IP = 127.0.0.1 -p 2323

include theos/makefiles/common.mk

TWEAK_NAME = HeroKitExample
HeroKitExample_FILES = Tweak.xm
HeroKitExample_FRAMEWORKS = Foundation UIKit
HeroKitExample_LDFLAGS = -lherokit -lactivator

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
