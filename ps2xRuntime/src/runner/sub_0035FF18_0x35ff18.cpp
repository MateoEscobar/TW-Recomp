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

// Function: sub_0035FF18
// Address: 0x35ff18 - 0x360090
void sub_0035FF18_0x35ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FF18_0x35ff18");
#endif

    switch (ctx->pc) {
        case 0x35ff58u: goto label_35ff58;
        case 0x35ff60u: goto label_35ff60;
        case 0x35ff74u: goto label_35ff74;
        case 0x35ff7cu: goto label_35ff7c;
        case 0x35ff90u: goto label_35ff90;
        case 0x35ff98u: goto label_35ff98;
        case 0x35ffacu: goto label_35ffac;
        case 0x35ffb4u: goto label_35ffb4;
        case 0x35ffc8u: goto label_35ffc8;
        case 0x35ffd0u: goto label_35ffd0;
        case 0x35ffe4u: goto label_35ffe4;
        case 0x35ffecu: goto label_35ffec;
        case 0x360000u: goto label_360000;
        case 0x360008u: goto label_360008;
        case 0x36001cu: goto label_36001c;
        case 0x360030u: goto label_360030;
        case 0x360058u: goto label_360058;
        default: break;
    }

    ctx->pc = 0x35ff18u;

    // 0x35ff18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x35ff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x35ff1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ff20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x35ff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x35ff24: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x35ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x35ff28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ff28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ff2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x35ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x35ff34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35ff38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ff38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff3c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x35ff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x35ff40: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x35ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x35ff44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ff48: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x35ff48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x35ff4c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x35ff4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x35ff50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FF50u;
    SET_GPR_U32(ctx, 31, 0x35FF58u);
    ctx->pc = 0x35FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF50u;
    // 0x35ff54: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FF50u, 0x35FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF58u;
label_35ff58:
    // 0x35ff58: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FF58u;
    SET_GPR_U32(ctx, 31, 0x35FF60u);
    ctx->pc = 0x35FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF58u;
    // 0x35ff5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FF58u, 0x35FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF60u;
label_35ff60:
    // 0x35ff60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ff60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35ff64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ff6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FF6Cu;
    SET_GPR_U32(ctx, 31, 0x35FF74u);
    ctx->pc = 0x35FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF6Cu;
    // 0x35ff70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FF6Cu, 0x35FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF74u;
label_35ff74:
    // 0x35ff74: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FF74u;
    SET_GPR_U32(ctx, 31, 0x35FF7Cu);
    ctx->pc = 0x35FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF74u;
    // 0x35ff78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FF74u, 0x35FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF7Cu;
label_35ff7c:
    // 0x35ff7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ff7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35ff80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ff88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FF88u;
    SET_GPR_U32(ctx, 31, 0x35FF90u);
    ctx->pc = 0x35FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF88u;
    // 0x35ff8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FF88u, 0x35FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF90u;
label_35ff90:
    // 0x35ff90: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35FF90u;
    SET_GPR_U32(ctx, 31, 0x35FF98u);
    ctx->pc = 0x35FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF90u;
    // 0x35ff94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35FF90u, 0x35FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF98u;
label_35ff98:
    // 0x35ff98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ff98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35ff9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ffa0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35ffa4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FFA4u;
    SET_GPR_U32(ctx, 31, 0x35FFACu);
    ctx->pc = 0x35FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFA4u;
    // 0x35ffa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FFA4u, 0x35FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFACu;
label_35ffac:
    // 0x35ffac: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35FFACu;
    SET_GPR_U32(ctx, 31, 0x35FFB4u);
    ctx->pc = 0x35FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFACu;
    // 0x35ffb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35FFACu, 0x35FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFB4u;
label_35ffb4:
    // 0x35ffb4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x35ffb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x35ffb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ffb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ffbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35ffc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FFC0u;
    SET_GPR_U32(ctx, 31, 0x35FFC8u);
    ctx->pc = 0x35FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFC0u;
    // 0x35ffc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FFC0u, 0x35FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFC8u;
label_35ffc8:
    // 0x35ffc8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35FFC8u;
    SET_GPR_U32(ctx, 31, 0x35FFD0u);
    ctx->pc = 0x35FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFC8u;
    // 0x35ffcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35FFC8u, 0x35FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFD0u;
label_35ffd0:
    // 0x35ffd0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x35ffd0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x35ffd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ffd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ffd8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35ffdc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FFDCu;
    SET_GPR_U32(ctx, 31, 0x35FFE4u);
    ctx->pc = 0x35FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFDCu;
    // 0x35ffe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FFDCu, 0x35FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFE4u;
label_35ffe4:
    // 0x35ffe4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35FFE4u;
    SET_GPR_U32(ctx, 31, 0x35FFECu);
    ctx->pc = 0x35FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFE4u;
    // 0x35ffe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35FFE4u, 0x35FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFECu;
label_35ffec:
    // 0x35ffec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35ffecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35fff0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fff4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35fff8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FFF8u;
    SET_GPR_U32(ctx, 31, 0x360000u);
    ctx->pc = 0x35FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFF8u;
    // 0x35fffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FFF8u, 0x360000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360000u;
label_360000:
    // 0x360000: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360000u;
    SET_GPR_U32(ctx, 31, 0x360008u);
    ctx->pc = 0x360004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360000u;
    // 0x360004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360000u, 0x360008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360008u;
label_360008:
    // 0x360008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36000c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360010: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x360010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x360014: 0xc1024c6  jal         func_409318
    ctx->pc = 0x360014u;
    SET_GPR_U32(ctx, 31, 0x36001Cu);
    ctx->pc = 0x360018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360014u;
    // 0x360018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x360014u, 0x36001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36001Cu;
label_36001c:
    // 0x36001c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x36001cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360024: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x360024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x360028: 0xc1024c6  jal         func_409318
    ctx->pc = 0x360028u;
    SET_GPR_U32(ctx, 31, 0x360030u);
    ctx->pc = 0x36002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360028u;
    // 0x36002c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x360028u, 0x360030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360030u;
label_360030:
    // 0x360030: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x360030u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360034: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x360034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360038: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x360038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36003c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36003cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360040: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x360040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x360044: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x360044u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x360048: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x360048u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36004c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36004cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360050: 0xc0b68b0  jal         func_2DA2C0
    ctx->pc = 0x360050u;
    SET_GPR_U32(ctx, 31, 0x360058u);
    ctx->pc = 0x360054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360050u;
    // 0x360054: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x360050u, 0x360058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360058u;
label_360058:
    // 0x360058: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x360058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36005c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36005cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360060: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x360060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360064: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x360064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36006c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36006cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360070: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x360070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360078: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x360078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36007c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x36007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360080: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x360080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360084: 0x3e00008  jr          $ra
    ctx->pc = 0x360084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360084u;
        // 0x360088: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36008Cu;
    // 0x36008c: 0x0  nop
    ctx->pc = 0x36008cu;
    // NOP
    ctx->pc = 0x360090u;
}
