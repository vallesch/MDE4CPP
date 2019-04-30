#include "PSSM/Semantics/StateMachines/impl/VertexActivationImpl.hpp"

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

#include <cassert>
#include <iostream>
#include <sstream>

#include "abstractDataTypes/Bag.hpp"

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "PSSM/impl/PSSMPackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

#include <exception> // used in Persistence

#include "fUML/EventOccurrence.hpp"

#include "uml/NamedElement.hpp"

#include "PSSM/Semantics/StateMachines/RegionActivation.hpp"

#include "fUML/SemanticVisitor.hpp"

#include "PSSM/Semantics/StateMachines/StateMachineSemanticVisitor.hpp"

#include "PSSM/Semantics/StateMachines/TransitionActivation.hpp"

#include "uml/Vertex.hpp"

#include "PSSM/Semantics/StateMachines/VertexActivation.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

#include "PSSM/Semantics/StateMachines/TransitionMetadata.hpp"
#include "PSSM/Semantics/StateMachines/StateMetadata.hpp"
#include "PSSM/Semantics/StateMachines/StateMachineExecution.hpp"
#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

using namespace PSSM::Semantics::StateMachines;

//*********************************
// Constructor / Destructor
//*********************************
VertexActivationImpl::VertexActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_incomingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>());
	
	

		m_outgoingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>());
	
	

	//Init references
	
	

	
	
}

VertexActivationImpl::~VertexActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete VertexActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




VertexActivationImpl::VertexActivationImpl(const VertexActivationImpl & obj):VertexActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy VertexActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_status = obj.getStatus();

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _incomingTransitionActivations = obj.getIncomingTransitionActivations();
	m_incomingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getIncomingTransitionActivations().get())));

	m_node  = obj.getNode();

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _outgoingTransitionActivations = obj.getOutgoingTransitionActivations();
	m_outgoingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getOutgoingTransitionActivations().get())));

	m_parent  = obj.getParent();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  VertexActivationImpl::copy() const
{
	std::shared_ptr<VertexActivationImpl> element(new VertexActivationImpl(*this));
	element->setThisVertexActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> VertexActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getVertexActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void VertexActivationImpl::setStatus(StateMetadata _status)
{
	m_status = _status;
} 

StateMetadata VertexActivationImpl::getStatus() const 
{
	return m_status;
}

//*********************************
// Operations
//*********************************
void VertexActivationImpl::addIncomingTransition(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  transitionActivation)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
//	this.incomingTransitionActivations.add(activation);
	this->getIncomingTransitionActivations()->add(transitionActivation);

	//end of body
}

void VertexActivationImpl::addOutgoingTransition(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  transitionActivation)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
//	this.outgoingTransitionActivations.add(activation);
	this->getOutgoingTransitionActivations()->add(transitionActivation);
	//end of body
}

bool VertexActivationImpl::canPropagateExecution(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// The common behavior of all kind of vertices is that when the propagation analysis is done
// if a the target is a vertex that is nested within a hierarchy then the analysis
// must be recursively propagated to the parent vertices.
//boolean propagate = true;
//if(leastCommonAncestor != null){
//	RegionActivation parentRegionActivation = this.getOwningRegionActivation();
//	if(leastCommonAncestor!=parentRegionActivation){
//		VertexActivation vertexActivation = (VertexActivation) parentRegionActivation.getParent();
//		if(vertexActivation != null){
//			propagate = vertexActivation.canPropagateExecution(enteringTransition, eventOccurrence, leastCommonAncestor);
//		}
//	}
//}
//return propagate;
	bool propagate = true;
	if(leastCommonAncestor != nullptr) {
		std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> parentRegionActivation = this->getOwningRegionActivation();
		if(leastCommonAncestor != parentRegionActivation) {
			std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> vertexActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(parentRegionActivation->getParent());
			if(vertexActivation != nullptr) {
				propagate = vertexActivation->canPropagateExecution(enteringTransition, eventOccurrence, leastCommonAncestor);
			}
		}
	}
	return propagate;

	//end of body
}

