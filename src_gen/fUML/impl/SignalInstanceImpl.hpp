//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SIGNALINSTANCESIGNALINSTANCEIMPL_HPP
#define FUML_SIGNALINSTANCESIGNALINSTANCEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../SignalInstance.hpp"

#include "impl/CompoundValueImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class SignalInstanceImpl :virtual public CompoundValueImpl, virtual public SignalInstance 
	{
		public: 
			SignalInstanceImpl(const SignalInstanceImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			SignalInstanceImpl& operator=(SignalInstanceImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			SignalInstanceImpl();

		public:
			//destructor
			virtual ~SignalInstanceImpl();
			
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
			virtual std::shared_ptr<uml::Signal > getType() const ;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Signal> _type_type) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_SIGNALINSTANCESIGNALINSTANCEIMPL_HPP */

