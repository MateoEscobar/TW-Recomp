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

// Function: sub_002FB390
// Address: 0x2fb390 - 0x2fb3c8
void sub_002FB390_0x2fb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB390_0x2fb390");
#endif

    switch (ctx->pc) {
        case 0x2fb3a8u: goto label_2fb3a8;
        default: break;
    }

    ctx->pc = 0x2fb390u;

    // 0x2fb390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb394: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB394u;
    {
        const bool branch_taken_0x2fb394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB394u;
        // 0x2fb398: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb394) {
            ctx->pc = 0x2FB3B8u;
            goto label_2fb3b8;
        }
    }
    ctx->pc = 0x2FB39Cu;
    // 0x2fb39c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb3a0: 0xc08a014  jal         func_228050
    ctx->pc = 0x2FB3A0u;
    SET_GPR_U32(ctx, 31, 0x2FB3A8u);
    ctx->pc = 0x2FB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3A0u;
    // 0x2fb3a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x2FB3A0u, 0x2FB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3A8u;
label_2fb3a8:
    // 0x2fb3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb3ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb3b0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB3B0u;
    {
        const bool branch_taken_0x2fb3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3B0u;
        // 0x2fb3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3b0) {
            ctx->pc = 0x2FB3BCu;
            goto label_2fb3bc;
        }
    }
    ctx->pc = 0x2FB3B8u;
label_2fb3b8:
    // 0x2fb3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb3bc:
    // 0x2fb3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3C0u;
        // 0x2fb3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB3C8u;
}
