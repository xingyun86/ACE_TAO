// $Id$

// ===========================================================
//
//
// = LIBRARY
//    CIAO/examples/handcrafted/hello
//
// = FILENAME
//    hello_servants.h
//
// = DESCRIPTION
//    Generic Servant implementations for hello world example.
//    This file is currently handcrafted but it should really
//    be generated by the CCIDL compiler.
//
//    This example demonstrates how a servant implementation for a
//    session component should look like.
//
// @author Nanbor Wang <nanbor@cs.wustl.edu>
//
// ===========================================================

#include "helloCS.h"
#include "helloEC.h"

class CIAO_HelloWorld_Servant
  : public virtual POA_HelloWorld,
  // @@ Perhaps we could implement a common component servant class
  //    which provide common functionality for operations defined in
  //    Navigation/Events/Receptacles interfaces.
    public virtual PortableServer::RefCountServantBase
{
public:
  // Ctor.
  CIAO_HelloWorld_Servant (CCM_HelloWorld_ptr executor_);

  // Dtor.
  ~CIAO_HelloWorld_Servant (void);



protected:
  // My Executor.
  CCM_HelloWorld_var executor_;

  // My Run-time Context.
  CCM_HelloWorld_Context_var context_;
};
