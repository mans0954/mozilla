# 
# ***** BEGIN LICENSE BLOCK *****
# Version: MPL 1.1/GPL 2.0/LGPL 2.1
#
# The contents of this file are subject to the Mozilla Public License Version
# 1.1 (the "License"); you may not use this file except in compliance with
# the License. You may obtain a copy of the License at
# http://www.mozilla.org/MPL/
#
# Software distributed under the License is distributed on an "AS IS" basis,
# WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
# for the specific language governing rights and limitations under the
# License.
#
# The Original Code is the Netscape security libraries.
#
# The Initial Developer of the Original Code is
# Netscape Communications Corporation.
# Portions created by the Initial Developer are Copyright (C) 1994-2000
# the Initial Developer. All Rights Reserved.
#
# Contributor(s):
#
# Alternatively, the contents of this file may be used under the terms of
# either the GNU General Public License Version 2 or later (the "GPL"), or
# the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
# in which case the provisions of the GPL or the LGPL are applicable instead
# of those above. If you wish to allow use of your version of this file only
# under the terms of either the GPL or the LGPL, and not to allow others to
# use your version of this file under the terms of the MPL, indicate your
# decision by deleting the provisions above and replace them with the notice
# and other provisions required by the GPL or the LGPL. If you do not delete
# the provisions above, a recipient may use your version of this file under
# the terms of any one of the MPL, the GPL or the LGPL.
#
# ***** END LICENSE BLOCK *****
MAKEFILE_CVS_ID = "@(#) $RCSfile$ $Revision$ $Date$"

include manifest.mn
include $(CORE_DEPTH)/coreconf/config.mk
include config.mk

EXTRA_LIBS = \
	$(DIST)/lib/$(LIB_PREFIX)nssckfw.$(LIB_SUFFIX) \
	$(DIST)/lib/$(LIB_PREFIX)nssb.$(LIB_SUFFIX) \
	$(NULL)

# can't do this in manifest.mn because OS_TARGET isn't defined there.
ifeq (,$(filter-out WIN%,$(OS_TARGET)))

ifdef NS_USE_GCC
EXTRA_LIBS += \
	-L$(NSPR_LIB_DIR) \
	-lplc4 \
	-lplds4 \
	-lnspr4 \
	$(NULL)
else 
EXTRA_SHARED_LIBS += \
        $(NSPR_LIB_DIR)/$(NSPR31_LIB_PREFIX)plc4.lib \
        $(NSPR_LIB_DIR)/$(NSPR31_LIB_PREFIX)plds4.lib \
        $(NSPR_LIB_DIR)/$(NSPR31_LIB_PREFIX)nspr4.lib \
        $(NULL)
endif # NS_USE_GCC
else

EXTRA_LIBS += \
	-L$(NSPR_LIB_DIR) \
	-lplc4 \
	-lplds4 \
	-lnspr4 \
	$(NULL)
endif


include $(CORE_DEPTH)/coreconf/rules.mk

# Generate certdata.c.
generate:
	$(PERL) certdata.perl < certdata.txt

# This'll need some help from a build person.


ifeq ($(OS_TARGET)$(OS_RELEASE), AIX4.1)
DSO_LDOPTS              = -bM:SRE -bh:4 -bnoentry
EXTRA_DSO_LDOPTS        = -lc
MKSHLIB                 = xlC $(DSO_LDOPTS)

$(SHARED_LIBRARY): $(OBJS)
	@$(MAKE_OBJDIR)
	rm -f $@
	$(MKSHLIB) -o $@ $(OBJS) $(EXTRA_LIBS) $(EXTRA_DSO_LDOPTS)
	chmod +x $@

endif

ifeq ($(OS_TARGET)$(OS_RELEASE), AIX4.2)
LD      += -G
endif 


