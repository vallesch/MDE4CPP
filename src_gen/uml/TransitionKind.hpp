//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TRANSITIONKIND_HPP
#define UML_TRANSITIONKIND_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif 

namespace uml 
{
	enum TransitionKind {
		EXTERNAL = 2
,
		INTERNAL = 0
,
		LOCAL = 1
	};
}
#endif /* end of include guard: TRANSITIONKIND_HPP */
