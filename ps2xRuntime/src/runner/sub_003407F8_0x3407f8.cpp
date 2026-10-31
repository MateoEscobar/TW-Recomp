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

// Function: sub_003407F8
// Address: 0x3407f8 - 0x340890
void sub_003407F8_0x3407f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003407F8_0x3407f8");
#endif

    switch (ctx->pc) {
        case 0x3407f8u: goto label_3407f8;
        case 0x3407fcu: goto label_3407fc;
        case 0x340800u: goto label_340800;
        case 0x340804u: goto label_340804;
        case 0x340808u: goto label_340808;
        case 0x34080cu: goto label_34080c;
        case 0x340810u: goto label_340810;
        case 0x340814u: goto label_340814;
        case 0x340818u: goto label_340818;
        case 0x34081cu: goto label_34081c;
        case 0x340820u: goto label_340820;
        case 0x340824u: goto label_340824;
        case 0x340828u: goto label_340828;
        case 0x34082cu: goto label_34082c;
        case 0x340830u: goto label_340830;
        case 0x340834u: goto label_340834;
        case 0x340838u: goto label_340838;
        case 0x34083cu: goto label_34083c;
        case 0x340840u: goto label_340840;
        case 0x340844u: goto label_340844;
        case 0x340848u: goto label_340848;
        case 0x34084cu: goto label_34084c;
        case 0x340850u: goto label_340850;
        case 0x340854u: goto label_340854;
        case 0x340858u: goto label_340858;
        case 0x34085cu: goto label_34085c;
        case 0x340860u: goto label_340860;
        case 0x340864u: goto label_340864;
        case 0x340868u: goto label_340868;
        case 0x34086cu: goto label_34086c;
        case 0x340870u: goto label_340870;
        case 0x340874u: goto label_340874;
        case 0x340878u: goto label_340878;
        case 0x34087cu: goto label_34087c;
        case 0x340880u: goto label_340880;
        case 0x340884u: goto label_340884;
        case 0x340888u: goto label_340888;
        case 0x34088cu: goto label_34088c;
        default: break;
    }

    ctx->pc = 0x3407f8u;

label_3407f8:
    // 0x3407f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3407f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3407fc:
    // 0x3407fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3407fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_340800:
    // 0x340800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_340804:
    // 0x340804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x340804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_340808:
    // 0x340808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34080c:
    // 0x34080c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34080cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340810:
    // 0x340810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340814:
    // 0x340814: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x340814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_340818:
    // 0x340818: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x340818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_34081c:
    // 0x34081c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x34081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_340820:
    // 0x340820: 0x60f809  jalr        $v1
label_340824:
    if (ctx->pc == 0x340824u) {
        ctx->pc = 0x340824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340820u;
        // 0x340824: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340828u;
        goto label_340828;
    }
    ctx->pc = 0x340820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x340828u);
        ctx->pc = 0x340824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340820u;
        // 0x340824: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340820u, 0x340828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340828u;
label_340828:
    // 0x340828: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x340828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_34082c:
    // 0x34082c: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_340830:
    if (ctx->pc == 0x340830u) {
        ctx->pc = 0x340830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34082Cu;
        // 0x340830: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340834u;
        goto label_340834;
    }
    ctx->pc = 0x34082Cu;
    {
        const bool branch_taken_0x34082c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34082c) {
            ctx->pc = 0x340830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34082Cu;
            // 0x340830: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340848u;
            goto label_340848;
        }
    }
    ctx->pc = 0x340834u;
label_340834:
    // 0x340834: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x340834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_340838:
    // 0x340838: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_34083c:
    if (ctx->pc == 0x34083Cu) {
        ctx->pc = 0x34083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340838u;
        // 0x34083c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340840u;
        goto label_340840;
    }
    ctx->pc = 0x340838u;
    {
        const bool branch_taken_0x340838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340838u;
        // 0x34083c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340838) {
            ctx->pc = 0x34086Cu;
            goto label_34086c;
        }
    }
    ctx->pc = 0x340840u;
label_340840:
    // 0x340840: 0x1000000a  b           . + 4 + (0xA << 2)
label_340844:
    if (ctx->pc == 0x340844u) {
        ctx->pc = 0x340844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340840u;
        // 0x340844: 0xac4000cc  sw          $zero, 0xCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340848u;
        goto label_340848;
    }
    ctx->pc = 0x340840u;
    {
        const bool branch_taken_0x340840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340840u;
        // 0x340844: 0xac4000cc  sw          $zero, 0xCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340840) {
            ctx->pc = 0x34086Cu;
            goto label_34086c;
        }
    }
    ctx->pc = 0x340848u;
label_340848:
    // 0x340848: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_34084c:
    if (ctx->pc == 0x34084Cu) {
        ctx->pc = 0x34084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340848u;
        // 0x34084c: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340850u;
        goto label_340850;
    }
    ctx->pc = 0x340848u;
    {
        const bool branch_taken_0x340848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340848) {
            ctx->pc = 0x34084Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340848u;
            // 0x34084c: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34085Cu;
            goto label_34085c;
        }
    }
    ctx->pc = 0x340850u;
label_340850:
    // 0x340850: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x340850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_340854:
    // 0x340854: 0xac6200c8  sw          $v0, 0xC8($v1)
    ctx->pc = 0x340854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 2));
label_340858:
    // 0x340858: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x340858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_34085c:
    // 0x34085c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_340860:
    if (ctx->pc == 0x340860u) {
        ctx->pc = 0x340864u;
        goto label_340864;
    }
    ctx->pc = 0x34085Cu;
    {
        const bool branch_taken_0x34085c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34085c) {
            ctx->pc = 0x34086Cu;
            goto label_34086c;
        }
    }
    ctx->pc = 0x340864u;
label_340864:
    // 0x340864: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x340864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_340868:
    // 0x340868: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x340868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
label_34086c:
    // 0x34086c: 0xc0d085a  jal         func_342168
label_340870:
    if (ctx->pc == 0x340870u) {
        ctx->pc = 0x340870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34086Cu;
        // 0x340870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340874u;
        goto label_340874;
    }
    ctx->pc = 0x34086Cu;
    SET_GPR_U32(ctx, 31, 0x340874u);
    ctx->pc = 0x340870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34086Cu;
    // 0x340870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342168u, 0x34086Cu, 0x340874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340874u;
label_340874:
    // 0x340874: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x340874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_340878:
    // 0x340878: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x340878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_34087c:
    // 0x34087c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x34087cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_340880:
    // 0x340880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_340884:
    // 0x340884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340888:
    // 0x340888: 0x3e00008  jr          $ra
label_34088c:
    if (ctx->pc == 0x34088Cu) {
        ctx->pc = 0x34088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340888u;
        // 0x34088c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340890u;
        goto label_fallthrough_0x340888;
    }
    ctx->pc = 0x340888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340888u;
        // 0x34088c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340888:
    ctx->pc = 0x340890u;
}
