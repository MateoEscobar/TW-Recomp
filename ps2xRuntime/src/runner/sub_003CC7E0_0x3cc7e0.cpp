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

// Function: sub_003CC7E0
// Address: 0x3cc7e0 - 0x3cc858
void sub_003CC7E0_0x3cc7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC7E0_0x3cc7e0");
#endif

    switch (ctx->pc) {
        case 0x3cc7e0u: goto label_3cc7e0;
        case 0x3cc7e4u: goto label_3cc7e4;
        case 0x3cc7e8u: goto label_3cc7e8;
        case 0x3cc7ecu: goto label_3cc7ec;
        case 0x3cc7f0u: goto label_3cc7f0;
        case 0x3cc7f4u: goto label_3cc7f4;
        case 0x3cc7f8u: goto label_3cc7f8;
        case 0x3cc7fcu: goto label_3cc7fc;
        case 0x3cc800u: goto label_3cc800;
        case 0x3cc804u: goto label_3cc804;
        case 0x3cc808u: goto label_3cc808;
        case 0x3cc80cu: goto label_3cc80c;
        case 0x3cc810u: goto label_3cc810;
        case 0x3cc814u: goto label_3cc814;
        case 0x3cc818u: goto label_3cc818;
        case 0x3cc81cu: goto label_3cc81c;
        case 0x3cc820u: goto label_3cc820;
        case 0x3cc824u: goto label_3cc824;
        case 0x3cc828u: goto label_3cc828;
        case 0x3cc82cu: goto label_3cc82c;
        case 0x3cc830u: goto label_3cc830;
        case 0x3cc834u: goto label_3cc834;
        case 0x3cc838u: goto label_3cc838;
        case 0x3cc83cu: goto label_3cc83c;
        case 0x3cc840u: goto label_3cc840;
        case 0x3cc844u: goto label_3cc844;
        case 0x3cc848u: goto label_3cc848;
        case 0x3cc84cu: goto label_3cc84c;
        case 0x3cc850u: goto label_3cc850;
        case 0x3cc854u: goto label_3cc854;
        default: break;
    }

    ctx->pc = 0x3cc7e0u;

label_3cc7e0:
    // 0x3cc7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cc7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3cc7e4:
    // 0x3cc7e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3cc7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3cc7e8:
    // 0x3cc7e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cc7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cc7ec:
    // 0x3cc7ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cc7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7f0:
    // 0x3cc7f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3cc7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3cc7f4:
    // 0x3cc7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cc7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7f8:
    // 0x3cc7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cc7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cc7fc:
    // 0x3cc7fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3cc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cc800:
    // 0x3cc800: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cc800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc804:
    // 0x3cc804: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc808:
    // 0x3cc808: 0x40f809  jalr        $v0
label_3cc80c:
    if (ctx->pc == 0x3CC80Cu) {
        ctx->pc = 0x3CC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC808u;
        // 0x3cc80c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC810u;
        goto label_3cc810;
    }
    ctx->pc = 0x3CC808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC810u);
        ctx->pc = 0x3CC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC808u;
        // 0x3cc80c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC808u, 0x3CC810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC810u;
label_3cc810:
    // 0x3cc810: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cc810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc814:
    // 0x3cc814: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3cc814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3cc818:
    // 0x3cc818: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_3cc81c:
    if (ctx->pc == 0x3CC81Cu) {
        ctx->pc = 0x3CC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC818u;
        // 0x3cc81c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC820u;
        goto label_3cc820;
    }
    ctx->pc = 0x3CC818u;
    {
        const bool branch_taken_0x3cc818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC818u;
        // 0x3cc81c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc818) {
            ctx->pc = 0x3CC840u;
            goto label_3cc840;
        }
    }
    ctx->pc = 0x3CC820u;
label_3cc820:
    // 0x3cc820: 0xc0e93de  jal         func_3A4F78
label_3cc824:
    if (ctx->pc == 0x3CC824u) {
        ctx->pc = 0x3CC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC820u;
        // 0x3cc824: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC828u;
        goto label_3cc828;
    }
    ctx->pc = 0x3CC820u;
    SET_GPR_U32(ctx, 31, 0x3CC828u);
    ctx->pc = 0x3CC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC820u;
    // 0x3cc824: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3CC820u, 0x3CC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC828u;
label_3cc828:
    // 0x3cc828: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3cc828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3cc82c:
    // 0x3cc82c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc830:
    // 0x3cc830: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3cc830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3cc834:
    // 0x3cc834: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3cc834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3cc838:
    // 0x3cc838: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3cc838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3cc83c:
    // 0x3cc83c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3cc83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cc840:
    // 0x3cc840: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cc840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc844:
    // 0x3cc844: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3cc844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cc848:
    // 0x3cc848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cc848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc84c:
    // 0x3cc84c: 0x3e00008  jr          $ra
label_3cc850:
    if (ctx->pc == 0x3CC850u) {
        ctx->pc = 0x3CC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC84Cu;
        // 0x3cc850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC854u;
        goto label_3cc854;
    }
    ctx->pc = 0x3CC84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC84Cu;
        // 0x3cc850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC854u;
label_3cc854:
    // 0x3cc854: 0x0  nop
    ctx->pc = 0x3cc854u;
    // NOP
    ctx->pc = 0x3cc858u;
}
