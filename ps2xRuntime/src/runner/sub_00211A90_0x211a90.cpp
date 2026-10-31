#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211A90
// Address: 0x211a90 - 0x211c80
void sub_00211A90_0x211a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211A90_0x211a90");
#endif

    switch (ctx->pc) {
        case 0x211c08u: goto label_211c08;
        case 0x211c18u: goto label_211c18;
        case 0x211c28u: goto label_211c28;
        case 0x211c30u: goto label_211c30;
        case 0x211c38u: goto label_211c38;
        default: break;
    }

    ctx->pc = 0x211a90u;

    // 0x211a90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x211a94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x211a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x211a98: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x211a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x211a9c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x211a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x211aa0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x211aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x211aa4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x211aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x211aa8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x211aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x211aac: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x211aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x211ab0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x211ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x211ab4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x211ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x211ab8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x211ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x211abc: 0x14a20063  bne         $a1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x211ABCu;
    {
        const bool branch_taken_0x211abc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x211AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211ABCu;
        // 0x211ac0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211abc) {
            ctx->pc = 0x211C4Cu;
            goto label_211c4c;
        }
    }
    ctx->pc = 0x211AC4u;
    // 0x211ac4: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x211AC4u;
    {
        const bool branch_taken_0x211ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x211AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AC4u;
        // 0x211ac8: 0x3c160064  lui         $s6, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ac4) {
            ctx->pc = 0x211C4Cu;
            goto label_211c4c;
        }
    }
    ctx->pc = 0x211ACCu;
    // 0x211acc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x211ad0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x211ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x211ad4: 0x2470f1f8  addiu       $s0, $v1, -0xE08
    ctx->pc = 0x211ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963704));
    // 0x211ad8: 0x2491f200  addiu       $s1, $a0, -0xE00
    ctx->pc = 0x211ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
    // 0x211adc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x211adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x211ae0: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x211ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x211ae4: 0x2472f210  addiu       $s2, $v1, -0xDF0
    ctx->pc = 0x211ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963728));
    // 0x211ae8: 0xa2c4f220  sb          $a0, -0xDE0($s6)
    ctx->pc = 0x211ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294963744), (uint8_t)GPR_U32(ctx, 4));
    // 0x211aec: 0x3c190064  lui         $t9, 0x64
    ctx->pc = 0x211aecu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)100 << 16));
    // 0x211af0: 0x241700aa  addiu       $s7, $zero, 0xAA
    ctx->pc = 0x211af0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x211af4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x211af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x211af8: 0xa337f230  sb          $s7, -0xDD0($t9)
    ctx->pc = 0x211af8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x63F230u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F230u, _value); } while (0);
    // 0x211afc: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x211afcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
    // 0x211b00: 0x3c150064  lui         $s5, 0x64
    ctx->pc = 0x211b00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)100 << 16));
    // 0x211b04: 0x240c0025  addiu       $t4, $zero, 0x25
    ctx->pc = 0x211b04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x211b08: 0x272ff230  addiu       $t7, $t9, -0xDD0
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 25), 4294963760));
    // 0x211b0c: 0x3c180064  lui         $t8, 0x64
    ctx->pc = 0x211b0cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)100 << 16));
    // 0x211b10: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x211b10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
    // 0x211b14: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x211b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x211b18: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x211b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x211b1c: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x211b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x211b20: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x211b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x211b24: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x211b24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x211b28: 0xa305f228  sb          $a1, -0xDD8($t8)
    ctx->pc = 0x211b28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x63F228u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F228u, _value); } while (0);
    // 0x211b2c: 0x2687f208  addiu       $a3, $s4, -0xDF8
    ctx->pc = 0x211b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963720));
    // 0x211b30: 0xa286f208  sb          $a2, -0xDF8($s4)
    ctx->pc = 0x211b30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x63F208u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F208u, _value); } while (0);
    // 0x211b34: 0x241e00b7  addiu       $fp, $zero, 0xB7
    ctx->pc = 0x211b34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x211b38: 0xa2a3f218  sb          $v1, -0xDE8($s5)
    ctx->pc = 0x211b38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x63F218u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F218u, _value); } while (0);
    // 0x211b3c: 0x26a9f218  addiu       $t1, $s5, -0xDE8
    ctx->pc = 0x211b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963736));
    // 0x211b40: 0xa1e20003  sb          $v0, 0x3($t7)
    ctx->pc = 0x211b40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F233u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F233u, _value); } while (0);
    // 0x211b44: 0x26cdf220  addiu       $t5, $s6, -0xDE0
    ctx->pc = 0x211b44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963744));
    // 0x211b48: 0xa08cf1f8  sb          $t4, -0xE08($a0)
    ctx->pc = 0x211b48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x63F1F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F1F8u, _value); } while (0);
    // 0x211b4c: 0x240a002b  addiu       $t2, $zero, 0x2B
    ctx->pc = 0x211b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x211b50: 0xa26bf238  sb          $t3, -0xDC8($s3)
    ctx->pc = 0x211b50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x63F238u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F238u, _value); } while (0);
    // 0x211b54: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x211b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x211b58: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x211b58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F1FBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F1FBu, _value); } while (0);
    // 0x211b5c: 0x270ef228  addiu       $t6, $t8, -0xDD8
    ctx->pc = 0x211b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 4294963752));
    // 0x211b60: 0xa20c0002  sb          $t4, 0x2($s0)
    ctx->pc = 0x211b60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x63F1FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F1FAu, _value); } while (0);
    // 0x211b64: 0x2668f238  addiu       $t0, $s3, -0xDC8
    ctx->pc = 0x211b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963768));
    // 0x211b68: 0xa097f200  sb          $s7, -0xE00($a0)
    ctx->pc = 0x211b68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x63F200u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F200u, _value); } while (0);
    // 0x211b6c: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x211b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x211b70: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x211b70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F203u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F203u, _value); } while (0);
    // 0x211b74: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x211b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x211b78: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x211b78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63F20Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F20Au, _value); } while (0);
    // 0x211b7c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x211b80: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x211b80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F20Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F20Bu, _value); } while (0);
    // 0x211b84: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x211b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x211b88: 0xa0fe0001  sb          $fp, 0x1($a3)
    ctx->pc = 0x211b88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x63F209u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F209u, _value); } while (0);
    // 0x211b8c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x211b90: 0xa082f210  sb          $v0, -0xDF0($a0)
    ctx->pc = 0x211b90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F210u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F210u, _value); } while (0);
    // 0x211b94: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x211b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x211b98: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x211b98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F213u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F213u, _value); } while (0);
    // 0x211b9c: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x211b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x211ba0: 0xa1240001  sb          $a0, 0x1($t1)
    ctx->pc = 0x211ba0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63F219u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F219u, _value); } while (0);
    // 0x211ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211ba8: 0x2404ffbc  addiu       $a0, $zero, -0x44
    ctx->pc = 0x211ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    // 0x211bac: 0xa1220003  sb          $v0, 0x3($t1)
    ctx->pc = 0x211bacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F21Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F21Bu, _value); } while (0);
    // 0x211bb0: 0xa1240002  sb          $a0, 0x2($t1)
    ctx->pc = 0x211bb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63F21Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F21Au, _value); } while (0);
    // 0x211bb4: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x211bb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x211bb8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x211bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x211bbc: 0xa1a20003  sb          $v0, 0x3($t5)
    ctx->pc = 0x211bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x211bc0: 0xa1a40002  sb          $a0, 0x2($t5)
    ctx->pc = 0x211bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x211bc4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x211bc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211bc8: 0x2404ffb8  addiu       $a0, $zero, -0x48
    ctx->pc = 0x211bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x211bcc: 0xa1c20003  sb          $v0, 0x3($t6)
    ctx->pc = 0x211bccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F22Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F22Bu, _value); } while (0);
    // 0x211bd0: 0xa1c40001  sb          $a0, 0x1($t6)
    ctx->pc = 0x211bd0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63F229u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F229u, _value); } while (0);
    // 0x211bd4: 0xa1ea0002  sb          $t2, 0x2($t7)
    ctx->pc = 0x211bd4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x63F232u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F232u, _value); } while (0);
    // 0x211bd8: 0xa20c0001  sb          $t4, 0x1($s0)
    ctx->pc = 0x211bd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x63F1F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F1F9u, _value); } while (0);
    // 0x211bdc: 0xa22a0001  sb          $t2, 0x1($s1)
    ctx->pc = 0x211bdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x63F201u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F201u, _value); } while (0);
    // 0x211be0: 0xa22a0002  sb          $t2, 0x2($s1)
    ctx->pc = 0x211be0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x63F202u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F202u, _value); } while (0);
    // 0x211be4: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x211be4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F211u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F211u, _value); } while (0);
    // 0x211be8: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x211be8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63F212u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F212u, _value); } while (0);
    // 0x211bec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x211becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x211bf0: 0xa1c00002  sb          $zero, 0x2($t6)
    ctx->pc = 0x211bf0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63F22Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F22Au, _value); } while (0);
    // 0x211bf4: 0xa1a20001  sb          $v0, 0x1($t5)
    ctx->pc = 0x211bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x211bf8: 0xa1ea0001  sb          $t2, 0x1($t7)
    ctx->pc = 0x211bf8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x63F231u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F231u, _value); } while (0);
    // 0x211bfc: 0xa1000001  sb          $zero, 0x1($t0)
    ctx->pc = 0x211bfcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63F239u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F239u, _value); } while (0);
    // 0x211c00: 0xa1060003  sb          $a2, 0x3($t0)
    ctx->pc = 0x211c00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x63F23Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F23Bu, _value); } while (0);
    // 0x211c04: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x211c04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63F23Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63F23Au, _value); } while (0);
