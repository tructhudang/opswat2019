/*
 * Writer.hh
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#ifndef WRITER_WRITER_HH_
#define WRITER_WRITER_HH_


class Writer
{
public:
	virtual ~Writer() {}
	virtual void write() = 0;
};


#endif /* WRITER_WRITER_HH_ */
