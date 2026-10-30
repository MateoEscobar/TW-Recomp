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

// Function: sub_004B9870
// Address: 0x4b9870 - 0x4b99b0
void sub_004B9870_0x4b9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9870_0x4b9870");
#endif

    switch (ctx->pc) {
        case 0x4b989cu: goto label_4b989c;
        case 0x4b98b4u: goto label_4b98b4;
        case 0x4b98c4u: goto label_4b98c4;
        case 0x4b98fcu: goto label_4b98fc;
        case 0x4b9908u: goto label_4b9908;
        case 0x4b9918u: goto label_4b9918;
        case 0x4b9944u: goto label_4b9944;
        case 0x4b9954u: goto label_4b9954;
        case 0x4b9970u: goto label_4b9970;
        case 0x4b9980u: goto label_4b9980;
        default: break;
    }

    ctx->pc = 0x4b9870u;

    // 0x4b9870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4b9870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4b9874: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x4b9874u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b9878: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x4b9878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b987c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x4b987cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x4b9880: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x4b9880u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x4b9884: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b9888: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b9888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b988c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x4b988cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4b9890: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b9890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b9894: 0xc12f056  jal         func_4BC158
    ctx->pc = 0x4B9894u;
    SET_GPR_U32(ctx, 31, 0x4B989Cu);
    ctx->pc = 0x4B9898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9894u;
    // 0x4b9898: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BC158u, 0x4B9894u, 0x4B989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B989Cu;
label_4b989c:
    // 0x4b989c: 0x8e301974  lw          $s0, 0x1974($s1)
    ctx->pc = 0x4b989cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
    // 0x4b98a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b98a4: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4B98A4u;
    {
        const bool branch_taken_0x4b98a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B98A4u;
        // 0x4b98a8: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b98a4) {
            ctx->pc = 0x4B9988u;
            goto label_4b9988;
        }
    }
    ctx->pc = 0x4B98ACu;
    // 0x4b98ac: 0xc12f982  jal         func_4BE608
    ctx->pc = 0x4B98ACu;
    SET_GPR_U32(ctx, 31, 0x4B98B4u);
    ctx->pc = 0x4B98B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B98ACu;
    // 0x4b98b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE608u, 0x4B98ACu, 0x4B98B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B98B4u;
label_4b98b4:
    // 0x4b98b4: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4B98B4u;
    {
        const bool branch_taken_0x4b98b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B98B4u;
        // 0x4b98b8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b98b4) {
            ctx->pc = 0x4B998Cu;
            goto label_4b998c;
        }
    }
    ctx->pc = 0x4B98BCu;
    // 0x4b98bc: 0xc12f982  jal         func_4BE608
    ctx->pc = 0x4B98BCu;
    SET_GPR_U32(ctx, 31, 0x4B98C4u);
    ctx->pc = 0x4B98C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B98BCu;
    // 0x4b98c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE608u, 0x4B98BCu, 0x4B98C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B98C4u;
label_4b98c4:
    // 0x4b98c4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4B98C4u;
    {
        const bool branch_taken_0x4b98c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B98C4u;
        // 0x4b98c8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b98c4) {
            ctx->pc = 0x4B998Cu;
            goto label_4b998c;
        }
    }
    ctx->pc = 0x4B98CCu;
    // 0x4b98cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b98ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b98d0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4b98d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b98d4: 0x0  nop
    ctx->pc = 0x4b98d4u;
    // NOP
    // 0x4b98d8: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x4B98D8u;
    {
        const bool branch_taken_0x4b98d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B98D8u;
        // 0x4b98dc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b98d8) {
            ctx->pc = 0x4B9988u;
            goto label_4b9988;
        }
    }
    ctx->pc = 0x4B98E0u;
    // 0x4b98e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b98e4: 0x24420fb8  addiu       $v0, $v0, 0xFB8
    ctx->pc = 0x4b98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4024));
    // 0x4b98e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b98ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b98f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4b98f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x4b98f4: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B98F4u;
    SET_GPR_U32(ctx, 31, 0x4B98FCu);
    ctx->pc = 0x4B98F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B98F4u;
    // 0x4b98f8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B98F4u, 0x4B98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B98FCu;
