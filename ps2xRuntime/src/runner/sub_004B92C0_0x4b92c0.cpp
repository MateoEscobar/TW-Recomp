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

// Function: sub_004B92C0
// Address: 0x4b92c0 - 0x4b96f8
void sub_004B92C0_0x4b92c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B92C0_0x4b92c0");
#endif

    switch (ctx->pc) {
        case 0x4b92f0u: goto label_4b92f0;
        case 0x4b930cu: goto label_4b930c;
        case 0x4b931cu: goto label_4b931c;
        case 0x4b932cu: goto label_4b932c;
        case 0x4b9360u: goto label_4b9360;
        case 0x4b9378u: goto label_4b9378;
        case 0x4b9388u: goto label_4b9388;
        case 0x4b93a0u: goto label_4b93a0;
        case 0x4b93b0u: goto label_4b93b0;
        case 0x4b93e4u: goto label_4b93e4;
        case 0x4b93f4u: goto label_4b93f4;
        case 0x4b9404u: goto label_4b9404;
        case 0x4b9414u: goto label_4b9414;
        case 0x4b9458u: goto label_4b9458;
        case 0x4b9474u: goto label_4b9474;
        case 0x4b9484u: goto label_4b9484;
        case 0x4b9494u: goto label_4b9494;
        case 0x4b94a4u: goto label_4b94a4;
        case 0x4b94b4u: goto label_4b94b4;
        case 0x4b94c4u: goto label_4b94c4;
        case 0x4b9518u: goto label_4b9518;
        case 0x4b9528u: goto label_4b9528;
        case 0x4b956cu: goto label_4b956c;
        case 0x4b957cu: goto label_4b957c;
        case 0x4b958cu: goto label_4b958c;
        case 0x4b9598u: goto label_4b9598;
        case 0x4b95ccu: goto label_4b95cc;
        case 0x4b95dcu: goto label_4b95dc;
        case 0x4b95ecu: goto label_4b95ec;
        case 0x4b95f8u: goto label_4b95f8;
        case 0x4b9608u: goto label_4b9608;
        case 0x4b9630u: goto label_4b9630;
        case 0x4b9640u: goto label_4b9640;
        case 0x4b9650u: goto label_4b9650;
        case 0x4b968cu: goto label_4b968c;
        case 0x4b969cu: goto label_4b969c;
        case 0x4b96b8u: goto label_4b96b8;
        default: break;
    }

    ctx->pc = 0x4b92c0u;

    // 0x4b92c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4b92c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4b92c4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4b92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4b92c8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b92c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b92cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b92ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b92d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b92d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b92d4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x4b92d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x4b92d8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x4b92d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x4b92dc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b92dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b92e0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4b92e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4b92e4: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x4b92e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
    // 0x4b92e8: 0xc12eb9a  jal         func_4BAE68
    ctx->pc = 0x4B92E8u;
    SET_GPR_U32(ctx, 31, 0x4B92F0u);
    ctx->pc = 0x4B92ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B92E8u;
    // 0x4b92ec: 0xffb30060  sd          $s3, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BAE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BAE68u, 0x4B92E8u, 0x4B92F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B92F0u;
