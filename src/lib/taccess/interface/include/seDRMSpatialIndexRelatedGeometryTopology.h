/*
 *  Copyright (c) 2006 Accent Geographic. All rights reserved.
 *  See the license file for licensing information.
 *  Created: Wed Jul 26 23:47:08 2006
 *
 *  DO NOT EDIT THIS FILE! (Autogenerated)
 */

// SEDRIS C++ SDK Release 4.1.4 - July 1, 2011

/*
 *                             NOTICE
 * 
 * This software is provided openly and freely for use in representing and
 * interchanging environmental data & databases.
 * 
 * This software was developed for use by the United States Government with
 * unlimited rights.  The software was developed under contract
 * DASG60-02-D-0006 TO-193 by Science Applications International Corporation.
 * The software is unclassified and is deemed as Distribution A, approved
 * for Public Release.
 * 
 * Use by others is permitted only upon the ACCEPTANCE OF THE TERMS AND
 * CONDITIONS, AS STIPULATED UNDER THE FOLLOWING PROVISIONS:
 * 
 *    1. Recipient may make unlimited copies of this software and give
 *       copies to other persons or entities as long as the copies contain
 *       this NOTICE, and as long as the same copyright notices that
 *       appear on, or in, this software remain.
 * 
 *    2. Trademarks. All trademarks belong to their respective trademark
 *       holders.  Third-Party applications/software/information are
 *       copyrighted by their respective owners.
 * 
 *    3. Recipient agrees to forfeit all intellectual property and
 *       ownership rights for any version created from the modification
 *       or adaptation of this software, including versions created from
 *       the translation and/or reverse engineering of the software design.
 * 
 *    4. Transfer.  Recipient may not sell, rent, lease, or sublicense
 *       this software.  Recipient may, however enable another person
 *       or entity the rights to use this software, provided that this
 *       AGREEMENT and NOTICE is furnished along with the software and
 *       /or software system utilizing this software.
 * 
 *       All revisions, modifications, created by the Recipient, to this
 *       software and/or related technical data shall be forwarded by the
 *       Recipient to the Government at the following address:
 * 
 *         SMDC
 *         Attention SEDRIS (TO193) TPOC
 *         P.O. Box 1500
 *         Huntsville, AL  35807-3801
 * 
 *         or via electronic mail to:  se-mgmt@sedris.org
 * 
 *    5. No Warranty. This software is being delivered to you AS IS
 *       and there is no warranty, EXPRESS or IMPLIED, as to its use
 *       or performance.
 * 
 *       The RECIPIENT ASSUMES ALL RISKS, KNOWN AND UNKNOWN, OF USING
 *       THIS SOFTWARE.  The DEVELOPER EXPRESSLY DISCLAIMS, and the
 *       RECIPIENT WAIVES, ANY and ALL PERFORMANCE OR RESULTS YOU MAY
 *       OBTAIN BY USING THIS SOFTWARE OR DOCUMENTATION.  THERE IS
 *       NO WARRANTY, EXPRESS OR, IMPLIED, AS TO NON-INFRINGEMENT OF
 *       THIRD PARTY RIGHTS, MERCHANTABILITY, OR FITNESS FOR ANY
 *       PARTICULAR PURPOSE.  IN NO EVENT WILL THE DEVELOPER, THE
 *       UNITED STATES GOVERNMENT OR ANYONE ELSE ASSOCIATED WITH THE
 *       DEVELOPMENT OF THIS SOFTWARE BE HELD LIABLE FOR ANY CONSEQUENTIAL,
 *       INCIDENTAL OR SPECIAL DAMAGES, INCLUDING ANY LOST PROFITS
 *       OR LOST SAVINGS WHATSOEVER.
 */

/** @file seDRMSpatialIndexRelatedGeometryTopology.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMSpatialIndexRelatedGeometryTopology (256) class.
*/

#ifndef _seDRMSpatialIndexRelatedGeometryTopology_h
#define _seDRMSpatialIndexRelatedGeometryTopology_h

#include "seDRMGeometryTopologyHierarchy.h"

