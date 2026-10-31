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

// Function: sub_004B8A70
// Address: 0x4b8a70 - 0x4b8b58
void sub_004B8A70_0x4b8a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8A70_0x4b8a70");
#endif

    switch (ctx->pc) {
        case 0x4b8aa8u: goto label_4b8aa8;
        case 0x4b8ad4u: goto label_4b8ad4;
        case 0x4b8b14u: goto label_4b8b14;
        case 0x4b8b2cu: goto label_4b8b2c;
        case 0x4b8b3cu: goto label_4b8b3c;
        case 0x4b8b4cu: goto label_4b8b4c;
        default: break;
    }

    ctx->pc = 0x4b8a70u;

    // 0x4b8a70: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4b8a70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b8a74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b8a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b8a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8a7c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4b8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4b8a80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8a84: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x4b8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x4b8a88: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b8a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b8a8c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x4b8a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x4b8a90: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b8a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b8a94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8A94u;
    {
        const bool branch_taken_0x4b8a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8A94u;
        // 0x4b8a98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8a94) {
            ctx->pc = 0x4B8AB0u;
            goto label_4b8ab0;
        }
    }
    ctx->pc = 0x4B8A9Cu;
    // 0x4b8a9c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4b8a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4b8aa0: 0xc12f51e  jal         func_4BD478
    ctx->pc = 0x4B8AA0u;
    SET_GPR_U32(ctx, 31, 0x4B8AA8u);
    ctx->pc = 0x4BD478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD478u, 0x4B8AA0u, 0x4B8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8AA8u;
label_4b8aa8:
    // 0x4b8aa8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4B8AA8u;
    {
        const bool branch_taken_0x4b8aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8AA8u;
        // 0x4b8aac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8aa8) {
            ctx->pc = 0x4B8B50u;
            goto label_4b8b50;
        }
    }
    ctx->pc = 0x4B8AB0u;
label_4b8ab0:
    // 0x4b8ab0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x4b8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x4b8ab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b8ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8ab8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b8ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b8abc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8ABCu;
    {
        const bool branch_taken_0x4b8abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8abc) {
            ctx->pc = 0x4B8ACCu;
            goto label_4b8acc;
        }
    }
    ctx->pc = 0x4B8AC4u;
    // 0x4b8ac4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4B8AC4u;
    {
        const bool branch_taken_0x4b8ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8AC4u;
        // 0x4b8ac8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ac4) {
            ctx->pc = 0x4B8B4Cu;
            goto label_4b8b4c;
        }
    }
    ctx->pc = 0x4B8ACCu;
label_4b8acc:
    // 0x4b8acc: 0xc12f3d8  jal         func_4BCF60
    ctx->pc = 0x4B8ACCu;
    SET_GPR_U32(ctx, 31, 0x4B8AD4u);
    ctx->pc = 0x4B8AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8ACCu;
    // 0x4b8ad0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BCF60u, 0x4B8ACCu, 0x4B8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8AD4u;
label_4b8ad4:
    // 0x4b8ad4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4b8ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4b8ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8adc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B8ADCu;
    {
        const bool branch_taken_0x4b8adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8ADCu;
        // 0x4b8ae0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8adc) {
            ctx->pc = 0x4B8B1Cu;
            goto label_4b8b1c;
        }
    }
    ctx->pc = 0x4B8AE4u;
    // 0x4b8ae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8AE4u;
    {
        const bool branch_taken_0x4b8ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8AE4u;
        // 0x4b8ae8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ae4) {
            ctx->pc = 0x4B8AFCu;
            goto label_4b8afc;
        }
    }
    ctx->pc = 0x4B8AECu;
    // 0x4b8aec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B8AECu;
    {
        const bool branch_taken_0x4b8aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8AECu;
        // 0x4b8af0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8aec) {
            ctx->pc = 0x4B8B0Cu;
            goto label_4b8b0c;
        }
    }
    ctx->pc = 0x4B8AF4u;
    // 0x4b8af4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4B8AF4u;
    {
        const bool branch_taken_0x4b8af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8AF4u;
        // 0x4b8af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8af4) {
            ctx->pc = 0x4B8B44u;
            goto label_4b8b44;
        }
    }
    ctx->pc = 0x4B8AFCu;
label_4b8afc:
    // 0x4b8afc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B8AFCu;
    {
        const bool branch_taken_0x4b8afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8AFCu;
        // 0x4b8b00: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8afc) {
            ctx->pc = 0x4B8B34u;
            goto label_4b8b34;
        }
    }
    ctx->pc = 0x4B8B04u;
    // 0x4b8b04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B8B04u;
    {
        const bool branch_taken_0x4b8b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8B04u;
        // 0x4b8b08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8b04) {
            ctx->pc = 0x4B8B44u;
            goto label_4b8b44;
        }
    }
    ctx->pc = 0x4B8B0Cu;
label_4b8b0c:
    // 0x4b8b0c: 0xc12f51e  jal         func_4BD478
    ctx->pc = 0x4B8B0Cu;
    SET_GPR_U32(ctx, 31, 0x4B8B14u);
    ctx->pc = 0x4B8B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B0Cu;
    // 0x4b8b10: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD478u, 0x4B8B0Cu, 0x4B8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8B14u;
label_4b8b14:
    // 0x4b8b14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4B8B14u;
    {
        const bool branch_taken_0x4b8b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8B14u;
        // 0x4b8b18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8b14) {
            ctx->pc = 0x4B8B50u;
            goto label_4b8b50;
        }
    }
    ctx->pc = 0x4B8B1Cu;
label_4b8b1c:
    // 0x4b8b1c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x4b8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b8b20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b8b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8b24: 0xc12f7c8  jal         func_4BDF20
    ctx->pc = 0x4B8B24u;
    SET_GPR_U32(ctx, 31, 0x4B8B2Cu);
    ctx->pc = 0x4B8B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B24u;
    // 0x4b8b28: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BDF20u, 0x4B8B24u, 0x4B8B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8B2Cu;
label_4b8b2c:
    // 0x4b8b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B8B2Cu;
    {
        const bool branch_taken_0x4b8b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8B2Cu;
        // 0x4b8b30: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8b2c) {
            ctx->pc = 0x4B8B4Cu;
            goto label_4b8b4c;
        }
    }
    ctx->pc = 0x4B8B34u;
label_4b8b34:
    // 0x4b8b34: 0xc12f51e  jal         func_4BD478
    ctx->pc = 0x4B8B34u;
    SET_GPR_U32(ctx, 31, 0x4B8B3Cu);
    ctx->pc = 0x4B8B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B34u;
    // 0x4b8b38: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD478u, 0x4B8B34u, 0x4B8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8B3Cu;
label_4b8b3c:
    // 0x4b8b3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8B3Cu;
    {
        const bool branch_taken_0x4b8b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8B3Cu;
        // 0x4b8b40: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8b3c) {
            ctx->pc = 0x4B8B4Cu;
            goto label_4b8b4c;
        }
    }
    ctx->pc = 0x4B8B44u;
label_4b8b44:
    // 0x4b8b44: 0xc12f7c8  jal         func_4BDF20
    ctx->pc = 0x4B8B44u;
    SET_GPR_U32(ctx, 31, 0x4B8B4Cu);
    ctx->pc = 0x4B8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B44u;
    // 0x4b8b48: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BDF20u, 0x4B8B44u, 0x4B8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8B4Cu;
label_4b8b4c:
    // 0x4b8b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8b50:
    // 0x4b8b50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8B50u;
        // 0x4b8b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8B58u;
}