label_4b92f0:
    // 0x4b92f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b92f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b92f4: 0x8eb41974  lw          $s4, 0x1974($s5)
    ctx->pc = 0x4b92f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
    // 0x4b92f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b92fc: 0x128200f3  beq         $s4, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x4B92FCu;
    {
        const bool branch_taken_0x4b92fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B92FCu;
        // 0x4b9300: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b92fc) {
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B9304u;
    // 0x4b9304: 0xc12f8d8  jal         func_4BE360
    ctx->pc = 0x4B9304u;
    SET_GPR_U32(ctx, 31, 0x4B930Cu);
    ctx->pc = 0x4B9308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9304u;
    // 0x4b9308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE360u, 0x4B9304u, 0x4B930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B930Cu;
label_4b930c:
    // 0x4b930c: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x4B930Cu;
    {
        const bool branch_taken_0x4b930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B930Cu;
        // 0x4b9310: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b930c) {
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B9314u;
    // 0x4b9314: 0xc12f8d8  jal         func_4BE360
    ctx->pc = 0x4B9314u;
    SET_GPR_U32(ctx, 31, 0x4B931Cu);
    ctx->pc = 0x4B9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9314u;
    // 0x4b9318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE360u, 0x4B9314u, 0x4B931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B931Cu;
label_4b931c:
    // 0x4b931c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B931Cu;
    {
        const bool branch_taken_0x4b931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B931Cu;
        // 0x4b9320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b931c) {
            ctx->pc = 0x4B9390u;
            goto label_4b9390;
        }
    }
    ctx->pc = 0x4B9324u;
    // 0x4b9324: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9324u;
    SET_GPR_U32(ctx, 31, 0x4B932Cu);
    ctx->pc = 0x4B9328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9324u;
    // 0x4b9328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9324u, 0x4B932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B932Cu;
label_4b932c:
    // 0x4b932c: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x4B932Cu;
    {
        const bool branch_taken_0x4b932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B932Cu;
        // 0x4b9330: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b932c) {
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B9334u;
    // 0x4b9334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9338: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b933c: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x4b933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x4b9340: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b9344: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b9344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9348: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b9348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b934c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b9350: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x4b9350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x4b9354: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4b9354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4b9358: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9358u;
    {
        const bool branch_taken_0x4b9358 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9358u;
        // 0x4b935c: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9358) {
            ctx->pc = 0x4B9370u;
            goto label_4b9370;
        }
    }
    ctx->pc = 0x4B9360u;
label_4b9360:
    // 0x4b9360: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x4b9360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b9364: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x4b9364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x4b9368: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x4B9368u;
    {
        const bool branch_taken_0x4b9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9368u;
        // 0x4b936c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9368) {
            ctx->pc = 0x4B96A4u;
            goto label_4b96a4;
        }
    }
    ctx->pc = 0x4B9370u;
label_4b9370:
    // 0x4b9370: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9370u;
    SET_GPR_U32(ctx, 31, 0x4B9378u);
    ctx->pc = 0x4B9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9370u;
    // 0x4b9374: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9370u, 0x4B9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9378u;
label_4b9378:
    // 0x4b9378: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x4B9378u;
    {
        const bool branch_taken_0x4b9378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9378u;
        // 0x4b937c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9378) {
            ctx->pc = 0x4B96A8u;
            goto label_4b96a8;
        }
    }
    ctx->pc = 0x4B9380u;
    // 0x4b9380: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9380u;
    SET_GPR_U32(ctx, 31, 0x4B9388u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9380u, 0x4B9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9388u;
label_4b9388:
    // 0x4b9388: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x4B9388u;
    {
        const bool branch_taken_0x4b9388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9388u;
        // 0x4b938c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9388) {
            ctx->pc = 0x4B96A0u;
            goto label_4b96a0;
        }
    }
    ctx->pc = 0x4B9390u;
label_4b9390:
    // 0x4b9390: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b9390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b9394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9398: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9398u;
    SET_GPR_U32(ctx, 31, 0x4B93A0u);
    ctx->pc = 0x4B939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9398u;
    // 0x4b939c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9398u, 0x4B93A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B93A0u;
label_4b93a0:
    // 0x4b93a0: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x4B93A0u;
    {
        const bool branch_taken_0x4b93a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B93A0u;
        // 0x4b93a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b93a0) {
            ctx->pc = 0x4B948Cu;
            goto label_4b948c;
        }
    }
    ctx->pc = 0x4B93A8u;
    // 0x4b93a8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B93A8u;
    SET_GPR_U32(ctx, 31, 0x4B93B0u);
    ctx->pc = 0x4B93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B93A8u;
    // 0x4b93ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B93A8u, 0x4B93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B93B0u;
