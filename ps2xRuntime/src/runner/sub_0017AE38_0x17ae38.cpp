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

// Function: sub_0017AE38
// Address: 0x17ae38 - 0x17b1c0
void sub_0017AE38_0x17ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AE38_0x17ae38");
#endif

    ctx->pc = 0x17ae38u;

    // 0x17ae38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17ae3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17ae40: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x17ae44: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x17ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x17ae48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x17ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x17ae4c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17ae50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ae50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ae54: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x17ae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x17ae58: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x17ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x17ae5c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x17ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x17ae60: 0x14a200cc  bne         $a1, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x17AE60u;
    {
        const bool branch_taken_0x17ae60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE60u;
        // 0x17ae64: 0x7fbe0000  sq          $fp, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae60) {
            ctx->pc = 0x17B194u;
            goto label_17b194;
        }
    }
    ctx->pc = 0x17AE68u;
    // 0x17ae68: 0x108000ca  beqz        $a0, . + 4 + (0xCA << 2)
    ctx->pc = 0x17AE68u;
    {
        const bool branch_taken_0x17ae68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE68u;
        // 0x17ae6c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae68) {
            ctx->pc = 0x17B194u;
            goto label_17b194;
        }
    }
    ctx->pc = 0x17AE70u;
    // 0x17ae70: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x17ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17ae74: 0xa060d260  sb          $zero, -0x2DA0($v1)
    ctx->pc = 0x17ae74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294955616), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ae78: 0x2464d260  addiu       $a0, $v1, -0x2DA0
    ctx->pc = 0x17ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955616));
    // 0x17ae7c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x17ae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ae80: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x17ae80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x17ae84: 0xa122d268  sb          $v0, -0x2D98($t1)
    ctx->pc = 0x17ae84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD268u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD268u, _value); } while (0);
    // 0x17ae88: 0x2525d268  addiu       $a1, $t1, -0x2D98
    ctx->pc = 0x17ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955624));
    // 0x17ae8c: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x17ae8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD26Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD26Bu, _value); } while (0);
    // 0x17ae90: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x17ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x17ae94: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x17ae94u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
    // 0x17ae98: 0x3c0f0060  lui         $t7, 0x60
    ctx->pc = 0x17ae98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)96 << 16));
    // 0x17ae9c: 0xa1a6d270  sb          $a2, -0x2D90($t5)
    ctx->pc = 0x17ae9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5FD270u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD270u, _value); } while (0);
    // 0x17aea0: 0x25a7d270  addiu       $a3, $t5, -0x2D90
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294955632));
    // 0x17aea4: 0xa0e60002  sb          $a2, 0x2($a3)
    ctx->pc = 0x17aea4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5FD272u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD272u, _value); } while (0);
    // 0x17aea8: 0x25e8d278  addiu       $t0, $t7, -0x2D88
    ctx->pc = 0x17aea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955640));
    // 0x17aeac: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x17aeacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD273u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD273u, _value); } while (0);
    // 0x17aeb0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x17aeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x17aeb4: 0xa1e2d278  sb          $v0, -0x2D88($t7)
    ctx->pc = 0x17aeb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD278u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD278u, _value); } while (0);
    // 0x17aeb8: 0x260ad280  addiu       $t2, $s0, -0x2D80
    ctx->pc = 0x17aeb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955648));
    // 0x17aebc: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x17aebcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD27Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD27Bu, _value); } while (0);
    // 0x17aec0: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x17aec0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x17aec4: 0xa200d280  sb          $zero, -0x2D80($s0)
    ctx->pc = 0x17aec4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD280u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD280u, _value); } while (0);
    // 0x17aec8: 0x264bd288  addiu       $t3, $s2, -0x2D78
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955656));
    // 0x17aecc: 0xa1420003  sb          $v0, 0x3($t2)
    ctx->pc = 0x17aeccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD283u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD283u, _value); } while (0);
    // 0x17aed0: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x17aed4: 0xa240d288  sb          $zero, -0x2D78($s2)
    ctx->pc = 0x17aed4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD288u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD288u, _value); } while (0);
    // 0x17aed8: 0x266cd290  addiu       $t4, $s3, -0x2D70
    ctx->pc = 0x17aed8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955664));
    // 0x17aedc: 0xa1620003  sb          $v0, 0x3($t3)
    ctx->pc = 0x17aedcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD28Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD28Bu, _value); } while (0);
    // 0x17aee0: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x17aee0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x17aee4: 0xa260d290  sb          $zero, -0x2D70($s3)
    ctx->pc = 0x17aee4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD290u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD290u, _value); } while (0);
    // 0x17aee8: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17aee8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17aeec: 0xa1820003  sb          $v0, 0x3($t4)
    ctx->pc = 0x17aeecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD293u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD293u, _value); } while (0);
    // 0x17aef0: 0x262ed298  addiu       $t6, $s1, -0x2D68
    ctx->pc = 0x17aef0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955672));
    // 0x17aef4: 0xa2a2d298  sb          $v0, -0x2D68($s5)
    ctx->pc = 0x17aef4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD298u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD298u, _value); } while (0);
    // 0x17aef8: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x17aefc: 0xa1c20003  sb          $v0, 0x3($t6)
    ctx->pc = 0x17aefcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD29Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD29Bu, _value); } while (0);
    // 0x17af00: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17af04: 0xa282d2a0  sb          $v0, -0x2D60($s4)
    ctx->pc = 0x17af04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2A0u, _value); } while (0);
    // 0x17af08: 0x26b0d2d8  addiu       $s0, $s5, -0x2D28
    ctx->pc = 0x17af08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955736));
    // 0x17af0c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x17af0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17af10: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x17af10u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
    // 0x17af14: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x17af14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17af18: 0x25b3d2d0  addiu       $s3, $t5, -0x2D30
    ctx->pc = 0x17af18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 4294955728));
    // 0x17af1c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x17af1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD269u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD269u, _value); } while (0);
    // 0x17af20: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x17af24: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x17af24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD26Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD26Au, _value); } while (0);
    // 0x17af28: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x17af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x17af2c: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x17af2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5FD271u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD271u, _value); } while (0);
    // 0x17af30: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17af30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17af34: 0xa1000001  sb          $zero, 0x1($t0)
    ctx->pc = 0x17af34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD279u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD279u, _value); } while (0);
    // 0x17af38: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x17af3c: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x17af3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD27Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD27Au, _value); } while (0);
    // 0x17af40: 0x24c6d2a0  addiu       $a2, $a2, -0x2D60
    ctx->pc = 0x17af40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955680));
    // 0x17af44: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x17af44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD281u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD281u, _value); } while (0);
    // 0x17af48: 0x26afd2e8  addiu       $t7, $s5, -0x2D18
    ctx->pc = 0x17af48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955752));
    // 0x17af4c: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x17af4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD282u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD282u, _value); } while (0);
    // 0x17af50: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x17af50u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
    // 0x17af54: 0xa1600001  sb          $zero, 0x1($t3)
    ctx->pc = 0x17af54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD289u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD289u, _value); } while (0);
    // 0x17af58: 0x25b4d2e0  addiu       $s4, $t5, -0x2D20
    ctx->pc = 0x17af58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), 4294955744));
    // 0x17af5c: 0xa1620002  sb          $v0, 0x2($t3)
    ctx->pc = 0x17af5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD28Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD28Au, _value); } while (0);
    // 0x17af60: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17af60u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17af64: 0xa1820001  sb          $v0, 0x1($t4)
    ctx->pc = 0x17af64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD291u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD291u, _value); } while (0);
    // 0x17af68: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17af68u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17af6c: 0xa1820002  sb          $v0, 0x2($t4)
    ctx->pc = 0x17af6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD292u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD292u, _value); } while (0);
    // 0x17af70: 0x27d1d2a8  addiu       $s1, $fp, -0x2D58
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955688));
    // 0x17af74: 0xa1c00001  sb          $zero, 0x1($t6)
    ctx->pc = 0x17af74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD299u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD299u, _value); } while (0);
    // 0x17af78: 0x26add2f0  addiu       $t5, $s5, -0x2D10
    ctx->pc = 0x17af78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955760));
    // 0x17af7c: 0xa1c20002  sb          $v0, 0x2($t6)
    ctx->pc = 0x17af7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD29Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD29Au, _value); } while (0);
    // 0x17af80: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17af80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17af84: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x17af84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2A1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2A1u, _value); } while (0);
    // 0x17af88: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17af88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17af8c: 0xa124d2c8  sb          $a0, -0x2D38($t1)
    ctx->pc = 0x17af8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5FD2C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2C8u, _value); } while (0);
    // 0x17af90: 0x26acd300  addiu       $t4, $s5, -0x2D00
    ctx->pc = 0x17af90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955776));
    // 0x17af94: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x17af94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2A3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2A3u, _value); } while (0);
    // 0x17af98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17af98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17af9c: 0xa3c2d2a8  sb          $v0, -0x2D58($fp)
    ctx->pc = 0x17af9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2A8u, _value); } while (0);
    // 0x17afa0: 0x2486d2f8  addiu       $a2, $a0, -0x2D08
    ctx->pc = 0x17afa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955768));
    // 0x17afa4: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17afa8: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x17afa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2ABu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2ABu, _value); } while (0);
    // 0x17afac: 0x27c7d308  addiu       $a3, $fp, -0x2CF8
    ctx->pc = 0x17afacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955784));
    // 0x17afb0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17afb4: 0xa083d2b0  sb          $v1, -0x2D50($a0)
    ctx->pc = 0x17afb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2B0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2B0u, _value); } while (0);
    // 0x17afb8: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17afb8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17afbc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x17afbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc0: 0x26abd310  addiu       $t3, $s5, -0x2CF0
    ctx->pc = 0x17afc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
    // 0x17afc4: 0x27ded2b0  addiu       $fp, $fp, -0x2D50
    ctx->pc = 0x17afc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955696));
    // 0x17afc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17afcc: 0xa3c20003  sb          $v0, 0x3($fp)
    ctx->pc = 0x17afccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2B3u, _value); } while (0);
    // 0x17afd0: 0x248ad318  addiu       $t2, $a0, -0x2CE8
    ctx->pc = 0x17afd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955800));
    // 0x17afd4: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17afd4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17afd8: 0x2532d2c8  addiu       $s2, $t1, -0x2D38
    ctx->pc = 0x17afd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955720));
    // 0x17afdc: 0xa2a0d2b8  sb          $zero, -0x2D48($s5)
    ctx->pc = 0x17afdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2B8u, _value); } while (0);
    // 0x17afe0: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17afe0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17afe4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17afe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afe8: 0x27c9d320  addiu       $t1, $fp, -0x2CE0
    ctx->pc = 0x17afe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955808));
    // 0x17afec: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17afecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17aff0: 0x2484d2b8  addiu       $a0, $a0, -0x2D48
    ctx->pc = 0x17aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955704));
    // 0x17aff4: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x17aff4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2BBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2BBu, _value); } while (0);
    // 0x17aff8: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x17aff8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17affc: 0xa2a0d2c0  sb          $zero, -0x2D40($s5)
    ctx->pc = 0x17affcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2C0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2C0u, _value); } while (0);
    // 0x17b000: 0x27ded2c0  addiu       $fp, $fp, -0x2D40
    ctx->pc = 0x17b000u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955712));
    // 0x17b004: 0xa3c20003  sb          $v0, 0x3($fp)
    ctx->pc = 0x17b004u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2C3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2C3u, _value); } while (0);
    // 0x17b008: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17b00c: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x17b00cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5FD2C9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2C9u, _value); } while (0);
    // 0x17b010: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17b014: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x17b014u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2CBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2CBu, _value); } while (0);
    // 0x17b018: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17b018u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17b01c: 0xa2a0d2d0  sb          $zero, -0x2D30($s5)
    ctx->pc = 0x17b01cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2D0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2D0u, _value); } while (0);
    // 0x17b020: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17b020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17b024: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x17b024u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2D3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2D3u, _value); } while (0);
    // 0x17b028: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x17b028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17b02c: 0xa3c3d2d8  sb          $v1, -0x2D28($fp)
    ctx->pc = 0x17b02cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2D8u, _value); } while (0);
    // 0x17b030: 0x24160040  addiu       $s6, $zero, 0x40
    ctx->pc = 0x17b030u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b034: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x17b034u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2D9u, _value); } while (0);
    // 0x17b038: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17b038u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17b03c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x17b03cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD2DBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2DBu, _value); } while (0);
    // 0x17b040: 0x27ded2a0  addiu       $fp, $fp, -0x2D60
    ctx->pc = 0x17b040u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955680));
    // 0x17b044: 0xa095d2e0  sb          $s5, -0x2D20($a0)
    ctx->pc = 0x17b044u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5FD2E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2E0u, _value); } while (0);
    // 0x17b048: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b04c: 0xa3c00002  sb          $zero, 0x2($fp)
    ctx->pc = 0x17b04cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2A2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2A2u, _value); } while (0);
    // 0x17b050: 0x2418003c  addiu       $t8, $zero, 0x3C
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17b054: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17b054u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17b058: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x17b058u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2A9u, _value); } while (0);
    // 0x17b05c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17b05cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2AAu, _value); } while (0);
    // 0x17b060: 0x27ded2b0  addiu       $fp, $fp, -0x2D50
    ctx->pc = 0x17b060u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955696));
    // 0x17b064: 0xa3c00001  sb          $zero, 0x1($fp)
    ctx->pc = 0x17b064u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2B1u, _value); } while (0);
    // 0x17b068: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x17b068u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b06c: 0xa3c00002  sb          $zero, 0x2($fp)
    ctx->pc = 0x17b06cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2B2u, _value); } while (0);
    // 0x17b070: 0x3c190060  lui         $t9, 0x60
    ctx->pc = 0x17b070u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)96 << 16));
    // 0x17b074: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17b074u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17b078: 0x24150082  addiu       $s5, $zero, 0x82
    ctx->pc = 0x17b078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x17b07c: 0x27ded2b8  addiu       $fp, $fp, -0x2D48
    ctx->pc = 0x17b07cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955704));
    // 0x17b080: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x17b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x17b084: 0xa3c30002  sb          $v1, 0x2($fp)
    ctx->pc = 0x17b084u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2BAu, _value); } while (0);
    // 0x17b088: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17b088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17b08c: 0xa3c00001  sb          $zero, 0x1($fp)
    ctx->pc = 0x17b08cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2B9u, _value); } while (0);
    // 0x17b090: 0x2724d328  addiu       $a0, $t9, -0x2CD8
    ctx->pc = 0x17b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 4294955816));
    // 0x17b094: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17b094u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17b098: 0x2411002b  addiu       $s1, $zero, 0x2B
    ctx->pc = 0x17b098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x17b09c: 0x27ded2c0  addiu       $fp, $fp, -0x2D40
    ctx->pc = 0x17b09cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955712));
    // 0x17b0a0: 0xa3c30001  sb          $v1, 0x1($fp)
    ctx->pc = 0x17b0a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2C1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2C1u, _value); } while (0);
    // 0x17b0a4: 0xa3c00002  sb          $zero, 0x2($fp)
    ctx->pc = 0x17b0a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2C2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2C2u, _value); } while (0);
    // 0x17b0a8: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x17b0a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2CAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2CAu, _value); } while (0);
    // 0x17b0ac: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17b0acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17b0b0: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x17b0b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2D1u, _value); } while (0);
    // 0x17b0b4: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x17b0b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2D2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2D2u, _value); } while (0);
    // 0x17b0b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17b0b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2DAu, _value); } while (0);
    // 0x17b0bc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x17b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17b0c0: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x17b0c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2E1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2E1u, _value); } while (0);
    // 0x17b0c4: 0x2410ff8c  addiu       $s0, $zero, -0x74
    ctx->pc = 0x17b0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967180));
    // 0x17b0c8: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x17b0c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2E2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2E2u, _value); } while (0);
    // 0x17b0cc: 0xa2830003  sb          $v1, 0x3($s4)
    ctx->pc = 0x17b0ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2E3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2E3u, _value); } while (0);
    // 0x17b0d0: 0xa1f00003  sb          $s0, 0x3($t7)
    ctx->pc = 0x17b0d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5FD2EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2EBu, _value); } while (0);
    // 0x17b0d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x17b0d8: 0xa1b60003  sb          $s6, 0x3($t5)
    ctx->pc = 0x17b0d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x5FD2F3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2F3u, _value); } while (0);
    // 0x17b0dc: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17b0e0: 0xa3d7d2f8  sb          $s7, -0x2D08($fp)
    ctx->pc = 0x17b0e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x5FD2F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2F8u, _value); } while (0);
    // 0x17b0e4: 0xa0d80003  sb          $t8, 0x3($a2)
    ctx->pc = 0x17b0e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x5FD2FBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2FBu, _value); } while (0);
    // 0x17b0e8: 0x241effaa  addiu       $fp, $zero, -0x56
    ctx->pc = 0x17b0e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x17b0ec: 0xa070d308  sb          $s0, -0x2CF8($v1)
    ctx->pc = 0x17b0ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5FD308u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD308u, _value); } while (0);
    // 0x17b0f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x17b0f4: 0xa33ed328  sb          $fp, -0x2CD8($t9)
    ctx->pc = 0x17b0f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x5FD328u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD328u, _value); } while (0);
    // 0x17b0f8: 0xa06ed2e8  sb          $t6, -0x2D18($v1)
    ctx->pc = 0x17b0f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x5FD2E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2E8u, _value); } while (0);
    // 0x17b0fc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x17b0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x17b100: 0xa1ee0002  sb          $t6, 0x2($t7)
    ctx->pc = 0x17b100u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x5FD2EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2EAu, _value); } while (0);
    // 0x17b104: 0x241e0020  addiu       $fp, $zero, 0x20
    ctx->pc = 0x17b104u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17b108: 0xa200d2f0  sb          $zero, -0x2D10($s0)
    ctx->pc = 0x17b108u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2F0u, _value); } while (0);
    // 0x17b10c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b110: 0xa1be0002  sb          $fp, 0x2($t5)
    ctx->pc = 0x17b110u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x5FD2F2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2F2u, _value); } while (0);
    // 0x17b114: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17b118: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x17b118u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD2F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2F9u, _value); } while (0);
    // 0x17b11c: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x17b11cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x17b120: 0xa0d00002  sb          $s0, 0x2($a2)
    ctx->pc = 0x17b120u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5FD2FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2FAu, _value); } while (0);
    // 0x17b124: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x17b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x17b128: 0xa3c0d300  sb          $zero, -0x2D00($fp)
    ctx->pc = 0x17b128u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD300u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD300u, _value); } while (0);
    // 0x17b12c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x17b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x17b130: 0xa1800003  sb          $zero, 0x3($t4)
    ctx->pc = 0x17b130u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD303u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD303u, _value); } while (0);
    // 0x17b134: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x17b134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x17b138: 0xa0f50002  sb          $s5, 0x2($a3)
    ctx->pc = 0x17b138u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5FD30Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD30Au, _value); } while (0);
    // 0x17b13c: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x17b13cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD309u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD309u, _value); } while (0);
    // 0x17b140: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x17b144: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x17b144u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD30Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD30Bu, _value); } while (0);
    // 0x17b148: 0xa0c5d310  sb          $a1, -0x2CF0($a2)
    ctx->pc = 0x17b148u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5FD310u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD310u, _value); } while (0);
    // 0x17b14c: 0xa1620003  sb          $v0, 0x3($t3)
    ctx->pc = 0x17b14cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD313u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD313u, _value); } while (0);
    // 0x17b150: 0xa205d318  sb          $a1, -0x2CE8($s0)
    ctx->pc = 0x17b150u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5FD318u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD318u, _value); } while (0);
    // 0x17b154: 0xa1450002  sb          $a1, 0x2($t2)
    ctx->pc = 0x17b154u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5FD31Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD31Au, _value); } while (0);
    // 0x17b158: 0xa1420003  sb          $v0, 0x3($t2)
    ctx->pc = 0x17b158u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD31Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD31Bu, _value); } while (0);
    // 0x17b15c: 0xa2a8d320  sb          $t0, -0x2CE0($s5)
    ctx->pc = 0x17b15cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5FD320u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD320u, _value); } while (0);
    // 0x17b160: 0xa1280002  sb          $t0, 0x2($t1)
    ctx->pc = 0x17b160u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5FD322u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD322u, _value); } while (0);
    // 0x17b164: 0xa1220003  sb          $v0, 0x3($t1)
    ctx->pc = 0x17b164u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD323u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD323u, _value); } while (0);
    // 0x17b168: 0xa1ee0001  sb          $t6, 0x1($t7)
    ctx->pc = 0x17b168u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x5FD2E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2E9u, _value); } while (0);
    // 0x17b16c: 0xa1a00001  sb          $zero, 0x1($t5)
    ctx->pc = 0x17b16cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD2F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD2F1u, _value); } while (0);
    // 0x17b170: 0xa1800001  sb          $zero, 0x1($t4)
    ctx->pc = 0x17b170u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD301u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD301u, _value); } while (0);
    // 0x17b174: 0xa1800002  sb          $zero, 0x2($t4)
    ctx->pc = 0x17b174u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FD302u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD302u, _value); } while (0);
    // 0x17b178: 0xa1650001  sb          $a1, 0x1($t3)
    ctx->pc = 0x17b178u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5FD311u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD311u, _value); } while (0);
    // 0x17b17c: 0xa1650002  sb          $a1, 0x2($t3)
    ctx->pc = 0x17b17cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5FD312u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD312u, _value); } while (0);
    // 0x17b180: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x17b180u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5FD319u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD319u, _value); } while (0);
    // 0x17b184: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x17b184u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5FD321u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD321u, _value); } while (0);
    // 0x17b188: 0xa0910001  sb          $s1, 0x1($a0)
    ctx->pc = 0x17b188u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x5FD329u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD329u, _value); } while (0);
    // 0x17b18c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x17b18cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FD32Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD32Bu, _value); } while (0);
    // 0x17b190: 0xa0910002  sb          $s1, 0x2($a0)
    ctx->pc = 0x17b190u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x5FD32Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FD32Au, _value); } while (0);
label_17b194:
    // 0x17b194: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x17b194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b198: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x17b198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17b19c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17b19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17b1a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x17b1a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b1a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17b1a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b1a8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x17b1a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b1ac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x17b1acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b1b0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x17b1b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b1b4: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x17b1b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1B8u;
        // 0x17b1bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B1C0u;
}
