
# This one of several ways to include files from the input file
# exec(open("Modified_data/auto_test.dr").read())
# exec(open("Modified_data/data_record.dr").read())

ball.state.input.print_off = 1

# Set the freeze frame rate
# trick.exec_set_freeze_frame(0.10)

# Configure integration
ball.trick_technique = trick.User_Defined
ball.er7_technique = trick.Integration.PositionVerlet
ball.use_trick_integ = False
end_time = 600000.0 / 1.5

# Set the stop time 
trick.exec_set_terminate_time(end_time)
