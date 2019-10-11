#ifndef WSEPD_SPI_MOSI
    #define WSEPD_SPI_MOSI  20
#endif

#ifndef WSEPD_SPI_MISO
    #define WSEPD_SPI_MISO  0xff // not used
#endif

#ifndef WSEPD_SPI_CLK
    #define WSEPD_SPI_CLK   19
#endif

#ifndef WSEPD_SPI_CS
    #define WSEPD_SPI_CS    18
#endif

#ifndef WSEPD_DC_PIN
    #define WSEPD_DC        3
#endif

#ifndef WSEPD_RST_PIN
    #define WSEPD_RST       2
#endif

#ifndef WSEPD_BUSY_PIN
    #define WSEPD_BUSY      4
#endif

#ifndef WSEPD_WIDTH
    #define WSEPD_WIDTH     200
#endif

#ifndef WSEPD_HEIGHT
    #define WSEPD_HEIGHT     200
#endif

#ifndef WSEPD_SPI_INSTANCE
    #define WSEPD_SPI_INSTANCE  1
#endif

//==========================================================
// <q> NRF_GFX_ENABLED  - nrf_gfx - GFX module
 

#ifndef NRF_GFX_ENABLED
#define NRF_GFX_ENABLED 1
#endif

// <e> SPI_ENABLED - nrf_drv_spi - SPI/SPIM peripheral driver
//==========================================================
#ifndef SPI_ENABLED
#define SPI_ENABLED 1
#endif

// <e> SPI1_ENABLED - Enable SPI1 instance
//==========================================================
#ifndef SPI1_ENABLED
#define SPI1_ENABLED 1
#endif

//==========================================================
// <e> NRF_LOG_ENABLED - nrf_log - Logging
//==========================================================
#ifndef NRF_LOG_ENABLED
#define NRF_LOG_ENABLED 1
#endif