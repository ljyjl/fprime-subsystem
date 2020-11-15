# Makefile to run global make.
DEPLOYMENT := Ref
BUILD_ROOT ?= $(subst /$(DEPLOYMENT),,$(CURDIR))

# Add Module
#MODULE_DIR = Ref
#MODULE = $(subst /,,$(MODULE_DIR))

#BUILD_ROOT ?= $(subst /$(MODULE_DIR),,$(CURDIR))
#export BUILD_ROOT

export BUILD_ROOT

default_build: all dict_install

include $(BUILD_ROOT)/mk/makefiles/deployment_makefile.mk

# AInclude module_targets
#include $(BUILD_ROOT)/mk/makefiles/module_targets.mk