namespace sedris {

/** seDRMSpatialIndexRelatedGeometryTopology wraps the DRM <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm">&lt;Spatial_Index_Related_Geometry_Topology&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMGeometryTopologyHierarchy
*/
class seDRMSpatialIndexRelatedGeometryTopology : public seDRMGeometryTopologyHierarchy
{
public:

    /// Default constructor
    seDRMSpatialIndexRelatedGeometryTopology() {}

    /// Constructor for seDRM... class conversions
    seDRMSpatialIndexRelatedGeometryTopology( const seObject &other ) : seDRMGeometryTopologyHierarchy(other) {}

    /// Get field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#geometry_topology_level">geometry_topology_level</a>
    SE_Geometry_Topology_Level get_geometry_topology_level()
    {
        DRMBASE_RET_FIELDS(Spatial_Index_Related_Geometry_Topology, geometry_topology_level);
    }

    /// Set field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#geometry_topology_level">geometry_topology_level</a>
    void set_geometry_topology_level( SE_Geometry_Topology_Level geometry_topology_level )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Spatial_Index_Related_Geometry_Topology, geometry_topology_level, geometry_topology_level);
    }

    /// Get field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#sparse">sparse</a>
    SE_Boolean get_sparse()
    {
        DRMBASE_RET_FIELDS(Spatial_Index_Related_Geometry_Topology, sparse);
    }

    /// Set field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#sparse">sparse</a>
    void set_sparse( SE_Boolean sparse )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Spatial_Index_Related_Geometry_Topology, sparse, sparse);
    }

    /// Get field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#column_count">column_count</a>
    SE_Integer_Positive get_column_count()
    {
        DRMBASE_RET_FIELDS(Spatial_Index_Related_Geometry_Topology, column_count);
    }

    /// Set field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#column_count">column_count</a>
    void set_column_count( SE_Integer_Positive column_count )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Spatial_Index_Related_Geometry_Topology, column_count, column_count);
    }

    /// Get field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#row_count">row_count</a>
    SE_Integer_Positive get_row_count()
    {
        DRMBASE_RET_FIELDS(Spatial_Index_Related_Geometry_Topology, row_count);
    }

    /// Set field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#row_count">row_count</a>
    void set_row_count( SE_Integer_Positive row_count )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Spatial_Index_Related_Geometry_Topology, row_count, row_count);
    }

    /// Get field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#column_width">column_width</a>
    SE_Long_Float get_column_width()
    {
        DRMBASE_RET_FIELDS(Spatial_Index_Related_Geometry_Topology, column_width);
    }

    /// Set field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#column_width">column_width</a>
    void set_column_width( SE_Long_Float column_width )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Spatial_Index_Related_Geometry_Topology, column_width, column_width);
    }

    /// Get field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#row_width">row_width</a>
    SE_Long_Float get_row_width()
    {
        DRMBASE_RET_FIELDS(Spatial_Index_Related_Geometry_Topology, row_width);
    }

    /// Set field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#row_width">row_width</a>
    void set_row_width( SE_Long_Float row_width )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Spatial_Index_Related_Geometry_Topology, row_width, row_width);
    }

    /// Get field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#spacing_unit">spacing_unit</a>
    SE_Spatial_Index_Spacing_Unit get_spacing_unit()
    {
        DRMBASE_RET_FIELDS(Spatial_Index_Related_Geometry_Topology, spacing_unit);
    }

    /// Set field <a href="../drm/classes/SpatialIndexRelatedGeometryTopology.htm#spacing_unit">spacing_unit</a>
    void set_spacing_unit( SE_Spatial_Index_Spacing_Unit spacing_unit )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Spatial_Index_Related_Geometry_Topology, spacing_unit, spacing_unit);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_SPATIAL_INDEX_RELATED_GEOMETRY_TOPOLOGY
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_SPATIAL_INDEX_RELATED_GEOMETRY_TOPOLOGY;
    }

};

} // namespace sedris

#endif // _seDRMSpatialIndexRelatedGeometryTopology_h
