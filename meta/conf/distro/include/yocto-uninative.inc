#
# This include points at uninative tarballs generated and maintained
# by the Yocto Project. These file can be included by distros if they
# want to use/maintain a unified sstate feed for native/cross artefacts
# rather than the feeds having native/cross artefacts which are specific
# to the distro running on the build machine.
#

UNINATIVE_MAXGLIBCVERSION = "2.33"

UNINATIVE_URL ?= "http://downloads.yoctoproject.org/releases/uninative/3.1/"
UNINATIVE_CHECKSUM[aarch64] ?= "75e477c6c501d3e47a79ccbe86a9fdbf1f2c6f96df7f99bef6c48d44b1c3d630"
UNINATIVE_CHECKSUM[i686] ?= "a95888b61856db150630fe1850af18bd195c7057d0add7f4cd55ceed4d75729d"
UNINATIVE_CHECKSUM[x86_64] ?= "bd9a61b60f7a761b55cc23379fc0bd50e629824488f7a81434ccc23a14112c28"
