from setuptools import find_packages, setup

package_name = 'lab01_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pederba',
    maintainer_email='peder.basmo@gmail.com',
    description='SESASR Lab01 exercise',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'controller = lab01_pkg.controller:main',
            'localization = lab01_pkg.localization:main',
            'reset = lab01_pkg.reset:main',
            'localization_reset = lab01_pkg.localization_reset:main',
            'controller_reset = lab01_pkg.controller_reset:main'
        ],
    },
)
