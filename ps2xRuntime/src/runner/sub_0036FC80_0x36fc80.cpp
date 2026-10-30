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

// Function: sub_0036FC80
// Address: 0x36fc80 - 0x36fd98
void sub_0036FC80_0x36fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FC80_0x36fc80");
#endif

    switch (ctx->pc) {
        case 0x36fcb8u: goto label_36fcb8;
        case 0x36fcc0u: goto label_36fcc0;
        case 0x36fcd4u: goto label_36fcd4;
        case 0x36fcdcu: goto label_36fcdc;
        case 0x36fcf0u: goto label_36fcf0;
        case 0x36fcf8u: goto label_36fcf8;
        case 0x36fd0cu: goto label_36fd0c;
        case 0x36fd14u: goto label_36fd14;
        case 0x36fd28u: goto label_36fd28;
        case 0x36fd30u: goto label_36fd30;
        case 0x36fd44u: goto label_36fd44;
        case 0x36fd4cu: goto label_36fd4c;
        case 0x36fd68u: goto label_36fd68;
        default: break;
    }

    ctx->pc = 0x36fc80u;

    // 0x36fc80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x36fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x36fc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fc88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x36fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36fc8c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x36fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x36fc90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36fc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36fc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36fc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36fc9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36fc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36fca0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fca4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x36fca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x36fca8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x36fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x36fcac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36fcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36fcb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FCB0u;
    SET_GPR_U32(ctx, 31, 0x36FCB8u);
    ctx->pc = 0x36FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCB0u;
    // 0x36fcb4: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FCB0u, 0x36FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCB8u;
label_36fcb8:
    // 0x36fcb8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FCB8u;
    SET_GPR_U32(ctx, 31, 0x36FCC0u);
    ctx->pc = 0x36FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCB8u;
    // 0x36fcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FCB8u, 0x36FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCC0u;
label_36fcc0:
    // 0x36fcc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fcc4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36fcc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fcc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fccc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FCCCu;
    SET_GPR_U32(ctx, 31, 0x36FCD4u);
    ctx->pc = 0x36FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCCCu;
    // 0x36fcd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FCCCu, 0x36FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCD4u;
label_36fcd4:
    // 0x36fcd4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36FCD4u;
    SET_GPR_U32(ctx, 31, 0x36FCDCu);
    ctx->pc = 0x36FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCD4u;
    // 0x36fcd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36FCD4u, 0x36FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCDCu;
label_36fcdc:
    // 0x36fcdc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36fcdcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36fce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fce4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36fce8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FCE8u;
    SET_GPR_U32(ctx, 31, 0x36FCF0u);
    ctx->pc = 0x36FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCE8u;
    // 0x36fcec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FCE8u, 0x36FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCF0u;
label_36fcf0:
    // 0x36fcf0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FCF0u;
    SET_GPR_U32(ctx, 31, 0x36FCF8u);
    ctx->pc = 0x36FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCF0u;
    // 0x36fcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FCF0u, 0x36FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCF8u;
label_36fcf8:
    // 0x36fcf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fcf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fcfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36fcfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36fd04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FD04u;
    SET_GPR_U32(ctx, 31, 0x36FD0Cu);
    ctx->pc = 0x36FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD04u;
    // 0x36fd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FD04u, 0x36FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD0Cu;
label_36fd0c:
    // 0x36fd0c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FD0Cu;
    SET_GPR_U32(ctx, 31, 0x36FD14u);
    ctx->pc = 0x36FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD0Cu;
    // 0x36fd10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FD0Cu, 0x36FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD14u;
label_36fd14:
    // 0x36fd14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36fd18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36fd20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FD20u;
    SET_GPR_U32(ctx, 31, 0x36FD28u);
    ctx->pc = 0x36FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD20u;
    // 0x36fd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FD20u, 0x36FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD28u;
label_36fd28:
    // 0x36fd28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FD28u;
    SET_GPR_U32(ctx, 31, 0x36FD30u);
    ctx->pc = 0x36FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD28u;
    // 0x36fd2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FD28u, 0x36FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD30u;
label_36fd30:
    // 0x36fd30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36fd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FD3Cu;
    SET_GPR_U32(ctx, 31, 0x36FD44u);
    ctx->pc = 0x36FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD3Cu;
    // 0x36fd40: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FD3Cu, 0x36FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD44u;
label_36fd44:
    // 0x36fd44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FD44u;
    SET_GPR_U32(ctx, 31, 0x36FD4Cu);
    ctx->pc = 0x36FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD44u;
    // 0x36fd48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FD44u, 0x36FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD4Cu;
label_36fd4c:
    // 0x36fd4c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36fd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36fd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36fd54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36fd58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36fd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36fd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd60: 0xc06d6a4  jal         func_1B5A90
    ctx->pc = 0x36FD60u;
    SET_GPR_U32(ctx, 31, 0x36FD68u);
    ctx->pc = 0x36FD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD60u;
    // 0x36fd64: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5A90u, 0x36FD60u, 0x36FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD68u;
label_36fd68:
    // 0x36fd68: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x36fd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36fd6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36fd6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd70: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x36fd70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36fd74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36fd74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36fd78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36fd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36fd7c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36fd7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fd80: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x36fd80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fd84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36fd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fd88: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x36fd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x36FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD8Cu;
        // 0x36fd90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FD94u;
    // 0x36fd94: 0x0  nop
    ctx->pc = 0x36fd94u;
    // NOP
    ctx->pc = 0x36fd98u;
}
