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

// Function: sub_003603A8
// Address: 0x3603a8 - 0x3604b0
void sub_003603A8_0x3603a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003603A8_0x3603a8");
#endif

    switch (ctx->pc) {
        case 0x3603dcu: goto label_3603dc;
        case 0x3603e4u: goto label_3603e4;
        case 0x3603f8u: goto label_3603f8;
        case 0x360400u: goto label_360400;
        case 0x360414u: goto label_360414;
        case 0x36041cu: goto label_36041c;
        case 0x360430u: goto label_360430;
        case 0x360438u: goto label_360438;
        case 0x360450u: goto label_360450;
        case 0x360458u: goto label_360458;
        case 0x36046cu: goto label_36046c;
        case 0x360488u: goto label_360488;
        default: break;
    }

    ctx->pc = 0x3603a8u;

    // 0x3603a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3603a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3603ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3603acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3603b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3603b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3603b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3603b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3603b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3603b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3603bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3603c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3603c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3603c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3603c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3603c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3603ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3603d0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x3603d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3603d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3603D4u;
    SET_GPR_U32(ctx, 31, 0x3603DCu);
    ctx->pc = 0x3603D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3603D4u;
    // 0x3603d8: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3603D4u, 0x3603DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603DCu;
label_3603dc:
    // 0x3603dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3603DCu;
    SET_GPR_U32(ctx, 31, 0x3603E4u);
    ctx->pc = 0x3603E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3603DCu;
    // 0x3603e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3603DCu, 0x3603E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603E4u;
label_3603e4:
    // 0x3603e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3603e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3603e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3603ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3603f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3603F0u;
    SET_GPR_U32(ctx, 31, 0x3603F8u);
    ctx->pc = 0x3603F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3603F0u;
    // 0x3603f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3603F0u, 0x3603F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603F8u;
label_3603f8:
    // 0x3603f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3603F8u;
    SET_GPR_U32(ctx, 31, 0x360400u);
    ctx->pc = 0x3603FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3603F8u;
    // 0x3603fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3603F8u, 0x360400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360400u;
label_360400:
    // 0x360400: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360404: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360408: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x360408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36040c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36040Cu;
    SET_GPR_U32(ctx, 31, 0x360414u);
    ctx->pc = 0x360410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36040Cu;
    // 0x360410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36040Cu, 0x360414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360414u;
label_360414:
    // 0x360414: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360414u;
    SET_GPR_U32(ctx, 31, 0x36041Cu);
    ctx->pc = 0x360418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360414u;
    // 0x360418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360414u, 0x36041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36041Cu;
label_36041c:
    // 0x36041c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36041cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x360420: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360424: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x360424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360428: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360428u;
    SET_GPR_U32(ctx, 31, 0x360430u);
    ctx->pc = 0x36042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360428u;
    // 0x36042c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360428u, 0x360430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360430u;
label_360430:
    // 0x360430: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360430u;
    SET_GPR_U32(ctx, 31, 0x360438u);
    ctx->pc = 0x360434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360430u;
    // 0x360434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360430u, 0x360438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360438u;
label_360438:
    // 0x360438: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x360438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x36043c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x36043cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x360440: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360440u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360444: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x360444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360448: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360448u;
    SET_GPR_U32(ctx, 31, 0x360450u);
    ctx->pc = 0x36044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360448u;
    // 0x36044c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360448u, 0x360450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360450u;
label_360450:
    // 0x360450: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360450u;
    SET_GPR_U32(ctx, 31, 0x360458u);
    ctx->pc = 0x360454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360450u;
    // 0x360454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360450u, 0x360458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360458u;
label_360458:
    // 0x360458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x360458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36045c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360460: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x360460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360464: 0xc102488  jal         func_409220
    ctx->pc = 0x360464u;
    SET_GPR_U32(ctx, 31, 0x36046Cu);
    ctx->pc = 0x360468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360464u;
    // 0x360468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x360464u, 0x36046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36046Cu;
label_36046c:
    // 0x36046c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36046cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360474: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x360474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360478: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x360478u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36047c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36047cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x360480: 0xc0b30d2  jal         func_2CC348
    ctx->pc = 0x360480u;
    SET_GPR_U32(ctx, 31, 0x360488u);
    ctx->pc = 0x360484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360480u;
    // 0x360484: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC348u, 0x360480u, 0x360488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360488u;
label_360488:
    // 0x360488: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x360488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36048c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36048cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360490: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x360490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360494: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360498: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x360498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36049c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3604a0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x3604a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3604a4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3604a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3604a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3604A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3604ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604A8u;
        // 0x3604ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3604A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3604B0u;
}
