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

// Function: sub_003C5860
// Address: 0x3c5860 - 0x3c5960
void sub_003C5860_0x3c5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5860_0x3c5860");
#endif

    switch (ctx->pc) {
        case 0x3c58b8u: goto label_3c58b8;
        case 0x3c58c4u: goto label_3c58c4;
        case 0x3c58d0u: goto label_3c58d0;
        case 0x3c58dcu: goto label_3c58dc;
        case 0x3c58e8u: goto label_3c58e8;
        case 0x3c58f4u: goto label_3c58f4;
        case 0x3c5900u: goto label_3c5900;
        case 0x3c590cu: goto label_3c590c;
        case 0x3c5918u: goto label_3c5918;
        case 0x3c5928u: goto label_3c5928;
        case 0x3c5930u: goto label_3c5930;
        default: break;
    }

    ctx->pc = 0x3c5860u;

    // 0x3c5860: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c5860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3c5864: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c5864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c5868: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c5868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3c586c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c586cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5870: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5874: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c5874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3c5878: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c587c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c587cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5880: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3c5880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3c5884: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5888: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3c5888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3c588c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c588cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5890: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3c5890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3c5894: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3c5894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5898: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x3c5898u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3c589c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3c589cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c58a0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3c58a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3c58a4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3c58a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3c58a8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c58ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c58acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c58b0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C58B0u;
    SET_GPR_U32(ctx, 31, 0x3C58B8u);
    ctx->pc = 0x3C58B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58B0u;
    // 0x3c58b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C58B0u, 0x3C58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58B8u;
label_3c58b8:
    // 0x3c58b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c58bc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C58BCu;
    SET_GPR_U32(ctx, 31, 0x3C58C4u);
    ctx->pc = 0x3C58C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58BCu;
    // 0x3c58c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C58BCu, 0x3C58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58C4u;
label_3c58c4:
    // 0x3c58c4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c58c8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C58C8u;
    SET_GPR_U32(ctx, 31, 0x3C58D0u);
    ctx->pc = 0x3C58CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58C8u;
    // 0x3c58cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C58C8u, 0x3C58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58D0u;
label_3c58d0:
    // 0x3c58d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c58d4: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C58D4u;
    SET_GPR_U32(ctx, 31, 0x3C58DCu);
    ctx->pc = 0x3C58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58D4u;
    // 0x3c58d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C58D4u, 0x3C58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58DCu;
label_3c58dc:
    // 0x3c58dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c58e0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C58E0u;
    SET_GPR_U32(ctx, 31, 0x3C58E8u);
    ctx->pc = 0x3C58E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58E0u;
    // 0x3c58e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C58E0u, 0x3C58E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58E8u;
label_3c58e8:
    // 0x3c58e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c58ec: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C58ECu;
    SET_GPR_U32(ctx, 31, 0x3C58F4u);
    ctx->pc = 0x3C58F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58ECu;
    // 0x3c58f0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C58ECu, 0x3C58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58F4u;
label_3c58f4:
    // 0x3c58f4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c58f8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C58F8u;
    SET_GPR_U32(ctx, 31, 0x3C5900u);
    ctx->pc = 0x3C58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58F8u;
    // 0x3c58fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C58F8u, 0x3C5900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5900u;
label_3c5900:
    // 0x3c5900: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5904: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5904u;
    SET_GPR_U32(ctx, 31, 0x3C590Cu);
    ctx->pc = 0x3C5908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5904u;
    // 0x3c5908: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5904u, 0x3C590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C590Cu;
label_3c590c:
    // 0x3c590c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c590cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5910: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5910u;
    SET_GPR_U32(ctx, 31, 0x3C5918u);
    ctx->pc = 0x3C5914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5910u;
    // 0x3c5914: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5910u, 0x3C5918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5918u;
label_3c5918:
    // 0x3c5918: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c591c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c591cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5920: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5920u;
    SET_GPR_U32(ctx, 31, 0x3C5928u);
    ctx->pc = 0x3C5924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5920u;
    // 0x3c5924: 0x24a53bf8  addiu       $a1, $a1, 0x3BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5920u, 0x3C5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5928u;
label_3c5928:
    // 0x3c5928: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5928u;
    SET_GPR_U32(ctx, 31, 0x3C5930u);
    ctx->pc = 0x3C592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5928u;
    // 0x3c592c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5928u, 0x3C5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5930u;
label_3c5930:
    // 0x3c5930: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c5930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c5934: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c5934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c5938: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c5938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c593c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c593cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5940: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3c5940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5944: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3c5944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5948: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3c5948u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c594c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5950: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x3c5950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c5954: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3c5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5958: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5958u;
        // 0x3c595c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5960u;
}
