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
             <complexType name="PerformQuickActionResult">
                <sequence>
                    <element name="created"  type="xsd:boolean"/>
                    <element name="errors"    type="tns:Error" minOccurs="0" maxOccurs="unbounded"/>
                    <element name="feedItemIds" type="tns:ID" minOccurs="0" maxOccurs="unbounded" nillable="true"/>
                    <element name="ids"       type="tns:ID" minOccurs="0" maxOccurs="unbounded" nillable="true"/>
                    <element name="success"   type="xsd:boolean"/>
                </sequence>
            </complexType>
*/
@interface ZKPerformQuickActionResult : ZKXmlDeserializer

@property (nonatomic, readonly) BOOL created;
@property (nonatomic, readonly) NSArray *errors; // Array of ZKError
@property (nonatomic, readonly) NSArray *feedItemIds;
@property (nonatomic, readonly) NSArray *ids;
@property (nonatomic, readonly) BOOL success;

@end