label_4b93b0:
    // 0x4b93b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B93B0u;
    {
        const bool branch_taken_0x4b93b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B93B0u;
        // 0x4b93b4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b93b0) {
            ctx->pc = 0x4B93FCu;
            goto label_4b93fc;
        }
    }
    ctx->pc = 0x4B93B8u;
    // 0x4b93b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b93bc: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x4b93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x4b93c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b93c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b93c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b93c8: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x4b93c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x4b93cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b93ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b93d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b93d4: 0x1680ffe2  bnez        $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4B93D4u;
    {
        const bool branch_taken_0x4b93d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B93D4u;
        // 0x4b93d8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b93d4) {
            ctx->pc = 0x4B9360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b9360;
        }
    }
    ctx->pc = 0x4B93DCu;
    // 0x4b93dc: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B93DCu;
    SET_GPR_U32(ctx, 31, 0x4B93E4u);
    ctx->pc = 0x4B93E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B93DCu;
    // 0x4b93e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B93DCu, 0x4B93E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B93E4u;
label_4b93e4:
    // 0x4b93e4: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x4B93E4u;
    {
        const bool branch_taken_0x4b93e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B93E4u;
        // 0x4b93e8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b93e4) {
            ctx->pc = 0x4B96A8u;
            goto label_4b96a8;
        }
    }
    ctx->pc = 0x4B93ECu;
    // 0x4b93ec: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B93ECu;
    SET_GPR_U32(ctx, 31, 0x4B93F4u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B93ECu, 0x4B93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B93F4u;
label_4b93f4:
    // 0x4b93f4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x4B93F4u;
    {
        const bool branch_taken_0x4b93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B93F4u;
        // 0x4b93f8: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b93f4) {
            ctx->pc = 0x4B96A0u;
            goto label_4b96a0;
        }
    }
    ctx->pc = 0x4B93FCu;
label_4b93fc:
    // 0x4b93fc: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B93FCu;
    SET_GPR_U32(ctx, 31, 0x4B9404u);
    ctx->pc = 0x4B9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B93FCu;
    // 0x4b9400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B93FCu, 0x4B9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9404u;
label_4b9404:
    // 0x4b9404: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x4B9404u;
    {
        const bool branch_taken_0x4b9404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9404u;
        // 0x4b9408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9404) {
            ctx->pc = 0x4B96C8u;
            goto label_4b96c8;
        }
    }
    ctx->pc = 0x4B940Cu;
    // 0x4b940c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B940Cu;
    SET_GPR_U32(ctx, 31, 0x4B9414u);
    ctx->pc = 0x4B9410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B940Cu;
    // 0x4b9410: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B940Cu, 0x4B9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9414u;
label_4b9414:
    // 0x4b9414: 0x44100ad  bgez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x4B9414u;
    {
        const bool branch_taken_0x4b9414 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9414u;
        // 0x4b9418: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9414) {
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B941Cu;
    // 0x4b941c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9424: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x4b9424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x4b9428: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b942c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b942cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9430: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x4b9430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x4b9434: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b9438: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B9438u;
    {
        const bool branch_taken_0x4b9438 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9438u;
        // 0x4b943c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9438) {
            ctx->pc = 0x4B9448u;
            goto label_4b9448;
        }
    }
    ctx->pc = 0x4B9440u;
    // 0x4b9440: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9440u;
    {
        const bool branch_taken_0x4b9440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9440u;
        // 0x4b9444: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9440) {
            ctx->pc = 0x4B945Cu;
            goto label_4b945c;
        }
    }
    ctx->pc = 0x4B9448u;
label_4b9448:
    // 0x4b9448: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b944c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9450: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B9450u;
    SET_GPR_U32(ctx, 31, 0x4B9458u);
    ctx->pc = 0x4B9454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9450u;
    // 0x4b9454: 0xdc450ed8  ld          $a1, 0xED8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 3800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B9450u, 0x4B9458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9458u;
label_4b9458:
    // 0x4b9458: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b9458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_4b945c:
    // 0x4b945c: 0x8ea31974  lw          $v1, 0x1974($s5)
    ctx->pc = 0x4b945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
    // 0x4b9460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9464: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9464u;
    {
        const bool branch_taken_0x4b9464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9464) {
            ctx->pc = 0x4B947Cu;
            goto label_4b947c;
        }
    }
    ctx->pc = 0x4B946Cu;
    // 0x4b946c: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B946Cu;
    SET_GPR_U32(ctx, 31, 0x4B9474u);
    ctx->pc = 0x4B9470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B946Cu;
    // 0x4b9470: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B946Cu, 0x4B9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9474u;
