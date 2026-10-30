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

// Function: sub_001C4768
// Address: 0x1c4768 - 0x1c48c0
void sub_001C4768_0x1c4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4768_0x1c4768");
#endif

    switch (ctx->pc) {
        case 0x1c47acu: goto label_1c47ac;
        case 0x1c47c0u: goto label_1c47c0;
        case 0x1c4800u: goto label_1c4800;
        case 0x1c4814u: goto label_1c4814;
        case 0x1c4828u: goto label_1c4828;
        case 0x1c4830u: goto label_1c4830;
        case 0x1c4870u: goto label_1c4870;
        case 0x1c487cu: goto label_1c487c;
        case 0x1c4884u: goto label_1c4884;
        case 0x1c4894u: goto label_1c4894;
        case 0x1c489cu: goto label_1c489c;
        default: break;
    }

    ctx->pc = 0x1c4768u;

    // 0x1c4768: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c4768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c476c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c4770: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c4770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c4774: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c4774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c477c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c477cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4780: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c4780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c4784: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c4784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4788: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c478c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1c478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1c4790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4794: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c4794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c4798: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c4798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c479c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C479Cu;
    {
        const bool branch_taken_0x1c479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C479Cu;
        // 0x1c47a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c479c) {
            ctx->pc = 0x1C489Cu;
            goto label_1c489c;
        }
    }
    ctx->pc = 0x1C47A4u;
    // 0x1c47a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C47A4u;
    SET_GPR_U32(ctx, 31, 0x1C47ACu);
    ctx->pc = 0x1C47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47A4u;
    // 0x1c47a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C47A4u, 0x1C47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47ACu;
label_1c47ac:
    // 0x1c47ac: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C47ACu;
    {
        const bool branch_taken_0x1c47ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47ACu;
        // 0x1c47b0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47ac) {
            ctx->pc = 0x1C489Cu;
            goto label_1c489c;
        }
    }
    ctx->pc = 0x1C47B4u;
    // 0x1c47b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c47b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47b8: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C47B8u;
    SET_GPR_U32(ctx, 31, 0x1C47C0u);
    ctx->pc = 0x1C47BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47B8u;
    // 0x1c47bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C47B8u, 0x1C47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47C0u;
label_1c47c0:
    // 0x1c47c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c47c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c47c8: 0x12220034  beq         $s1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C47C8u;
    {
        const bool branch_taken_0x1c47c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47C8u;
        // 0x1c47cc: 0x111980  sll         $v1, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47c8) {
            ctx->pc = 0x1C489Cu;
            goto label_1c489c;
        }
    }
    ctx->pc = 0x1C47D0u;
    // 0x1c47d0: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x1c47d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1c47d4: 0x8e020954  lw          $v0, 0x954($s0)
    ctx->pc = 0x1c47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2388)));
    // 0x1c47d8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C47D8u;
    {
        const bool branch_taken_0x1c47d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47D8u;
        // 0x1c47dc: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47d8) {
            ctx->pc = 0x1C489Cu;
            goto label_1c489c;
        }
    }
    ctx->pc = 0x1C47E0u;
    // 0x1c47e0: 0x8e040948  lw          $a0, 0x948($s0)
    ctx->pc = 0x1c47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
    // 0x1c47e4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C47E4u;
    {
        const bool branch_taken_0x1c47e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47E4u;
        // 0x1c47e8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47e4) {
            ctx->pc = 0x1C481Cu;
            goto label_1c481c;
        }
    }
    ctx->pc = 0x1C47ECu;
    // 0x1c47ec: 0x9603094c  lhu         $v1, 0x94C($s0)
    ctx->pc = 0x1c47ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2380)));
    // 0x1c47f0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C47F0u;
    {
        const bool branch_taken_0x1c47f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c47f0) {
            ctx->pc = 0x1C47F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C47F0u;
            // 0x1c47f4: 0x2922021  addu        $a0, $s4, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4820u;
            goto label_1c4820;
        }
    }
    ctx->pc = 0x1C47F8u;
    // 0x1c47f8: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x1C47F8u;
    SET_GPR_U32(ctx, 31, 0x1C4800u);
    ctx->pc = 0x1C47FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47F8u;
    // 0x1c47fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1C47F8u, 0x1C4800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4800u;
