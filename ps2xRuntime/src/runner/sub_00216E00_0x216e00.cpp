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

// Function: sub_00216E00
// Address: 0x216e00 - 0x216e90
void sub_00216E00_0x216e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216E00_0x216e00");
#endif

    ctx->pc = 0x216e00u;

    // 0x216e00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x216e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x216e04: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x216E04u;
    {
        const bool branch_taken_0x216e04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x216e04) {
            ctx->pc = 0x216E88u;
            goto label_216e88;
        }
    }
    ctx->pc = 0x216E0Cu;
    // 0x216e0c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x216E0Cu;
    {
        const bool branch_taken_0x216e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E0Cu;
        // 0x216e10: 0x3c0b0064  lui         $t3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e0c) {
            ctx->pc = 0x216E88u;
            goto label_216e88;
        }
    }
    ctx->pc = 0x216E14u;
    // 0x216e14: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x216e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x216e18: 0x25630c48  addiu       $v1, $t3, 0xC48
    ctx->pc = 0x216e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 3144));
    // 0x216e1c: 0x24080096  addiu       $t0, $zero, 0x96
    ctx->pc = 0x216e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x216e20: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x216e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x216e24: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x216e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x216e28: 0xa1680c48  sb          $t0, 0xC48($t3)
    ctx->pc = 0x216e28u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3144), (uint8_t)GPR_U32(ctx, 8));
    // 0x216e2c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x216e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x216e30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x216e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x216e34: 0x25220c58  addiu       $v0, $t1, 0xC58
    ctx->pc = 0x216e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3160));
    // 0x216e38: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x216e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x216e3c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x216e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x216e40: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x216e40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x640C5Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C5Bu, _value); } while (0);
    // 0x216e44: 0x25470c50  addiu       $a3, $t2, 0xC50
    ctx->pc = 0x216e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 3152));
    // 0x216e48: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x216e48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x640C53u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C53u, _value); } while (0);
    // 0x216e4c: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x216e4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x216e50: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x216e50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x640C59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C59u, _value); } while (0);
    // 0x216e54: 0x25850c60  addiu       $a1, $t4, 0xC60
    ctx->pc = 0x216e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 3168));
    // 0x216e58: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x216e58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x640C5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C5Au, _value); } while (0);
    // 0x216e5c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x216e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x216e60: 0xa1440c50  sb          $a0, 0xC50($t2)
    ctx->pc = 0x216e60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x640C50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C50u, _value); } while (0);
    // 0x216e64: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x216e64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x640C51u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C51u, _value); } while (0);
    // 0x216e68: 0xa0e80002  sb          $t0, 0x2($a3)
    ctx->pc = 0x216e68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x640C52u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C52u, _value); } while (0);
    // 0x216e6c: 0xa1240c58  sb          $a0, 0xC58($t1)
    ctx->pc = 0x216e6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x640C58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x640C58u, _value); } while (0);
    // 0x216e70: 0x8d630c48  lw          $v1, 0xC48($t3)
    ctx->pc = 0x216e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 3144)));
    // 0x216e74: 0x8d240c58  lw          $a0, 0xC58($t1)
    ctx->pc = 0x216e74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x640C58u));
    // 0x216e78: 0x8d420c50  lw          $v0, 0xC50($t2)
    ctx->pc = 0x216e78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x640C50u));
    // 0x216e7c: 0xad830c60  sw          $v1, 0xC60($t4)
    ctx->pc = 0x216e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x640C60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x640C60u, _value); } while (0);
    // 0x216e80: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x216e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x640C68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x640C68u, _value); } while (0);
    // 0x216e84: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x216e84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x640C64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x640C64u, _value); } while (0);
label_216e88:
    // 0x216e88: 0x3e00008  jr          $ra
    ctx->pc = 0x216E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216E90u;
}
