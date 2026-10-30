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

// Function: sub_00483530
// Address: 0x483530 - 0x483668
void sub_00483530_0x483530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483530_0x483530");
#endif

    switch (ctx->pc) {
        case 0x483584u: goto label_483584;
        case 0x4835b4u: goto label_4835b4;
        case 0x4835ccu: goto label_4835cc;
        case 0x4835e0u: goto label_4835e0;
        case 0x4835f4u: goto label_4835f4;
        case 0x483608u: goto label_483608;
        case 0x48361cu: goto label_48361c;
        case 0x483638u: goto label_483638;
        case 0x483640u: goto label_483640;
        case 0x483648u: goto label_483648;
        default: break;
    }

    ctx->pc = 0x483530u;

    // 0x483530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x483530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x483534: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x483534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x483538: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x483538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x48353c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x483540: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x483540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483544: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x483544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x483548: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x483548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48354c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x48354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x483550: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x483550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483554: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x483554u;
    {
        const bool branch_taken_0x483554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x483558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483554u;
        // 0x483558: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483554) {
            ctx->pc = 0x48358Cu;
            goto label_48358c;
        }
    }
    ctx->pc = 0x48355Cu;
    // 0x48355c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x48355cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x483560: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x483560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x483564: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x483564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x483568: 0x2605ad18  addiu       $a1, $s0, -0x52E8
    ctx->pc = 0x483568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
    // 0x48356c: 0x246338b0  addiu       $v1, $v1, 0x38B0
    ctx->pc = 0x48356cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14512));
    // 0x483570: 0x244238d8  addiu       $v0, $v0, 0x38D8
    ctx->pc = 0x483570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14552));
    // 0x483574: 0xaca2011c  sw          $v0, 0x11C($a1)
    ctx->pc = 0x483574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70AE34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE34u, _value); } while (0);
    // 0x483578: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x483578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48357c: 0xc11f884  jal         func_47E210
    ctx->pc = 0x48357Cu;
    SET_GPR_U32(ctx, 31, 0x483584u);
    ctx->pc = 0x483580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48357Cu;
    // 0x483580: 0xaca30118  sw          $v1, 0x118($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E210u, 0x48357Cu, 0x483584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483584u;
label_483584:
    // 0x483584: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x483584u;
    {
        const bool branch_taken_0x483584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x483588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483584u;
        // 0x483588: 0x2610ad18  addiu       $s0, $s0, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483584) {
            ctx->pc = 0x4835B8u;
            goto label_4835b8;
        }
    }
    ctx->pc = 0x48358Cu;
label_48358c:
    // 0x48358c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x48358cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x483590: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x483590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x483594: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x483594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x483598: 0x2605ad18  addiu       $a1, $s0, -0x52E8
    ctx->pc = 0x483598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
    // 0x48359c: 0x2463db70  addiu       $v1, $v1, -0x2490
    ctx->pc = 0x48359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957936));
    // 0x4835a0: 0x2442de08  addiu       $v0, $v0, -0x21F8
    ctx->pc = 0x4835a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958600));
    // 0x4835a4: 0xaca2011c  sw          $v0, 0x11C($a1)
    ctx->pc = 0x4835a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70AE34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE34u, _value); } while (0);
    // 0x4835a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4835a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4835ac: 0xc11f884  jal         func_47E210
    ctx->pc = 0x4835ACu;
    SET_GPR_U32(ctx, 31, 0x4835B4u);
    ctx->pc = 0x4835B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4835ACu;
    // 0x4835b0: 0xaca30118  sw          $v1, 0x118($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E210u, 0x4835ACu, 0x4835B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4835B4u;
label_4835b4:
    // 0x4835b4: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x4835b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_4835b8:
    // 0x4835b8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x4835b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x4835bc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4835BCu;
    {
        const bool branch_taken_0x4835bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4835BCu;
        // 0x4835c0: 0xae120128  sw          $s2, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4835bc) {
            ctx->pc = 0x483648u;
            goto label_483648;
        }
    }
    ctx->pc = 0x4835C4u;
    // 0x4835c4: 0xc12a572  jal         func_4A95C8
    ctx->pc = 0x4835C4u;
    SET_GPR_U32(ctx, 31, 0x4835CCu);
    ctx->pc = 0x4A95C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A95C8u, 0x4835C4u, 0x4835CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4835CCu;