label_4b98fc:
    // 0x4b98fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b98fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9900: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9900u;
    SET_GPR_U32(ctx, 31, 0x4B9908u);
    ctx->pc = 0x4B9904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9900u;
    // 0x4b9904: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9900u, 0x4B9908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9908u;
label_4b9908:
    // 0x4b9908: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9908u;
    {
        const bool branch_taken_0x4b9908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9908u;
        // 0x4b990c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9908) {
            ctx->pc = 0x4B9920u;
            goto label_4b9920;
        }
    }
    ctx->pc = 0x4B9910u;
    // 0x4b9910: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9910u;
    SET_GPR_U32(ctx, 31, 0x4B9918u);
    ctx->pc = 0x4B9914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9910u;
    // 0x4b9914: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9910u, 0x4B9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9918u;
label_4b9918:
    // 0x4b9918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B9918u;
    {
        const bool branch_taken_0x4b9918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9918u;
        // 0x4b991c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9918) {
            ctx->pc = 0x4B992Cu;
            goto label_4b992c;
        }
    }
    ctx->pc = 0x4B9920u;
label_4b9920:
    // 0x4b9920: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9924: 0xdc430fc0  ld          $v1, 0xFC0($v0)
    ctx->pc = 0x4b9924u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x590FC0u));
    // 0x4b9928: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4b9928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_4b992c:
    // 0x4b992c: 0x8e231974  lw          $v1, 0x1974($s1)
    ctx->pc = 0x4b992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
    // 0x4b9930: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9934: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9934u;
    {
        const bool branch_taken_0x4b9934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9934) {
            ctx->pc = 0x4B994Cu;
            goto label_4b994c;
        }
    }
    ctx->pc = 0x4B993Cu;
    // 0x4b993c: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B993Cu;
    SET_GPR_U32(ctx, 31, 0x4B9944u);
    ctx->pc = 0x4B9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B993Cu;
    // 0x4b9940: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B993Cu, 0x4B9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9944u;
label_4b9944:
    // 0x4b9944: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9944u;
    {
        const bool branch_taken_0x4b9944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9944u;
        // 0x4b9948: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9944) {
            ctx->pc = 0x4B9960u;
            goto label_4b9960;
        }
    }
    ctx->pc = 0x4B994Cu;
label_4b994c:
    // 0x4b994c: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B994Cu;
    SET_GPR_U32(ctx, 31, 0x4B9954u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B994Cu, 0x4B9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9954u;
label_4b9954:
    // 0x4b9954: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x4b9954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4b9958: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b995c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9960:
    // 0x4b9960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9960u;
    {
        const bool branch_taken_0x4b9960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9960) {
            ctx->pc = 0x4B9978u;
            goto label_4b9978;
        }
    }
    ctx->pc = 0x4B9968u;
    // 0x4b9968: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9968u;
    SET_GPR_U32(ctx, 31, 0x4B9970u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9968u, 0x4B9970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9970u;
label_4b9970:
    // 0x4b9970: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b9970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9974: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b9978:
    // 0x4b9978: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x4B9978u;
    SET_GPR_U32(ctx, 31, 0x4B9980u);
    ctx->pc = 0x4B997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9978u;
    // 0x4b997c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x4B9978u, 0x4B9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9980u;
label_4b9980:
    // 0x4b9980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B9980u;
    {
        const bool branch_taken_0x4b9980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9980u;
        // 0x4b9984: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9980) {
            ctx->pc = 0x4B9990u;
            goto label_4b9990;
        }
    }
    ctx->pc = 0x4B9988u;
label_4b9988:
    // 0x4b9988: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x4b9988u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_4b998c:
    // 0x4b998c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b9990:
    // 0x4b9990: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b9990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9994: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b9994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9998: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x4b9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4b999c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x4b999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4b99a0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x4b99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b99a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B99A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B99A4u;
        // 0x4b99a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B99A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B99ACu;
    // 0x4b99ac: 0x0  nop
    ctx->pc = 0x4b99acu;
    // NOP
    ctx->pc = 0x4b99b0u;
}
