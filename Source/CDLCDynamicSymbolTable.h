// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2014 Steve Nygard.

#import "CDLoadCommand.h"

@class CDRelocationInfo;

@interface CDLCDynamicSymbolTable : CDLoadCommand

- (void)loadSymbols;

- (CDRelocationInfo *)relocationEntryWithOffset:(NSUInteger)offset;

@end