label_4b9474:
    // 0x4b9474: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x4B9474u;
    {
        const bool branch_taken_0x4b9474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9474u;
        // 0x4b9478: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9474) {
            ctx->pc = 0x4B96A8u;
            goto label_4b96a8;
        }
    }
    ctx->pc = 0x4B947Cu;
label_4b947c:
    // 0x4b947c: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B947Cu;
    SET_GPR_U32(ctx, 31, 0x4B9484u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B947Cu, 0x4B9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9484u;
label_4b9484:
    // 0x4b9484: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x4B9484u;
    {
        const bool branch_taken_0x4b9484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9484u;
        // 0x4b9488: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9484) {
            ctx->pc = 0x4B96A0u;
            goto label_4b96a0;
        }
    }
    ctx->pc = 0x4B948Cu;
label_4b948c:
    // 0x4b948c: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B948Cu;
    SET_GPR_U32(ctx, 31, 0x4B9494u);
    ctx->pc = 0x4B9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B948Cu;
    // 0x4b9490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B948Cu, 0x4B9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9494u;
label_4b9494:
    // 0x4b9494: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x4B9494u;
    {
        const bool branch_taken_0x4b9494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b9494) {
            ctx->pc = 0x4B9498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9494u;
            // 0x4b9498: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9624u;
            goto label_4b9624;
        }
    }
    ctx->pc = 0x4B949Cu;
    // 0x4b949c: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B949Cu;
    SET_GPR_U32(ctx, 31, 0x4B94A4u);
    ctx->pc = 0x4B94A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B949Cu;
    // 0x4b94a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B949Cu, 0x4B94A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B94A4u;
label_4b94a4:
    // 0x4b94a4: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x4B94A4u;
    {
        const bool branch_taken_0x4b94a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b94a4) {
            ctx->pc = 0x4B94A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B94A4u;
            // 0x4b94a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9624u;
            goto label_4b9624;
        }
    }
    ctx->pc = 0x4B94ACu;
    // 0x4b94ac: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B94ACu;
    SET_GPR_U32(ctx, 31, 0x4B94B4u);
    ctx->pc = 0x4B94B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B94ACu;
    // 0x4b94b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B94ACu, 0x4B94B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B94B4u;
label_4b94b4:
    // 0x4b94b4: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x4B94B4u;
    {
        const bool branch_taken_0x4b94b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b94b4) {
            ctx->pc = 0x4B94B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B94B4u;
            // 0x4b94b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9624u;
            goto label_4b9624;
        }
    }
    ctx->pc = 0x4B94BCu;
    // 0x4b94bc: 0xc12f8d8  jal         func_4BE360
    ctx->pc = 0x4B94BCu;
    SET_GPR_U32(ctx, 31, 0x4B94C4u);
    ctx->pc = 0x4B94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B94BCu;
    // 0x4b94c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE360u, 0x4B94BCu, 0x4B94C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B94C4u;
label_4b94c4:
    // 0x4b94c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B94C4u;
    {
        const bool branch_taken_0x4b94c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B94C4u;
        // 0x4b94c8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b94c4) {
            ctx->pc = 0x4B9530u;
            goto label_4b9530;
        }
    }
    ctx->pc = 0x4B94CCu;
    // 0x4b94cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b94d0: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x4b94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x4b94d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b94d8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b94d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b94dc: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x4b94dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x4b94e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b94e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b94e4: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B94E4u;
    {
        const bool branch_taken_0x4b94e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B94E4u;
        // 0x4b94e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b94e4) {
            ctx->pc = 0x4B94F4u;
            goto label_4b94f4;
        }
    }
    ctx->pc = 0x4B94ECu;
    // 0x4b94ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B94ECu;
    {
        const bool branch_taken_0x4b94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B94ECu;
        // 0x4b94f0: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b94ec) {
            ctx->pc = 0x4B9500u;
            goto label_4b9500;
        }
    }
    ctx->pc = 0x4B94F4u;
