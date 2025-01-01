#ifndef TLV320AIC31XX_REGS_H
#define TLV320AIC31XX_REGS_H

// helpers
#ifndef GENMASK
#define GENMASK(high, low) (((1U << ((high) + 1)) - 1) & ~((1U << (low)) - 1))
#endif

#ifndef BIT
#define BIT(n) (1U << (n))
#endif

#ifndef BIT_MASK
#define BIT_MASK(n) ((1U << (n)) - 1)
#endif

#ifndef SET_BIT
#define SET_BIT(value, n) ((value) | BIT(n))
#endif

#ifndef CLEAR_BIT
#define CLEAR_BIT(value, n) ((value) & ~BIT(n))
#endif

#define AIC31XX_STEREO_CLASS_D_BIT	1
#define AIC31XX_MINIDSP_BIT		2
#define DAC31XX_BIT			3

enum aic31xx_type {
	AIC3100	= 0,
	AIC3110 = AIC31XX_STEREO_CLASS_D_BIT,
	AIC3120 = AIC31XX_MINIDSP_BIT,
	AIC3111 = AIC31XX_STEREO_CLASS_D_BIT | AIC31XX_MINIDSP_BIT,
	DAC3100 = DAC31XX_BIT,
	DAC3101 = DAC31XX_BIT | AIC31XX_STEREO_CLASS_D_BIT,
};

#define AIC31XX_REG(page, reg)	((page * 128) + reg)

#define AIC31XX_PAGECTL		AIC31XX_REG(0, 0) /* Page Control Register */

