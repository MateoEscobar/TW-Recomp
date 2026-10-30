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

// Function: sub_003669B0
// Address: 0x3669b0 - 0x366bd8
void sub_003669B0_0x3669b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003669B0_0x3669b0");
#endif

    switch (ctx->pc) {
        case 0x3669f0u: goto label_3669f0;
        case 0x3669f8u: goto label_3669f8;
        case 0x366a0cu: goto label_366a0c;
        case 0x366a14u: goto label_366a14;
        case 0x366a28u: goto label_366a28;
        case 0x366a30u: goto label_366a30;
        case 0x366a44u: goto label_366a44;
        case 0x366a4cu: goto label_366a4c;
        case 0x366a60u: goto label_366a60;
        case 0x366a68u: goto label_366a68;
        case 0x366a78u: goto label_366a78;
        case 0x366a90u: goto label_366a90;
        case 0x366a98u: goto label_366a98;
        case 0x366ab0u: goto label_366ab0;
        case 0x366ac8u: goto label_366ac8;
        case 0x366ad0u: goto label_366ad0;
        case 0x366b00u: goto label_366b00;
        case 0x366b0cu: goto label_366b0c;
        case 0x366b24u: goto label_366b24;
        case 0x366b30u: goto label_366b30;
        case 0x366b38u: goto label_366b38;
        case 0x366b48u: goto label_366b48;
        case 0x366b5cu: goto label_366b5c;
        case 0x366b70u: goto label_366b70;
        case 0x366b80u: goto label_366b80;
        case 0x366b94u: goto label_366b94;
        default: break;
    }

    ctx->pc = 0x3669b0u;

    // 0x3669b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3669b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3669b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3669b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3669b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3669b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3669bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3669bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3669c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3669c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3669c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3669c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3669cc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3669ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3669d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3669d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3669d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3669d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3669d8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x3669d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3669dc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3669dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3669e0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3669e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3669e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3669e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3669e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3669E8u;
    SET_GPR_U32(ctx, 31, 0x3669F0u);
    ctx->pc = 0x3669ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3669E8u;
    // 0x3669ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3669E8u, 0x3669F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3669F0u;
label_3669f0:
    // 0x3669f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3669F0u;
    SET_GPR_U32(ctx, 31, 0x3669F8u);
    ctx->pc = 0x3669F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3669F0u;
    // 0x3669f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3669F0u, 0x3669F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3669F8u;
label_3669f8:
    // 0x3669f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3669f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3669fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366A04u;
    SET_GPR_U32(ctx, 31, 0x366A0Cu);
    ctx->pc = 0x366A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A04u;
    // 0x366a08: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366A04u, 0x366A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A0Cu;
label_366a0c:
    // 0x366a0c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366A0Cu;
    SET_GPR_U32(ctx, 31, 0x366A14u);
    ctx->pc = 0x366A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A0Cu;
    // 0x366a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366A0Cu, 0x366A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A14u;
label_366a14:
    // 0x366a14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x366a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366a1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366A20u;
    SET_GPR_U32(ctx, 31, 0x366A28u);
    ctx->pc = 0x366A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A20u;
    // 0x366a24: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366A20u, 0x366A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A28u;
label_366a28:
    // 0x366a28: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366A28u;
    SET_GPR_U32(ctx, 31, 0x366A30u);
    ctx->pc = 0x366A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A28u;
    // 0x366a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366A28u, 0x366A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A30u;
label_366a30:
    // 0x366a30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x366a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x366a38: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x366a38u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x366a3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366A3Cu;
    SET_GPR_U32(ctx, 31, 0x366A44u);
    ctx->pc = 0x366A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A3Cu;
    // 0x366a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366A3Cu, 0x366A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A44u;
label_366a44:
    // 0x366a44: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366A44u;
    SET_GPR_U32(ctx, 31, 0x366A4Cu);
    ctx->pc = 0x366A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A44u;
    // 0x366a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366A44u, 0x366A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A4Cu;
label_366a4c:
    // 0x366a4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a50: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x366a50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x366a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366A58u;
    SET_GPR_U32(ctx, 31, 0x366A60u);
    ctx->pc = 0x366A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A58u;
    // 0x366a5c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366A58u, 0x366A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A60u;
label_366a60:
    // 0x366a60: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366A60u;
    SET_GPR_U32(ctx, 31, 0x366A68u);
    ctx->pc = 0x366A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A60u;
    // 0x366a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366A60u, 0x366A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A68u;
label_366a68:
    // 0x366a68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366a68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366a6c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x366a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366a70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a74: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x366a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_366a78:
    // 0x366a78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366a7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x366a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366a84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a88: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x366A88u;
    SET_GPR_U32(ctx, 31, 0x366A90u);
    ctx->pc = 0x366A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A88u;
    // 0x366a8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x366A88u, 0x366A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A90u;
label_366a90:
    // 0x366a90: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366A90u;
    SET_GPR_U32(ctx, 31, 0x366A98u);
    ctx->pc = 0x366A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A90u;
    // 0x366a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366A90u, 0x366A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A98u;
