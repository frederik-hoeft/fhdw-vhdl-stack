
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name stack -dir "/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/planAhead_run_1" -part xc3s500evq100-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/stack.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/dev/projects/es4/fhdw-vhdl-stack/src/stack} }
set_property target_constrs_file "stack.ucf" [current_fileset -constrset]
add_files [list {stack.ucf}] -fileset [get_property constrset [current_run]]
link_design
