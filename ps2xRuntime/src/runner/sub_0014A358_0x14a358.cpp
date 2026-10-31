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

// Function: sub_0014A358
// Address: 0x14a358 - 0x14a440
void sub_0014A358_0x14a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A358_0x14a358");
#endif

    switch (ctx->pc) {
        case 0x14a398u: goto label_14a398;
        case 0x14a3bcu: goto label_14a3bc;
        case 0x14a3d8u: goto label_14a3d8;
        case 0x14a3e4u: goto label_14a3e4;
        case 0x14a3fcu: goto label_14a3fc;
        case 0x14a408u: goto label_14a408;
        default: break;
    }

    ctx->pc = 0x14a358u;

    // 0x14a358: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14a35c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14a360: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14a364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a368: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14a368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14a36c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x14a36cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x14a370: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x14a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14a374: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14a374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a378: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x14a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14a37c: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x14a37cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
    // 0x14a380: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x14a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x14a384: 0x3c150055  lui         $s5, 0x55
    ctx->pc = 0x14a384u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
    // 0x14a388: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14a38c: 0x3c160055  lui         $s6, 0x55
    ctx->pc = 0x14a38cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)85 << 16));
    // 0x14a390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A390u;
    {
        const bool branch_taken_0x14a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A390u;
        // 0x14a394: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a390) {
            ctx->pc = 0x14A3A4u;
            goto label_14a3a4;
        }
    }
    ctx->pc = 0x14A398u;
label_14a398:
    // 0x14a398: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x14a398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a39c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14A39Cu;
    {
        const bool branch_taken_0x14a39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A39Cu;
        // 0x14a3a0: 0x2a620006  slti        $v0, $s3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a39c) {
            ctx->pc = 0x14A414u;
            goto label_14a414;
        }
    }
    ctx->pc = 0x14A3A4u;
label_14a3a4:
    // 0x14a3a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a3a8: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x14a3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x14a3ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x14a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14a3b0: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x14a3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14a3b4: 0xc1115d8  jal         func_445760
    ctx->pc = 0x14A3B4u;
    SET_GPR_U32(ctx, 31, 0x14A3BCu);
    ctx->pc = 0x14A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3B4u;
    // 0x14a3b8: 0x2628000c  addiu       $t0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445760u, 0x14A3B4u, 0x14A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3BCu;
label_14a3bc:
    // 0x14a3bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3c0: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A3C0u;
    {
        const bool branch_taken_0x14a3c0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3C0u;
        // 0x14a3c4: 0x8e4269ec  lw          $v0, 0x69EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3c0) {
            ctx->pc = 0x14A3E4u;
            goto label_14a3e4;
        }
    }
    ctx->pc = 0x14A3C8u;
    // 0x14a3c8: 0x2685a870  addiu       $a1, $s4, -0x5790
    ctx->pc = 0x14a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944880));
    // 0x14a3cc: 0x26c6a988  addiu       $a2, $s6, -0x5678
    ctx->pc = 0x14a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945160));
    // 0x14a3d0: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A3D0u;
    SET_GPR_U32(ctx, 31, 0x14A3D8u);
    ctx->pc = 0x14A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3D0u;
    // 0x14a3d4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A3D0u, 0x14A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3D8u;
label_14a3d8:
    // 0x14a3d8: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a3dc: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A3DCu;
    SET_GPR_U32(ctx, 31, 0x14A3E4u);
    ctx->pc = 0x14A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3DCu;
    // 0x14a3e0: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A3DCu, 0x14A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3E4u;
label_14a3e4:
    // 0x14a3e4: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A3E4u;
    {
        const bool branch_taken_0x14a3e4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3E4u;
        // 0x14a3e8: 0x8e4269ec  lw          $v0, 0x69EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3e4) {
            ctx->pc = 0x14A408u;
            goto label_14a408;
        }
    }
    ctx->pc = 0x14A3ECu;
    // 0x14a3ec: 0x2685a870  addiu       $a1, $s4, -0x5790
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944880));
    // 0x14a3f0: 0x26a6a9c0  addiu       $a2, $s5, -0x5640
    ctx->pc = 0x14a3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945216));
    // 0x14a3f4: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A3F4u;
    SET_GPR_U32(ctx, 31, 0x14A3FCu);
    ctx->pc = 0x14A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3F4u;
    // 0x14a3f8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A3F4u, 0x14A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3FCu;
label_14a3fc:
    // 0x14a3fc: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a400: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A400u;
    SET_GPR_U32(ctx, 31, 0x14A408u);
    ctx->pc = 0x14A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A400u;
    // 0x14a404: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A400u, 0x14A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A408u;
label_14a408:
    // 0x14a408: 0x1600ffe3  bnez        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x14A408u;
    {
        const bool branch_taken_0x14a408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A408u;
        // 0x14a40c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a408) {
            ctx->pc = 0x14A398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a398;
        }
    }
    ctx->pc = 0x14A410u;
    // 0x14a410: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x14a410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_14a414:
    // 0x14a414: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14a414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a418: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14a418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a41c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14a41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a420: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14a420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a424: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x14a424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a428: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14a428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a42c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x14a42cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a434: 0x3e00008  jr          $ra
    ctx->pc = 0x14A434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A434u;
        // 0x14a438: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A43Cu;
    // 0x14a43c: 0x0  nop
    ctx->pc = 0x14a43cu;
    // NOP
    ctx->pc = 0x14a440u;
}
