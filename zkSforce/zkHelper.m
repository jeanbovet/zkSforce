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

#import "zkHelper.h"

static NSDateFormatter *dateFormatter, *dateTimeFormatter;

@implementation zkHelper

+(void)initialize {
    if (self == [zkHelper class]) {
        dateTimeFormatter = [[NSDateFormatter alloc] init];
        [dateTimeFormatter setDateFormat:@"yyyy-MM-dd'T'HH:mm:ss.SSSSZ"];
        dateFormatter = [[NSDateFormatter alloc] init];
        [dateFormatter setDateFormat:@"yyyy-MM-dd"];        
    }
}

+ (NSString*)dateTimeStringFromValue:(NSDate*)value {
	NSMutableString *dt = [NSMutableString stringWithString:[dateTimeFormatter stringFromDate:value]];
	// meh, insert the : in the TZ offset, to make it xsd:dateTime
	[dt insertString:@":" atIndex:[dt length]-2];
    return dt;
}

+ (NSString*)dateStringFromValue:(NSDate*)value {
    return [dateFormatter stringFromDate:value];
}

+ (NSDate *)dateTimeValueFromString:(NSString *)string {
	// ok, so a little hackish, but does the job
	// note to self, make sure API always returns GMT times ;)
	NSMutableString *dt = [NSMutableString stringWithString:string];
	[dt deleteCharactersInRange:NSMakeRange([dt length] -1,1)];
	[dt appendString:@"+00"];
	return [dateTimeFormatter dateFromString:dt];
}

- (NSDate *)dateValueFromString:(NSString *)string {
	return [dateFormatter dateFromString:string];
}

@end
