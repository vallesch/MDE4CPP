//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERACTIONOPERATORKIND_HPP
#define UML_INTERACTIONOPERATORKIND_HPP

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
	enum InteractionOperatorKind {
		ALT = 1
,
		ASSERT = 9
,
		BREAK = 3
,
		CONSIDER = 11
,
		CRITICAL = 7
,
		IGNORE = 10
,
		LOOP = 6
,
		NEG = 8
,
		OPT = 2
,
		PAR = 4
,
		SEQ = 0
,
		STRICT = 5
	};
}
#endif /* end of include guard: INTERACTIONOPERATORKIND_HPP */