label_211c08:
    // 0x211c08: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x211c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c0c: 0x24b3ffff  addiu       $s3, $a1, -0x1
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x211c10: 0x26120d00  addiu       $s2, $s0, 0xD00
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
    // 0x211c14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x211c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211c18:
    // 0x211c18: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x211c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x211c1c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x211c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x211c20: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211C20u;
    SET_GPR_U32(ctx, 31, 0x211C28u);
    ctx->pc = 0x211C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C20u;
    // 0x211c24: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211C20u, 0x211C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C28u;
label_211c28:
    // 0x211c28: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211C28u;
    SET_GPR_U32(ctx, 31, 0x211C30u);
    ctx->pc = 0x211C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C28u;
    // 0x211c2c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211C28u, 0x211C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C30u;
label_211c30:
    // 0x211c30: 0xc070734  jal         func_1C1CD0
    ctx->pc = 0x211C30u;
    SET_GPR_U32(ctx, 31, 0x211C38u);
    ctx->pc = 0x211C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C30u;
    // 0x211c34: 0x26040290  addiu       $a0, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CD0u, 0x211C30u, 0x211C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C38u;
label_211c38:
    // 0x211c38: 0x1635fff7  bne         $s1, $s5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x211C38u;
    {
        const bool branch_taken_0x211c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x211C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C38u;
        // 0x211c3c: 0x26100680  addiu       $s0, $s0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c38) {
            ctx->pc = 0x211C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211c18;
        }
    }
    ctx->pc = 0x211C40u;
    // 0x211c40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x211c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c44: 0x14b5fff0  bne         $a1, $s5, . + 4 + (-0x10 << 2)
    ctx->pc = 0x211C44u;
    {
        const bool branch_taken_0x211c44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        ctx->pc = 0x211C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C44u;
        // 0x211c48: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c44) {
            ctx->pc = 0x211C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211c08;
        }
    }
    ctx->pc = 0x211C4Cu;
label_211c4c:
    // 0x211c4c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x211c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211c50: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x211c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211c54: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x211c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211c58: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x211c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211c5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x211c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211c60: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x211c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211c64: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x211c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211c68: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x211c68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211c6c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x211c6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211c74: 0x3e00008  jr          $ra
    ctx->pc = 0x211C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C74u;
        // 0x211c78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211C7Cu;
    // 0x211c7c: 0x0  nop
    ctx->pc = 0x211c7cu;
    // NOP
    ctx->pc = 0x211c80u;
}
