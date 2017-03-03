/*
 * \brief  Common types used within init
 * \author Norman Feske
 * \date   2017-03-03
 */

/*
 * Copyright (C) 2017 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _SRC__INIT__TYPES_H_
#define _SRC__INIT__TYPES_H_

#include <util/string.h>

namespace Init {

	class Child;

	using namespace Genode;
	using Genode::size_t;
	using Genode::strlen;

	struct Ram_quota { size_t value; };

	typedef List<List_element<Init::Child> > Child_list;
}

#endif /* _SRC__INIT__TYPES_H_ */

