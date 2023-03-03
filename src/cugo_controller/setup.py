from setuptools import setup
import os
from glob import glob

package_name = 'cugo_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name), glob('launch/*_launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shelfer',
    maintainer_email='shelfer@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'cugo_controller = cugo_controller.cugo_controller:main',
            'ps4_publisher = cugo_controller.ps4_publisher:main',
            'ultrasonic_client = cugo_controller.ultrasonic_client:main',
        ],
    },
)
