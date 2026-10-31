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

// Function: sub_00161378
// Address: 0x161378 - 0x1613f0
void sub_00161378_0x161378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161378_0x161378");
#endif

    switch (ctx->pc) {
        case 0x161378u: goto label_161378;
        case 0x16137cu: goto label_16137c;
        case 0x161380u: goto label_161380;
        case 0x161384u: goto label_161384;
        case 0x161388u: goto label_161388;
        case 0x16138cu: goto label_16138c;
        case 0x161390u: goto label_161390;
        case 0x161394u: goto label_161394;
        case 0x161398u: goto label_161398;
        case 0x16139cu: goto label_16139c;
        case 0x1613a0u: goto label_1613a0;
        case 0x1613a4u: goto label_1613a4;
        case 0x1613a8u: goto label_1613a8;
        case 0x1613acu: goto label_1613ac;
        case 0x1613b0u: goto label_1613b0;
        case 0x1613b4u: goto label_1613b4;
        case 0x1613b8u: goto label_1613b8;
        case 0x1613bcu: goto label_1613bc;
        case 0x1613c0u: goto label_1613c0;
        case 0x1613c4u: goto label_1613c4;
        case 0x1613c8u: goto label_1613c8;
        case 0x1613ccu: goto label_1613cc;
        case 0x1613d0u: goto label_1613d0;
        case 0x1613d4u: goto label_1613d4;
        case 0x1613d8u: goto label_1613d8;
        case 0x1613dcu: goto label_1613dc;
        case 0x1613e0u: goto label_1613e0;
        case 0x1613e4u: goto label_1613e4;
        case 0x1613e8u: goto label_1613e8;
        case 0x1613ecu: goto label_1613ec;
        default: break;
    }

    ctx->pc = 0x161378u;

label_161378:
    // 0x161378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16137c:
    // 0x16137c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161380:
    // 0x161380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_161384:
    // 0x161384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_161388:
    // 0x161388: 0xc051636  jal         func_1458D8
label_16138c:
    if (ctx->pc == 0x16138Cu) {
        ctx->pc = 0x16138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161388u;
        // 0x16138c: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161390u;
        goto label_161390;
    }
    ctx->pc = 0x161388u;
    SET_GPR_U32(ctx, 31, 0x161390u);
    ctx->pc = 0x16138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161388u;
    // 0x16138c: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458D8u, 0x161388u, 0x161390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161390u;
label_161390:
    // 0x161390: 0x8e056dec  lw          $a1, 0x6DEC($s0)
    ctx->pc = 0x161390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28140)));
label_161394:
    // 0x161394: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161398:
    // 0x161398: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x161398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_16139c:
    // 0x16139c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1613a0:
    // 0x1613a0: 0x60f809  jalr        $v1
label_1613a4:
    if (ctx->pc == 0x1613A4u) {
        ctx->pc = 0x1613A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613A0u;
        // 0x1613a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613A8u;
        goto label_1613a8;
    }
    ctx->pc = 0x1613A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1613A8u);
        ctx->pc = 0x1613A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613A0u;
        // 0x1613a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1613A0u, 0x1613A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1613A8u;
label_1613a8:
    // 0x1613a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1613a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1613ac:
    // 0x1613ac: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1613acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1613b0:
    // 0x1613b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1613b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1613b4:
    // 0x1613b4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1613b8:
    // 0x1613b8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1613bc:
    // 0x1613bc: 0x40f809  jalr        $v0
label_1613c0:
    if (ctx->pc == 0x1613C0u) {
        ctx->pc = 0x1613C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613BCu;
        // 0x1613c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613C4u;
        goto label_1613c4;
    }
    ctx->pc = 0x1613BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1613C4u);
        ctx->pc = 0x1613C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613BCu;
        // 0x1613c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1613BCu, 0x1613C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1613C4u;
label_1613c4:
    // 0x1613c4: 0x8e056dec  lw          $a1, 0x6DEC($s0)
    ctx->pc = 0x1613c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28140)));
label_1613c8:
    // 0x1613c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1613cc:
    // 0x1613cc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1613ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1613d0:
    // 0x1613d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1613d4:
    // 0x1613d4: 0x60f809  jalr        $v1
label_1613d8:
    if (ctx->pc == 0x1613D8u) {
        ctx->pc = 0x1613D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613D4u;
        // 0x1613d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613DCu;
        goto label_1613dc;
    }
    ctx->pc = 0x1613D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1613DCu);
        ctx->pc = 0x1613D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613D4u;
        // 0x1613d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1613D4u, 0x1613DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1613DCu;
label_1613dc:
    // 0x1613dc: 0xae006dec  sw          $zero, 0x6DEC($s0)
    ctx->pc = 0x1613dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28140), GPR_U32(ctx, 0));
label_1613e0:
    // 0x1613e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1613e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1613e4:
    // 0x1613e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1613e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1613e8:
    // 0x1613e8: 0x3e00008  jr          $ra
label_1613ec:
    if (ctx->pc == 0x1613ECu) {
        ctx->pc = 0x1613ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613E8u;
        // 0x1613ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613F0u;
        goto label_fallthrough_0x1613e8;
    }
    ctx->pc = 0x1613E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1613ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613E8u;
        // 0x1613ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1613E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1613e8:
    ctx->pc = 0x1613F0u;
}