/* Page 0 Registers */
#define AIC31XX_RESET		AIC31XX_REG(0, 1) /* Software reset register */
#define AIC31XX_OT_FLAG		AIC31XX_REG(0, 3) /* OT FLAG register */
#define AIC31XX_CLKMUX		AIC31XX_REG(0, 4) /* Clock clock Gen muxing, Multiplexers*/
#define AIC31XX_PLLPR		AIC31XX_REG(0, 5) /* PLL P and R-VAL register */
#define AIC31XX_PLLJ		AIC31XX_REG(0, 6) /* PLL J-VAL register */
#define AIC31XX_PLLDMSB		AIC31XX_REG(0, 7) /* PLL D-VAL MSB register */
#define AIC31XX_PLLDLSB		AIC31XX_REG(0, 8) /* PLL D-VAL LSB register */
#define AIC31XX_NDAC		AIC31XX_REG(0, 11) /* DAC NDAC_VAL register*/
#define AIC31XX_MDAC		AIC31XX_REG(0, 12) /* DAC MDAC_VAL register */
#define AIC31XX_DOSRMSB		AIC31XX_REG(0, 13) /* DAC OSR setting register 1, MSB value */
#define AIC31XX_DOSRLSB		AIC31XX_REG(0, 14) /* DAC OSR setting register 2, LSB value */
#define AIC31XX_MINI_DSP_INPOL	AIC31XX_REG(0, 16)
#define AIC31XX_NADC		AIC31XX_REG(0, 18) /* Clock setting register 8, PLL */
#define AIC31XX_MADC		AIC31XX_REG(0, 19) /* Clock setting register 9, PLL */
#define AIC31XX_AOSR		AIC31XX_REG(0, 20) /* ADC Oversampling (AOSR) Register */
#define AIC31XX_CLKOUTMUX	AIC31XX_REG(0, 25) /* Clock setting register 9, Multiplexers */
#define AIC31XX_CLKOUTMVAL	AIC31XX_REG(0, 26) /* Clock setting register 10, CLOCKOUT M divider value */
#define AIC31XX_IFACE1		AIC31XX_REG(0, 27) /* Audio Interface Setting Register 1 */
#define AIC31XX_DATA_OFFSET	AIC31XX_REG(0, 28) /* Audio Data Slot Offset Programming */
#define AIC31XX_IFACE2		AIC31XX_REG(0, 29) /* Audio Interface Setting Register 2 */
#define AIC31XX_BCLKN		AIC31XX_REG(0, 30) /* Clock setting register 11, BCLK N Divider */
#define AIC31XX_IFACESEC1	AIC31XX_REG(0, 31) /* Audio Interface Setting Register 3, Secondary Audio Interface */
#define AIC31XX_IFACESEC2	AIC31XX_REG(0, 32) /* Audio Interface Setting Register 4 */
#define AIC31XX_IFACESEC3	AIC31XX_REG(0, 33) /* Audio Interface Setting Register 5 */
#define AIC31XX_I2C		AIC31XX_REG(0, 34) /* I2C Bus Condition */
#define AIC31XX_ADCFLAG		AIC31XX_REG(0, 36) /* ADC FLAG */
#define AIC31XX_DACFLAG1	AIC31XX_REG(0, 37) /* DAC Flag Registers */
#define AIC31XX_DACFLAG2	AIC31XX_REG(0, 38)
#define AIC31XX_OFFLAG		AIC31XX_REG(0, 39) /* Sticky Interrupt flag (overflow) */
#define AIC31XX_INTRDACFLAG	AIC31XX_REG(0, 44) /* Sticy DAC Interrupt flags */
#define AIC31XX_INTRADCFLAG	AIC31XX_REG(0, 45) /* Sticy ADC Interrupt flags */
#define AIC31XX_INTRDACFLAG2	AIC31XX_REG(0, 46) /* DAC Interrupt flags 2 */
#define AIC31XX_INTRADCFLAG2	AIC31XX_REG(0, 47) /* ADC Interrupt flags 2 */
#define AIC31XX_INT1CTRL	AIC31XX_REG(0, 48) /* INT1 interrupt control */
#define AIC31XX_INT2CTRL	AIC31XX_REG(0, 49) /* INT2 interrupt control */
#define AIC31XX_GPIO1		AIC31XX_REG(0, 51) /* GPIO1 control */
#define AIC31XX_DACPRB		AIC31XX_REG(0, 60)
#define AIC31XX_ADCPRB		AIC31XX_REG(0, 61) /* ADC Instruction Set Register */
#define AIC31XX_DACSETUP	AIC31XX_REG(0, 63) /* DAC channel setup register */
#define AIC31XX_DACMUTE		AIC31XX_REG(0, 64) /* DAC Mute and volume control register */
#define AIC31XX_LDACVOL		AIC31XX_REG(0, 65) /* Left DAC channel digital volume control */
#define AIC31XX_RDACVOL		AIC31XX_REG(0, 66) /* Right DAC channel digital volume control */
#define AIC31XX_HSDETECT	AIC31XX_REG(0, 67) /* Headset detection */
#define AIC31XX_ADCSETUP	AIC31XX_REG(0, 81) /* ADC Digital Mic */
#define AIC31XX_ADCFGA		AIC31XX_REG(0, 82) /* ADC Digital Volume Control Fine Adjust */
#define AIC31XX_ADCVOL		AIC31XX_REG(0, 83) /* ADC Digital Volume Control Coarse Adjust */

/* Page 1 Registers */
#define AIC31XX_HPDRIVER	AIC31XX_REG(1, 31) /* Headphone drivers */
#define AIC31XX_SPKAMP		AIC31XX_REG(1, 32) /* Class-D Speakear Amplifier */
#define AIC31XX_HPPOP		AIC31XX_REG(1, 33) /* HP Output Drivers POP Removal Settings */
#define AIC31XX_SPPGARAMP	AIC31XX_REG(1, 34) /* Output Driver PGA Ramp-Down Period Control */
#define AIC31XX_DACMIXERROUTE	AIC31XX_REG(1, 35) /* DAC_L and DAC_R Output Mixer Routing */
#define AIC31XX_LANALOGHPL	AIC31XX_REG(1, 36) /* Left Analog Vol to HPL */
#define AIC31XX_RANALOGHPR	AIC31XX_REG(1, 37) /* Right Analog Vol to HPR */
#define AIC31XX_LANALOGSPL	AIC31XX_REG(1, 38) /* Left Analog Vol to SPL */
#define AIC31XX_RANALOGSPR	AIC31XX_REG(1, 39) /* Right Analog Vol to SPR */
#define AIC31XX_HPLGAIN		AIC31XX_REG(1, 40) /* HPL Driver */
#define AIC31XX_HPRGAIN		AIC31XX_REG(1, 41) /* HPR Driver */
#define AIC31XX_SPLGAIN		AIC31XX_REG(1, 42) /* SPL Driver */
#define AIC31XX_SPRGAIN		AIC31XX_REG(1, 43) /* SPR Driver */
#define AIC31XX_HPCONTROL	AIC31XX_REG(1, 44) /* HP Driver Control */
#define AIC31XX_MICBIAS		AIC31XX_REG(1, 46) /* MIC Bias Control */
#define AIC31XX_MICPGA		AIC31XX_REG(1, 47) /* MIC PGA*/
#define AIC31XX_MICPGAPI	AIC31XX_REG(1, 48) /* Delta-Sigma Mono ADC Channel Fine-Gain Input Selection for P-Terminal */
#define AIC31XX_MICPGAMI	AIC31XX_REG(1, 49) /* ADC Input Selection for M-Terminal */
#define AIC31XX_MICPGACM	AIC31XX_REG(1, 50) /* Input CM Settings */

