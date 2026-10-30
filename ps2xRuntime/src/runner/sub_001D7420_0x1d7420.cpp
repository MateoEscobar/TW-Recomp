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

// Function: sub_001D7420
// Address: 0x1d7420 - 0x1d7490
void sub_001D7420_0x1d7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7420_0x1d7420");
#endif

    switch (ctx->pc) {
        case 0x1d7438u: goto label_1d7438;
        case 0x1d744cu: goto label_1d744c;
        case 0x1d7460u: goto label_1d7460;
        case 0x1d7470u: goto label_1d7470;
        default: break;
    }

    ctx->pc = 0x1d7420u;

    // 0x1d7420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7424: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d742c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d742cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7430: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D7430u;
    SET_GPR_U32(ctx, 31, 0x1D7438u);
    ctx->pc = 0x1D7434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7430u;
    // 0x1d7434: 0x9605027e  lhu         $a1, 0x27E($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 638)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D7430u, 0x1D7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7438u;
label_1d7438:
    // 0x1d7438: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7438u;
    {
        const bool branch_taken_0x1d7438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7438u;
        // 0x1d743c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7438) {
            ctx->pc = 0x1D7480u;
            goto label_1d7480;
        }
    }
    ctx->pc = 0x1D7440u;
    // 0x1d7440: 0x8e0503f4  lw          $a1, 0x3F4($s0)
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1012)));
    // 0x1d7444: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D7444u;
    SET_GPR_U32(ctx, 31, 0x1D744Cu);
    ctx->pc = 0x1D7448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7444u;
    // 0x1d7448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D7444u, 0x1D744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D744Cu;
label_1d744c:
    // 0x1d744c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D744Cu;
    {
        const bool branch_taken_0x1d744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D744Cu;
        // 0x1d7450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d744c) {
            ctx->pc = 0x1D7480u;
            goto label_1d7480;
        }
    }
    ctx->pc = 0x1D7454u;
    // 0x1d7454: 0x8e0504f4  lw          $a1, 0x4F4($s0)
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x1d7458: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D7458u;
    SET_GPR_U32(ctx, 31, 0x1D7460u);
    ctx->pc = 0x1D745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7458u;
    // 0x1d745c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D7458u, 0x1D7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7460u;
label_1d7460:
    // 0x1d7460: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7460u;
    {
        const bool branch_taken_0x1d7460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7460u;
        // 0x1d7464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7460) {
            ctx->pc = 0x1D747Cu;
            goto label_1d747c;
        }
    }
    ctx->pc = 0x1D7468u;
    // 0x1d7468: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D7468u;
    SET_GPR_U32(ctx, 31, 0x1D7470u);
    ctx->pc = 0x1D746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7468u;
    // 0x1d746c: 0x8c8505f4  lw          $a1, 0x5F4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D7468u, 0x1D7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7470u;
label_1d7470:
    // 0x1d7470: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d7470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7474: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7474u;
    {
        const bool branch_taken_0x1d7474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7474u;
        // 0x1d7478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7474) {
            ctx->pc = 0x1D7480u;
            goto label_1d7480;
        }
    }
    ctx->pc = 0x1D747Cu;
label_1d747c:
    // 0x1d747c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d747cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7480:
    // 0x1d7480: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7488: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7488u;
        // 0x1d748c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7490u;
}
