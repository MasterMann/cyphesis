// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000-2003 Alistair Riddoch

#include "CommLocalClient.h"

#include "TrustedConnection.h"
#include "CommServer.h"

/// \brief Constructor for local client socket object.
///
/// @param svr Reference to the object that manages all socket communication.
/// @param fd Socket file descriptor
CommLocalClient::CommLocalClient(CommServer & svr, int fd,
                                 const std::string & id) :
   CommClient(svr, fd, *new TrustedConnection(*this, svr.m_server,
                                              "local", id))
{
}


CommLocalClient::~CommLocalClient()
{
}