/* Bits, masks, and shifts */

/* AIC31XX_CLKMUX */
#define AIC31XX_PLL_CLKIN_MASK		GENMASK(3, 2)
#define AIC31XX_PLL_CLKIN_SHIFT		(2)
#define AIC31XX_PLL_CLKIN_MCLK		0x00
#define AIC31XX_PLL_CLKIN_BCLK		0x01
#define AIC31XX_PLL_CLKIN_GPIO1		0x02
#define AIC31XX_PLL_CLKIN_DIN		0x03
#define AIC31XX_CODEC_CLKIN_MASK	GENMASK(1, 0)
#define AIC31XX_CODEC_CLKIN_SHIFT	(0)
#define AIC31XX_CODEC_CLKIN_MCLK	0x00
#define AIC31XX_CODEC_CLKIN_BCLK	0x01
#define AIC31XX_CODEC_CLKIN_GPIO1	0x02
#define AIC31XX_CODEC_CLKIN_PLL		0x03

/* AIC31XX_PLLPR */
#define AIC31XX_PLLPR_POWER_MASK	BIT(7)
#define AIC31XX_PLLPR_R_MASK	GENMASK(3, 0)
#define AIC31XX_PLLPR_P_MASK	GENMASK(6, 4)
/* AIC31XX_NDAC */
#define AIC31XX_NDAC_MASK		GENMASK(6, 0)
#define AIC31XX_NDAC_POWER_MASK		BIT(7)
/* AIC31XX_MDAC */
#define AIC31XX_MDAC_MASK		GENMASK(6, 0)
#define AIC31XX_MDAC_POWER_MASK		BIT(7)
/* AIC31XX_NADC */
#define AIC31XX_NADC_MASK		GENMASK(6, 0)
#define AIC31XX_NADC_POWER_MASK		BIT(7)
/* AIC31XX_MADC */
#define AIC31XX_MADC_MASK		GENMASK(6, 0)
#define AIC31XX_MADC_POWER_MASK		BIT(7)
/* AIC31XX_BCLKN */
#define AIC31XX_PLL_MASK		GENMASK(6, 0)
#define AIC31XX_PM_MASK			BIT(7)

/* AIC31XX_IFACE1 */
#define AIC31XX_IFACE1_DATATYPE_MASK	GENMASK(7, 6)
#define AIC31XX_IFACE1_DATATYPE_SHIFT	(6)
#define AIC31XX_I2S_MODE		0x00
#define AIC31XX_DSP_MODE		0x01
#define AIC31XX_RIGHT_JUSTIFIED_MODE	0x02
#define AIC31XX_LEFT_JUSTIFIED_MODE	0x03
#define AIC31XX_IFACE1_DATALEN_MASK	GENMASK(5, 4)
#define AIC31XX_IFACE1_DATALEN_SHIFT	(4)
#define AIC31XX_WORD_LEN_16BITS		0x00
#define AIC31XX_WORD_LEN_20BITS		0x01
#define AIC31XX_WORD_LEN_24BITS		0x02
#define AIC31XX_WORD_LEN_32BITS		0x03
#define AIC31XX_IFACE1_MASTER_MASK	GENMASK(3, 2)
#define AIC31XX_BCLK_MASTER		BIT(3)
#define AIC31XX_WCLK_MASTER		BIT(2)

