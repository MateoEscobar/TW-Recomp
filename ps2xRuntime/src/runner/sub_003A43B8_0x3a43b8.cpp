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

// Function: sub_003A43B8
// Address: 0x3a43b8 - 0x3a4428
void sub_003A43B8_0x3a43b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A43B8_0x3a43b8");
#endif

    switch (ctx->pc) {
        case 0x3a43b8u: goto label_3a43b8;
        case 0x3a43bcu: goto label_3a43bc;
        case 0x3a43c0u: goto label_3a43c0;
        case 0x3a43c4u: goto label_3a43c4;
        case 0x3a43c8u: goto label_3a43c8;
        case 0x3a43ccu: goto label_3a43cc;
        case 0x3a43d0u: goto label_3a43d0;
        case 0x3a43d4u: goto label_3a43d4;
        case 0x3a43d8u: goto label_3a43d8;
        case 0x3a43dcu: goto label_3a43dc;
        case 0x3a43e0u: goto label_3a43e0;
        case 0x3a43e4u: goto label_3a43e4;
        case 0x3a43e8u: goto label_3a43e8;
        case 0x3a43ecu: goto label_3a43ec;
        case 0x3a43f0u: goto label_3a43f0;
        case 0x3a43f4u: goto label_3a43f4;
        case 0x3a43f8u: goto label_3a43f8;
        case 0x3a43fcu: goto label_3a43fc;
        case 0x3a4400u: goto label_3a4400;
        case 0x3a4404u: goto label_3a4404;
        case 0x3a4408u: goto label_3a4408;
        case 0x3a440cu: goto label_3a440c;
        case 0x3a4410u: goto label_3a4410;
        case 0x3a4414u: goto label_3a4414;
        case 0x3a4418u: goto label_3a4418;
        case 0x3a441cu: goto label_3a441c;
        case 0x3a4420u: goto label_3a4420;
        case 0x3a4424u: goto label_3a4424;
        default: break;
    }

    ctx->pc = 0x3a43b8u;

label_3a43b8:
    // 0x3a43b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a43b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a43bc:
    // 0x3a43bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a43c0:
    // 0x3a43c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a43c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a43c4:
    // 0x3a43c4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3a43c8:
    if (ctx->pc == 0x3A43C8u) {
        ctx->pc = 0x3A43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43C4u;
        // 0x3a43c8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A43CCu;
        goto label_3a43cc;
    }
    ctx->pc = 0x3A43C4u;
    {
        const bool branch_taken_0x3a43c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43C4u;
        // 0x3a43c8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43c4) {
            ctx->pc = 0x3A4414u;
            goto label_3a4414;
        }
    }
    ctx->pc = 0x3A43CCu;
label_3a43cc:
    // 0x3a43cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a43d0:
    // 0x3a43d0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a43d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a43d4:
    // 0x3a43d4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a43d8:
    // 0x3a43d8: 0x40f809  jalr        $v0
label_3a43dc:
    if (ctx->pc == 0x3A43DCu) {
        ctx->pc = 0x3A43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43D8u;
        // 0x3a43dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A43E0u;
        goto label_3a43e0;
    }
    ctx->pc = 0x3A43D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A43E0u);
        ctx->pc = 0x3A43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43D8u;
        // 0x3a43dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A43D8u, 0x3A43E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A43E0u;
label_3a43e0:
    // 0x3a43e0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3a43e4:
    if (ctx->pc == 0x3A43E4u) {
        ctx->pc = 0x3A43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43E0u;
        // 0x3a43e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A43E8u;
        goto label_3a43e8;
    }
    ctx->pc = 0x3A43E0u;
    {
        const bool branch_taken_0x3a43e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43e0) {
            ctx->pc = 0x3A43E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A43E0u;
            // 0x3a43e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4418u;
            goto label_3a4418;
        }
    }
    ctx->pc = 0x3A43E8u;
label_3a43e8:
    // 0x3a43e8: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x3a43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3a43ec:
    // 0x3a43ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3a43ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3a43f0:
    // 0x3a43f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3a43f4:
    if (ctx->pc == 0x3A43F4u) {
        ctx->pc = 0x3A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43F0u;
        // 0x3a43f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A43F8u;
        goto label_3a43f8;
    }
    ctx->pc = 0x3A43F0u;
    {
        const bool branch_taken_0x3a43f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43F0u;
        // 0x3a43f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43f0) {
            ctx->pc = 0x3A4414u;
            goto label_3a4414;
        }
    }
    ctx->pc = 0x3A43F8u;
label_3a43f8:
    // 0x3a43f8: 0xc0e90b6  jal         func_3A42D8
label_3a43fc:
    if (ctx->pc == 0x3A43FCu) {
        ctx->pc = 0x3A43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43F8u;
        // 0x3a43fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4400u;
        goto label_3a4400;
    }
    ctx->pc = 0x3A43F8u;
    SET_GPR_U32(ctx, 31, 0x3A4400u);
    ctx->pc = 0x3A43FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A43F8u;
    // 0x3a43fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A42D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A42D8u, 0x3A43F8u, 0x3A4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4400u;
label_3a4400:
    // 0x3a4400: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3a4400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a4404:
    // 0x3a4404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a4404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a4408:
    // 0x3a4408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a4408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a440c:
    // 0x3a440c: 0xc0e91f0  jal         func_3A47C0
label_3a4410:
    if (ctx->pc == 0x3A4410u) {
        ctx->pc = 0x3A4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A440Cu;
        // 0x3a4410: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4414u;
        goto label_3a4414;
    }
    ctx->pc = 0x3A440Cu;
    SET_GPR_U32(ctx, 31, 0x3A4414u);
    ctx->pc = 0x3A4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A440Cu;
    // 0x3a4410: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3A440Cu, 0x3A4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4414u;
label_3a4414:
    // 0x3a4414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4418:
    // 0x3a4418: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a4418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a441c:
    // 0x3a441c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a4420:
    // 0x3a4420: 0x3e00008  jr          $ra
label_3a4424:
    if (ctx->pc == 0x3A4424u) {
        ctx->pc = 0x3A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4420u;
        // 0x3a4424: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4428u;
        goto label_fallthrough_0x3a4420;
    }
    ctx->pc = 0x3A4420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4420u;
        // 0x3a4424: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a4420:
    ctx->pc = 0x3A4428u;
}
