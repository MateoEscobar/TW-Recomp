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

// Function: sub_00368990
// Address: 0x368990 - 0x368c40
void sub_00368990_0x368990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368990_0x368990");
#endif

    switch (ctx->pc) {
        case 0x3689d0u: goto label_3689d0;
        case 0x3689e8u: goto label_3689e8;
        case 0x3689f0u: goto label_3689f0;
        case 0x368a08u: goto label_368a08;
        case 0x368a20u: goto label_368a20;
        case 0x368a28u: goto label_368a28;
        case 0x368a40u: goto label_368a40;
        case 0x368a58u: goto label_368a58;
        case 0x368a60u: goto label_368a60;
        case 0x368a78u: goto label_368a78;
        case 0x368a90u: goto label_368a90;
        case 0x368a98u: goto label_368a98;
        case 0x368ab0u: goto label_368ab0;
        case 0x368ac8u: goto label_368ac8;
        case 0x368ad0u: goto label_368ad0;
        case 0x368af8u: goto label_368af8;
        case 0x368b00u: goto label_368b00;
        case 0x368b10u: goto label_368b10;
        case 0x368b24u: goto label_368b24;
        case 0x368b38u: goto label_368b38;
        case 0x368b48u: goto label_368b48;
        case 0x368b5cu: goto label_368b5c;
        case 0x368b70u: goto label_368b70;
        case 0x368b80u: goto label_368b80;
        case 0x368b94u: goto label_368b94;
        case 0x368ba8u: goto label_368ba8;
        case 0x368bb8u: goto label_368bb8;
        case 0x368bccu: goto label_368bcc;
        case 0x368be0u: goto label_368be0;
        case 0x368bf0u: goto label_368bf0;
        case 0x368c04u: goto label_368c04;
        default: break;
    }

    ctx->pc = 0x368990u;

    // 0x368990: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x368990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x368994: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x368994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x368998: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x368998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x36899c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36899cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3689a0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3689a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3689a4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3689a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3689a8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3689a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3689ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3689acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3689b0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3689b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3689b4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3689b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3689b8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3689b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3689bc: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3689bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3689c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3689c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3689c4: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3689c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3689c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3689c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3689cc: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x3689ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3689d0:
    // 0x3689d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3689d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3689d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3689d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3689d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3689d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3689dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3689dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3689e0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3689E0u;
    SET_GPR_U32(ctx, 31, 0x3689E8u);
    ctx->pc = 0x3689E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3689E0u;
    // 0x3689e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3689E0u, 0x3689E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689E8u;
label_3689e8:
    // 0x3689e8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3689E8u;
    SET_GPR_U32(ctx, 31, 0x3689F0u);
    ctx->pc = 0x3689ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3689E8u;
    // 0x3689ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3689E8u, 0x3689F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689F0u;
label_3689f0:
    // 0x3689f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3689f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3689f4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3689f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3689f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3689F8u;
    {
        const bool branch_taken_0x3689f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3689FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689F8u;
        // 0x3689fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3689f8) {
            ctx->pc = 0x3689D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3689d0;
        }
    }
    ctx->pc = 0x368A00u;
    // 0x368a00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a04: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x368a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_368a08:
    // 0x368a08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x368a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368a14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a18: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368A18u;
    SET_GPR_U32(ctx, 31, 0x368A20u);
    ctx->pc = 0x368A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A18u;
    // 0x368a1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368A18u, 0x368A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A20u;
label_368a20:
    // 0x368a20: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368A20u;
    SET_GPR_U32(ctx, 31, 0x368A28u);
    ctx->pc = 0x368A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A20u;
    // 0x368a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368A20u, 0x368A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A28u;
label_368a28:
    // 0x368a28: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x368a2c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x368a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x368a30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368A30u;
    {
        const bool branch_taken_0x368a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A30u;
        // 0x368a34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a30) {
            ctx->pc = 0x368A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368a08;
        }
    }
    ctx->pc = 0x368A38u;
    // 0x368a38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a3c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x368a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_368a40:
    // 0x368a40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x368a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368a4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a50: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368A50u;
    SET_GPR_U32(ctx, 31, 0x368A58u);
    ctx->pc = 0x368A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A50u;
    // 0x368a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368A50u, 0x368A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A58u;
