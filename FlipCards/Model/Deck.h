//
//  Deck.h
//  FlipCards
//
//  Created by sung moon on 2/13/14.
//  Copyright (c) 2014 sung moon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;
@end
