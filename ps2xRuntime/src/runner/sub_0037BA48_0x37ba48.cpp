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

// Function: sub_0037BA48
// Address: 0x37ba48 - 0x37bc98
void sub_0037BA48_0x37ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BA48_0x37ba48");
#endif

    switch (ctx->pc) {
        case 0x37ba88u: goto label_37ba88;
        case 0x37ba90u: goto label_37ba90;
        case 0x37baa4u: goto label_37baa4;
        case 0x37baacu: goto label_37baac;
        case 0x37bac0u: goto label_37bac0;
        case 0x37bac8u: goto label_37bac8;
        case 0x37badcu: goto label_37badc;
        case 0x37bae4u: goto label_37bae4;
        case 0x37baf8u: goto label_37baf8;
        case 0x37bb10u: goto label_37bb10;
        case 0x37bb18u: goto label_37bb18;
        case 0x37bb30u: goto label_37bb30;
        case 0x37bb48u: goto label_37bb48;
        case 0x37bb50u: goto label_37bb50;
        case 0x37bb68u: goto label_37bb68;
        case 0x37bb80u: goto label_37bb80;
        case 0x37bb88u: goto label_37bb88;
        case 0x37bbb8u: goto label_37bbb8;
        case 0x37bbc0u: goto label_37bbc0;
        case 0x37bbd0u: goto label_37bbd0;
        case 0x37bbe4u: goto label_37bbe4;
        case 0x37bbf8u: goto label_37bbf8;
        case 0x37bc08u: goto label_37bc08;
        case 0x37bc1cu: goto label_37bc1c;
        case 0x37bc30u: goto label_37bc30;
        case 0x37bc40u: goto label_37bc40;
        case 0x37bc54u: goto label_37bc54;
        default: break;
    }

    ctx->pc = 0x37ba48u;

    // 0x37ba48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37ba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37ba4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37ba50: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x37ba54: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x37ba58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ba58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37ba5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba60: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x37ba64: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x37ba68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37ba6c: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x37ba6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x37ba70: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x37ba70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x37ba74: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x37ba74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x37ba78: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x37ba78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x37ba7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37ba80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BA80u;
    SET_GPR_U32(ctx, 31, 0x37BA88u);
    ctx->pc = 0x37BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA80u;
    // 0x37ba84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BA80u, 0x37BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA88u;
label_37ba88:
    // 0x37ba88: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BA88u;
    SET_GPR_U32(ctx, 31, 0x37BA90u);
    ctx->pc = 0x37BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA88u;
    // 0x37ba8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BA88u, 0x37BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA90u;
label_37ba90:
    // 0x37ba90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37ba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37ba98: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x37ba98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x37ba9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BA9Cu;
    SET_GPR_U32(ctx, 31, 0x37BAA4u);
    ctx->pc = 0x37BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA9Cu;
    // 0x37baa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BA9Cu, 0x37BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAA4u;
label_37baa4:
    // 0x37baa4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BAA4u;
    SET_GPR_U32(ctx, 31, 0x37BAACu);
    ctx->pc = 0x37BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAA4u;
    // 0x37baa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BAA4u, 0x37BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAACu;
label_37baac:
    // 0x37baac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bab0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37bab4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x37bab4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x37bab8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BAB8u;
    SET_GPR_U32(ctx, 31, 0x37BAC0u);
    ctx->pc = 0x37BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAB8u;
    // 0x37babc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BAB8u, 0x37BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAC0u;
label_37bac0:
    // 0x37bac0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BAC0u;
    SET_GPR_U32(ctx, 31, 0x37BAC8u);
    ctx->pc = 0x37BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAC0u;
    // 0x37bac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BAC0u, 0x37BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAC8u;
label_37bac8:
    // 0x37bac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37bac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bacc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37baccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37bad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bad4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BAD4u;
    SET_GPR_U32(ctx, 31, 0x37BADCu);
    ctx->pc = 0x37BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAD4u;
    // 0x37bad8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BAD4u, 0x37BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BADCu;
label_37badc:
    // 0x37badc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BADCu;
    SET_GPR_U32(ctx, 31, 0x37BAE4u);
    ctx->pc = 0x37BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BADCu;
    // 0x37bae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BADCu, 0x37BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAE4u;
label_37bae4:
    // 0x37bae4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37bae4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37bae8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x37bae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37baec: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x37baecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37baf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37baf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37baf4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37baf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37baf8:
    // 0x37baf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bafc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bb04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37bb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb08: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37BB08u;
    SET_GPR_U32(ctx, 31, 0x37BB10u);
    ctx->pc = 0x37BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB08u;
    // 0x37bb0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37BB08u, 0x37BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB10u;
label_37bb10:
    // 0x37bb10: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BB10u;
    SET_GPR_U32(ctx, 31, 0x37BB18u);
    ctx->pc = 0x37BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB10u;
    // 0x37bb14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BB10u, 0x37BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB18u;
label_37bb18:
    // 0x37bb18: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37bb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37bb1c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37bb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37bb20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BB20u;
    {
        const bool branch_taken_0x37bb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB20u;
        // 0x37bb24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb20) {
            ctx->pc = 0x37BAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37baf8;
        }
    }
    ctx->pc = 0x37BB28u;
    // 0x37bb28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb2c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x37bb2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37bb30:
    // 0x37bb30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bb34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37bb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bb3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37bb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb40: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37BB40u;
    SET_GPR_U32(ctx, 31, 0x37BB48u);
    ctx->pc = 0x37BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB40u;
    // 0x37bb44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37BB40u, 0x37BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB48u;
