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

// Function: sub_00190770
// Address: 0x190770 - 0x190810
void sub_00190770_0x190770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190770_0x190770");
#endif

    switch (ctx->pc) {
        case 0x190770u: goto label_190770;
        case 0x190774u: goto label_190774;
        case 0x190778u: goto label_190778;
        case 0x19077cu: goto label_19077c;
        case 0x190780u: goto label_190780;
        case 0x190784u: goto label_190784;
        case 0x190788u: goto label_190788;
        case 0x19078cu: goto label_19078c;
        case 0x190790u: goto label_190790;
        case 0x190794u: goto label_190794;
        case 0x190798u: goto label_190798;
        case 0x19079cu: goto label_19079c;
        case 0x1907a0u: goto label_1907a0;
        case 0x1907a4u: goto label_1907a4;
        case 0x1907a8u: goto label_1907a8;
        case 0x1907acu: goto label_1907ac;
        case 0x1907b0u: goto label_1907b0;
        case 0x1907b4u: goto label_1907b4;
        case 0x1907b8u: goto label_1907b8;
        case 0x1907bcu: goto label_1907bc;
        case 0x1907c0u: goto label_1907c0;
        case 0x1907c4u: goto label_1907c4;
        case 0x1907c8u: goto label_1907c8;
        case 0x1907ccu: goto label_1907cc;
        case 0x1907d0u: goto label_1907d0;
        case 0x1907d4u: goto label_1907d4;
        case 0x1907d8u: goto label_1907d8;
        case 0x1907dcu: goto label_1907dc;
        case 0x1907e0u: goto label_1907e0;
        case 0x1907e4u: goto label_1907e4;
        case 0x1907e8u: goto label_1907e8;
        case 0x1907ecu: goto label_1907ec;
        case 0x1907f0u: goto label_1907f0;
        case 0x1907f4u: goto label_1907f4;
        case 0x1907f8u: goto label_1907f8;
        case 0x1907fcu: goto label_1907fc;
        case 0x190800u: goto label_190800;
        case 0x190804u: goto label_190804;
        case 0x190808u: goto label_190808;
        case 0x19080cu: goto label_19080c;
        default: break;
    }

    ctx->pc = 0x190770u;

label_190770:
    // 0x190770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_190774:
    // 0x190774: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x190774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190778:
    // 0x190778: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x190778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_19077c:
    // 0x19077c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190780:
    // 0x190780: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x190780u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_190784:
    // 0x190784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_190788:
    // 0x190788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19078c:
    // 0x19078c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19078cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190790:
    // 0x190790: 0x8e08cdb4  lw          $t0, -0x324C($s0)
    ctx->pc = 0x190790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_190794:
    // 0x190794: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x190794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_190798:
    // 0x190798: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x190798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_19079c:
    // 0x19079c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1907a0:
    // 0x1907a0: 0x40f809  jalr        $v0
label_1907a4:
    if (ctx->pc == 0x1907A4u) {
        ctx->pc = 0x1907A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907A0u;
        // 0x1907a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1907A8u;
        goto label_1907a8;
    }
    ctx->pc = 0x1907A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1907A8u);
        ctx->pc = 0x1907A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907A0u;
        // 0x1907a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1907A0u, 0x1907A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1907A8u;
label_1907a8:
    // 0x1907a8: 0x8e06cdb4  lw          $a2, -0x324C($s0)
    ctx->pc = 0x1907a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_1907ac:
    // 0x1907ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1907acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1907b0:
    // 0x1907b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1907b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1907b4:
    // 0x1907b4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1907b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1907b8:
    // 0x1907b8: 0x84440160  lh          $a0, 0x160($v0)
    ctx->pc = 0x1907b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
label_1907bc:
    // 0x1907bc: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x1907bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
label_1907c0:
    // 0x1907c0: 0x60f809  jalr        $v1
label_1907c4:
    if (ctx->pc == 0x1907C4u) {
        ctx->pc = 0x1907C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907C0u;
        // 0x1907c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1907C8u;
        goto label_1907c8;
    }
    ctx->pc = 0x1907C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1907C8u);
        ctx->pc = 0x1907C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907C0u;
        // 0x1907c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1907C0u, 0x1907C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1907C8u;
label_1907c8:
    // 0x1907c8: 0x8e06cdb4  lw          $a2, -0x324C($s0)
    ctx->pc = 0x1907c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_1907cc:
    // 0x1907cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1907ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1907d0:
    // 0x1907d0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1907d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1907d4:
    // 0x1907d4: 0x84440160  lh          $a0, 0x160($v0)
    ctx->pc = 0x1907d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
label_1907d8:
    // 0x1907d8: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x1907d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
label_1907dc:
    // 0x1907dc: 0x60f809  jalr        $v1
label_1907e0:
    if (ctx->pc == 0x1907E0u) {
        ctx->pc = 0x1907E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907DCu;
        // 0x1907e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1907E4u;
        goto label_1907e4;
    }
    ctx->pc = 0x1907DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1907E4u);
        ctx->pc = 0x1907E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907DCu;
        // 0x1907e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1907DCu, 0x1907E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1907E4u;
label_1907e4:
    // 0x1907e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1907e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1907e8:
    // 0x1907e8: 0xc051052  jal         func_144148
label_1907ec:
    if (ctx->pc == 0x1907ECu) {
        ctx->pc = 0x1907ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907E8u;
        // 0x1907ec: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1907F0u;
        goto label_1907f0;
    }
    ctx->pc = 0x1907E8u;
    SET_GPR_U32(ctx, 31, 0x1907F0u);
    ctx->pc = 0x1907ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1907E8u;
    // 0x1907ec: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x1907E8u, 0x1907F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1907F0u;
label_1907f0:
    // 0x1907f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1907f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1907f4:
    // 0x1907f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1907f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1907f8:
    // 0x1907f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1907f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1907fc:
    // 0x1907fc: 0x3e00008  jr          $ra
label_190800:
    if (ctx->pc == 0x190800u) {
        ctx->pc = 0x190800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907FCu;
        // 0x190800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190804u;
        goto label_190804;
    }
    ctx->pc = 0x1907FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907FCu;
        // 0x190800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1907FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190804u;
label_190804:
    // 0x190804: 0x0  nop
    ctx->pc = 0x190804u;
    // NOP
label_190808:
    // 0x190808: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x190808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19080c:
    // 0x19080c: 0x0  nop
    ctx->pc = 0x19080cu;
    // NOP
    ctx->pc = 0x190810u;
}
