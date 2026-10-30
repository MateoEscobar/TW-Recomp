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

// Function: sub_001D0A38
// Address: 0x1d0a38 - 0x1d0a88
void sub_001D0A38_0x1d0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0A38_0x1d0a38");
#endif

    switch (ctx->pc) {
        case 0x1d0a58u: goto label_1d0a58;
        default: break;
    }

    ctx->pc = 0x1d0a38u;

    // 0x1d0a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0a3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d0a40: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D0A40u;
    {
        const bool branch_taken_0x1d0a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A40u;
        // 0x1d0a44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a40) {
            ctx->pc = 0x1D0A7Cu;
            goto label_1d0a7c;
        }
    }
    ctx->pc = 0x1D0A48u;
    // 0x1d0a48: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0A48u;
    {
        const bool branch_taken_0x1d0a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A48u;
        // 0x1d0a4c: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a48) {
            ctx->pc = 0x1D0A7Cu;
            goto label_1d0a7c;
        }
    }
    ctx->pc = 0x1D0A50u;
    // 0x1d0a50: 0xc073fd2  jal         func_1CFF48
    ctx->pc = 0x1D0A50u;
    SET_GPR_U32(ctx, 31, 0x1D0A58u);
    ctx->pc = 0x1D0A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A50u;
    // 0x1d0a54: 0x248439d0  addiu       $a0, $a0, 0x39D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF48u, 0x1D0A50u, 0x1D0A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A58u;
label_1d0a58:
    // 0x1d0a58: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1d0a5c: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1d0a60: 0x24a294b0  addiu       $v0, $a1, -0x6B50
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x1d0a64: 0xa0a394b0  sb          $v1, -0x6B50($a1)
    ctx->pc = 0x1d0a64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6294B0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6294B0u, _value); } while (0);
    // 0x1d0a68: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d0a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d0a6c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d0a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d0a70: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x1d0a70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6294B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6294B3u, _value); } while (0);
    // 0x1d0a74: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x1d0a74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6294B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6294B2u, _value); } while (0);
    // 0x1d0a78: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x1d0a78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6294B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6294B1u, _value); } while (0);
label_1d0a7c:
    // 0x1d0a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A80u;
        // 0x1d0a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0A88u;
}
