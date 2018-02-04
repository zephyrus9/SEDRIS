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

/** @file seDRMText.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMText (273) class.
*/

#ifndef _seDRMText_h
#define _seDRMText_h

#include "seDRMIcon.h"

namespace sedris {

/** seDRMText wraps the DRM <a href="../drm/classes/Text.htm">&lt;Text&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMIcon
*/
class seDRMText : public seDRMIcon
{
public:

    /// Default constructor
    seDRMText() {}

    /// Constructor for seDRM... class conversions
    seDRMText( const seObject &other ) : seDRMIcon(other) {}

    /// Get field <a href="../drm/classes/Text.htm#text_string">text_string</a>
    const SE_String& get_text_string()
    {
        DRMBASE_RET_FIELDS(Text, text_string);
    }

    /// Set field <a href="../drm/classes/Text.htm#text_string">text_string</a> by parameter list
    void set_text_string
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Text, text_string), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/Text.htm#text_string">text_string</a>
    void set_text_string( const SE_String& text_string )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Text, text_string), text_string);
    }

    /// Get field <a href="../drm/classes/Text.htm#font">font</a>
    const SE_Text_Font& get_font()
    {
        DRMBASE_RET_FIELDS(Text, font);
    }

    /// Set field <a href="../drm/classes/Text.htm#font">font</a>
    void set_font( const SE_Text_Font& font )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_Text_Font(DRMBASE_ACC_FIELDS(Text, font), font);
    }

    /// Set field <a href="../drm/classes/Text.htm#font">font</a> by parameter list
    void set_font
    (
         const SE_String& font_family,
         SE_Font_Style font_style,
         SE_Float font_size,
         SE_Underline_Style underline_style
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Text, font.font_family), font_family);
        DRMBASE_SET_FIELDS(Text, font.font_style, font_style);
        DRMBASE_SET_FIELDS(Text, font.font_size, font_size);
        DRMBASE_SET_FIELDS(Text, font.underline_style, underline_style);
    }

    /// Set field <a href="../drm/classes/Text.htm#font_font_family">font.font_family</a> by parameter list
    void set_font_font_family
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Text, font.font_family), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/Text.htm#font_font_family">font_font_family</a>
    void set_font_font_family( const SE_String& font_family )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Text, font.font_family), font_family);
    }

    /// Set field <a href="../drm/classes/Text.htm#font_font_style">font_font_style</a>
    void set_font_font_style( SE_Font_Style font_style )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Text, font.font_style, font_style);
    }

    /// Set field <a href="../drm/classes/Text.htm#font_font_size">font_font_size</a>
    void set_font_font_size( SE_Float font_size )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Text, font.font_size, font_size);
    }

    /// Set field <a href="../drm/classes/Text.htm#font_underline_style">font_underline_style</a>
    void set_font_underline_style( SE_Underline_Style underline_style )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Text, font.underline_style, underline_style);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_TEXT
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_TEXT;
    }

};

} // namespace sedris

#endif // _seDRMText_h