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

// Function: sub_001CFE50
// Address: 0x1cfe50 - 0x1cfea0
void sub_001CFE50_0x1cfe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFE50_0x1cfe50");
#endif

    switch (ctx->pc) {
        case 0x1cfe70u: goto label_1cfe70;
        default: break;
    }

    ctx->pc = 0x1cfe50u;

    // 0x1cfe50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfe54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cfe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cfe58: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CFE58u;
    {
        const bool branch_taken_0x1cfe58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE58u;
        // 0x1cfe5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe58) {
            ctx->pc = 0x1CFE94u;
            goto label_1cfe94;
        }
    }
    ctx->pc = 0x1CFE60u;
    // 0x1cfe60: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CFE60u;
    {
        const bool branch_taken_0x1cfe60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE60u;
        // 0x1cfe64: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe60) {
            ctx->pc = 0x1CFE94u;
            goto label_1cfe94;
        }
    }
    ctx->pc = 0x1CFE68u;
    // 0x1cfe68: 0xc073b82  jal         func_1CEE08
    ctx->pc = 0x1CFE68u;
    SET_GPR_U32(ctx, 31, 0x1CFE70u);
    ctx->pc = 0x1CFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE68u;
    // 0x1cfe6c: 0x24843040  addiu       $a0, $a0, 0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEE08u, 0x1CFE68u, 0x1CFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE70u;
label_1cfe70:
    // 0x1cfe70: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1cfe70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1cfe74: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x1cfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1cfe78: 0x24a239c0  addiu       $v0, $a1, 0x39C0
    ctx->pc = 0x1cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 14784));
    // 0x1cfe7c: 0xa0a339c0  sb          $v1, 0x39C0($a1)
    ctx->pc = 0x1cfe7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6239C0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6239C0u, _value); } while (0);
    // 0x1cfe80: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1cfe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cfe84: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1cfe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cfe88: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x1cfe88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6239C3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6239C3u, _value); } while (0);
    // 0x1cfe8c: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x1cfe8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6239C2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6239C2u, _value); } while (0);
    // 0x1cfe90: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x1cfe90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6239C1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6239C1u, _value); } while (0);
label_1cfe94:
    // 0x1cfe94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe98: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE98u;
        // 0x1cfe9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFEA0u;
}