label_1c4800:
    // 0x1c4800: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c4800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c4804: 0x8e040948  lw          $a0, 0x948($s0)
    ctx->pc = 0x1c4804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
    // 0x1c4808: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c4808u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c480c: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1C480Cu;
    SET_GPR_U32(ctx, 31, 0x1C4814u);
    ctx->pc = 0x1C4810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C480Cu;
    // 0x1c4810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C480Cu, 0x1C4814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4814u;
label_1c4814:
    // 0x1c4814: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C4814u;
    {
        const bool branch_taken_0x1c4814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4814u;
        // 0x1c4818: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4814) {
            ctx->pc = 0x1C48A0u;
            goto label_1c48a0;
        }
    }
    ctx->pc = 0x1C481Cu;
label_1c481c:
    // 0x1c481c: 0x2922021  addu        $a0, $s4, $s2
    ctx->pc = 0x1c481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1c4820:
    // 0x1c4820: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C4820u;
    SET_GPR_U32(ctx, 31, 0x1C4828u);
    ctx->pc = 0x1C4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4820u;
    // 0x1c4824: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C4820u, 0x1C4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4828u;
label_1c4828:
    // 0x1c4828: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x1C4828u;
    SET_GPR_U32(ctx, 31, 0x1C4830u);
    ctx->pc = 0x1C482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4828u;
    // 0x1c482c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x1C4828u, 0x1C4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4830u;
label_1c4830:
    // 0x1c4830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4834: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4838: 0x12220019  beq         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4838u;
    {
        const bool branch_taken_0x1c4838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4838u;
        // 0x1c483c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4838) {
            ctx->pc = 0x1C48A0u;
            goto label_1c48a0;
        }
    }
    ctx->pc = 0x1C4840u;
    // 0x1c4840: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C4840u;
    {
        const bool branch_taken_0x1c4840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4840u;
        // 0x1c4844: 0x2548821  addu        $s1, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4840) {
            ctx->pc = 0x1C48A0u;
            goto label_1c48a0;
        }
    }
    ctx->pc = 0x1C4848u;
    // 0x1c4848: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1c4848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1c484c: 0xae330938  sw          $s3, 0x938($s1)
    ctx->pc = 0x1c484cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 19));
    // 0x1c4850: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c4850u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x1c4854: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1c4854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4858: 0xc46100c0  lwc1        $f1, 0xC0($v1)
    ctx->pc = 0x1c4858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c485c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c485cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c4860: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c4860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1c4864: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x1c4864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x1c4868: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x1C4868u;
    SET_GPR_U32(ctx, 31, 0x1C4870u);
    ctx->pc = 0x1C486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4868u;
    // 0x1c486c: 0xe46100c0  swc1        $f1, 0xC0($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1C4868u, 0x1C4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4870u;
label_1c4870:
    // 0x1c4870: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c4870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1c4874: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x1C4874u;
    SET_GPR_U32(ctx, 31, 0x1C487Cu);
    ctx->pc = 0x1C4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4874u;
    // 0x1c4878: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1C4874u, 0x1C487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C487Cu;
label_1c487c:
    // 0x1c487c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C487Cu;
    SET_GPR_U32(ctx, 31, 0x1C4884u);
    ctx->pc = 0x1C4880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C487Cu;
    // 0x1c4880: 0x26240944  addiu       $a0, $s1, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C487Cu, 0x1C4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4884u;
label_1c4884:
    // 0x1c4884: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c4884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1c4888: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c488c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1C488Cu;
    SET_GPR_U32(ctx, 31, 0x1C4894u);
    ctx->pc = 0x1C4890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C488Cu;
    // 0x1c4890: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1C488Cu, 0x1C4894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4894u;
label_1c4894:
    // 0x1c4894: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1C4894u;
    SET_GPR_U32(ctx, 31, 0x1C489Cu);
    ctx->pc = 0x1C4898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4894u;
    // 0x1c4898: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1C4894u, 0x1C489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C489Cu;
label_1c489c:
    // 0x1c489c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c489cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c48a0:
    // 0x1c48a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c48a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c48a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c48a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c48a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c48a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c48ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1c48acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c48b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c48b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48b4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c48b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c48b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48B8u;
        // 0x1c48bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C48B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C48C0u;
}
