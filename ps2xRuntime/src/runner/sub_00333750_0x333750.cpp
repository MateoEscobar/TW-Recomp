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

// Function: sub_00333750
// Address: 0x333750 - 0x333830
void sub_00333750_0x333750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333750_0x333750");
#endif

    switch (ctx->pc) {
        case 0x3337ccu: goto label_3337cc;
        case 0x333804u: goto label_333804;
        default: break;
    }

    ctx->pc = 0x333750u;

    // 0x333750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x333750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x333754: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x333754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x333758: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x333758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x33375c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x333760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x333760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333764: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x333764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x333768: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x333768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33376c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x33376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x333770: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x333770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333778: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x333778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33377c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x33377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x333780: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x333780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x333784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333788: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x333788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33378c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x33378cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333790: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x333790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x333794: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x333794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x333798: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x333798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33379c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x33379cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3337a0: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x3337a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3337a4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3337A4u;
    {
        const bool branch_taken_0x3337a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3337A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3337A4u;
        // 0x3337a8: 0x8ca4002c  lw          $a0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3337a4) {
            ctx->pc = 0x3337BCu;
            goto label_3337bc;
        }
    }
    ctx->pc = 0x3337ACu;
    // 0x3337ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3337acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3337b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3337b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3337b4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3337b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3337b8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3337b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3337bc:
    // 0x3337bc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3337bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3337c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3337c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3337c4: 0xc0c9efe  jal         func_327BF8
    ctx->pc = 0x3337C4u;
    SET_GPR_U32(ctx, 31, 0x3337CCu);
    ctx->pc = 0x3337C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337C4u;
    // 0x3337c8: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327BF8u, 0x3337C4u, 0x3337CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337CCu;
label_3337cc:
    // 0x3337cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3337ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3337d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3337d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3337d4: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3337D4u;
    {
        const bool branch_taken_0x3337d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3337d4) {
            ctx->pc = 0x3337D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3337D4u;
            // 0x3337d8: 0xae06000c  sw          $a2, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3337F0u;
            goto label_3337f0;
        }
    }
    ctx->pc = 0x3337DCu;
    // 0x3337dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3337dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3337e0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3337e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3337e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3337E4u;
    {
        const bool branch_taken_0x3337e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3337e4) {
            ctx->pc = 0x3337E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3337E4u;
            // 0x3337e8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333808u;
            goto label_333808;
        }
    }
    ctx->pc = 0x3337ECu;
    // 0x3337ec: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x3337ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_3337f0:
    // 0x3337f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3337f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3337f4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3337f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x3337f8: 0x2665fff0  addiu       $a1, $s3, -0x10
    ctx->pc = 0x3337f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x3337fc: 0xc0ca26e  jal         func_3289B8
    ctx->pc = 0x3337FCu;
    SET_GPR_U32(ctx, 31, 0x333804u);
    ctx->pc = 0x333800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337FCu;
    // 0x333800: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3289B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3289B8u, 0x3337FCu, 0x333804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333804u;
label_333804:
    // 0x333804: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x333804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_333808:
    // 0x333808: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x333808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33380c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x33380cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x333810: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x333810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333814: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x333814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333818: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x333818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33381c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x33381cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333824: 0x3e00008  jr          $ra
    ctx->pc = 0x333824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333824u;
        // 0x333828: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33382Cu;
    // 0x33382c: 0x0  nop
    ctx->pc = 0x33382cu;
    // NOP
    ctx->pc = 0x333830u;
}
