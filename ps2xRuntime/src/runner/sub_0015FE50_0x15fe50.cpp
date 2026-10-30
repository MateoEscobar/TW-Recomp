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

// Function: sub_0015FE50
// Address: 0x15fe50 - 0x15fe90
void sub_0015FE50_0x15fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FE50_0x15fe50");
#endif

    switch (ctx->pc) {
        case 0x15fe70u: goto label_15fe70;
        default: break;
    }

    ctx->pc = 0x15fe50u;

    // 0x15fe50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fe54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15fe54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe58: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FE58u;
    {
        const bool branch_taken_0x15fe58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE58u;
        // 0x15fe5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe58) {
            ctx->pc = 0x15FE78u;
            goto label_15fe78;
        }
    }
    ctx->pc = 0x15FE60u;
    // 0x15fe60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15fe64: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15fe68: 0xc10c4de  jal         func_431378
    ctx->pc = 0x15FE68u;
    SET_GPR_U32(ctx, 31, 0x15FE70u);
    ctx->pc = 0x15FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE68u;
    // 0x15fe6c: 0x24846d88  addiu       $a0, $a0, 0x6D88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x15FE68u, 0x15FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE70u;
label_15fe70:
    // 0x15fe70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15FE70u;
    {
        const bool branch_taken_0x15fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE70u;
        // 0x15fe74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe70) {
            ctx->pc = 0x15FE84u;
            goto label_15fe84;
        }
    }
    ctx->pc = 0x15FE78u;
label_15fe78:
    // 0x15fe78: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15fe7c: 0xa0406d88  sb          $zero, 0x6D88($v0)
    ctx->pc = 0x15fe7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E6D88u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5E6D88u, _value); } while (0);
    // 0x15fe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15fe84:
    // 0x15fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x15FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE84u;
        // 0x15fe88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FE8Cu;
    // 0x15fe8c: 0x0  nop
    ctx->pc = 0x15fe8cu;
    // NOP
    ctx->pc = 0x15fe90u;
}