/* AIC31XX_DATA_OFFSET */
#define AIC31XX_DATA_OFFSET_MASK	GENMASK(7, 0)

/* AIC31XX_IFACE2 */
#define AIC31XX_BCLKINV_MASK		BIT(3)
#define AIC31XX_BDIVCLK_MASK		GENMASK(1, 0)
#define AIC31XX_DAC2BCLK		0x00
#define AIC31XX_DACMOD2BCLK		0x01
#define AIC31XX_ADC2BCLK		0x02
#define AIC31XX_ADCMOD2BCLK		0x03
#define AIC31XX_KEEP_I2SCLK		BIT(2)

/* AIC31XX_ADCFLAG */
#define AIC31XX_ADCPWRSTATUS_MASK	BIT(6)

/* AIC31XX_DACFLAG1 */
#define AIC31XX_LDACPWRSTATUS_MASK	BIT(7)
#define AIC31XX_HPLDRVPWRSTATUS_MASK	BIT(5)
#define AIC31XX_SPLDRVPWRSTATUS_MASK	BIT(4)
#define AIC31XX_RDACPWRSTATUS_MASK	BIT(3)
#define AIC31XX_HPRDRVPWRSTATUS_MASK	BIT(1)
#define AIC31XX_SPRDRVPWRSTATUS_MASK	BIT(0)

/* AIC31XX_OFFLAG */
#define AIC31XX_DAC_OF_LEFT		BIT(7)
#define AIC31XX_DAC_OF_RIGHT		BIT(6)
#define AIC31XX_DAC_OF_SHIFTER		BIT(5)
#define AIC31XX_ADC_OF			BIT(3)
#define AIC31XX_ADC_OF_SHIFTER		BIT(1)

/* AIC31XX_INTRDACFLAG */
#define AIC31XX_HPLSCDETECT		BIT(7)
#define AIC31XX_HPRSCDETECT		BIT(6)
#define AIC31XX_BUTTONPRESS		BIT(5)
#define AIC31XX_HSPLUG			BIT(4)
#define AIC31XX_LDRCTHRES		BIT(3)
#define AIC31XX_RDRCTHRES		BIT(2)
#define AIC31XX_DACSINT			BIT(1)
#define AIC31XX_DACAINT			BIT(0)

/* AIC31XX_INT1CTRL */
#define AIC31XX_HSPLUGDET		BIT(7)
#define AIC31XX_BUTTONPRESSDET		BIT(6)
#define AIC31XX_DRCTHRES		BIT(5)
#define AIC31XX_AGCNOISE		BIT(4)
#define AIC31XX_SC			BIT(3)
#define AIC31XX_ENGINE			BIT(2)

/* AIC31XX_GPIO1 */
#define AIC31XX_GPIO1_FUNC_MASK		GENMASK(5, 2)
#define AIC31XX_GPIO1_FUNC_SHIFT	2
#define AIC31XX_GPIO1_DISABLED		0x00
#define AIC31XX_GPIO1_INPUT		0x01
#define AIC31XX_GPIO1_GPI		0x02
#define AIC31XX_GPIO1_GPO		0x03
#define AIC31XX_GPIO1_CLKOUT		0x04
#define AIC31XX_GPIO1_INT1		0x05
#define AIC31XX_GPIO1_INT2		0x06
#define AIC31XX_GPIO1_ADC_WCLK		0x07
#define AIC31XX_GPIO1_SBCLK		0x08
#define AIC31XX_GPIO1_SWCLK		0x09
#define AIC31XX_GPIO1_ADC_MOD_CLK	0x10
#define AIC31XX_GPIO1_SDOUT		0x11

/* AIC31XX_DACMUTE */
#define AIC31XX_DACMUTE_MASK		GENMASK(3, 2)

#define AIC31XX_DAC_POWER_MASK		GENMASK(7, 6)

