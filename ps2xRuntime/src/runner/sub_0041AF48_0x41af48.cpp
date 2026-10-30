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

// Function: sub_0041AF48
// Address: 0x41af48 - 0x41af80
void sub_0041AF48_0x41af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AF48_0x41af48");
#endif

    switch (ctx->pc) {
        case 0x41af68u: goto label_41af68;
        default: break;
    }

    ctx->pc = 0x41af48u;

    // 0x41af48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41af4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41af4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41af50: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x41AF50u;
    {
        const bool branch_taken_0x41af50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF50u;
        // 0x41af54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41af50) {
            ctx->pc = 0x41AF70u;
            goto label_41af70;
        }
    }
    ctx->pc = 0x41AF58u;
    // 0x41af58: 0x2444033c  addiu       $a0, $v0, 0x33C
    ctx->pc = 0x41af58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 828));
    // 0x41af5c: 0xa040035b  sb          $zero, 0x35B($v0)
    ctx->pc = 0x41af5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 859), (uint8_t)GPR_U32(ctx, 0));
    // 0x41af60: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41AF60u;
    SET_GPR_U32(ctx, 31, 0x41AF68u);
    ctx->pc = 0x41AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AF60u;
    // 0x41af64: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41AF60u, 0x41AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AF68u;
label_41af68:
    // 0x41af68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41AF68u;
    {
        const bool branch_taken_0x41af68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF68u;
        // 0x41af6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41af68) {
            ctx->pc = 0x41AF78u;
            goto label_41af78;
        }
    }
    ctx->pc = 0x41AF70u;
label_41af70:
    // 0x41af70: 0xa040033c  sb          $zero, 0x33C($v0)
    ctx->pc = 0x41af70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 828), (uint8_t)GPR_U32(ctx, 0));
    // 0x41af74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41af74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41af78:
    // 0x41af78: 0x3e00008  jr          $ra
    ctx->pc = 0x41AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF78u;
        // 0x41af7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AF80u;
}
