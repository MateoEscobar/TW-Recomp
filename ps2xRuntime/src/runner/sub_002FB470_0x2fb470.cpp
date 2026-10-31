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

// Function: sub_002FB470
// Address: 0x2fb470 - 0x2fb4a8
void sub_002FB470_0x2fb470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB470_0x2fb470");
#endif

    switch (ctx->pc) {
        case 0x2fb488u: goto label_2fb488;
        default: break;
    }

    ctx->pc = 0x2fb470u;

    // 0x2fb470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb474: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB474u;
    {
        const bool branch_taken_0x2fb474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB474u;
        // 0x2fb478: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb474) {
            ctx->pc = 0x2FB498u;
            goto label_2fb498;
        }
    }
    ctx->pc = 0x2FB47Cu;
    // 0x2fb47c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb480: 0xc08a11a  jal         func_228468
    ctx->pc = 0x2FB480u;
    SET_GPR_U32(ctx, 31, 0x2FB488u);
    ctx->pc = 0x2FB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB480u;
    // 0x2fb484: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228468u, 0x2FB480u, 0x2FB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB488u;
label_2fb488:
    // 0x2fb488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb490: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB490u;
    {
        const bool branch_taken_0x2fb490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB490u;
        // 0x2fb494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb490) {
            ctx->pc = 0x2FB49Cu;
            goto label_2fb49c;
        }
    }
    ctx->pc = 0x2FB498u;
label_2fb498:
    // 0x2fb498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb49c:
    // 0x2fb49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4A0u;
        // 0x2fb4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB4A8u;
}