/* AIC31XX_HSDETECT */
#define AIC31XX_HSD_ENABLE		BIT(7)
#define AIC31XX_HSD_TYPE_MASK		GENMASK(6, 5)
#define AIC31XX_HSD_TYPE_SHIFT		5
#define AIC31XX_HSD_NONE		0x00
#define AIC31XX_HSD_HP			0x01
#define AIC31XX_HSD_HS			0x03

/* AIC31XX_HPDRIVER */
#define AIC31XX_HPD_OCMV_MASK		GENMASK(4, 3)
#define AIC31XX_HPD_OCMV_SHIFT		3
#define AIC31XX_HPD_OCMV_1_35V		0x0
#define AIC31XX_HPD_OCMV_1_5V		0x1
#define AIC31XX_HPD_OCMV_1_65V		0x2
#define AIC31XX_HPD_OCMV_1_8V		0x3

#define AIC31XX_HPD_POWER_MASK		GENMASK(7,6)

/* AIC31XX_MICBIAS */
#define AIC31XX_MICBIAS_MASK		GENMASK(1, 0)
#define AIC31XX_MICBIAS_SHIFT		0

#define AIC31XX_MICPGA_ENABLE_MASK	BIT(7)
#define AIC31XX_MICPGA_GAIN_MASK	GENMASK(6, 0)

#define AIC31XX_ADC_POWER_MASK		BIT(7)
#define AIC31XX_ADC_MUTE_MASK		BIT(7)

#define AIC31XX_HPLGAIN_MUTE_MASK	BIT(2)
#define AIC31XX_HPRGAIN_MUTE_MASK	BIT(2)
#define AIC31XX_HPLGAIN_GAIN_MASK	GENMASK(6, 3)
#define AIC31XX_HPRGAIN_GAIN_MASK	GENMASK(6, 3)

#define AIC3100_SPKAMP_POWER_MASK	BIT(7)

#define AIC3100_SPKLGAIN_MUTE_MASK	BIT(2)
#define AIC3100_SPKLGAIN_GAIN_MASK	GENMASK(4, 3)

#define AIC31XX_DACMIXERROUTE_DACL_MASK		GENMASK(7, 6)
#define AIC31XX_DACMIXERROUTE_DACR_MASK		GENMASK(3, 2)

#define AIC31XX_HPCONTROL_PERFORMANCE_MASK	GENMASK(4, 3)
#define AIC31XX_HPCONTROL_HPL_LINE_MASK	BIT(2)
#define AIC31XX_HPCONTROL_HPR_LINE_MASK	BIT(3)


struct reg_names {
    uint16_t reg;
    const char* name;
};

