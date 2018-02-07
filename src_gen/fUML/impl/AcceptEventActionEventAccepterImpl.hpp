//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACCEPTEVENTACTIONEVENTACCEPTERACCEPTEVENTACTIONEVENTACCEPTERIMPL_HPP
#define FUML_ACCEPTEVENTACTIONEVENTACCEPTERACCEPTEVENTACTIONEVENTACCEPTERIMPL_HPP

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
#include "../AcceptEventActionEventAccepter.hpp"

#include "fUML/impl/EventAccepterImpl.hpp"



//*********************************
namespace fUML 
{
	class AcceptEventActionEventAccepterImpl :virtual public EventAccepterImpl, virtual public AcceptEventActionEventAccepter 
	{
		public: 
			AcceptEventActionEventAccepterImpl(const AcceptEventActionEventAccepterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			AcceptEventActionEventAccepterImpl& operator=(AcceptEventActionEventAccepterImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			AcceptEventActionEventAccepterImpl();



		public:
			//destructor
			virtual ~AcceptEventActionEventAccepterImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::AcceptEventActionActivation > getActionActivation() const ;
			
			/*!
			 */
			virtual void setActionActivation(std::shared_ptr<fUML::AcceptEventActionActivation> _actionActivation_actionActivation) ;
							
			
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
#endif /* end of include guard: FUML_ACCEPTEVENTACTIONEVENTACCEPTERACCEPTEVENTACTIONEVENTACCEPTERIMPL_HPP */