label_37bb48:
    // 0x37bb48: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BB48u;
    SET_GPR_U32(ctx, 31, 0x37BB50u);
    ctx->pc = 0x37BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB48u;
    // 0x37bb4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BB48u, 0x37BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB50u;
label_37bb50:
    // 0x37bb50: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37bb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37bb54: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37bb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x37bb58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BB58u;
    {
        const bool branch_taken_0x37bb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB58u;
        // 0x37bb5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb58) {
            ctx->pc = 0x37BB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bb30;
        }
    }
    ctx->pc = 0x37BB60u;
    // 0x37bb60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb64: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x37bb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37bb68:
    // 0x37bb68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bb6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37bb74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37bb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb78: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37BB78u;
    SET_GPR_U32(ctx, 31, 0x37BB80u);
    ctx->pc = 0x37BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB78u;
    // 0x37bb7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37BB78u, 0x37BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB80u;
label_37bb80:
    // 0x37bb80: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BB80u;
    SET_GPR_U32(ctx, 31, 0x37BB88u);
    ctx->pc = 0x37BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB80u;
    // 0x37bb84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BB80u, 0x37BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB88u;
label_37bb88:
    // 0x37bb88: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37bb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37bb8c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37bb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37bb90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BB90u;
    {
        const bool branch_taken_0x37bb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB90u;
        // 0x37bb94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb90) {
            ctx->pc = 0x37BB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bb68;
        }
    }
    ctx->pc = 0x37BB98u;
    // 0x37bb98: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x37bb98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x37bb9c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x37bb9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x37bba0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x37bba0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x37bba4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x37bba4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x37bba8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x37bbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbb0: 0xc103286  jal         func_40CA18
    ctx->pc = 0x37BBB0u;
    SET_GPR_U32(ctx, 31, 0x37BBB8u);
    ctx->pc = 0x37BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBB0u;
    // 0x37bbb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA18u, 0x37BBB0u, 0x37BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBB8u;
label_37bbb8:
    // 0x37bbb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbbc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37bbc0:
    // 0x37bbc0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37bbc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bbc8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37BBC8u;
    SET_GPR_U32(ctx, 31, 0x37BBD0u);
    ctx->pc = 0x37BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBC8u;
    // 0x37bbcc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37BBC8u, 0x37BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBD0u;
label_37bbd0:
    // 0x37bbd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37bbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bbdc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37BBDCu;
    SET_GPR_U32(ctx, 31, 0x37BBE4u);
    ctx->pc = 0x37BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBDCu;
    // 0x37bbe0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37BBDCu, 0x37BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBE4u;
label_37bbe4:
    // 0x37bbe4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37bbe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37bbe8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BBE8u;
    {
        const bool branch_taken_0x37bbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BBE8u;
        // 0x37bbec: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bbe8) {
            ctx->pc = 0x37BBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bbc0;
        }
    }
    ctx->pc = 0x37BBF0u;
    // 0x37bbf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbf4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37bbf8:
    // 0x37bbf8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37bbfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bc00: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37BC00u;
    SET_GPR_U32(ctx, 31, 0x37BC08u);
    ctx->pc = 0x37BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC00u;
    // 0x37bc04: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37BC00u, 0x37BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC08u;
label_37bc08:
    // 0x37bc08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37bc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bc14: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37BC14u;
    SET_GPR_U32(ctx, 31, 0x37BC1Cu);
    ctx->pc = 0x37BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC14u;
    // 0x37bc18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37BC14u, 0x37BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC1Cu;
label_37bc1c:
    // 0x37bc1c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37bc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x37bc20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BC20u;
    {
        const bool branch_taken_0x37bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC20u;
        // 0x37bc24: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc20) {
            ctx->pc = 0x37BBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bbf8;
        }
    }
    ctx->pc = 0x37BC28u;
    // 0x37bc28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc2c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37bc30:
    // 0x37bc30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x37bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37bc34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bc38: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37BC38u;
    SET_GPR_U32(ctx, 31, 0x37BC40u);
    ctx->pc = 0x37BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC38u;
    // 0x37bc3c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37BC38u, 0x37BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC40u;
label_37bc40:
    // 0x37bc40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37bc40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37bc4c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37BC4Cu;
    SET_GPR_U32(ctx, 31, 0x37BC54u);
    ctx->pc = 0x37BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC4Cu;
    // 0x37bc50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37BC4Cu, 0x37BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC54u;
label_37bc54:
    // 0x37bc54: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37bc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37bc58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BC58u;
    {
        const bool branch_taken_0x37bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC58u;
        // 0x37bc5c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc58) {
            ctx->pc = 0x37BC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bc30;
        }
    }
    ctx->pc = 0x37BC60u;
    // 0x37bc60: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37bc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37bc64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37bc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc68: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37bc68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37bc6c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37bc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37bc70: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37bc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37bc74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37bc74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37bc78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37bc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bc7c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x37bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37bc80: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x37bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37bc84: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x37bc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37bc88: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x37bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x37BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC8Cu;
        // 0x37bc90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BC94u;
    // 0x37bc94: 0x0  nop
    ctx->pc = 0x37bc94u;
    // NOP
    ctx->pc = 0x37bc98u;
}
