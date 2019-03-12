//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_LOCI_SM_LOCUS_HPP
#define PSSM_SEMANTICS_LOCI_SM_LOCUS_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace PSSM
{
	class PSSMFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Class;
}

namespace fUML 
{
	class ExecutionFactory;
}

namespace fUML 
{
	class Executor;
}

namespace fUML 
{
	class ExtensionalValue;
}

namespace fUML 
{
	class Locus;
}

namespace fUML 
{
	class Object;
}

// base class includes
#include "fUML/Locus.hpp"

// enum includes


//*********************************
namespace PSSM::Semantics::Loci 
{
	/*!
	 */
	class SM_Locus:virtual public fUML::Locus
	{
		public:
 			SM_Locus(const SM_Locus &) {}
			SM_Locus& operator=(SM_Locus const&) = delete;

		protected:
			SM_Locus(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~SM_Locus() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Object> instantiate(std::shared_ptr<uml::Class>  type) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: PSSM_SEMANTICS_LOCI_SM_LOCUS_HPP */
