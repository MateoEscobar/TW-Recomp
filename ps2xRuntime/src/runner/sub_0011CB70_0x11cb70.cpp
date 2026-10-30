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

// Function: sub_0011CB70
// Address: 0x11cb70 - 0x11cbb0
void sub_0011CB70_0x11cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CB70_0x11cb70");
#endif

    switch (ctx->pc) {
        case 0x11cb84u: goto label_11cb84;
        case 0x11cb9cu: goto label_11cb9c;
        default: break;
    }

    ctx->pc = 0x11cb70u;

    // 0x11cb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11cb74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11cb78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cb7c: 0xc04800e  jal         func_120038
    ctx->pc = 0x11CB7Cu;
    SET_GPR_U32(ctx, 31, 0x11CB84u);
    ctx->pc = 0x11CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB7Cu;
    // 0x11cb80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120038u, 0x11CB7Cu, 0x11CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB84u;
label_11cb84:
    // 0x11cb84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CB84u;
    {
        const bool branch_taken_0x11cb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB84u;
        // 0x11cb88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb84) {
            ctx->pc = 0x11CB94u;
            goto label_11cb94;
        }
    }
    ctx->pc = 0x11CB8Cu;
    // 0x11cb8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11CB8Cu;
    {
        const bool branch_taken_0x11cb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB8Cu;
        // 0x11cb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb8c) {
            ctx->pc = 0x11CBA0u;
            goto label_11cba0;
        }
    }
    ctx->pc = 0x11CB94u;
label_11cb94:
    // 0x11cb94: 0xc05095e  jal         func_142578
    ctx->pc = 0x11CB94u;
    SET_GPR_U32(ctx, 31, 0x11CB9Cu);
    ctx->pc = 0x11CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB94u;
    // 0x11cb98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142578u, 0x11CB94u, 0x11CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB9Cu;
label_11cb9c:
    // 0x11cb9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cba0:
    // 0x11cba0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11cba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cba8: 0x3e00008  jr          $ra
    ctx->pc = 0x11CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBA8u;
        // 0x11cbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CBB0u;
}