label_4b94f4:
    // 0x4b94f4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b94f8: 0xdc430f78  ld          $v1, 0xF78($v0)
    ctx->pc = 0x4b94f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x590F78u));
    // 0x4b94fc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4b94fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_4b9500:
    // 0x4b9500: 0x8ea31974  lw          $v1, 0x1974($s5)
    ctx->pc = 0x4b9500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
    // 0x4b9504: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9508: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9508u;
    {
        const bool branch_taken_0x4b9508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9508) {
            ctx->pc = 0x4B9520u;
            goto label_4b9520;
        }
    }
    ctx->pc = 0x4B9510u;
    // 0x4b9510: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9510u;
    SET_GPR_U32(ctx, 31, 0x4B9518u);
    ctx->pc = 0x4B9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9510u;
    // 0x4b9514: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9510u, 0x4B9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9518u;
label_4b9518:
    // 0x4b9518: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4B9518u;
    {
        const bool branch_taken_0x4b9518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9518u;
        // 0x4b951c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9518) {
            ctx->pc = 0x4B96A8u;
            goto label_4b96a8;
        }
    }
    ctx->pc = 0x4B9520u;
label_4b9520:
    // 0x4b9520: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9520u;
    SET_GPR_U32(ctx, 31, 0x4B9528u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9520u, 0x4B9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9528u;
label_4b9528:
    // 0x4b9528: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x4B9528u;
    {
        const bool branch_taken_0x4b9528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9528u;
        // 0x4b952c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9528) {
            ctx->pc = 0x4B96A0u;
            goto label_4b96a0;
        }
    }
    ctx->pc = 0x4B9530u;
label_4b9530:
    // 0x4b9530: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b9530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b9534: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x4b9534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x4b9538: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b9538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b953c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b953cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b9540: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4b9540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4b9544: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x4b9544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x4b9548: 0x16800019  bnez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B9548u;
    {
        const bool branch_taken_0x4b9548 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9548u;
        // 0x4b954c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9548) {
            ctx->pc = 0x4B95B0u;
            goto label_4b95b0;
        }
    }
    ctx->pc = 0x4B9550u;
    // 0x4b9550: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b9550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b9554: 0xdc220f80  ld          $v0, 0xF80($at)
    ctx->pc = 0x4b9554u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590F80u));
    // 0x4b9558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b955c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b955cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b9560: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b9560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b9564: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B9564u;
    SET_GPR_U32(ctx, 31, 0x4B956Cu);
    ctx->pc = 0x4B9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9564u;
    // 0x4b9568: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B9564u, 0x4B956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B956Cu;
label_4b956c:
    // 0x4b956c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b956cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b9570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9574: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9574u;
    SET_GPR_U32(ctx, 31, 0x4B957Cu);
    ctx->pc = 0x4B9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9574u;
    // 0x4b9578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9574u, 0x4B957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B957Cu;
label_4b957c:
    // 0x4b957c: 0x4410024  bgez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B957Cu;
    {
        const bool branch_taken_0x4b957c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B957Cu;
        // 0x4b9580: 0x8ea31974  lw          $v1, 0x1974($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b957c) {
            ctx->pc = 0x4B9610u;
            goto label_4b9610;
        }
    }
    ctx->pc = 0x4B9584u;
    // 0x4b9584: 0xc12f8f0  jal         func_4BE3C0
    ctx->pc = 0x4B9584u;
    SET_GPR_U32(ctx, 31, 0x4B958Cu);
    ctx->pc = 0x4B9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9584u;
    // 0x4b9588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE3C0u, 0x4B9584u, 0x4B958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B958Cu;
label_4b958c:
    // 0x4b958c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9590: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9590u;
    SET_GPR_U32(ctx, 31, 0x4B9598u);
    ctx->pc = 0x4B9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9590u;
    // 0x4b9594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9590u, 0x4B9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9598u;
