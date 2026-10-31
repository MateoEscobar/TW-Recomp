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

// Function: sub_00473678
// Address: 0x473678 - 0x4736b8
void sub_00473678_0x473678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473678_0x473678");
#endif

    switch (ctx->pc) {
        case 0x4736a4u: goto label_4736a4;
        default: break;
    }

    ctx->pc = 0x473678u;

    // 0x473678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x473678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47367c: 0x8f828520  lw          $v0, -0x7AE0($gp)
    ctx->pc = 0x47367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935840)));
    // 0x473680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x473688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47368c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x47368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x473690: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x473690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x473694: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x473694u;
    {
        const bool branch_taken_0x473694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x473698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473694u;
        // 0x473698: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473694) {
            ctx->pc = 0x4736A8u;
            goto label_4736a8;
        }
    }
    ctx->pc = 0x47369Cu;
    // 0x47369c: 0xc11cb76  jal         func_472DD8
    ctx->pc = 0x47369Cu;
    SET_GPR_U32(ctx, 31, 0x4736A4u);
    ctx->pc = 0x4736A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47369Cu;
    // 0x4736a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472DD8u, 0x47369Cu, 0x4736A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4736A4u;
label_4736a4:
    // 0x4736a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4736a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4736a8:
    // 0x4736a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4736a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4736ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4736acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4736b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4736B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4736B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4736B0u;
        // 0x4736b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4736B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4736B8u;
}
