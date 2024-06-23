# Technical Debt

## BRS_Startup() - While(1) has no error handling
If we reach the while(1), we should probably do a) error logging and/or b) reset
- at least we trigger the LED in case the main function returns.

## BRS_Startup() - Only supports standard rp2040 setup, and not supporting rp2040w
Support rp2040w in future release (1.02.00?)



