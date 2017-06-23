//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_FORKEDTOKEN_HPP
#define FUML_FORKEDTOKEN_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace fUML 
{
	class ActivityNodeActivation;
}

namespace fUML 
{
	class Token;
}

namespace fUML 
{
	class Value;
}

// base class includes
#include "Token.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ForkedToken:virtual public Token	{
		public:
 			ForkedToken(const ForkedToken &) {}
			ForkedToken& operator=(ForkedToken const&) = delete;
	
		protected:
			ForkedToken(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ForkedToken() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool
			 equals(std::shared_ptr<fUML::Token>  otherToken)  = 0;
			
			/*!
			 */ 
			virtual void
			 withdraw()  = 0;
			
			/*!
			 */ 
			virtual bool
			 isControl()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 getValue()  const  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getRemainingOffersCount() const = 0;
			
			/*!
			 */ 
			virtual void setRemainingOffersCount (int _remainingOffersCount)= 0; 
			
			/*!
			 */ 
			virtual bool isBaseTokenIsWithdrawn() const = 0;
			
			/*!
			 */ 
			virtual void setBaseTokenIsWithdrawn (bool _baseTokenIsWithdrawn)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Token > getBaseToken() const = 0;
			
			/*!
			 */
			virtual void setBaseToken(std::shared_ptr<fUML::Token> _baseToken_baseToken) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			int m_remainingOffersCount ;
			/*!
			 */ 
			bool m_baseTokenIsWithdrawn ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::Token > m_baseToken;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_FORKEDTOKEN_HPP */