void VertexActivationImpl::enter(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// When a vertex is entered its parent may need to be entered as well. Such situation
// occurs when the parent is not active while there is an attempt to enter the current
// vertex activation. What is important here is that entry rule is applied recursively
// until the least common ancestor is reached.
//RegionActivation owningRegionActivation = this.getOwningRegionActivation();
//if(leastCommonAncestor != null && owningRegionActivation != null && leastCommonAncestor != owningRegionActivation){
//	VertexActivation vertexActivation = (VertexActivation) owningRegionActivation.getParent();
//	if(vertexActivation != null){
//		vertexActivation.enter(enteringTransition, eventOccurrence, leastCommonAncestor);
//	}
//}
//logger.info(this.getNode().getName()+" => ACTIVE");
//this.setStatus(StateMetadata.ACTIVE);
//this.tagOutgoingTransitions(TransitionMetadata.REACHED, false);
//FUMLExecutionEngine.eInstance.getControlDelegate().control(this);
	std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> owningRegionActivation = this->getOwningRegionActivation();
	if(leastCommonAncestor != nullptr && owningRegionActivation != nullptr && leastCommonAncestor != owningRegionActivation) {
		std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> vertexActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(owningRegionActivation->getParent());
		if(vertexActivation != nullptr) {
			vertexActivation->enter(enteringTransition, eventOccurrence, leastCommonAncestor);
		}
	}
	this->setStatus(PSSM::Semantics::StateMachines::StateMetadata::ACTIVE);
	this->tagOutgoingTransition(PSSM::Semantics::StateMachines::TransitionMetadata::REACHED, false);

	//end of body
}

