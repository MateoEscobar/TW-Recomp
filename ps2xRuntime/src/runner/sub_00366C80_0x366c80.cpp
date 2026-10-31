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

// Function: sub_00366C80
// Address: 0x366c80 - 0x366dd0
void sub_00366C80_0x366c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366C80_0x366c80");
#endif

    switch (ctx->pc) {
        case 0x366cb8u: goto label_366cb8;
        case 0x366cc0u: goto label_366cc0;
        case 0x366cd4u: goto label_366cd4;
        case 0x366cdcu: goto label_366cdc;
        case 0x366cf0u: goto label_366cf0;
        case 0x366d04u: goto label_366d04;
        case 0x366d0cu: goto label_366d0c;
        case 0x366d20u: goto label_366d20;
        case 0x366d28u: goto label_366d28;
        case 0x366d50u: goto label_366d50;
        case 0x366d58u: goto label_366d58;
        case 0x366d74u: goto label_366d74;
        case 0x366d80u: goto label_366d80;
        case 0x366d98u: goto label_366d98;
        case 0x366da4u: goto label_366da4;
        default: break;
    }

    ctx->pc = 0x366c80u;

    // 0x366c80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x366c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x366c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366c88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x366c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x366c8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x366c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x366c90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x366c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x366c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x366c9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x366c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x366ca0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x366ca0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x366ca4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x366ca4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x366ca8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x366ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x366cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366cb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366CB0u;
    SET_GPR_U32(ctx, 31, 0x366CB8u);
    ctx->pc = 0x366CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CB0u;
    // 0x366cb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366CB0u, 0x366CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CB8u;
label_366cb8:
    // 0x366cb8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366CB8u;
    SET_GPR_U32(ctx, 31, 0x366CC0u);
    ctx->pc = 0x366CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CB8u;
    // 0x366cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366CB8u, 0x366CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CC0u;
label_366cc0:
    // 0x366cc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366cc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x366cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366cc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x366cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ccc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366CCCu;
    SET_GPR_U32(ctx, 31, 0x366CD4u);
    ctx->pc = 0x366CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CCCu;
    // 0x366cd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366CCCu, 0x366CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CD4u;
label_366cd4:
    // 0x366cd4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366CD4u;
    SET_GPR_U32(ctx, 31, 0x366CDCu);
    ctx->pc = 0x366CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CD4u;
    // 0x366cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366CD4u, 0x366CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CDCu;
label_366cdc:
    // 0x366cdc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x366cdcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x366ce0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ce4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x366ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366ce8: 0xc102488  jal         func_409220
    ctx->pc = 0x366CE8u;
    SET_GPR_U32(ctx, 31, 0x366CF0u);
    ctx->pc = 0x366CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CE8u;
    // 0x366cec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x366CE8u, 0x366CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CF0u;
label_366cf0:
    // 0x366cf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366cf4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x366cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366cf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x366cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366cfc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366CFCu;
    SET_GPR_U32(ctx, 31, 0x366D04u);
    ctx->pc = 0x366D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CFCu;
    // 0x366d00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366CFCu, 0x366D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D04u;
label_366d04:
    // 0x366d04: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366D04u;
    SET_GPR_U32(ctx, 31, 0x366D0Cu);
    ctx->pc = 0x366D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D04u;
    // 0x366d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366D04u, 0x366D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D0Cu;
label_366d0c:
    // 0x366d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d10: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x366d10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x366d14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366d18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366D18u;
    SET_GPR_U32(ctx, 31, 0x366D20u);
    ctx->pc = 0x366D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D18u;
    // 0x366d1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366D18u, 0x366D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D20u;
label_366d20:
    // 0x366d20: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366D20u;
    SET_GPR_U32(ctx, 31, 0x366D28u);
    ctx->pc = 0x366D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D20u;
    // 0x366d24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366D20u, 0x366D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D28u;
label_366d28:
    // 0x366d28: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x366d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x366d2c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x366d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x366d30: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x366d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x366d34: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x366d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x366d38: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x366d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x366d3c: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x366d3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x366d40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366d40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366d44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x366d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x366d48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366D48u;
    SET_GPR_U32(ctx, 31, 0x366D50u);
    ctx->pc = 0x366D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D48u;
    // 0x366d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366D48u, 0x366D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D50u;
label_366d50:
    // 0x366d50: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366D50u;
    SET_GPR_U32(ctx, 31, 0x366D58u);
    ctx->pc = 0x366D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D50u;
    // 0x366d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366D50u, 0x366D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D58u;
label_366d58:
    // 0x366d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d5c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x366d5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x366d60: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x366d60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x366d64: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x366d64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x366d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x366d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d6c: 0xc047278  jal         func_11C9E0
    ctx->pc = 0x366D6Cu;
    SET_GPR_U32(ctx, 31, 0x366D74u);
    ctx->pc = 0x366D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D6Cu;
    // 0x366d70: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C9E0u, 0x366D6Cu, 0x366D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D74u;
label_366d74:
    // 0x366d74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d78: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x366D78u;
    SET_GPR_U32(ctx, 31, 0x366D80u);
    ctx->pc = 0x366D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D78u;
    // 0x366d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x366D78u, 0x366D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D80u;
label_366d80:
    // 0x366d80: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366D80u;
    {
        const bool branch_taken_0x366d80 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x366D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D80u;
        // 0x366d84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366d80) {
            ctx->pc = 0x366D9Cu;
            goto label_366d9c;
        }
    }
    ctx->pc = 0x366D88u;
    // 0x366d88: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x366d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x366d8c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x366d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x366d90: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x366D90u;
    SET_GPR_U32(ctx, 31, 0x366D98u);
    ctx->pc = 0x366D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D90u;
    // 0x366d94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x366D90u, 0x366D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D98u;
label_366d98:
    // 0x366d98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_366d9c:
    // 0x366d9c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x366D9Cu;
    SET_GPR_U32(ctx, 31, 0x366DA4u);
    ctx->pc = 0x366DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D9Cu;
    // 0x366da0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x366D9Cu, 0x366DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DA4u;
label_366da4:
    // 0x366da4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x366da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366dac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x366dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366db0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x366db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366db4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x366db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x366db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366dbc: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x366dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x366dc0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x366dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x366dc4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x366dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x366DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366DC8u;
        // 0x366dcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366DD0u;
}
