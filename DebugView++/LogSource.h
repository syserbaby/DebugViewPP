// (C) Copyright Gert-Jan de Vos and Jan Wilmans 2013.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)

// Repository at: https://github.com/djeedjay/DebugViewPP/

#pragma once

#include "DBWinBuffer.h"

namespace fusion {
namespace debugviewpp {

class LogSource
{
public:
	virtual ~LogSource();

	virtual bool AtEnd() const = 0;
	virtual HANDLE GetHandle() const = 0;
	virtual Line GetLine() = 0;
	virtual Lines GetLines() = 0;
};

} // namespace debugviewpp 
} // namespace fusion
