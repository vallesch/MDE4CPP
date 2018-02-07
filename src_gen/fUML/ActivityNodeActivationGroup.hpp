//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYNODEACTIVATIONGROUP_HPP
#define FUML_ACTIVITYNODEACTIVATIONGROUP_HPP

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

#include <map>
#include <string>
#include <vector>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class ActivityEdge;
}

namespace fUML 
{
	class ActivityEdgeInstance;
}

namespace fUML 
{
	class ActivityExecution;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML 
{
	class ActivityNodeActivation;
}

namespace fUML 
{
	class ActivityParameterNodeActivation;
}

namespace fUML 
{
	class StructuredActivityNodeActivation;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace fUML 
{
	/*!
	 */
	class ActivityNodeActivationGroup : virtual public ecore::EObject 

	{
		public:
 			ActivityNodeActivationGroup(const ActivityNodeActivationGroup &) {}
			ActivityNodeActivationGroup& operator=(ActivityNodeActivationGroup const&) = delete;

		protected:
			ActivityNodeActivationGroup(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ActivityNodeActivationGroup() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void activate(std::shared_ptr<Bag<uml::ActivityNode> >  nodes,std::shared_ptr<Bag<uml::ActivityEdge> >  edges)  = 0;
			
			/*!
			 */ 
			virtual void addEdgeInstance(std::shared_ptr<fUML::ActivityEdgeInstance>  instance)  = 0;
			
			/*!
			 */ 
			virtual void addNodeActivation(std::shared_ptr<fUML::ActivityNodeActivation>  activation)  = 0;
			
			/*!
			 */ 
			virtual bool checkIncomingEdges(std::shared_ptr<Bag<fUML::ActivityEdgeInstance> >  incomingEdges,std::shared_ptr<Bag<fUML::ActivityNodeActivation> >  activations)  = 0;
			
			/*!
			 */ 
			virtual void createEdgeInstance(std::shared_ptr<Bag<uml::ActivityEdge> >  edges)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityNodeActivation> createNodeActivation(std::shared_ptr<uml::ActivityNode>  node)  = 0;
			
			/*!
			 */ 
			virtual void createNodeActivations(std::shared_ptr<Bag<uml::ActivityNode> >  nodes)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityNodeActivation> getNodeActivation(std::shared_ptr<uml::ActivityNode>  node)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ActivityParameterNodeActivation> > getOutputParameterNodeActivations()  = 0;
			
			/*!
			 */ 
			virtual bool hasSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance)  = 0;
			
			/*!
			 */ 
			virtual bool isSuspended()  = 0;
			
			/*!
			 */ 
			virtual void resume(std::shared_ptr<fUML::ActivityNodeActivation>  activation)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityExecution> retrieveActivityExecution()  = 0;
			
			/*!
			 */ 
			virtual void run(std::shared_ptr<Bag<fUML::ActivityNodeActivation> >  activations)  = 0;
			
			/*!
			 */ 
			virtual void runNodes(std::shared_ptr<Bag<uml::ActivityNode> >  nodes)  = 0;
			
			/*!
			 */ 
			virtual void suspend(std::shared_ptr<fUML::ActivityNodeActivation>  activation)  = 0;
			
			/*!
			 */ 
			virtual void terminateAll()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityExecution > getActivityExecution() const = 0;
			
			/*!
			 */
			virtual void setActivityExecution(std::shared_ptr<fUML::ActivityExecution> _activityExecution_activityExecution) = 0;
			/*!
			 */
			virtual std::shared_ptr<fUML::StructuredActivityNodeActivation > getContainingNodeActivation() const = 0;
			
			/*!
			 */
			virtual void setContainingNodeActivation(std::shared_ptr<fUML::StructuredActivityNodeActivation> _containingNodeActivation_containingNodeActivation) = 0;
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ActivityEdgeInstance> > getEdgeInstances() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ActivityNodeActivation> > getNodeActivations() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ActivityNodeActivation> > getSuspendedActivations() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::ActivityExecution > m_activityExecution;
			/*!
			 */
			std::shared_ptr<fUML::StructuredActivityNodeActivation > m_containingNodeActivation;
			/*!
			 */
			std::shared_ptr< Bag<fUML::ActivityEdgeInstance> > m_edgeInstances;
			/*!
			 */
			std::shared_ptr< Bag<fUML::ActivityNodeActivation> > m_nodeActivations;
			/*!
			 */
			std::shared_ptr< Bag<fUML::ActivityNodeActivation> > m_suspendedActivations;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: FUML_ACTIVITYNODEACTIVATIONGROUP_HPP */