label_368a58:
    // 0x368a58: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368A58u;
    SET_GPR_U32(ctx, 31, 0x368A60u);
    ctx->pc = 0x368A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A58u;
    // 0x368a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368A58u, 0x368A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A60u;
label_368a60:
    // 0x368a60: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x368a64: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x368a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x368a68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368A68u;
    {
        const bool branch_taken_0x368a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A68u;
        // 0x368a6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a68) {
            ctx->pc = 0x368A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368a40;
        }
    }
    ctx->pc = 0x368A70u;
    // 0x368a70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a74: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x368a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_368a78:
    // 0x368a78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368a7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x368a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368a84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a88: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368A88u;
    SET_GPR_U32(ctx, 31, 0x368A90u);
    ctx->pc = 0x368A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A88u;
    // 0x368a8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368A88u, 0x368A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A90u;
label_368a90:
    // 0x368a90: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368A90u;
    SET_GPR_U32(ctx, 31, 0x368A98u);
    ctx->pc = 0x368A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A90u;
    // 0x368a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368A90u, 0x368A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A98u;
label_368a98:
    // 0x368a98: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x368a9c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x368a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x368aa0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368AA0u;
    {
        const bool branch_taken_0x368aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368AA0u;
        // 0x368aa4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368aa0) {
            ctx->pc = 0x368A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368a78;
        }
    }
    ctx->pc = 0x368AA8u;
    // 0x368aa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368aac: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x368aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_368ab0:
    // 0x368ab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ab8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x368ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x368abc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ac0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368AC0u;
    SET_GPR_U32(ctx, 31, 0x368AC8u);
    ctx->pc = 0x368AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AC0u;
    // 0x368ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368AC0u, 0x368AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AC8u;
label_368ac8:
    // 0x368ac8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368AC8u;
    SET_GPR_U32(ctx, 31, 0x368AD0u);
    ctx->pc = 0x368ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AC8u;
    // 0x368acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368AC8u, 0x368AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AD0u;
label_368ad0:
    // 0x368ad0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x368ad4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x368ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x368ad8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368AD8u;
    {
        const bool branch_taken_0x368ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368AD8u;
        // 0x368adc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ad8) {
            ctx->pc = 0x368AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368ab0;
        }
    }
    ctx->pc = 0x368AE0u;
    // 0x368ae0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x368ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ae4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x368ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ae8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x368ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368aec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x368aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368af0: 0xc06374e  jal         func_18DD38
    ctx->pc = 0x368AF0u;
    SET_GPR_U32(ctx, 31, 0x368AF8u);
    ctx->pc = 0x368AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AF0u;
    // 0x368af4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD38u, 0x368AF0u, 0x368AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AF8u;
label_368af8:
    // 0x368af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368afc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x368afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_368b00:
    // 0x368b00: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x368b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x368b04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368b08: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x368B08u;
    SET_GPR_U32(ctx, 31, 0x368B10u);
    ctx->pc = 0x368B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B08u;
    // 0x368b0c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x368B08u, 0x368B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B10u;
label_368b10:
    // 0x368b10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368b1c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368B1Cu;
    SET_GPR_U32(ctx, 31, 0x368B24u);
    ctx->pc = 0x368B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B1Cu;
    // 0x368b20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368B1Cu, 0x368B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B24u;
label_368b24:
    // 0x368b24: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x368b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x368b28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368B28u;
    {
        const bool branch_taken_0x368b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368B28u;
        // 0x368b2c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368b28) {
            ctx->pc = 0x368B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368b00;
        }
    }
    ctx->pc = 0x368B30u;
    // 0x368b30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x368b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_368b38:
    // 0x368b38: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x368b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x368b3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368b40: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x368B40u;
    SET_GPR_U32(ctx, 31, 0x368B48u);
    ctx->pc = 0x368B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B40u;
    // 0x368b44: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x368B40u, 0x368B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B48u;
