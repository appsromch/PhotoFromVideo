//
//  SHKFormFieldLargeTextSettings.h
//  ShareKit
//
//  Created by Vilem Kurz on 30/07/2013.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.


#import "SHKFormFieldSettings.h"
#import "SHKItem.h"

@interface SHKFormFieldLargeTextSettings : SHKFormFieldSettings

/// Max allowed text length. Default is 0. If some other value is set, counter will appear.
@property (nonatomic) NSUInteger maxTextLength;

+ (SHKFormFieldLargeTextSettings *)label:(NSString *)l
                                     key:(NSString *)k
                                    type:(SHKFormFieldType)t
                                   start:(NSString *)s
                                    item:(SHKItem *)item;
- (BOOL)shouldShowThumbnail;
- (UIImage *)imageForThumbnail;
- (NSString *)extensionForThumbnail;
- (SHKShareType)shareType;

@end