label_4835cc:
    // 0x4835cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4835ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4835d0: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x4835D0u;
    {
        const bool branch_taken_0x4835d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4835D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4835D0u;
        // 0x4835d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4835d0) {
            ctx->pc = 0x48364Cu;
            goto label_48364c;
        }
    }
    ctx->pc = 0x4835D8u;
    // 0x4835d8: 0xc11f844  jal         func_47E110
    ctx->pc = 0x4835D8u;
    SET_GPR_U32(ctx, 31, 0x4835E0u);
    ctx->pc = 0x4835DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4835D8u;
    // 0x4835dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E110u, 0x4835D8u, 0x4835E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4835E0u;
label_4835e0:
    // 0x4835e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4835e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4835e4: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4835E4u;
    {
        const bool branch_taken_0x4835e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4835e4) {
            ctx->pc = 0x483640u;
            goto label_483640;
        }
    }
    ctx->pc = 0x4835ECu;
    // 0x4835ec: 0xc11ff68  jal         func_47FDA0
    ctx->pc = 0x4835ECu;
    SET_GPR_U32(ctx, 31, 0x4835F4u);
    ctx->pc = 0x47FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FDA0u, 0x4835ECu, 0x4835F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4835F4u;
label_4835f4:
    // 0x4835f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4835f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4835f8: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x4835F8u;
    {
        const bool branch_taken_0x4835f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4835f8) {
            ctx->pc = 0x483638u;
            goto label_483638;
        }
    }
    ctx->pc = 0x483600u;
    // 0x483600: 0xc120bc6  jal         func_482F18
    ctx->pc = 0x483600u;
    SET_GPR_U32(ctx, 31, 0x483608u);
    ctx->pc = 0x482F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482F18u, 0x483600u, 0x483608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483608u;
label_483608:
    // 0x483608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x483608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48360c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48360Cu;
    {
        const bool branch_taken_0x48360c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48360c) {
            ctx->pc = 0x483630u;
            goto label_483630;
        }
    }
    ctx->pc = 0x483614u;
    // 0x483614: 0xc12618c  jal         func_498630
    ctx->pc = 0x483614u;
    SET_GPR_U32(ctx, 31, 0x48361Cu);
    ctx->pc = 0x498630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498630u, 0x483614u, 0x48361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48361Cu;
label_48361c:
    // 0x48361c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48361cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483620: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x483620u;
    {
        const bool branch_taken_0x483620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x483624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483620u;
        // 0x483624: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483620) {
            ctx->pc = 0x483630u;
            goto label_483630;
        }
    }
    ctx->pc = 0x483628u;
    // 0x483628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x483628u;
    {
        const bool branch_taken_0x483628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483628u;
        // 0x48362c: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483628) {
            ctx->pc = 0x48364Cu;
            goto label_48364c;
        }
    }
    ctx->pc = 0x483630u;
label_483630:
    // 0x483630: 0xc11fe66  jal         func_47F998
    ctx->pc = 0x483630u;
    SET_GPR_U32(ctx, 31, 0x483638u);
    ctx->pc = 0x47F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F998u, 0x483630u, 0x483638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483638u;
label_483638:
    // 0x483638: 0xc11f830  jal         func_47E0C0
    ctx->pc = 0x483638u;
    SET_GPR_U32(ctx, 31, 0x483640u);
    ctx->pc = 0x47E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E0C0u, 0x483638u, 0x483640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483640u;
label_483640:
    // 0x483640: 0xc12a668  jal         func_4A99A0
    ctx->pc = 0x483640u;
    SET_GPR_U32(ctx, 31, 0x483648u);
    ctx->pc = 0x4A99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99A0u, 0x483640u, 0x483648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483648u;
label_483648:
    // 0x483648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x483648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48364c:
    // 0x48364c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x48364cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x483650: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x483650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x483654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483658: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x483658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48365c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483660: 0x3e00008  jr          $ra
    ctx->pc = 0x483660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483660u;
        // 0x483664: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483668u;
}