label_4b9598:
    // 0x4b9598: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B9598u;
    {
        const bool branch_taken_0x4b9598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9598u;
        // 0x4b959c: 0x8ea31974  lw          $v1, 0x1974($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9598) {
            ctx->pc = 0x4B9610u;
            goto label_4b9610;
        }
    }
    ctx->pc = 0x4B95A0u;
    // 0x4b95a0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b95a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b95a4: 0xdc220f88  ld          $v0, 0xF88($at)
    ctx->pc = 0x4b95a4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590F88u));
    // 0x4b95a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4B95A8u;
    {
        const bool branch_taken_0x4b95a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B95A8u;
        // 0x4b95ac: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b95a8) {
            ctx->pc = 0x4B9610u;
            goto label_4b9610;
        }
    }
    ctx->pc = 0x4B95B0u;
label_4b95b0:
    // 0x4b95b0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b95b4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b95b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b95b8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b95b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b95bc: 0xdc510ed8  ld          $s1, 0xED8($v0)
    ctx->pc = 0x4b95bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 3800)));
    // 0x4b95c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b95c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b95c4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B95C4u;
    SET_GPR_U32(ctx, 31, 0x4B95CCu);
    ctx->pc = 0x4B95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B95C4u;
    // 0x4b95c8: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B95C4u, 0x4B95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B95CCu;
label_4b95cc:
    // 0x4b95cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b95ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b95d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b95d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b95d4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B95D4u;
    SET_GPR_U32(ctx, 31, 0x4B95DCu);
    ctx->pc = 0x4B95D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B95D4u;
    // 0x4b95d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B95D4u, 0x4B95DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B95DCu;
label_4b95dc:
    // 0x4b95dc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B95DCu;
    {
        const bool branch_taken_0x4b95dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B95DCu;
        // 0x4b95e0: 0x8ea31974  lw          $v1, 0x1974($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b95dc) {
            ctx->pc = 0x4B9610u;
            goto label_4b9610;
        }
    }
    ctx->pc = 0x4B95E4u;
    // 0x4b95e4: 0xc12f8f0  jal         func_4BE3C0
    ctx->pc = 0x4B95E4u;
    SET_GPR_U32(ctx, 31, 0x4B95ECu);
    ctx->pc = 0x4B95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B95E4u;
    // 0x4b95e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE3C0u, 0x4B95E4u, 0x4B95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B95ECu;
label_4b95ec:
    // 0x4b95ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b95ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b95f0: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B95F0u;
    SET_GPR_U32(ctx, 31, 0x4B95F8u);
    ctx->pc = 0x4B95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B95F0u;
    // 0x4b95f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B95F0u, 0x4B95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B95F8u;
label_4b95f8:
    // 0x4b95f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B95F8u;
    {
        const bool branch_taken_0x4b95f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B95F8u;
        // 0x4b95fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b95f8) {
            ctx->pc = 0x4B960Cu;
            goto label_4b960c;
        }
    }
    ctx->pc = 0x4B9600u;
    // 0x4b9600: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B9600u;
    SET_GPR_U32(ctx, 31, 0x4B9608u);
    ctx->pc = 0x4B9604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9600u;
    // 0x4b9604: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B9600u, 0x4B9608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9608u;
label_4b9608:
    // 0x4b9608: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b9608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_4b960c:
    // 0x4b960c: 0x8ea31974  lw          $v1, 0x1974($s5)
    ctx->pc = 0x4b960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
label_4b9610:
    // 0x4b9610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9614: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4B9614u;
    {
        const bool branch_taken_0x4b9614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9614) {
            ctx->pc = 0x4B9694u;
            goto label_4b9694;
        }
    }
    ctx->pc = 0x4B961Cu;
    // 0x4b961c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4B961Cu;
    {
        const bool branch_taken_0x4b961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b961c) {
            ctx->pc = 0x4B9684u;
            goto label_4b9684;
        }
    }
    ctx->pc = 0x4B9624u;
label_4b9624:
    // 0x4b9624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b9624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9628: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9628u;
    SET_GPR_U32(ctx, 31, 0x4B9630u);
    ctx->pc = 0x4B962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9628u;
    // 0x4b962c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9628u, 0x4B9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9630u;
