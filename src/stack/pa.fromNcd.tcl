
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name stack -dir "/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/planAhead_run_5" -part xc3s500evq100-4
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/stack.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/dev/projects/es4/fhdw-vhdl-stack/src/stack} }
set_property target_constrs_file "stack.ucf" [current_fileset -constrset]
add_files [list {stack.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/stack.ncd"
if {[catch {read_twx -name results_1 -file "/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/stack.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/stack.twx\": $eInfo"
}
