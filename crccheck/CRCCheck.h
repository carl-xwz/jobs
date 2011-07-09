#ifndef _CRCCHECK_H_
#define _CRCCHECK_H_
enum CRC_DIVISOR
{
	CRC1 = 0x3,
	CRC4 = 0x13,
	CRC5_EPC = 0x29,
	CRC5_ITU = 0x35,
	CRC5_USB = 0x25,
	CRC6_ITU = 0x43,
	CRC7 = 0x89,
};
class CRCCheck
{
		
	public:
		CRCCheck ();
		CRCCheck ( const CRCCheck &other );
		~CRCCheck ();
		CRCCheck& operator = ( const CRCCheck &other );
		inline void setDivisor(const CRC_DIVISOR type)
		{
			divisor = type;
		}
		int crc(void *const buf, const int size);
		bool check(void *const buf, const int size, const int checkSum);
	private:
		unsigned int divisor;
}; /* -----  end of class CRCCheck  ----- */
#endif /* end of include guard: _CRCCHECK_H_ */
