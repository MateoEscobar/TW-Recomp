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

// Function: sub_00386298
// Address: 0x386298 - 0x386308
void sub_00386298_0x386298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386298_0x386298");
#endif

    switch (ctx->pc) {
        case 0x386298u: goto label_386298;
        case 0x38629cu: goto label_38629c;
        case 0x3862a0u: goto label_3862a0;
        case 0x3862a4u: goto label_3862a4;
        case 0x3862a8u: goto label_3862a8;
        case 0x3862acu: goto label_3862ac;
        case 0x3862b0u: goto label_3862b0;
        case 0x3862b4u: goto label_3862b4;
        case 0x3862b8u: goto label_3862b8;
        case 0x3862bcu: goto label_3862bc;
        case 0x3862c0u: goto label_3862c0;
        case 0x3862c4u: goto label_3862c4;
        case 0x3862c8u: goto label_3862c8;
        case 0x3862ccu: goto label_3862cc;
        case 0x3862d0u: goto label_3862d0;
        case 0x3862d4u: goto label_3862d4;
        case 0x3862d8u: goto label_3862d8;
        case 0x3862dcu: goto label_3862dc;
        case 0x3862e0u: goto label_3862e0;
        case 0x3862e4u: goto label_3862e4;
        case 0x3862e8u: goto label_3862e8;
        case 0x3862ecu: goto label_3862ec;
        case 0x3862f0u: goto label_3862f0;
        case 0x3862f4u: goto label_3862f4;
        case 0x3862f8u: goto label_3862f8;
        case 0x3862fcu: goto label_3862fc;
        case 0x386300u: goto label_386300;
        case 0x386304u: goto label_386304;
        default: break;
    }

    ctx->pc = 0x386298u;

label_386298:
    // 0x386298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x386298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38629c:
    // 0x38629c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3862a0:
    // 0x3862a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3862a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3862a4:
    // 0x3862a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3862a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3862a8:
    // 0x3862a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3862a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3862ac:
    // 0x3862ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3862acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3862b0:
    // 0x3862b0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3862b4:
    if (ctx->pc == 0x3862B4u) {
        ctx->pc = 0x3862B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862B0u;
        // 0x3862b4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3862B8u;
        goto label_3862b8;
    }
    ctx->pc = 0x3862B0u;
    {
        const bool branch_taken_0x3862b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3862B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862B0u;
        // 0x3862b4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862b0) {
            ctx->pc = 0x3862E0u;
            goto label_3862e0;
        }
    }
    ctx->pc = 0x3862B8u;
label_3862b8:
    // 0x3862b8: 0xc0e4060  jal         func_390180
label_3862bc:
    if (ctx->pc == 0x3862BCu) {
        ctx->pc = 0x3862BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862B8u;
        // 0x3862bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3862C0u;
        goto label_3862c0;
    }
    ctx->pc = 0x3862B8u;
    SET_GPR_U32(ctx, 31, 0x3862C0u);
    ctx->pc = 0x3862BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3862B8u;
    // 0x3862bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3862B8u, 0x3862C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862C0u;
label_3862c0:
    // 0x3862c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3862c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3862c4:
    // 0x3862c4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_3862c8:
    if (ctx->pc == 0x3862C8u) {
        ctx->pc = 0x3862C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862C4u;
        // 0x3862c8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3862CCu;
        goto label_3862cc;
    }
    ctx->pc = 0x3862C4u;
    {
        const bool branch_taken_0x3862c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3862c4) {
            ctx->pc = 0x3862C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3862C4u;
            // 0x3862c8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3862E4u;
            goto label_3862e4;
        }
    }
    ctx->pc = 0x3862CCu;
label_3862cc:
    // 0x3862cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3862ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3862d0:
    // 0x3862d0: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x3862d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_3862d4:
    // 0x3862d4: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x3862d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3862d8:
    // 0x3862d8: 0x60f809  jalr        $v1
label_3862dc:
    if (ctx->pc == 0x3862DCu) {
        ctx->pc = 0x3862DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862D8u;
        // 0x3862dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3862E0u;
        goto label_3862e0;
    }
    ctx->pc = 0x3862D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3862E0u);
        ctx->pc = 0x3862DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862D8u;
        // 0x3862dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3862D8u, 0x3862E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3862E0u;
label_3862e0:
    // 0x3862e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3862e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3862e4:
    // 0x3862e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3862e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3862e8:
    // 0x3862e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3862e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3862ec:
    // 0x3862ec: 0xc0e182e  jal         func_3860B8
label_3862f0:
    if (ctx->pc == 0x3862F0u) {
        ctx->pc = 0x3862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862ECu;
        // 0x3862f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3862F4u;
        goto label_3862f4;
    }
    ctx->pc = 0x3862ECu;
    SET_GPR_U32(ctx, 31, 0x3862F4u);
    ctx->pc = 0x3862F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3862ECu;
    // 0x3862f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3860B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3860B8u, 0x3862ECu, 0x3862F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862F4u;
label_3862f4:
    // 0x3862f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3862f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3862f8:
    // 0x3862f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3862f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3862fc:
    // 0x3862fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3862fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_386300:
    // 0x386300: 0x3e00008  jr          $ra
label_386304:
    if (ctx->pc == 0x386304u) {
        ctx->pc = 0x386304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386300u;
        // 0x386304: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386308u;
        goto label_fallthrough_0x386300;
    }
    ctx->pc = 0x386300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386300u;
        // 0x386304: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x386300:
    ctx->pc = 0x386308u;
}