label_368b48:
    // 0x368b48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x368b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368b54: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368B54u;
    SET_GPR_U32(ctx, 31, 0x368B5Cu);
    ctx->pc = 0x368B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B54u;
    // 0x368b58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368B54u, 0x368B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B5Cu;
label_368b5c:
    // 0x368b5c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x368b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x368b60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368B60u;
    {
        const bool branch_taken_0x368b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368B60u;
        // 0x368b64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368b60) {
            ctx->pc = 0x368B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368b38;
        }
    }
    ctx->pc = 0x368B68u;
    // 0x368b68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b6c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x368b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_368b70:
    // 0x368b70: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x368b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x368b74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368b78: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x368B78u;
    SET_GPR_U32(ctx, 31, 0x368B80u);
    ctx->pc = 0x368B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B78u;
    // 0x368b7c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x368B78u, 0x368B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B80u;
label_368b80:
    // 0x368b80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x368b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368b8c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368B8Cu;
    SET_GPR_U32(ctx, 31, 0x368B94u);
    ctx->pc = 0x368B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B8Cu;
    // 0x368b90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368B8Cu, 0x368B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B94u;
label_368b94:
    // 0x368b94: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x368b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x368b98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368B98u;
    {
        const bool branch_taken_0x368b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368B98u;
        // 0x368b9c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368b98) {
            ctx->pc = 0x368B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368b70;
        }
    }
    ctx->pc = 0x368BA0u;
    // 0x368ba0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ba4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x368ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_368ba8:
    // 0x368ba8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x368ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x368bac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368bb0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x368BB0u;
    SET_GPR_U32(ctx, 31, 0x368BB8u);
    ctx->pc = 0x368BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368BB0u;
    // 0x368bb4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x368BB0u, 0x368BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368BB8u;
label_368bb8:
    // 0x368bb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368bc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x368bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368bc4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368BC4u;
    SET_GPR_U32(ctx, 31, 0x368BCCu);
    ctx->pc = 0x368BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368BC4u;
    // 0x368bc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368BC4u, 0x368BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368BCCu;
label_368bcc:
    // 0x368bcc: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x368bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x368bd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368BD0u;
    {
        const bool branch_taken_0x368bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368BD0u;
        // 0x368bd4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368bd0) {
            ctx->pc = 0x368BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368ba8;
        }
    }
    ctx->pc = 0x368BD8u;
    // 0x368bd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368bdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x368bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_368be0:
    // 0x368be0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x368be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x368be4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368be8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x368BE8u;
    SET_GPR_U32(ctx, 31, 0x368BF0u);
    ctx->pc = 0x368BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368BE8u;
    // 0x368bec: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x368BE8u, 0x368BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368BF0u;
label_368bf0:
    // 0x368bf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368bf8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x368bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x368bfc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368BFCu;
    SET_GPR_U32(ctx, 31, 0x368C04u);
    ctx->pc = 0x368C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368BFCu;
    // 0x368c00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368BFCu, 0x368C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C04u;
label_368c04:
    // 0x368c04: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x368c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x368c08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368C08u;
    {
        const bool branch_taken_0x368c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C08u;
        // 0x368c0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c08) {
            ctx->pc = 0x368BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368be0;
        }
    }
    ctx->pc = 0x368C10u;
    // 0x368c10: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x368c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x368c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c18: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x368c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x368c1c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x368c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x368c20: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x368c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x368c24: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x368c24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368c28: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x368c28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x368c2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x368c2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368c30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x368c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368c34: 0x3e00008  jr          $ra
    ctx->pc = 0x368C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C34u;
        // 0x368c38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368C3Cu;
    // 0x368c3c: 0x0  nop
    ctx->pc = 0x368c3cu;
    // NOP
    ctx->pc = 0x368c40u;
}
