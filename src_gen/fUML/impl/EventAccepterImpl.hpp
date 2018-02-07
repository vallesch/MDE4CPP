//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EVENTACCEPTEREVENTACCEPTERIMPL_HPP
#define FUML_EVENTACCEPTEREVENTACCEPTERIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../EventAccepter.hpp"


#include "ecore/impl/EObjectImpl.hpp"



//*********************************
namespace fUML 
{
	class EventAccepterImpl :virtual public ecore::EObjectImpl,
virtual public EventAccepter 
	{
		public: 
			EventAccepterImpl(const EventAccepterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EventAccepterImpl& operator=(EventAccepterImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			EventAccepterImpl();



		public:
			//destructor
			virtual ~EventAccepterImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void accept(std::shared_ptr<fUML::SignalInstance>  signalInstance)  ;
			
			/*!
			 */ 
			virtual bool match(std::shared_ptr<fUML::SignalInstance>  signalInstance)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_EVENTACCEPTEREVENTACCEPTERIMPL_HPP */