label_4b9630:
    // 0x4b9630: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4B9630u;
    {
        const bool branch_taken_0x4b9630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9630u;
        // 0x4b9634: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9630) {
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B9638u;
    // 0x4b9638: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B9638u;
    SET_GPR_U32(ctx, 31, 0x4B9640u);
    ctx->pc = 0x4B963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9638u;
    // 0x4b963c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B9638u, 0x4B9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9640u;
label_4b9640:
    // 0x4b9640: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B9640u;
    {
        const bool branch_taken_0x4b9640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9640u;
        // 0x4b9644: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9640) {
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B9648u;
    // 0x4b9648: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B9648u;
    SET_GPR_U32(ctx, 31, 0x4B9650u);
    ctx->pc = 0x4B964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9648u;
    // 0x4b964c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B9648u, 0x4B9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9650u;
label_4b9650:
    // 0x4b9650: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B9650u;
    {
        const bool branch_taken_0x4b9650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9650u;
        // 0x4b9654: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9650) {
            ctx->pc = 0x4B96C8u;
            goto label_4b96c8;
        }
    }
    ctx->pc = 0x4B9658u;
    // 0x4b9658: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b9658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b965c: 0x24630f70  addiu       $v1, $v1, 0xF70
    ctx->pc = 0x4b965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3952));
    // 0x4b9660: 0x8ea51974  lw          $a1, 0x1974($s5)
    ctx->pc = 0x4b9660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6516)));
    // 0x4b9664: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4b9664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4b9668: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b9668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b966c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4b966cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4b9670: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x4b9670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x4b9674: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b9674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b9678: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b9678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b967c: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B967Cu;
    {
        const bool branch_taken_0x4b967c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x4B9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B967Cu;
        // 0x4b9680: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b967c) {
            ctx->pc = 0x4B9694u;
            goto label_4b9694;
        }
    }
    ctx->pc = 0x4B9684u;
label_4b9684:
    // 0x4b9684: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9684u;
    SET_GPR_U32(ctx, 31, 0x4B968Cu);
    ctx->pc = 0x4B9688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9684u;
    // 0x4b9688: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9684u, 0x4B968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B968Cu;
label_4b968c:
    // 0x4b968c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B968Cu;
    {
        const bool branch_taken_0x4b968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B968Cu;
        // 0x4b9690: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b968c) {
            ctx->pc = 0x4B96A8u;
            goto label_4b96a8;
        }
    }
    ctx->pc = 0x4B9694u;
label_4b9694:
    // 0x4b9694: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9694u;
    SET_GPR_U32(ctx, 31, 0x4B969Cu);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9694u, 0x4B969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B969Cu;
label_4b969c:
    // 0x4b969c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_4b96a0:
    // 0x4b96a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b96a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b96a4:
    // 0x4b96a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b96a8:
    // 0x4b96a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B96A8u;
    {
        const bool branch_taken_0x4b96a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b96a8) {
            ctx->pc = 0x4B96ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B96A8u;
            // 0x4b96ac: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B96B0u;
    // 0x4b96b0: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B96B0u;
    SET_GPR_U32(ctx, 31, 0x4B96B8u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B96B0u, 0x4B96B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B96B8u;
label_4b96b8:
    // 0x4b96b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b96bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b96bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b96c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B96C0u;
    {
        const bool branch_taken_0x4b96c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B96C0u;
        // 0x4b96c4: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b96c0) {
            ctx->pc = 0x4B96CCu;
            goto label_4b96cc;
        }
    }
    ctx->pc = 0x4B96C8u;
label_4b96c8:
    // 0x4b96c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b96c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b96cc:
    // 0x4b96cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4b96ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4b96d0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x4b96d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b96d4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4b96d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b96d8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x4b96d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b96dc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4b96dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b96e0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b96e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b96e4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b96e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b96e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B96E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B96E8u;
        // 0x4b96ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B96E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B96F0u;
    // 0x4b96f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4b96f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4b96f4: 0x0  nop
    ctx->pc = 0x4b96f4u;
    // NOP
    ctx->pc = 0x4b96f8u;
}