void VertexActivationImpl::exit(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  exitingTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// When a vertex is exited its parent may need to be exited too. Such situation typically
// occurs when the current vertex is exited through a transition that cross boundaries of
// the parent state (and maybe also border its own parent). This implies that from the current
// vertex and until the least common ancestor is reached all states are exited recursively.
//this.tagIncomingTransitions(TransitionMetadata.NONE, false);
//this.setStatus(StateMetadata.IDLE);
//logger.info(this.getNode().getName()+" => IDLE");
//RegionActivation owningRegionActivation = this.getOwningRegionActivation();
//if(leastCommonAncestor != null && owningRegionActivation != null && leastCommonAncestor != owningRegionActivation){
//	VertexActivation vertexActivation = (VertexActivation) owningRegionActivation.getParent();
//	if(vertexActivation != null){
//		vertexActivation.exit(exitingTransition, eventOccurrence, leastCommonAncestor);
//	}
//}
	this->tagIncomingTransition(PSSM::Semantics::StateMachines::TransitionMetadata::NONE, false);
	this->setStatus(PSSM::Semantics::StateMachines::StateMetadata::IDLE);
	std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> owningRegionActivation = this->getOwningRegionActivation();
	if(leastCommonAncestor != nullptr && owningRegionActivation != nullptr && leastCommonAncestor != owningRegionActivation) {
		std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> vertexActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(owningRegionActivation->getParent());
		if(vertexActivation != nullptr) {
			vertexActivation->exit(exitingTransition, eventOccurrence, leastCommonAncestor);
		}
	}

	//end of body
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> > VertexActivationImpl::getAscendingHierarchy()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Provides the hierarchy of state activations starting from the current
// element. This list is ordered from the innermost element to the outermost element
//List<VertexActivation> hierarchy = new ArrayList<VertexActivation>();
//List<SemanticVisitor> contextChain = this.getContextChain();
//for(SemanticVisitor element : contextChain){
//	if(element instanceof StateActivation){
//		hierarchy.add((StateActivation)element);
//	}
//}
//return hierarchy;
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> > hierarchy(new Bag<PSSM::Semantics::StateMachines::VertexActivation>());
	std::shared_ptr<Bag<fUML::SemanticVisitor> > contextChain = this->getContextChain();
	for(int i=0;i<contextChain->size();i++) {
		std::shared_ptr<fUML::SemanticVisitor> element = contextChain->at(i);
		if(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateActivation>(element) != nullptr) {
			hierarchy->add(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(element));
		}
	}
	return hierarchy;
	//end of body
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > VertexActivationImpl::getIncomingTransitions()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
//	return this.incomingTransitionActivations;
	return this->m_incomingTransitionActivations;
	//end of body
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> VertexActivationImpl::getLeastCommonAncestor(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  vertexActivation)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Determine the semantic visitor being the least common ancestor between
// the current vertex activation and the target vertex activation (provided as
// a parameter). The analysis is based on a comparative analysis vertices (source and
// target) hierarchies.
//RegionActivation leastCommonAncestor = null;
//SemanticVisitor sourceHierachyNode =  null;
//SemanticVisitor targetHierarchyNode = null;
//List<SemanticVisitor> sourceHierarchy = this.getContextChain();
//List<SemanticVisitor> targetHierarchy = targetVertexActivation.getContextChain();
//int sourceHierarchyIndex = sourceHierarchy.size();
//int targetHierarchyIndex = targetHierarchy.size();
	std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> leastCommonAncestor = nullptr;
	std::shared_ptr<fUML::SemanticVisitor> sourceHierarchyNode = nullptr;
	std::shared_ptr<fUML::SemanticVisitor> targetHierarchyNode = nullptr;
	std::shared_ptr<Bag<fUML::SemanticVisitor>> sourceHierarchy = this->getContextChain();
	std::shared_ptr<Bag<fUML::SemanticVisitor>> targetHierarchy = vertexActivation->getContextChain();
	int sourceHierarchyIndex = sourceHierarchy->size();
	int targetHierarchyIndex = targetHierarchy->size();
// Check if a difference can be found in between the two subsets
// delimited by the common index. Iterate until the least common
// ancestor is found or the two subsets have been reviewed
//while(leastCommonAncestor == null && sourceHierarchyIndex > 0 && targetHierarchyIndex > 0){
//	sourceHierachyNode = sourceHierarchy.get(sourceHierarchyIndex - 1);
//	targetHierarchyNode = targetHierarchy.get(targetHierarchyIndex - 1);
//	if(sourceHierachyNode != targetHierarchyNode){
//		leastCommonAncestor = this.getRegionActivation(sourceHierachyNode);
//	}else{
//		sourceHierarchyIndex = sourceHierarchyIndex - 1;
//		targetHierarchyIndex = targetHierarchyIndex - 1;
//	}
//}
	while(leastCommonAncestor == nullptr && sourceHierarchyIndex > 0 && targetHierarchyIndex > 0) {
		sourceHierarchyNode = sourceHierarchy->at(sourceHierarchyIndex - 1);
		targetHierarchyNode = targetHierarchy->at(targetHierarchyIndex - 1);
		if(sourceHierarchyNode != targetHierarchyNode) {
			leastCommonAncestor = this->getRegionActivation(sourceHierarchyNode);
		} else {
			sourceHierarchyIndex = sourceHierarchyIndex -1;
			targetHierarchyIndex = targetHierarchyIndex - 1;
		}
	}
// It may happen than no difference could found in the hierarchy subsets
// previously reviewed. This indicate two possible situations:
// 1. The source and the target are the same.
// 2. There is containing / container relationship existing between
//    the source and the target.
//if(leastCommonAncestor == null){
//	if(sourceHierarchyIndex == 0 && targetHierarchyIndex == 0){
//		leastCommonAncestor = this.getRegionActivation(sourceHierarchy.get(sourceHierarchyIndex + 1));
//	}else{
//		if(this.getVertexActivation((Vertex)targetVertexActivation.getNode()) != null){
//			if(transitionKind == TransitionKind.EXTERNAL_LITERAL){
//				leastCommonAncestor = this.getRegionActivation(sourceHierarchy.get(sourceHierarchyIndex));
//			}else{
//				leastCommonAncestor = this.getRegionActivation(targetHierarchy.get(targetHierarchyIndex - 1));
//			}
//		}else{
//			leastCommonAncestor = this.getRegionActivation(sourceHierarchy.get(sourceHierarchyIndex - 1));
//		}
//	}
//}
	if(leastCommonAncestor == nullptr) {
		if(sourceHierarchyIndex == 0 && targetHierarchyIndex == 0) {
			leastCommonAncestor = this->getRegionActivation(sourceHierarchy->at(sourceHierarchyIndex +1));
		} else {
			if(this->getVertexActivation(std::dynamic_pointer_cast<uml::Vertex>(vertexActivation->getNode())) != nullptr) {
				//transitionKind ??
				leastCommonAncestor = this->getRegionActivation(sourceHierarchy->at(sourceHierarchyIndex - 1));
			}
		}
	}
return leastCommonAncestor;

	//end of body
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > VertexActivationImpl::getOutgoingTransitions()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	//return this.outgoingTransitionActivations;
	return this->m_outgoingTransitionActivations;

	//end of body
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> VertexActivationImpl::getOwningRegionActivation()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// In general for a vertex activation its owning region activation
// is its direct parent. Not that is not true for the exit point
// activation as well as the entry point activation. This operation
// is therefore overridden in these two context
//return (RegionActivation) this.parent;
	return std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(this->m_parent);

	//end of body
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> VertexActivationImpl::getParentVertexActivation()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// The parent state of a vertex is either a StateMachineExecution or a StateActivation
//RegionActivation regionActivation = (RegionActivation)this.getParent();
//if(regionActivation!=null){
//	if(regionActivation.getParent() instanceof StateMachineExecution){
//		return null;
//	}else{
//		return (VertexActivation) regionActivation.getParent();
//	}
//}
//return null;
	std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> regionActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(this->m_parent);
	if(regionActivation != nullptr) {
		if(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineExecution>(regionActivation->getParent()) != nullptr) {
			return nullptr;
		} else {
			return std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(regionActivation->getParent());
		}
	}

	return nullptr;

	//end of body
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> VertexActivationImpl::getRegionActivation(std::shared_ptr<fUML::SemanticVisitor>  semanticVisitor)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// If the given semantic visitor is a region activation then this activation
// is returned. Otherwise if the visitor is a vertex activation  then its
// parent region activation is returned.
//RegionActivation regionActivation = null;
//if(semanticVisitor instanceof RegionActivation){
//	regionActivation = (RegionActivation) semanticVisitor;
//}else if(semanticVisitor instanceof VertexActivation){
//	regionActivation = (RegionActivation)((VertexActivation)semanticVisitor).getParent();
//}
//return regionActivation;
	std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> regionActivation = nullptr;
	if(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(semanticVisitor) != nullptr) {
		regionActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(semanticVisitor);
	} else if(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(semanticVisitor) != nullptr) {
		regionActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(semanticVisitor)->getParent());
	}
	return regionActivation;
	//end of body
}



