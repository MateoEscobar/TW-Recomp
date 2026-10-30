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

// Function: sub_001D1098
// Address: 0x1d1098 - 0x1d1108
void sub_001D1098_0x1d1098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1098_0x1d1098");
#endif

    switch (ctx->pc) {
        case 0x1d1098u: goto label_1d1098;
        case 0x1d109cu: goto label_1d109c;
        case 0x1d10a0u: goto label_1d10a0;
        case 0x1d10a4u: goto label_1d10a4;
        case 0x1d10a8u: goto label_1d10a8;
        case 0x1d10acu: goto label_1d10ac;
        case 0x1d10b0u: goto label_1d10b0;
        case 0x1d10b4u: goto label_1d10b4;
        case 0x1d10b8u: goto label_1d10b8;
        case 0x1d10bcu: goto label_1d10bc;
        case 0x1d10c0u: goto label_1d10c0;
        case 0x1d10c4u: goto label_1d10c4;
        case 0x1d10c8u: goto label_1d10c8;
        case 0x1d10ccu: goto label_1d10cc;
        case 0x1d10d0u: goto label_1d10d0;
        case 0x1d10d4u: goto label_1d10d4;
        case 0x1d10d8u: goto label_1d10d8;
        case 0x1d10dcu: goto label_1d10dc;
        case 0x1d10e0u: goto label_1d10e0;
        case 0x1d10e4u: goto label_1d10e4;
        case 0x1d10e8u: goto label_1d10e8;
        case 0x1d10ecu: goto label_1d10ec;
        case 0x1d10f0u: goto label_1d10f0;
        case 0x1d10f4u: goto label_1d10f4;
        case 0x1d10f8u: goto label_1d10f8;
        case 0x1d10fcu: goto label_1d10fc;
        case 0x1d1100u: goto label_1d1100;
        case 0x1d1104u: goto label_1d1104;
        default: break;
    }

    ctx->pc = 0x1d1098u;

label_1d1098:
    // 0x1d1098: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d109c:
    // 0x1d109c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d10a0:
    // 0x1d10a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d10a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d10a4:
    // 0x1d10a4: 0x24900250  addiu       $s0, $a0, 0x250
    ctx->pc = 0x1d10a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
label_1d10a8:
    // 0x1d10a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d10a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d10ac:
    // 0x1d10ac: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d10acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d10b0:
    // 0x1d10b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d10b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d10b4:
    // 0x1d10b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d10b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d10b8:
    // 0x1d10b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d10bc:
    // 0x1d10bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d10bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d10c0:
    // 0x1d10c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d10c4:
    // 0x1d10c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d10c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d10c8:
    // 0x1d10c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d10c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d10cc:
    // 0x1d10cc: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1d10ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1d10d0:
    // 0x1d10d0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1d10d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1d10d4:
    // 0x1d10d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d10d8:
    // 0x1d10d8: 0x40f809  jalr        $v0
label_1d10dc:
    if (ctx->pc == 0x1D10DCu) {
        ctx->pc = 0x1D10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10D8u;
        // 0x1d10dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D10E0u;
        goto label_1d10e0;
    }
    ctx->pc = 0x1D10D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D10E0u);
        ctx->pc = 0x1D10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10D8u;
        // 0x1d10dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D10D8u, 0x1D10E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D10E0u;
label_1d10e0:
    // 0x1d10e0: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1d10e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d10e4:
    // 0x1d10e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1d10e8:
    if (ctx->pc == 0x1D10E8u) {
        ctx->pc = 0x1D10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10E4u;
        // 0x1d10e8: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D10ECu;
        goto label_1d10ec;
    }
    ctx->pc = 0x1D10E4u;
    {
        const bool branch_taken_0x1d10e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10E4u;
        // 0x1d10e8: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10e4) {
            ctx->pc = 0x1D10C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d10c0;
        }
    }
    ctx->pc = 0x1D10ECu;
label_1d10ec:
    // 0x1d10ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d10ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d10f0:
    // 0x1d10f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d10f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d10f4:
    // 0x1d10f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d10f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d10f8:
    // 0x1d10f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d10f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d10fc:
    // 0x1d10fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d10fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1100:
    // 0x1d1100: 0x3e00008  jr          $ra
label_1d1104:
    if (ctx->pc == 0x1D1104u) {
        ctx->pc = 0x1D1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1100u;
        // 0x1d1104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1108u;
        goto label_fallthrough_0x1d1100;
    }
    ctx->pc = 0x1D1100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1100u;
        // 0x1d1104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d1100:
    ctx->pc = 0x1D1108u;
}
