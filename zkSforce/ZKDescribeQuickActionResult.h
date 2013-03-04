// Copyright (c) 2013 Jean Bovet
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import "ZKXmlDeserializer.h"

/*
            <complexType name="DescribeQuickActionResult">
                <sequence>
                    <element name="height"        type="xsd:int" nillable="true"/>
                    <element name="iconName"      type="xsd:string" nillable="true"/>
                    <element name="iconUrl"       type="xsd:string" nillable="true"/>
                    <element name="label"        type="xsd:string"/>
                    <element name="layout"          type="tns:DescribeLayoutSection" minOccurs="0" maxOccurs="unbounded"/>
                    <element name="name"         type="xsd:string"/>
                    <element name="sourceSobjectType"    type="xsd:string" nillable="true"/>
                    <element name="targetParentField"    type="xsd:string" nillable="true"/>
                    <element name="targetRecordTypeId"   type="tns:ID" nillable="true"/>
                    <element name="targetSobjectType"    type="xsd:string" nillable="true"/>
                    <element name="type"         type="xsd:string"/>
                    <element name="visualforcePageName"    type="xsd:string" nillable="true"/>
                    <element name="width"         type="xsd:int" nillable="true"/>
                </sequence>
            </complexType>
 */
@interface ZKDescribeQuickActionResult : ZKXmlDeserializer

@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *iconUrl;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSArray *layout; // array of ZKDescribeLayoutSection
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sourceSobjectType;
@property (nonatomic, readonly) NSString *targetParentField;
@property (nonatomic, readonly) NSString *targetRecordTypeId;
@property (nonatomic, readonly) NSString *targetSobjectType;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *visualforcePageName;
@property (nonatomic, readonly) int width;

@end