std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> VertexActivationImpl::getVertexActivation(std::shared_ptr<uml::Vertex>  vertex)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// By default return nothing. Must be overridden by state activation;
return nullptr;

	//end of body
}

bool VertexActivationImpl::isActive()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// By default is is possible to assess if a vertex is active by checking
// if its status is ACTIVE. Note this operation is overriden in the context
// of state activations which require a presence within the state-machine
// configuration.
//return this.status.equals(StateMetadata.ACTIVE);
	return this->getStatus() == PSSM::Semantics::StateMachines::StateMetadata::ACTIVE;
	//end of body
}

bool VertexActivationImpl::isEnterable(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,bool staticCheck)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// By default a vertex has no prerequisites that need to be full-filled
// to be entered. Nevertheless some vertex (e.g., join or exit) have such
// prerequisites. Therefore this method is intended to be overridden in vertex
// activation sub-classes. 
return true;

	//end of body
}

bool VertexActivationImpl::isExitable(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  exitingTransition,bool staticCheck)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// By default a vertex has no prerequisites that need to be full-filled to be entered
// Nevertheless some vertex (e.g., Fork) have such prerequisite. Therefore this method
// is intended to be overridden in vertex activation sub-classes.
return true;

	//end of body
}



void VertexActivationImpl::tagIncomingTransition(TransitionMetadata status,bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void VertexActivationImpl::tagOutgoingTransition(TransitionMetadata status,bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void VertexActivationImpl::terminate()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Terminate applied by a vertex activation does nothing by default. However it is intended
// to be overridden by sub-classe(s)  
return;

	//end of body
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> VertexActivationImpl::getIncomingTransitionActivations() const
{

    return m_incomingTransitionActivations;
}


std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> VertexActivationImpl::getOutgoingTransitionActivations() const
{

    return m_outgoingTransitionActivations;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<VertexActivation> VertexActivationImpl::getThisVertexActivationPtr() const
{
	return m_thisVertexActivationPtr.lock();
}
void VertexActivationImpl::setThisVertexActivationPtr(std::weak_ptr<VertexActivation> thisVertexActivationPtr)
{
	m_thisVertexActivationPtr = thisVertexActivationPtr;
	setThisStateMachineSemanticVisitorPtr(thisVertexActivationPtr);
}
std::shared_ptr<ecore::EObject> VertexActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any VertexActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_INCOMINGTRANSITIONACTIVATIONS:
			return eAny(getIncomingTransitionActivations()); //443
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_OUTGOINGTRANSITIONACTIVATIONS:
			return eAny(getOutgoingTransitionActivations()); //444
		case PSSM::PSSMPackage::VERTEXACTIVATION_EATTRIBUTE_STATUS:
			return eAny(getStatus()); //442
	}
	return StateMachineSemanticVisitorImpl::eGet(featureID, resolve, coreType);
}
bool VertexActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_INCOMINGTRANSITIONACTIVATIONS:
			return getIncomingTransitionActivations() != nullptr; //443
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_OUTGOINGTRANSITIONACTIVATIONS:
			return getOutgoingTransitionActivations() != nullptr; //444
		case PSSM::PSSMPackage::VERTEXACTIVATION_EATTRIBUTE_STATUS:
			return m_status != StateMetadata::IDLE;; //442
	}
	return StateMachineSemanticVisitorImpl::internalEIsSet(featureID);
}
bool VertexActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EATTRIBUTE_STATUS:
		{
			// BOOST CAST
			StateMetadata _status = newValue->get<StateMetadata>();
			setStatus(_status); //442
			return true;
		}
	}

	return StateMachineSemanticVisitorImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void VertexActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get PSSMFactory
	std::shared_ptr<PSSM::PSSMFactory> modelFactory = PSSM::PSSMFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void VertexActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("status");
		if ( iter != attr_list.end() )
		{
			StateMetadata value = StateMetadata::IDLE;
			std::string literal = iter->second;
			if (literal == "idle")
			{
				value = StateMetadata::IDLE;
			}
			else if (literal == "active")
			{
				value = StateMetadata::ACTIVE;
			}
			this->setStatus(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("incomingTransitionActivations");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("incomingTransitionActivations")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("outgoingTransitionActivations");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("outgoingTransitionActivations")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	StateMachineSemanticVisitorImpl::loadAttributes(loadHandler, attr_list);
}

void VertexActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	StateMachineSemanticVisitorImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void VertexActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_INCOMINGTRANSITIONACTIVATIONS:
		{
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _incomingTransitionActivations = getIncomingTransitionActivations();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> _r = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::TransitionActivation>(ref);
				if (_r != nullptr)
				{
					_incomingTransitionActivations->push_back(_r);
				}				
			}
			return;
		}

		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_OUTGOINGTRANSITIONACTIVATIONS:
		{
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _outgoingTransitionActivations = getOutgoingTransitionActivations();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> _r = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::TransitionActivation>(ref);
				if (_r != nullptr)
				{
					_outgoingTransitionActivations->push_back(_r);
				}				
			}
			return;
		}
	}
	StateMachineSemanticVisitorImpl::resolveReferences(featureID, references);
}

void VertexActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void VertexActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getVertexActivation_EAttribute_status()) )
		{
			StateMetadata value = this->getStatus();
			std::string literal = "";
			if (value == StateMetadata::IDLE)
			{
				literal = "idle";
			}
			else if (value == StateMetadata::ACTIVE)
			{
				literal = "active";
			}
			saveHandler->addAttribute("status", literal);
		}

		// Add references
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> incomingTransitionActivations_list = this->getIncomingTransitionActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation > object : *incomingTransitionActivations_list)
		{ 
			saveHandler->addReferences("incomingTransitionActivations", object);
		}
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> outgoingTransitionActivations_list = this->getOutgoingTransitionActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation > object : *outgoingTransitionActivations_list)
		{ 
			saveHandler->addReferences("outgoingTransitionActivations", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

