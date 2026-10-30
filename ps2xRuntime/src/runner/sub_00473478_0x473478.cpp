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

// Function: sub_00473478
// Address: 0x473478 - 0x4734c8
void sub_00473478_0x473478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473478_0x473478");
#endif

    switch (ctx->pc) {
        case 0x4734b4u: goto label_4734b4;
        default: break;
    }

    ctx->pc = 0x473478u;

    // 0x473478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x473478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47347c: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x47347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
    // 0x473480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x473484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47348c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x47348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x473490: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x473490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x473494: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x473494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x473498: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x473498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x47349c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x47349cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x4734a0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x4734a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4734a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4734A4u;
    {
        const bool branch_taken_0x4734a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4734A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4734A4u;
        // 0x4734a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4734a4) {
            ctx->pc = 0x4734B8u;
            goto label_4734b8;
        }
    }
    ctx->pc = 0x4734ACu;
    // 0x4734ac: 0xc11cb14  jal         func_472C50
    ctx->pc = 0x4734ACu;
    SET_GPR_U32(ctx, 31, 0x4734B4u);
    ctx->pc = 0x4734B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4734ACu;
    // 0x4734b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C50u, 0x4734ACu, 0x4734B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4734B4u;
label_4734b4:
    // 0x4734b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4734b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4734b8:
    // 0x4734b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4734b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4734bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4734bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4734c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4734C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4734C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4734C0u;
        // 0x4734c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4734C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4734C8u;
}
