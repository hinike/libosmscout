demosIncDir = include_directories('.')

demoCfg = configuration_data()

demoCfg.set('HAVE_LIB_OSMSCOUTMAPCAIRO',buildMapCairo, description: 'Cairo backend supported')
demoCfg.set('HAVE_LIB_OSMSCOUTMAPQT',buildMapQt, description: 'Qt backend supported')

configure_file(output: 'config.h',
               configuration: demoCfg)

