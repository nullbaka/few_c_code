.PHONY: clean All

All:
	@echo "----------Building project:[ 901selection_sort - Debug ]----------"
	@cd "901selection_sort" && "$(MAKE)" -f  "901selection_sort.mk"
clean:
	@echo "----------Cleaning project:[ 901selection_sort - Debug ]----------"
	@cd "901selection_sort" && "$(MAKE)" -f  "901selection_sort.mk" clean
