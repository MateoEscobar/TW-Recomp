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

// Function: sub_003327D8
// Address: 0x3327d8 - 0x3328a0
void sub_003327D8_0x3327d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003327D8_0x3327d8");
#endif

    switch (ctx->pc) {
        case 0x332800u: goto label_332800;
        case 0x332810u: goto label_332810;
        case 0x33281cu: goto label_33281c;
        case 0x33287cu: goto label_33287c;
        default: break;
    }

    ctx->pc = 0x3327d8u;

    // 0x3327d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3327d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3327dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3327dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3327e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3327e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3327e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3327e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3327e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3327ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3327f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3327f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3327f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3327f8: 0xc0cc914  jal         func_332450
    ctx->pc = 0x3327F8u;
    SET_GPR_U32(ctx, 31, 0x332800u);
    ctx->pc = 0x3327FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3327F8u;
    // 0x3327fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332450u, 0x3327F8u, 0x332800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332800u;
label_332800:
    // 0x332800: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x332800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332808: 0xc0cc99a  jal         func_332668
    ctx->pc = 0x332808u;
    SET_GPR_U32(ctx, 31, 0x332810u);
    ctx->pc = 0x33280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332808u;
    // 0x33280c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332668u, 0x332808u, 0x332810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332810u;
label_332810:
    // 0x332810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332814: 0xc0cc940  jal         func_332500
    ctx->pc = 0x332814u;
    SET_GPR_U32(ctx, 31, 0x33281Cu);
    ctx->pc = 0x332818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332814u;
    // 0x332818: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332500u, 0x332814u, 0x33281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33281Cu;
label_33281c:
    // 0x33281c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33281Cu;
    {
        const bool branch_taken_0x33281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33281Cu;
        // 0x332820: 0x111980  sll         $v1, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33281c) {
            ctx->pc = 0x332854u;
            goto label_332854;
        }
    }
    ctx->pc = 0x332824u;
    // 0x332824: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x332824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x332828: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x332828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33282c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332834: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x332834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332838: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x332838u;
    {
        const bool branch_taken_0x332838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332838u;
        // 0x33283c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332838) {
            ctx->pc = 0x332854u;
            goto label_332854;
        }
    }
    ctx->pc = 0x332840u;
    // 0x332840: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x332840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332844: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x332844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x332848: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x332848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33284c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33284Cu;
    {
        const bool branch_taken_0x33284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33284Cu;
        // 0x332850: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33284c) {
            ctx->pc = 0x332860u;
            goto label_332860;
        }
    }
    ctx->pc = 0x332854u;
label_332854:
    // 0x332854: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x332854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33285c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33285cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_332860:
    // 0x332860: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x332860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332864: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x332864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x332868: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x332868u;
    {
        const bool branch_taken_0x332868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x332868) {
            ctx->pc = 0x33286Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332868u;
            // 0x33286c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332880u;
            goto label_332880;
        }
    }
    ctx->pc = 0x332870u;
    // 0x332870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332874: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x332874u;
    SET_GPR_U32(ctx, 31, 0x33287Cu);
    ctx->pc = 0x332878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332874u;
    // 0x332878: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x332874u, 0x33287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33287Cu;
label_33287c:
    // 0x33287c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_332880:
    // 0x332880: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x332880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332884: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x332884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x332888: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x332888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33288c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x332890: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x332890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332898: 0x3e00008  jr          $ra
    ctx->pc = 0x332898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332898u;
        // 0x33289c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3328A0u;
}
