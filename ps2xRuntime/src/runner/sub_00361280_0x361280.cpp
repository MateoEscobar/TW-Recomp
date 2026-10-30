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

// Function: sub_00361280
// Address: 0x361280 - 0x361418
void sub_00361280_0x361280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361280_0x361280");
#endif

    switch (ctx->pc) {
        case 0x3612c0u: goto label_3612c0;
        case 0x3612c8u: goto label_3612c8;
        case 0x3612dcu: goto label_3612dc;
        case 0x3612e4u: goto label_3612e4;
        case 0x3612f8u: goto label_3612f8;
        case 0x361300u: goto label_361300;
        case 0x361314u: goto label_361314;
        case 0x36131cu: goto label_36131c;
        case 0x361330u: goto label_361330;
        case 0x361338u: goto label_361338;
        case 0x36134cu: goto label_36134c;
        case 0x361358u: goto label_361358;
        case 0x361370u: goto label_361370;
        case 0x361378u: goto label_361378;
        case 0x3613a8u: goto label_3613a8;
        case 0x3613b0u: goto label_3613b0;
        case 0x3613c0u: goto label_3613c0;
        case 0x3613d4u: goto label_3613d4;
        default: break;
    }

    ctx->pc = 0x361280u;

    // 0x361280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x361280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x361284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361288: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x361288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x36128c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x36128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x361290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361294: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x361294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361298: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x361298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x36129c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x36129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3612a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3612a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3612a4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3612a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3612a8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3612a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3612ac: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3612acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3612b0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3612b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3612b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3612b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3612b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3612B8u;
    SET_GPR_U32(ctx, 31, 0x3612C0u);
    ctx->pc = 0x3612BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612B8u;
    // 0x3612bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3612B8u, 0x3612C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612C0u;
label_3612c0:
    // 0x3612c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3612C0u;
    SET_GPR_U32(ctx, 31, 0x3612C8u);
    ctx->pc = 0x3612C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612C0u;
    // 0x3612c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3612C0u, 0x3612C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612C8u;
label_3612c8:
    // 0x3612c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3612c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3612ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3612d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3612d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3612D4u;
    SET_GPR_U32(ctx, 31, 0x3612DCu);
    ctx->pc = 0x3612D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612D4u;
    // 0x3612d8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3612D4u, 0x3612DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612DCu;
label_3612dc:
    // 0x3612dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3612DCu;
    SET_GPR_U32(ctx, 31, 0x3612E4u);
    ctx->pc = 0x3612E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612DCu;
    // 0x3612e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3612DCu, 0x3612E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612E4u;
label_3612e4:
    // 0x3612e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3612e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3612e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3612ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3612ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3612F0u;
    SET_GPR_U32(ctx, 31, 0x3612F8u);
    ctx->pc = 0x3612F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612F0u;
    // 0x3612f4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3612F0u, 0x3612F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612F8u;
label_3612f8:
    // 0x3612f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3612F8u;
    SET_GPR_U32(ctx, 31, 0x361300u);
    ctx->pc = 0x3612FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3612F8u;
    // 0x3612fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3612F8u, 0x361300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361300u;
label_361300:
    // 0x361300: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361304: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x361304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x361308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36130c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36130Cu;
    SET_GPR_U32(ctx, 31, 0x361314u);
    ctx->pc = 0x361310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36130Cu;
    // 0x361310: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36130Cu, 0x361314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361314u;
label_361314:
    // 0x361314: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x361314u;
    SET_GPR_U32(ctx, 31, 0x36131Cu);
    ctx->pc = 0x361318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361314u;
    // 0x361318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x361314u, 0x36131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36131Cu;
label_36131c:
    // 0x36131c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36131cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361320: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x361320u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x361324: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x361324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x361328: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361328u;
    SET_GPR_U32(ctx, 31, 0x361330u);
    ctx->pc = 0x36132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361328u;
    // 0x36132c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361328u, 0x361330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361330u;
label_361330:
    // 0x361330: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361330u;
    SET_GPR_U32(ctx, 31, 0x361338u);
    ctx->pc = 0x361334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361330u;
    // 0x361334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361330u, 0x361338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361338u;
label_361338:
    // 0x361338: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36133c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361340: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x361340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x361344: 0xc1024c6  jal         func_409318
    ctx->pc = 0x361344u;
    SET_GPR_U32(ctx, 31, 0x36134Cu);
    ctx->pc = 0x361348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361344u;
    // 0x361348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x361344u, 0x36134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36134Cu;
label_36134c:
    // 0x36134c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x36134cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361350: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361354: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x361354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_361358:
    // 0x361358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x361358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36135c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361360: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361364: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361368: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x361368u;
    SET_GPR_U32(ctx, 31, 0x361370u);
    ctx->pc = 0x36136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361368u;
    // 0x36136c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x361368u, 0x361370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361370u;
label_361370:
    // 0x361370: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x361370u;
    SET_GPR_U32(ctx, 31, 0x361378u);
    ctx->pc = 0x361374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361370u;
    // 0x361374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x361370u, 0x361378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361378u;
label_361378:
    // 0x361378: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x361378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36137c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36137cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x361380: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x361380u;
    {
        const bool branch_taken_0x361380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361380u;
        // 0x361384: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361380) {
            ctx->pc = 0x361358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361358;
        }
    }
    ctx->pc = 0x361388u;
    // 0x361388: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x361388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36138c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36138cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361390: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x361390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361394: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x361394u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x361398: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x361398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36139c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x36139cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613a0: 0xc0b933c  jal         func_2E4CF0
    ctx->pc = 0x3613A0u;
    SET_GPR_U32(ctx, 31, 0x3613A8u);
    ctx->pc = 0x3613A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613A0u;
    // 0x3613a4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4CF0u, 0x3613A0u, 0x3613A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613A8u;
label_3613a8:
    // 0x3613a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3613a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3613acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3613b0:
    // 0x3613b0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3613b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3613b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3613b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3613b8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3613B8u;
    SET_GPR_U32(ctx, 31, 0x3613C0u);
    ctx->pc = 0x3613BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613B8u;
    // 0x3613bc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3613B8u, 0x3613C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613C0u;
label_3613c0:
    // 0x3613c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3613c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3613c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3613c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3613cc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3613CCu;
    SET_GPR_U32(ctx, 31, 0x3613D4u);
    ctx->pc = 0x3613D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613CCu;
    // 0x3613d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3613CCu, 0x3613D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613D4u;
label_3613d4:
    // 0x3613d4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3613d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3613d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3613D8u;
    {
        const bool branch_taken_0x3613d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3613DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3613D8u;
        // 0x3613dc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3613d8) {
            ctx->pc = 0x3613B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3613b0;
        }
    }
    ctx->pc = 0x3613E0u;
    // 0x3613e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3613e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3613e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3613e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3613e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3613ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3613ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3613f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3613f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3613f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3613f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3613f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3613f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3613fc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3613fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361400: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x361400u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x361404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361408: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x361408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36140c: 0x3e00008  jr          $ra
    ctx->pc = 0x36140Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36140Cu;
        // 0x361410: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36140Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361414u;
    // 0x361414: 0x0  nop
    ctx->pc = 0x361414u;
    // NOP
    ctx->pc = 0x361418u;
}
