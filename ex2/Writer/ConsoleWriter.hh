/*
 * ConsoleWriter.hh
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#ifndef WRITER_CONSOLEWRITER_HH_
#define WRITER_CONSOLEWRITER_HH_

#include "Writer.hh"

class ConsoleWriter : public Writer
{
public:
	ConsoleWriter();
	~ConsoleWriter();

	void write();
};


#endif /* WRITER_CONSOLEWRITER_HH_ */