const reg_names registerTable[] = {
    {AIC31XX_REG(0, 0), "AIC31XX_PAGECTL"},
    {AIC31XX_REG(0, 1), "AIC31XX_RESET"},
    {AIC31XX_REG(0, 3), "AIC31XX_OT_FLAG"},
    {AIC31XX_REG(0, 4), "AIC31XX_CLKMUX"},
    {AIC31XX_REG(0, 5), "AIC31XX_PLLPR"},
    {AIC31XX_REG(0, 6), "AIC31XX_PLLJ"},
    {AIC31XX_REG(0, 7), "AIC31XX_PLLDMSB"},
    {AIC31XX_REG(0, 8), "AIC31XX_PLLDLSB"},
    {AIC31XX_REG(0, 11), "AIC31XX_NDAC"},
    {AIC31XX_REG(0, 12), "AIC31XX_MDAC"},
    {AIC31XX_REG(0, 13), "AIC31XX_DOSRMSB"},
    {AIC31XX_REG(0, 14), "AIC31XX_DOSRLSB"},
    {AIC31XX_REG(0, 16), "AIC31XX_MINI_DSP_INPOL"},
    {AIC31XX_REG(0, 18), "AIC31XX_NADC"},
    {AIC31XX_REG(0, 19), "AIC31XX_MADC"},
    {AIC31XX_REG(0, 20), "AIC31XX_AOSR"},
    {AIC31XX_REG(0, 25), "AIC31XX_CLKOUTMUX"},
    {AIC31XX_REG(0, 26), "AIC31XX_CLKOUTMVAL"},
    {AIC31XX_REG(0, 27), "AIC31XX_IFACE1"},
    {AIC31XX_REG(0, 28), "AIC31XX_DATA_OFFSET"},
    {AIC31XX_REG(0, 29), "AIC31XX_IFACE2"},
    {AIC31XX_REG(0, 30), "AIC31XX_BCLKN"},
    {AIC31XX_REG(0, 31), "AIC31XX_IFACESEC1"},
    {AIC31XX_REG(0, 32), "AIC31XX_IFACESEC2"},
    {AIC31XX_REG(0, 33), "AIC31XX_IFACESEC3"},
    {AIC31XX_REG(0, 34), "AIC31XX_I2C"},
    {AIC31XX_REG(0, 36), "AIC31XX_ADCFLAG"},
    {AIC31XX_REG(0, 37), "AIC31XX_DACFLAG1"},
    {AIC31XX_REG(0, 38), "AIC31XX_DACFLAG2"},
    {AIC31XX_REG(0, 39), "AIC31XX_OFFLAG"},
    {AIC31XX_REG(0, 44), "AIC31XX_INTRDACFLAG"},
    {AIC31XX_REG(0, 45), "AIC31XX_INTRADCFLAG"},
    {AIC31XX_REG(0, 46), "AIC31XX_INTRDACFLAG2"},
    {AIC31XX_REG(0, 47), "AIC31XX_INTRADCFLAG2"},
    {AIC31XX_REG(0, 48), "AIC31XX_INT1CTRL"},
    {AIC31XX_REG(0, 49), "AIC31XX_INT2CTRL"},
    {AIC31XX_REG(0, 51), "AIC31XX_GPIO1"},
    {AIC31XX_REG(0, 60), "AIC31XX_DACPRB"},
    {AIC31XX_REG(0, 61), "AIC31XX_ADCPRB"},
    {AIC31XX_REG(0, 63), "AIC31XX_DACSETUP"},
    {AIC31XX_REG(0, 64), "AIC31XX_DACMUTE"},
    {AIC31XX_REG(0, 65), "AIC31XX_LDACVOL"},
    {AIC31XX_REG(0, 66), "AIC31XX_RDACVOL"},
    {AIC31XX_REG(0, 67), "AIC31XX_HSDETECT"},
    {AIC31XX_REG(0, 81), "AIC31XX_ADCSETUP"},
    {AIC31XX_REG(0, 82), "AIC31XX_ADCFGA"},
    {AIC31XX_REG(0, 83), "AIC31XX_ADCVOL"},
    {AIC31XX_REG(1, 31), "AIC31XX_HPDRIVER"},
    {AIC31XX_REG(1, 32), "AIC31XX_SPKAMP"},
    {AIC31XX_REG(1, 33), "AIC31XX_HPPOP"},
    {AIC31XX_REG(1, 34), "AIC31XX_SPPGARAMP"},
    {AIC31XX_REG(1, 35), "AIC31XX_DACMIXERROUTE"},
    {AIC31XX_REG(1, 36), "AIC31XX_LANALOGHPL"},
    {AIC31XX_REG(1, 37), "AIC31XX_RANALOGHPR"},
    {AIC31XX_REG(1, 38), "AIC31XX_LANALOGSPL"},
    {AIC31XX_REG(1, 39), "AIC31XX_RANALOGSPR"},
    {AIC31XX_REG(1, 40), "AIC31XX_HPLGAIN"},
    {AIC31XX_REG(1, 41), "AIC31XX_HPRGAIN"},
    {AIC31XX_REG(1, 42), "AIC31XX_SPLGAIN"},
    {AIC31XX_REG(1, 43), "AIC31XX_SPRGAIN"},
    {AIC31XX_REG(1, 44), "AIC31XX_HPCONTROL"},
    {AIC31XX_REG(1, 46), "AIC31XX_MICBIAS"},
    {AIC31XX_REG(1, 47), "AIC31XX_MICPGA"},
    {AIC31XX_REG(1, 48), "AIC31XX_MICPGAPI"},
    {AIC31XX_REG(1, 49), "AIC31XX_MICPGAMI"},
    {AIC31XX_REG(1, 50), "AIC31XX_MICPGACM"}
};