label_366a98:
    // 0x366a98: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x366a9c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366aa0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366AA0u;
    {
        const bool branch_taken_0x366aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366AA0u;
        // 0x366aa4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366aa0) {
            ctx->pc = 0x366A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366a78;
        }
    }
    ctx->pc = 0x366AA8u;
    // 0x366aa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366aac: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x366aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_366ab0:
    // 0x366ab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ab8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366abc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ac0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x366AC0u;
    SET_GPR_U32(ctx, 31, 0x366AC8u);
    ctx->pc = 0x366AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AC0u;
    // 0x366ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x366AC0u, 0x366AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AC8u;
label_366ac8:
    // 0x366ac8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366AC8u;
    SET_GPR_U32(ctx, 31, 0x366AD0u);
    ctx->pc = 0x366ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AC8u;
    // 0x366acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366AC8u, 0x366AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AD0u;
label_366ad0:
    // 0x366ad0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x366ad4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366ad8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366AD8u;
    {
        const bool branch_taken_0x366ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366AD8u;
        // 0x366adc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ad8) {
            ctx->pc = 0x366AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366ab0;
        }
    }
    ctx->pc = 0x366AE0u;
    // 0x366ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x366ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ae4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x366ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ae8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x366ae8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x366aec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x366aecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x366af0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x366af0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x366af4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x366af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366af8: 0xc047602  jal         func_11D808
    ctx->pc = 0x366AF8u;
    SET_GPR_U32(ctx, 31, 0x366B00u);
    ctx->pc = 0x366AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AF8u;
    // 0x366afc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D808u, 0x366AF8u, 0x366B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B00u;
label_366b00:
    // 0x366b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b04: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x366B04u;
    SET_GPR_U32(ctx, 31, 0x366B0Cu);
    ctx->pc = 0x366B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B04u;
    // 0x366b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x366B04u, 0x366B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B0Cu;
label_366b0c:
    // 0x366b0c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366B0Cu;
    {
        const bool branch_taken_0x366b0c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x366B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B0Cu;
        // 0x366b10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b0c) {
            ctx->pc = 0x366B28u;
            goto label_366b28;
        }
    }
    ctx->pc = 0x366B14u;
    // 0x366b14: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x366b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x366b18: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x366b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x366b1c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x366B1Cu;
    SET_GPR_U32(ctx, 31, 0x366B24u);
    ctx->pc = 0x366B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B1Cu;
    // 0x366b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x366B1Cu, 0x366B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B24u;
label_366b24:
    // 0x366b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x366b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_366b28:
    // 0x366b28: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x366B28u;
    SET_GPR_U32(ctx, 31, 0x366B30u);
    ctx->pc = 0x366B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B28u;
    // 0x366b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x366B28u, 0x366B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B30u;
label_366b30:
    // 0x366b30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x366b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_366b38:
    // 0x366b38: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x366b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x366b3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366b40: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x366B40u;
    SET_GPR_U32(ctx, 31, 0x366B48u);
    ctx->pc = 0x366B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B40u;
    // 0x366b44: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x366B40u, 0x366B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B48u;
label_366b48:
    // 0x366b48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x366b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366b54: 0xc102576  jal         func_4095D8
    ctx->pc = 0x366B54u;
    SET_GPR_U32(ctx, 31, 0x366B5Cu);
    ctx->pc = 0x366B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B54u;
    // 0x366b58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x366B54u, 0x366B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B5Cu;
label_366b5c:
    // 0x366b5c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366b60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366B60u;
    {
        const bool branch_taken_0x366b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B60u;
        // 0x366b64: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b60) {
            ctx->pc = 0x366B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366b38;
        }
    }
    ctx->pc = 0x366B68u;
    // 0x366b68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b6c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x366b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_366b70:
    // 0x366b70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x366b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x366b74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366b78: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x366B78u;
    SET_GPR_U32(ctx, 31, 0x366B80u);
    ctx->pc = 0x366B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B78u;
    // 0x366b7c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x366B78u, 0x366B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B80u;
label_366b80:
    // 0x366b80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366b8c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x366B8Cu;
    SET_GPR_U32(ctx, 31, 0x366B94u);
    ctx->pc = 0x366B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B8Cu;
    // 0x366b90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x366B8Cu, 0x366B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B94u;
label_366b94:
    // 0x366b94: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366b98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366B98u;
    {
        const bool branch_taken_0x366b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B98u;
        // 0x366b9c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b98) {
            ctx->pc = 0x366B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366b70;
        }
    }
    ctx->pc = 0x366BA0u;
    // 0x366ba0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x366ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x366ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366ba8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x366ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x366bac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x366bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x366bb0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x366bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x366bb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x366bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366bb8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x366bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366bbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x366bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366bc0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x366bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x366bc4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x366bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x366bc8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x366bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x366BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366BCCu;
        // 0x366bd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366BD4u;
    // 0x366bd4: 0x0  nop
    ctx->pc = 0x366bd4u;
    // NOP
    ctx->pc = 0x366bd8u;
}
