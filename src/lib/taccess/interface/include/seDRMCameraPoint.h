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

/** @file seDRMCameraPoint.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMCameraPoint (24) class.
*/

#ifndef _seDRMCameraPoint_h
#define _seDRMCameraPoint_h

#include "seDRMBase.h"

namespace sedris {

/** seDRMCameraPoint wraps the DRM <a href="../drm/classes/CameraPoint.htm">&lt;Camera_Point&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMBase
*/
class seDRMCameraPoint : public seDRMBase
{
public:

    /// Default constructor
    seDRMCameraPoint() {}

    /// Constructor for seDRM... class conversions
    seDRMCameraPoint( const seObject &other ) : seDRMBase(other) {}

    /// Get field <a href="../drm/classes/CameraPoint.htm#projection">projection</a>
    SE_Camera_Projection_Type get_projection()
    {
        DRMBASE_RET_FIELDS(Camera_Point, projection);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#projection">projection</a>
    void set_projection( SE_Camera_Projection_Type projection )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, projection, projection);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#camera_near">camera_near</a>
    SE_Long_Float get_camera_near()
    {
        DRMBASE_RET_FIELDS(Camera_Point, camera_near);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#camera_near">camera_near</a>
    void set_camera_near( SE_Long_Float camera_near )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, camera_near, camera_near);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#camera_far">camera_far</a>
    SE_Long_Float get_camera_far()
    {
        DRMBASE_RET_FIELDS(Camera_Point, camera_far);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#camera_far">camera_far</a>
    void set_camera_far( SE_Long_Float camera_far )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, camera_far, camera_far);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#use_left_bottom_right_top">use_left_bottom_right_top</a>
    SE_Boolean get_use_left_bottom_right_top()
    {
        DRMBASE_RET_FIELDS(Camera_Point, use_left_bottom_right_top);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#use_left_bottom_right_top">use_left_bottom_right_top</a>
    void set_use_left_bottom_right_top( SE_Boolean use_left_bottom_right_top )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, use_left_bottom_right_top, use_left_bottom_right_top);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#left">left</a>
    SE_Long_Float get_left()
    {
        DRMBASE_RET_FIELDS(Camera_Point, left);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#left">left</a>
    void set_left( SE_Long_Float left )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, left, left);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#bottom">bottom</a>
    SE_Long_Float get_bottom()
    {
        DRMBASE_RET_FIELDS(Camera_Point, bottom);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#bottom">bottom</a>
    void set_bottom( SE_Long_Float bottom )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, bottom, bottom);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#right">right</a>
    SE_Long_Float get_right()
    {
        DRMBASE_RET_FIELDS(Camera_Point, right);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#right">right</a>
    void set_right( SE_Long_Float right )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, right, right);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#top">top</a>
    SE_Long_Float get_top()
    {
        DRMBASE_RET_FIELDS(Camera_Point, top);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#top">top</a>
    void set_top( SE_Long_Float top )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, top, top);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#horizontal_field_of_view">horizontal_field_of_view</a>
    SE_Long_Float get_horizontal_field_of_view()
    {
        DRMBASE_RET_FIELDS(Camera_Point, horizontal_field_of_view);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#horizontal_field_of_view">horizontal_field_of_view</a>
    void set_horizontal_field_of_view( SE_Long_Float horizontal_field_of_view )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, horizontal_field_of_view, horizontal_field_of_view);
    }

    /// Get field <a href="../drm/classes/CameraPoint.htm#aspect_ratio">aspect_ratio</a>
    SE_Long_Float get_aspect_ratio()
    {
        DRMBASE_RET_FIELDS(Camera_Point, aspect_ratio);
    }

    /// Set field <a href="../drm/classes/CameraPoint.htm#aspect_ratio">aspect_ratio</a>
    void set_aspect_ratio( SE_Long_Float aspect_ratio )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Camera_Point, aspect_ratio, aspect_ratio);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_CAMERA_POINT
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_CAMERA_POINT;
    }

};

} // namespace sedris

#endif // _seDRMCameraPoint_h
