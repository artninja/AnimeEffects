#ifndef CORE_IMAGEKEYUPDATER_H
#define CORE_IMAGEKEYUPDATER_H

#include "cmnd/Stable.h"
#include "core/ObjectNode.h"
#include "core/ResourceEvent.h"
#include "core/ResourceUpdatingWorkspace.h"

namespace core
{

class ImageKeyUpdater
{
public:
    static cmnd::Stable* createResourceUpdater(
            ObjectNode& aNode, const ResourceEvent& aEvent,
            const ResourceUpdatingWorkspacePtr& aWorkspace);
};

} // namespace core

#endif // CORE_IMAGEKEYUPDATER_H