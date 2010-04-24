/* 
 The Open Church App - an open source iPhone application for churches
 to share information with their members.
 
 Copyright (C) 2010  Sugar Creek Baptist Church <info at sugarcreek.net> - 
 Rick Russell <rrussell at sugarcreek.net>
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License along
 with this program; if not, write to the Free Software Foundation, Inc.,
 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 
 */


#import <UIKit/UIKit.h>
#import "IconDownloader.h"
#import "FeedLoader.h"
#import "NewsDetailController.h"

@interface NewsViewController : UITableViewController <UIScrollViewDelegate, IconDownloaderDelegate, FeedLoaderDelegate>
{
	NSArray *entries;   // the main data model for our UITableView
    NSMutableDictionary *imageDownloadsInProgress;  // the set of IconDownloader objects for each app
	
	NewsDetailController *newsDetailView;
	Boolean didRelease;
	
}

@property (nonatomic, retain) NSArray *entries;
@property (nonatomic, retain) NSMutableDictionary *imageDownloadsInProgress;
@property (nonatomic, retain) IBOutlet NewsDetailController *newsDetailView;

- (void)appImageDidLoad:(NSIndexPath *)indexPath;

@end