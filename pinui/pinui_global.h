#ifndef PINUI_GLOBAL_H
#define PINUI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PINUI_LIBRARY)
#  define PINUI_EXPORT Q_DECL_EXPORT
#else
#  define PINUI_EXPORT Q_DECL_IMPORT
#endif

#endif // PINUI_GLOBAL_H
