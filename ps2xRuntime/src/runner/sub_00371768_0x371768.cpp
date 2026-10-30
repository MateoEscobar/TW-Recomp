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

// Function: sub_00371768
// Address: 0x371768 - 0x371868
void sub_00371768_0x371768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371768_0x371768");
#endif

    switch (ctx->pc) {
        case 0x371790u: goto label_371790;
        case 0x3717a0u: goto label_3717a0;
        case 0x3717b8u: goto label_3717b8;
        case 0x3717c0u: goto label_3717c0;
        case 0x3717dcu: goto label_3717dc;
        case 0x3717e8u: goto label_3717e8;
        case 0x371800u: goto label_371800;
        case 0x37180cu: goto label_37180c;
        case 0x371818u: goto label_371818;
        case 0x371828u: goto label_371828;
        case 0x37183cu: goto label_37183c;
        default: break;
    }

    ctx->pc = 0x371768u;

    // 0x371768: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x371768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37176c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371770: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x371770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x371774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371778: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x371778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37177c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x371780: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x371780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x371784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x371784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x371788: 0xc102488  jal         func_409220
    ctx->pc = 0x371788u;
    SET_GPR_U32(ctx, 31, 0x371790u);
    ctx->pc = 0x37178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371788u;
    // 0x37178c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371788u, 0x371790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371790u;
label_371790:
    // 0x371790: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x371790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371794: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371798: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x371798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37179c: 0x0  nop
    ctx->pc = 0x37179cu;
    // NOP
label_3717a0:
    // 0x3717a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3717a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3717a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3717a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3717a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3717ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3717acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717b0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3717B0u;
    SET_GPR_U32(ctx, 31, 0x3717B8u);
    ctx->pc = 0x3717B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3717B0u;
    // 0x3717b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3717B0u, 0x3717B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717B8u;
label_3717b8:
    // 0x3717b8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3717B8u;
    SET_GPR_U32(ctx, 31, 0x3717C0u);
    ctx->pc = 0x3717BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3717B8u;
    // 0x3717bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3717B8u, 0x3717C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717C0u;
label_3717c0:
    // 0x3717c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3717c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3717c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3717c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3717c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3717C8u;
    {
        const bool branch_taken_0x3717c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3717CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717C8u;
        // 0x3717cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717c8) {
            ctx->pc = 0x3717A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3717a0;
        }
    }
    ctx->pc = 0x3717D0u;
    // 0x3717d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3717d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717d4: 0xc044dc0  jal         func_113700
    ctx->pc = 0x3717D4u;
    SET_GPR_U32(ctx, 31, 0x3717DCu);
    ctx->pc = 0x3717D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3717D4u;
    // 0x3717d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113700u, 0x3717D4u, 0x3717DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717DCu;
label_3717dc:
    // 0x3717dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3717dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717e0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3717E0u;
    SET_GPR_U32(ctx, 31, 0x3717E8u);
    ctx->pc = 0x3717E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3717E0u;
    // 0x3717e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3717E0u, 0x3717E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717E8u;
label_3717e8:
    // 0x3717e8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3717E8u;
    {
        const bool branch_taken_0x3717e8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3717ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717E8u;
        // 0x3717ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717e8) {
            ctx->pc = 0x371804u;
            goto label_371804;
        }
    }
    ctx->pc = 0x3717F0u;
    // 0x3717f0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3717f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3717f4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3717f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3717f8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3717F8u;
    SET_GPR_U32(ctx, 31, 0x371800u);
    ctx->pc = 0x3717FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3717F8u;
    // 0x3717fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3717F8u, 0x371800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371800u;
label_371800:
    // 0x371800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x371800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371804:
    // 0x371804: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x371804u;
    SET_GPR_U32(ctx, 31, 0x37180Cu);
    ctx->pc = 0x371808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371804u;
    // 0x371808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x371804u, 0x37180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37180Cu;
label_37180c:
    // 0x37180c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37180cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371810: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x371810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371814: 0x0  nop
    ctx->pc = 0x371814u;
    // NOP
label_371818:
    // 0x371818: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x371818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37181c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37181cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371820: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x371820u;
    SET_GPR_U32(ctx, 31, 0x371828u);
    ctx->pc = 0x371824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371820u;
    // 0x371824: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x371820u, 0x371828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371828u;
label_371828:
    // 0x371828: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x371828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37182c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371834: 0xc102576  jal         func_4095D8
    ctx->pc = 0x371834u;
    SET_GPR_U32(ctx, 31, 0x37183Cu);
    ctx->pc = 0x371838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371834u;
    // 0x371838: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x371834u, 0x37183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37183Cu;
label_37183c:
    // 0x37183c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37183cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371840u;
    {
        const bool branch_taken_0x371840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371840u;
        // 0x371844: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371840) {
            ctx->pc = 0x371818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371818;
        }
    }
    ctx->pc = 0x371848u;
    // 0x371848: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x371848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37184c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371850: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x371850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371854: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x371854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371858: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x371858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37185c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371860: 0x3e00008  jr          $ra
    ctx->pc = 0x371860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371860u;
        // 0x371864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371868u;
}