struct reg_default {
	uint16_t reg;
	uint16_t val;
};
static const struct reg_default aic31xx_reg_defaults[] = {
	{ AIC31XX_CLKMUX, 0x00 },
	{ AIC31XX_PLLPR, 0x11 },
	{ AIC31XX_PLLJ, 0x04 },
	{ AIC31XX_PLLDMSB, 0x00 },
	{ AIC31XX_PLLDLSB, 0x00 },
	{ AIC31XX_NDAC, 0x01 },
	{ AIC31XX_MDAC, 0x01 },
	{ AIC31XX_DOSRMSB, 0x00 },
	{ AIC31XX_DOSRLSB, 0x80 },
	{ AIC31XX_NADC, 0x01 },
	{ AIC31XX_MADC, 0x01 },
	{ AIC31XX_AOSR, 0x80 },
	{ AIC31XX_IFACE1, 0x00 },
	{ AIC31XX_DATA_OFFSET, 0x00 },
	{ AIC31XX_IFACE2, 0x00 },
	{ AIC31XX_BCLKN, 0x01 },
	{ AIC31XX_DACSETUP, 0x14 },
	{ AIC31XX_DACMUTE, 0x0c },
	{ AIC31XX_LDACVOL, 0x00 },
	{ AIC31XX_RDACVOL, 0x00 },
	{ AIC31XX_ADCSETUP, 0x00 },
	{ AIC31XX_ADCFGA, 0x80 },
	{ AIC31XX_ADCVOL, 0x00 },
	{ AIC31XX_HPDRIVER, 0x04 },
	{ AIC31XX_SPKAMP, 0x06 },
	{ AIC31XX_DACMIXERROUTE, 0x00 },
	{ AIC31XX_LANALOGHPL, 0x7f },
	{ AIC31XX_RANALOGHPR, 0x7f },
	{ AIC31XX_LANALOGSPL, 0x7f },
	{ AIC31XX_RANALOGSPR, 0x7f },
	{ AIC31XX_HPLGAIN, 0x02 },
	{ AIC31XX_HPRGAIN, 0x02 },
	{ AIC31XX_SPLGAIN, 0x00 },
	{ AIC31XX_SPRGAIN, 0x00 },
	{ AIC31XX_MICBIAS, 0x00 },
	{ AIC31XX_MICPGA, 0x80 },
	{ AIC31XX_MICPGAPI, 0x00 },
	{ AIC31XX_MICPGAMI, 0x00 },
};

const float analogGainTable[] = {
      0.0,  -0.5,  -1.0,  -1.5,  -2.0,  -2.5,  -3.0,  -3.5,  -4.0,  -4.5,
     -5.0,  -5.5,  -6.0,  -6.5,  -7.0,  -7.5,  -8.0,  -8.5,  -9.0,  -9.5,
    -10.0, -10.5, -11.0, -11.5, -12.0, -12.5, -13.0, -13.5, -14.0, -14.5,
    -15.0, -15.5, -16.0, -16.5, -17.0, -17.5, -18.1, -18.6, -19.1, -19.6,
    -20.1, -20.6, -21.1, -21.6, -22.1, -22.6, -23.1, -23.6, -24.1, -24.6,
    -25.1, -25.6, -26.1, -26.6, -27.1, -27.6, -28.1, -28.6, -29.1, -29.6,
    -30.1, -30.6, -31.1, -31.6, -32.1, -32.6, -33.1, -33.6, -34.1, -34.6,
    -35.2, -35.7, -36.2, -36.7, -37.2, -37.7, -38.2, -38.7, -39.2, -39.7,
    -40.2, -40.7, -41.2, -41.7, -42.1, -42.7, -43.2, -43.8, -44.3, -44.8,
    -45.2, -45.8, -46.2, -46.7, -47.4, -47.9, -48.2, -48.7, -49.3, -50.0,
    -50.3, -51.0, -51.4, -51.8, -52.2, -52.7, -53.7, -54.2, -55.3, -56.7,
    -58.3, -60.2, -62.7, -64.3, -66.2, -68.7, -72.2, -78.3, -78.3, -78.3,
    -78.3, -78.3, -78.3, -78.3, -78.3, -78.3, -78.3, -78.3
};


#endif	/* TLV320AIC31XX_REGS_H */
