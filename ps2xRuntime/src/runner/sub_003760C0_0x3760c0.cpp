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

// Function: sub_003760C0
// Address: 0x3760c0 - 0x3761e8
void sub_003760C0_0x3760c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003760C0_0x3760c0");
#endif

    switch (ctx->pc) {
        case 0x3760f8u: goto label_3760f8;
        case 0x376100u: goto label_376100;
        case 0x376114u: goto label_376114;
        case 0x37611cu: goto label_37611c;
        case 0x376134u: goto label_376134;
        case 0x37613cu: goto label_37613c;
        case 0x376150u: goto label_376150;
        case 0x376158u: goto label_376158;
        case 0x37616cu: goto label_37616c;
        case 0x376174u: goto label_376174;
        case 0x376188u: goto label_376188;
        case 0x37619cu: goto label_37619c;
        case 0x3761bcu: goto label_3761bc;
        default: break;
    }

    ctx->pc = 0x3760c0u;

    // 0x3760c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3760c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3760c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3760c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3760c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3760c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3760cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3760ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3760d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3760d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3760d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3760d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3760d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3760d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3760dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3760dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3760e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3760e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3760e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3760e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3760e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3760e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3760ec: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3760ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3760f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3760F0u;
    SET_GPR_U32(ctx, 31, 0x3760F8u);
    ctx->pc = 0x3760F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760F0u;
    // 0x3760f4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3760F0u, 0x3760F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760F8u;
label_3760f8:
    // 0x3760f8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3760F8u;
    SET_GPR_U32(ctx, 31, 0x376100u);
    ctx->pc = 0x3760FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760F8u;
    // 0x3760fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3760F8u, 0x376100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376100u;
label_376100:
    // 0x376100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x376100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376104: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x376104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376108: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37610c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37610Cu;
    SET_GPR_U32(ctx, 31, 0x376114u);
    ctx->pc = 0x376110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37610Cu;
    // 0x376110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37610Cu, 0x376114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376114u;
label_376114:
    // 0x376114: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376114u;
    SET_GPR_U32(ctx, 31, 0x37611Cu);
    ctx->pc = 0x376118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376114u;
    // 0x376118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376114u, 0x37611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37611Cu;
label_37611c:
    // 0x37611c: 0x3406805c  ori         $a2, $zero, 0x805C
    ctx->pc = 0x37611cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32860);
    // 0x376120: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376124: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x376124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376128: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x376128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37612c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37612Cu;
    SET_GPR_U32(ctx, 31, 0x376134u);
    ctx->pc = 0x376130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37612Cu;
    // 0x376130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37612Cu, 0x376134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376134u;
label_376134:
    // 0x376134: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376134u;
    SET_GPR_U32(ctx, 31, 0x37613Cu);
    ctx->pc = 0x376138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376134u;
    // 0x376138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376134u, 0x37613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37613Cu;
label_37613c:
    // 0x37613c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37613cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x376140: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x376140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376144: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x376144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376148: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376148u;
    SET_GPR_U32(ctx, 31, 0x376150u);
    ctx->pc = 0x37614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376148u;
    // 0x37614c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376148u, 0x376150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376150u;
label_376150:
    // 0x376150: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376150u;
    SET_GPR_U32(ctx, 31, 0x376158u);
    ctx->pc = 0x376154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376150u;
    // 0x376154: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376150u, 0x376158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376158u;
label_376158:
    // 0x376158: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x376158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37615c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37615cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376160: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x376160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x376164: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376164u;
    SET_GPR_U32(ctx, 31, 0x37616Cu);
    ctx->pc = 0x376168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376164u;
    // 0x376168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376164u, 0x37616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37616Cu;
label_37616c:
    // 0x37616c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37616Cu;
    SET_GPR_U32(ctx, 31, 0x376174u);
    ctx->pc = 0x376170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37616Cu;
    // 0x376170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37616Cu, 0x376174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376174u;
label_376174:
    // 0x376174: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x376174u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x376178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37617c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x376180: 0xc102488  jal         func_409220
    ctx->pc = 0x376180u;
    SET_GPR_U32(ctx, 31, 0x376188u);
    ctx->pc = 0x376184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376180u;
    // 0x376184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376180u, 0x376188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376188u;
label_376188:
    // 0x376188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x376188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37618c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37618cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376190: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x376190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x376194: 0xc1024c6  jal         func_409318
    ctx->pc = 0x376194u;
    SET_GPR_U32(ctx, 31, 0x37619Cu);
    ctx->pc = 0x376198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376194u;
    // 0x376198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x376194u, 0x37619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37619Cu;
label_37619c:
    // 0x37619c: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x37619cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3761a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3761a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3761a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3761a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3761a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3761a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3761ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3761acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3761b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3761b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3761b4: 0xc0c5af4  jal         func_316BD0
    ctx->pc = 0x3761B4u;
    SET_GPR_U32(ctx, 31, 0x3761BCu);
    ctx->pc = 0x3761B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3761B4u;
    // 0x3761b8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316BD0u, 0x3761B4u, 0x3761BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761BCu;
label_3761bc:
    // 0x3761bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3761bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3761c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3761c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3761c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3761c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3761c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3761c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3761cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3761ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3761d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3761d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3761d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3761d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3761d8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3761d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3761dc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3761dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3761e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3761E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3761E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761E0u;
        // 0x3761e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3761E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3761E8u;
}
