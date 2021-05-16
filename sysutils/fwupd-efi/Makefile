# Created by: Norbert Kamiński <norbert.kaminski@3mdeb.com>
# $FreeBSD$

PORTNAME=	fwupd-efi
DISTVERSION=	1.0
GH_TAGNAME=	50ea696dee
CATEGORIES=	sysutils

MAINTAINER=	norbert.kaminski@3mdeb.com
COMMENT=	EFI Application used by uefi-capsule plugin in fwup

LICENSE=	LGPL21

BUILD_DEPENDS=	#libgnuefi.a:devel/gnu-efi XXX: how?
LIB_DEPENDS=	

USES=		meson pkgconfig python:3.7+ shebangfix
GH_ACCOUNT=	SergiiDmytruk
USE_GITHUB=	yes
USE_LDCONFIG=	yes

SHEBANG_GLOB=	*.py

MESON_ARGS=	-Defi-includedir=/usr/local/include/efi \
		-Defi-ldsdir=/usr/local/lib

.include <bsd.port.mk>
