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

// Function: sub_0034F6C0
// Address: 0x34f6c0 - 0x34f718
void sub_0034F6C0_0x34f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F6C0_0x34f6c0");
#endif

    ctx->pc = 0x34f6c0u;

    // 0x34f6c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34f6c4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34F6C4u;
    {
        const bool branch_taken_0x34f6c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f6c4) {
            ctx->pc = 0x34F70Cu;
            goto label_34f70c;
        }
    }
    ctx->pc = 0x34F6CCu;
    // 0x34f6cc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x34F6CCu;
    {
        const bool branch_taken_0x34f6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6CCu;
        // 0x34f6d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6cc) {
            ctx->pc = 0x34F70Cu;
            goto label_34f70c;
        }
    }
    ctx->pc = 0x34F6D4u;
    // 0x34f6d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x34f6d8: 0x24421720  addiu       $v0, $v0, 0x1720
    ctx->pc = 0x34f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
    // 0x34f6dc: 0x2463b9e0  addiu       $v1, $v1, -0x4620
    ctx->pc = 0x34f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949344));
    // 0x34f6e0: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x34f6e0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f6e4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x34f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x34f6e8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x34f6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x34f6ec: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x34f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
    // 0x34f6f0: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x34f6f0u;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB9E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB9E0u, _value); } while (0);
    // 0x34f6f4: 0x24c61740  addiu       $a2, $a2, 0x1740
    ctx->pc = 0x34f6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
    // 0x34f6f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x34f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34f6fc: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x34f6fcu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x511730u));
    // 0x34f700: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x34f700u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x34f704: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x34f704u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB9F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB9F0u, _value); } while (0);
    // 0x34f708: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x34f708u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EBA00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EBA00u, _value); } while (0);
label_34f70c:
    // 0x34f70c: 0x3e00008  jr          $ra
    ctx->pc = 0x34F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F714u;
    // 0x34f714: 0x0  nop
    ctx->pc = 0x34f714u;
    // NOP
    ctx->pc = 0x34f718u;
}
