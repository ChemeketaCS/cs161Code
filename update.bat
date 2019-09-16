
@echo Pulling any new changesets

hg pull

@echo. 
@echo Updating - discarding local changes

hg update -C

@pause