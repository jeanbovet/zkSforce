// Copyright (c) 2013 Simon Fell
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

#import "ZKDescribeQuickActionResult.h"
#import "ZKDescribeLayoutSection.h"

@implementation ZKDescribeQuickActionResult

@synthesize layout = _layout;

- (void)dealloc {
    [_layout release];
    [super dealloc];
}

- (int)height {
    return [self integer:@"height"];
}

- (NSString *)iconName {
	return [self string:@"iconName"];
}

- (NSString *)iconUrl {
	return [self string:@"iconUrl"];
}

- (NSString *)label {
	return [self string:@"label"];
}

- (NSArray *)layout {
	if (nil == _layout)
		_layout = [[self complexTypeArrayFromElements:@"layout" cls:[ZKDescribeLayoutSection class]] retain];
	return _layout;
}

- (NSString *)name {
	return [self string:@"name"];
}

- (NSString *)sourceSobjectType {
	return [self string:@"sourceSobjectType"];
}

- (NSString *)targetParentField {
	return [self string:@"targetParentField"];
}

- (NSString *)targetRecordTypeId {
	return [self string:@"targetRecordTypeId"];
}

- (NSString *)targetSobjectType {
	return [self string:@"targetSobjectType"];
}

- (NSString *)type {
	return [self string:@"type"];
}

- (NSString *)visualforcePageName {
	return [self string:@"visualforcePageName"];
}

- (int)width {
    return [self integer:@"width"];
}

@end
