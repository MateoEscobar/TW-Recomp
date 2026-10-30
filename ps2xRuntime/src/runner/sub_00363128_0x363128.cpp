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

// Function: sub_00363128
// Address: 0x363128 - 0x363268
void sub_00363128_0x363128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363128_0x363128");
#endif

    switch (ctx->pc) {
        case 0x363164u: goto label_363164;
        case 0x36316cu: goto label_36316c;
        case 0x363180u: goto label_363180;
        case 0x363188u: goto label_363188;
        case 0x36319cu: goto label_36319c;
        case 0x3631a4u: goto label_3631a4;
        case 0x3631b8u: goto label_3631b8;
        case 0x3631d0u: goto label_3631d0;
        case 0x3631d8u: goto label_3631d8;
        case 0x3631ecu: goto label_3631ec;
        case 0x363200u: goto label_363200;
        case 0x363214u: goto label_363214;
        case 0x363238u: goto label_363238;
        default: break;
    }

    ctx->pc = 0x363128u;

    // 0x363128: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x363128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36312c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363130: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x363130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x363134: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x363134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x363138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36313c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36313cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363140: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x363140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x363144: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x363144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x363148: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36314c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x36314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x363150: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x363150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x363154: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x363154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x363158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36315c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36315Cu;
    SET_GPR_U32(ctx, 31, 0x363164u);
    ctx->pc = 0x363160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36315Cu;
    // 0x363160: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36315Cu, 0x363164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363164u;
label_363164:
    // 0x363164: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363164u;
    SET_GPR_U32(ctx, 31, 0x36316Cu);
    ctx->pc = 0x363168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363164u;
    // 0x363168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363164u, 0x36316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36316Cu;
label_36316c:
    // 0x36316c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36316cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363170: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x363170u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363178: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363178u;
    SET_GPR_U32(ctx, 31, 0x363180u);
    ctx->pc = 0x36317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363178u;
    // 0x36317c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363178u, 0x363180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363180u;
label_363180:
    // 0x363180: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363180u;
    SET_GPR_U32(ctx, 31, 0x363188u);
    ctx->pc = 0x363184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363180u;
    // 0x363184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363180u, 0x363188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363188u;
label_363188:
    // 0x363188: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36318c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36318cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363190: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363194: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363194u;
    SET_GPR_U32(ctx, 31, 0x36319Cu);
    ctx->pc = 0x363198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363194u;
    // 0x363198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363194u, 0x36319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36319Cu;
label_36319c:
    // 0x36319c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36319Cu;
    SET_GPR_U32(ctx, 31, 0x3631A4u);
    ctx->pc = 0x3631A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36319Cu;
    // 0x3631a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36319Cu, 0x3631A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3631A4u;
label_3631a4:
    // 0x3631a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3631a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3631a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3631acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3631b0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3631B0u;
    SET_GPR_U32(ctx, 31, 0x3631B8u);
    ctx->pc = 0x3631B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3631B0u;
    // 0x3631b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3631B0u, 0x3631B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3631B8u;
label_3631b8:
    // 0x3631b8: 0x34068044  ori         $a2, $zero, 0x8044
    ctx->pc = 0x3631b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32836);
    // 0x3631bc: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3631bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3631c0: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x3631c0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3631c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3631c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3631c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3631C8u;
    SET_GPR_U32(ctx, 31, 0x3631D0u);
    ctx->pc = 0x3631CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3631C8u;
    // 0x3631cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3631C8u, 0x3631D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3631D0u;
label_3631d0:
    // 0x3631d0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3631D0u;
    SET_GPR_U32(ctx, 31, 0x3631D8u);
    ctx->pc = 0x3631D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3631D0u;
    // 0x3631d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3631D0u, 0x3631D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3631D8u;
label_3631d8:
    // 0x3631d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3631d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3631dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3631dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3631e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3631e4: 0xc102488  jal         func_409220
    ctx->pc = 0x3631E4u;
    SET_GPR_U32(ctx, 31, 0x3631ECu);
    ctx->pc = 0x3631E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3631E4u;
    // 0x3631e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3631E4u, 0x3631ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3631ECu;
label_3631ec:
    // 0x3631ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3631ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3631f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3631f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3631f8: 0xc102488  jal         func_409220
    ctx->pc = 0x3631F8u;
    SET_GPR_U32(ctx, 31, 0x363200u);
    ctx->pc = 0x3631FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3631F8u;
    // 0x3631fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3631F8u, 0x363200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363200u;
label_363200:
    // 0x363200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x363200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363208: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x363208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36320c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36320Cu;
    SET_GPR_U32(ctx, 31, 0x363214u);
    ctx->pc = 0x363210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36320Cu;
    // 0x363210: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36320Cu, 0x363214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363214u;
label_363214:
    // 0x363214: 0x2502b  sltu        $t2, $zero, $v0
    ctx->pc = 0x363214u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363218: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x363218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36321c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36321cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363220: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x363220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363224: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x363224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363228: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x363228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36322c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x36322cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363230: 0xc0b9680  jal         func_2E5A00
    ctx->pc = 0x363230u;
    SET_GPR_U32(ctx, 31, 0x363238u);
    ctx->pc = 0x363234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363230u;
    // 0x363234: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5A00u, 0x363230u, 0x363238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363238u;
label_363238:
    // 0x363238: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x363238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36323c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363240: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x363240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x363244: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x363244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363248: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x363248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36324c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x36324cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363250: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x363250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363254: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x363254u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36325c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x36325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363260: 0x3e00008  jr          $ra
    ctx->pc = 0x363260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363260u;
        // 0x363264: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363268u;
}
