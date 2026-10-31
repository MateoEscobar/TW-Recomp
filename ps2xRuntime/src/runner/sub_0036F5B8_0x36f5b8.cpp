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

// Function: sub_0036F5B8
// Address: 0x36f5b8 - 0x36f748
void sub_0036F5B8_0x36f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F5B8_0x36f5b8");
#endif

    switch (ctx->pc) {
        case 0x36f5f4u: goto label_36f5f4;
        case 0x36f5fcu: goto label_36f5fc;
        case 0x36f610u: goto label_36f610;
        case 0x36f628u: goto label_36f628;
        case 0x36f630u: goto label_36f630;
        case 0x36f644u: goto label_36f644;
        case 0x36f664u: goto label_36f664;
        case 0x36f66cu: goto label_36f66c;
        case 0x36f684u: goto label_36f684;
        case 0x36f68cu: goto label_36f68c;
        case 0x36f698u: goto label_36f698;
        case 0x36f6b0u: goto label_36f6b0;
        case 0x36f6e0u: goto label_36f6e0;
        case 0x36f6e8u: goto label_36f6e8;
        case 0x36f704u: goto label_36f704;
        default: break;
    }

    ctx->pc = 0x36f5b8u;

    // 0x36f5b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36f5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36f5bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f5c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x36f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x36f5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f5c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x36f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x36f5cc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x36f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x36f5d0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x36f5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x36f5d4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x36f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x36f5d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36f5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36f5dc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x36f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x36f5e0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x36f5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x36f5e4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x36f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x36f5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36f5ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F5ECu;
    SET_GPR_U32(ctx, 31, 0x36F5F4u);
    ctx->pc = 0x36F5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5ECu;
    // 0x36f5f0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F5ECu, 0x36F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5F4u;
label_36f5f4:
    // 0x36f5f4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F5F4u;
    SET_GPR_U32(ctx, 31, 0x36F5FCu);
    ctx->pc = 0x36F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5F4u;
    // 0x36f5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F5F4u, 0x36F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5FCu;
label_36f5fc:
    // 0x36f5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f600: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f608: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36F608u;
    SET_GPR_U32(ctx, 31, 0x36F610u);
    ctx->pc = 0x36F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F608u;
    // 0x36f60c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36F608u, 0x36F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F610u;
label_36f610:
    // 0x36f610: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x36f610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x36f614: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x36f614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x36f618: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36f618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f61c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f620: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F620u;
    SET_GPR_U32(ctx, 31, 0x36F628u);
    ctx->pc = 0x36F624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F620u;
    // 0x36f624: 0x2b82b  sltu        $s7, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F620u, 0x36F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F628u;
label_36f628:
    // 0x36f628: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F628u;
    SET_GPR_U32(ctx, 31, 0x36F630u);
    ctx->pc = 0x36F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F628u;
    // 0x36f62c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F628u, 0x36F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F630u;
label_36f630:
    // 0x36f630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f634: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36f638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f63c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36F63Cu;
    SET_GPR_U32(ctx, 31, 0x36F644u);
    ctx->pc = 0x36F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F63Cu;
    // 0x36f640: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36F63Cu, 0x36F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F644u;
label_36f644:
    // 0x36f644: 0x34068274  ori         $a2, $zero, 0x8274
    ctx->pc = 0x36f644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33396);
    // 0x36f648: 0x63738  dsll        $a2, $a2, 28
    ctx->pc = 0x36f648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 28);
    // 0x36f64c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x36f64cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x36f650: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x36f650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x36f654: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36f654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36f658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f65c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F65Cu;
    SET_GPR_U32(ctx, 31, 0x36F664u);
    ctx->pc = 0x36F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F65Cu;
    // 0x36f660: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F65Cu, 0x36F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F664u;
label_36f664:
    // 0x36f664: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F664u;
    SET_GPR_U32(ctx, 31, 0x36F66Cu);
    ctx->pc = 0x36F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F664u;
    // 0x36f668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F664u, 0x36F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F66Cu;
label_36f66c:
    // 0x36f66c: 0x34068274  ori         $a2, $zero, 0x8274
    ctx->pc = 0x36f66cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33396);
    // 0x36f670: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x36f670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x36f674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f678: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36f678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36f67c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F67Cu;
    SET_GPR_U32(ctx, 31, 0x36F684u);
    ctx->pc = 0x36F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F67Cu;
    // 0x36f680: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F67Cu, 0x36F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F684u;
label_36f684:
    // 0x36f684: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F684u;
    SET_GPR_U32(ctx, 31, 0x36F68Cu);
    ctx->pc = 0x36F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F684u;
    // 0x36f688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F684u, 0x36F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F68Cu;
label_36f68c:
    // 0x36f68c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36f68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f690: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36f690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f694: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36f694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36f698:
    // 0x36f698: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36f698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36f69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f6a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36f6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6a8: 0xc10250e  jal         func_409438
    ctx->pc = 0x36F6A8u;
    SET_GPR_U32(ctx, 31, 0x36F6B0u);
    ctx->pc = 0x36F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F6A8u;
    // 0x36f6ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409438u, 0x36F6A8u, 0x36F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F6B0u;
label_36f6b0:
    // 0x36f6b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36f6b4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36f6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36f6b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36F6B8u;
    {
        const bool branch_taken_0x36f6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6B8u;
        // 0x36f6bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6b8) {
            ctx->pc = 0x36F698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f698;
        }
    }
    ctx->pc = 0x36F6C0u;
    // 0x36f6c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x36f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6c8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x36f6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6cc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x36f6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6d0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x36f6d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6d4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x36f6d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6d8: 0xc06d4ec  jal         func_1B53B0
    ctx->pc = 0x36F6D8u;
    SET_GPR_U32(ctx, 31, 0x36F6E0u);
    ctx->pc = 0x36F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F6D8u;
    // 0x36f6dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B53B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B53B0u, 0x36F6D8u, 0x36F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F6E0u;
label_36f6e0:
    // 0x36f6e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36f6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36f6e8:
    // 0x36f6e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36f6f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36f6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36f6f4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x36f6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36f6f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f6fc: 0xc102592  jal         func_409648
    ctx->pc = 0x36F6FCu;
    SET_GPR_U32(ctx, 31, 0x36F704u);
    ctx->pc = 0x36F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F6FCu;
    // 0x36f700: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409648u, 0x36F6FCu, 0x36F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F704u;
label_36f704:
    // 0x36f704: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36f704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36f708: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36F708u;
    {
        const bool branch_taken_0x36f708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F708u;
        // 0x36f70c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f708) {
            ctx->pc = 0x36F6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f6e8;
        }
    }
    ctx->pc = 0x36F710u;
    // 0x36f710: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x36f710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36f714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f718: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x36f718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36f71c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x36f71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36f720: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x36f720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36f724: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36f724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36f728: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36f728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36f72c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x36f72cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36f730: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x36f730u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36f734: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x36f734u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F73Cu;
        // 0x36f740: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F744u;
    // 0x36f744: 0x0  nop
    ctx->pc = 0x36f744u;
    // NOP
    ctx->pc = 0x36f748u;
}
