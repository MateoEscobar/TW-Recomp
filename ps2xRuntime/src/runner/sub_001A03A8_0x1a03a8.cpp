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

// Function: sub_001A03A8
// Address: 0x1a03a8 - 0x1a0420
void sub_001A03A8_0x1a03a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A03A8_0x1a03a8");
#endif

    switch (ctx->pc) {
        case 0x1a03a8u: goto label_1a03a8;
        case 0x1a03acu: goto label_1a03ac;
        case 0x1a03b0u: goto label_1a03b0;
        case 0x1a03b4u: goto label_1a03b4;
        case 0x1a03b8u: goto label_1a03b8;
        case 0x1a03bcu: goto label_1a03bc;
        case 0x1a03c0u: goto label_1a03c0;
        case 0x1a03c4u: goto label_1a03c4;
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a03ccu: goto label_1a03cc;
        case 0x1a03d0u: goto label_1a03d0;
        case 0x1a03d4u: goto label_1a03d4;
        case 0x1a03d8u: goto label_1a03d8;
        case 0x1a03dcu: goto label_1a03dc;
        case 0x1a03e0u: goto label_1a03e0;
        case 0x1a03e4u: goto label_1a03e4;
        case 0x1a03e8u: goto label_1a03e8;
        case 0x1a03ecu: goto label_1a03ec;
        case 0x1a03f0u: goto label_1a03f0;
        case 0x1a03f4u: goto label_1a03f4;
        case 0x1a03f8u: goto label_1a03f8;
        case 0x1a03fcu: goto label_1a03fc;
        case 0x1a0400u: goto label_1a0400;
        case 0x1a0404u: goto label_1a0404;
        case 0x1a0408u: goto label_1a0408;
        case 0x1a040cu: goto label_1a040c;
        case 0x1a0410u: goto label_1a0410;
        case 0x1a0414u: goto label_1a0414;
        case 0x1a0418u: goto label_1a0418;
        case 0x1a041cu: goto label_1a041c;
        default: break;
    }

    ctx->pc = 0x1a03a8u;

label_1a03a8:
    // 0x1a03a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a03a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a03ac:
    // 0x1a03ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a03acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1a03b0:
    // 0x1a03b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a03b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a03b4:
    // 0x1a03b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a03b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a03b8:
    // 0x1a03b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a03b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a03bc:
    // 0x1a03bc: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x1a03bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1a03c0:
    // 0x1a03c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a03c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a03c4:
    // 0x1a03c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a03c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a03c8:
    // 0x1a03c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a03cc:
    // 0x1a03cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a03ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a03d0:
    // 0x1a03d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a03d4:
    // 0x1a03d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a03d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a03d8:
    // 0x1a03d8: 0x26100250  addiu       $s0, $s0, 0x250
    ctx->pc = 0x1a03d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1a03dc:
    // 0x1a03dc: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1a03dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1a03e0:
    // 0x1a03e0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1a03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1a03e4:
    // 0x1a03e4: 0x40f809  jalr        $v0
label_1a03e8:
    if (ctx->pc == 0x1A03E8u) {
        ctx->pc = 0x1A03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03E4u;
        // 0x1a03e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03ECu;
        goto label_1a03ec;
    }
    ctx->pc = 0x1A03E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A03ECu);
        ctx->pc = 0x1A03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03E4u;
        // 0x1a03e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A03E4u, 0x1A03ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A03ECu;
label_1a03ec:
    // 0x1a03ec: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1a03ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a03f0:
    // 0x1a03f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1a03f4:
    if (ctx->pc == 0x1A03F4u) {
        ctx->pc = 0x1A03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03F0u;
        // 0x1a03f4: 0x26310250  addiu       $s1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03F8u;
        goto label_1a03f8;
    }
    ctx->pc = 0x1A03F0u;
    {
        const bool branch_taken_0x1a03f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03F0u;
        // 0x1a03f4: 0x26310250  addiu       $s1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03f0) {
            ctx->pc = 0x1A03D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a03d0;
        }
    }
    ctx->pc = 0x1A03F8u;
label_1a03f8:
    // 0x1a03f8: 0xc06ec70  jal         func_1BB1C0
label_1a03fc:
    if (ctx->pc == 0x1A03FCu) {
        ctx->pc = 0x1A03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03F8u;
        // 0x1a03fc: 0x266413b0  addiu       $a0, $s3, 0x13B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0400u;
        goto label_1a0400;
    }
    ctx->pc = 0x1A03F8u;
    SET_GPR_U32(ctx, 31, 0x1A0400u);
    ctx->pc = 0x1A03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A03F8u;
    // 0x1a03fc: 0x266413b0  addiu       $a0, $s3, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1A03F8u, 0x1A0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0400u;
label_1a0400:
    // 0x1a0400: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0404:
    // 0x1a0404: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a0404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0408:
    // 0x1a0408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a040c:
    // 0x1a040c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a040cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0410:
    // 0x1a0410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0414:
    // 0x1a0414: 0x3e00008  jr          $ra
label_1a0418:
    if (ctx->pc == 0x1A0418u) {
        ctx->pc = 0x1A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0414u;
        // 0x1a0418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A041Cu;
        goto label_1a041c;
    }
    ctx->pc = 0x1A0414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0414u;
        // 0x1a0418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A041Cu;
label_1a041c:
    // 0x1a041c: 0x0  nop
    ctx->pc = 0x1a041cu;
    // NOP
    ctx->pc = 0x1a0420u;
}
