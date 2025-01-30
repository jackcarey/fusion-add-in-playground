# Application Global Variables
# Adding application wide global variables here is a convenient technique
# It allows for access across multiple event handlers and modules

# Set to False to remove most log messages from text palette
import os

DEBUG = True

# repo root - fusion-add-in-playground
# todo: change this to something more useful
ADDIN_NAME = os.path.basename(os.path.dirname(__file__))

COMPANY_NAME = 'CareyJack'

# FIXME add good comments
design_workspace = 'FusionSolidEnvironment'
tools_tab_id = "JacksTab"
my_tab_name = "Jack"  # Only used if creating a custom Tab

my_panel_id = f'{ADDIN_NAME}_panel_2'
my_panel_name = ADDIN_NAME
my_panel_after = ''
