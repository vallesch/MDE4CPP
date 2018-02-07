//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LOCUSLOCUSIMPL_HPP
#define FUML_LOCUSLOCUSIMPL_HPP

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
#include "../Locus.hpp"


#include "ecore/impl/EObjectImpl.hpp"

#include "uml/Classifier.hpp"
#include "uml/Behavior.hpp"
#include "uml/Class.hpp"
#include "fuml/FUMLFactory.hpp"
#include "fuml/ExecutionFactory.hpp"
#include "fuml/ExtensionalValue.hpp"
#include "fuml/Executor.hpp"
#include "fuml/Object.hpp"
#include "fuml/Execution.hpp"



//*********************************
namespace fUML 
{
	class LocusImpl :virtual public ecore::EObjectImpl,
virtual public Locus 
	{
		public: 
			LocusImpl(const LocusImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LocusImpl& operator=(LocusImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			LocusImpl();



		public:
			//destructor
			virtual ~LocusImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void add(std::shared_ptr<fUML::ExtensionalValue>  value)  ;
			
			/*!
			 */ 
			virtual void assignExecutor(std::shared_ptr<fUML::Executor>  executor)  ;
			
			/*!
			 */ 
			virtual void assignFactory(std::shared_ptr<fUML::ExecutionFactory>  factory)  ;
			
			/*!
			 */ 
			virtual bool conforms(std::shared_ptr<uml::Classifier>  type,std::shared_ptr<uml::Classifier>  classifier)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Object> instantiate(std::shared_ptr<uml::Class>  type)  ;
			
			/*!
			 */ 
			virtual void remove(std::shared_ptr<fUML::ExtensionalValue>  value)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ExtensionalValue> > retrieveExtent(std::shared_ptr<uml::Classifier>  classifier)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Executor > getExecutor() const ;
			
			/*!
			 */
			virtual void setExecutor(std::shared_ptr<fUML::Executor> _executor_executor) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ExtensionalValue> > getExtensionalValues() const ;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::ExecutionFactory > getFactory() const ;
			
			/*!
			 */
			virtual void setFactory(std::shared_ptr<fUML::ExecutionFactory> _factory_factory) ;
							
			
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
#endif /* end of include guard: FUML_LOCUSLOCUSIMPL_HPP */

