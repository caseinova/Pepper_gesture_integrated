import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/tom/hayden_ws/Hayden_ws_ros/install/pepper_hri'
