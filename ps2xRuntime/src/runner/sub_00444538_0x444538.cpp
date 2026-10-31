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

// Function: sub_00444538
// Address: 0x444538 - 0x444790
void sub_00444538_0x444538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444538_0x444538");
#endif

    switch (ctx->pc) {
        case 0x444580u: goto label_444580;
        case 0x4445acu: goto label_4445ac;
        case 0x4445c0u: goto label_4445c0;
        case 0x4445ecu: goto label_4445ec;
        case 0x444614u: goto label_444614;
        case 0x44461cu: goto label_44461c;
        case 0x44462cu: goto label_44462c;
        case 0x444668u: goto label_444668;
        case 0x4446d8u: goto label_4446d8;
        case 0x44471cu: goto label_44471c;
        case 0x444724u: goto label_444724;
        case 0x444758u: goto label_444758;
        default: break;
    }

    ctx->pc = 0x444538u;

    // 0x444538: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x444538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x44453c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x44453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x444540: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x444540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x444544: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x444544u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444548: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x444548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44454c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x44454cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444550: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x444550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x444554: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x444554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444558: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x444558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44455c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x444560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x444560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x444564: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x444564u;
    {
        const bool branch_taken_0x444564 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x444568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444564u;
        // 0x444568: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444564) {
            ctx->pc = 0x444578u;
            goto label_444578;
        }
    }
    ctx->pc = 0x44456Cu;
    // 0x44456c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x44456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x444570: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x444570u;
    {
        const bool branch_taken_0x444570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444570u;
        // 0x444574: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x444570) {
            ctx->pc = 0x44463Cu;
            goto label_44463c;
        }
    }
    ctx->pc = 0x444578u;
label_444578:
    // 0x444578: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x444578u;
    SET_GPR_U32(ctx, 31, 0x444580u);
    ctx->pc = 0x44457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444578u;
    // 0x44457c: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x444578u, 0x444580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444580u;
label_444580:
    // 0x444580: 0x8e505f80  lw          $s0, 0x5F80($s2)
    ctx->pc = 0x444580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24448)));
    // 0x444584: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x444584u;
    {
        const bool branch_taken_0x444584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x444588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444584u;
        // 0x444588: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444584) {
            ctx->pc = 0x444594u;
            goto label_444594;
        }
    }
    ctx->pc = 0x44458Cu;
    // 0x44458c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x44458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x444590: 0xae425f80  sw          $v0, 0x5F80($s2)
    ctx->pc = 0x444590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24448), GPR_U32(ctx, 2));
label_444594:
    // 0x444594: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x444594u;
    {
        const bool branch_taken_0x444594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x444594) {
            ctx->pc = 0x4445B8u;
            goto label_4445b8;
        }
    }
    ctx->pc = 0x44459Cu;
    // 0x44459c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x44459Cu;
    {
        const bool branch_taken_0x44459c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x44459c) {
            ctx->pc = 0x4445ACu;
            goto label_4445ac;
        }
    }
    ctx->pc = 0x4445A4u;
    // 0x4445a4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4445A4u;
    SET_GPR_U32(ctx, 31, 0x4445ACu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4445A4u, 0x4445ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4445ACu;
label_4445ac:
    // 0x4445ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4445acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4445b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4445B0u;
    {
        const bool branch_taken_0x4445b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4445B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4445B0u;
        // 0x4445b4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4445b0) {
            ctx->pc = 0x44463Cu;
            goto label_44463c;
        }
    }
    ctx->pc = 0x4445B8u;
label_4445b8:
    // 0x4445b8: 0xc111042  jal         func_444108
    ctx->pc = 0x4445B8u;
    SET_GPR_U32(ctx, 31, 0x4445C0u);
    ctx->pc = 0x444108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444108u, 0x4445B8u, 0x4445C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4445C0u;
label_4445c0:
    // 0x4445c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4445c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4445c4: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x4445C4u;
    {
        const bool branch_taken_0x4445c4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x4445c4) {
            ctx->pc = 0x4445C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4445C4u;
            // 0x4445c8: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4445F4u;
            goto label_4445f4;
        }
    }
    ctx->pc = 0x4445CCu;
    // 0x4445cc: 0x8e425f80  lw          $v0, 0x5F80($s2)
    ctx->pc = 0x4445ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24448)));
    // 0x4445d0: 0xae505f80  sw          $s0, 0x5F80($s2)
    ctx->pc = 0x4445d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24448), GPR_U32(ctx, 16));
    // 0x4445d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4445d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4445d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4445d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4445dc: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4445DCu;
    {
        const bool branch_taken_0x4445dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4445E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4445DCu;
        // 0x4445e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4445dc) {
            ctx->pc = 0x44463Cu;
            goto label_44463c;
        }
    }
    ctx->pc = 0x4445E4u;
    // 0x4445e4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4445E4u;
    SET_GPR_U32(ctx, 31, 0x4445ECu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4445E4u, 0x4445ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4445ECu;
label_4445ec:
    // 0x4445ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4445ECu;
    {
        const bool branch_taken_0x4445ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4445ECu;
        // 0x4445f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4445ec) {
            ctx->pc = 0x44463Cu;
            goto label_44463c;
        }
    }
    ctx->pc = 0x4445F4u;
label_4445f4:
    // 0x4445f4: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x4445f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x4445f8: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x4445f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x4445fc: 0x24c644d8  addiu       $a2, $a2, 0x44D8
    ctx->pc = 0x4445fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17624));
    // 0x444600: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x444600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x444604: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x444604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x444608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44460c: 0xc1110e2  jal         func_444388
    ctx->pc = 0x44460Cu;
    SET_GPR_U32(ctx, 31, 0x444614u);
    ctx->pc = 0x444610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44460Cu;
    // 0x444610: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444388u, 0x44460Cu, 0x444614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444614u;
label_444614:
    // 0x444614: 0xc111084  jal         func_444210
    ctx->pc = 0x444614u;
    SET_GPR_U32(ctx, 31, 0x44461Cu);
    ctx->pc = 0x444618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444614u;
    // 0x444618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444210u, 0x444614u, 0x44461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44461Cu;
label_44461c:
    // 0x44461c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x44461Cu;
    {
        const bool branch_taken_0x44461c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x444620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44461Cu;
        // 0x444620: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44461c) {
            ctx->pc = 0x444630u;
            goto label_444630;
        }
    }
    ctx->pc = 0x444624u;
    // 0x444624: 0xc110cc4  jal         func_443310
    ctx->pc = 0x444624u;
    SET_GPR_U32(ctx, 31, 0x44462Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x444624u, 0x44462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44462Cu;
label_44462c:
    // 0x44462c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x44462cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_444630:
    // 0x444630: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x444630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x444634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x444634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x444638: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x444638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_44463c:
    // 0x44463c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x44463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x444640: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x444640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x444644: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x444644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x444648: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x444648u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44464c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44464cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x444650: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x444650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444654: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x444654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44465c: 0x3e00008  jr          $ra
    ctx->pc = 0x44465Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44465Cu;
        // 0x444660: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44465Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444664u;
    // 0x444664: 0x0  nop
    ctx->pc = 0x444664u;
    // NOP
label_444668:
    // 0x444668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x444668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x44466c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x44466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x444670: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x444670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x444674: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x444674u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444678: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x444678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44467c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x44467cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444680: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x444680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x444684: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x444684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444688: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x444688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44468c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x444690: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x444690u;
    {
        const bool branch_taken_0x444690 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x444694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444690u;
        // 0x444694: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444690) {
            ctx->pc = 0x4446A4u;
            goto label_4446a4;
        }
    }
    ctx->pc = 0x444698u;
    // 0x444698: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x444698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x44469c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x44469Cu;
    {
        const bool branch_taken_0x44469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4446A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44469Cu;
        // 0x4446a0: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44469c) {
            ctx->pc = 0x444734u;
            goto label_444734;
        }
    }
    ctx->pc = 0x4446A4u;
label_4446a4:
    // 0x4446a4: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x4446a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x4446a8: 0x8e505f80  lw          $s0, 0x5F80($s2)
    ctx->pc = 0x4446a8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x705F80u));
    // 0x4446ac: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4446ACu;
    {
        const bool branch_taken_0x4446ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4446ac) {
            ctx->pc = 0x4446BCu;
            goto label_4446bc;
        }
    }
    ctx->pc = 0x4446B4u;
    // 0x4446b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4446b8: 0xae425f80  sw          $v0, 0x5F80($s2)
    ctx->pc = 0x4446b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24448), GPR_U32(ctx, 2));
label_4446bc:
    // 0x4446bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4446BCu;
    {
        const bool branch_taken_0x4446bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4446bc) {
            ctx->pc = 0x4446D0u;
            goto label_4446d0;
        }
    }
    ctx->pc = 0x4446C4u;
    // 0x4446c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4446c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4446c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4446C8u;
    {
        const bool branch_taken_0x4446c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4446CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4446C8u;
        // 0x4446cc: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4446c8) {
            ctx->pc = 0x444734u;
            goto label_444734;
        }
    }
    ctx->pc = 0x4446D0u;
label_4446d0:
    // 0x4446d0: 0xc111026  jal         func_444098
    ctx->pc = 0x4446D0u;
    SET_GPR_U32(ctx, 31, 0x4446D8u);
    ctx->pc = 0x444098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444098u, 0x4446D0u, 0x4446D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4446D8u;
label_4446d8:
    // 0x4446d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4446d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4446dc: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4446DCu;
    {
        const bool branch_taken_0x4446dc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x4446dc) {
            ctx->pc = 0x4446E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4446DCu;
            // 0x4446e0: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4446FCu;
            goto label_4446fc;
        }
    }
    ctx->pc = 0x4446E4u;
    // 0x4446e4: 0x8e435f80  lw          $v1, 0x5F80($s2)
    ctx->pc = 0x4446e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24448)));
    // 0x4446e8: 0xae505f80  sw          $s0, 0x5F80($s2)
    ctx->pc = 0x4446e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24448), GPR_U32(ctx, 16));
    // 0x4446ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4446ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4446f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4446f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4446f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4446F4u;
    {
        const bool branch_taken_0x4446f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4446F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4446F4u;
        // 0x4446f8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4446f4) {
            ctx->pc = 0x444738u;
            goto label_444738;
        }
    }
    ctx->pc = 0x4446FCu;
label_4446fc:
    // 0x4446fc: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x4446fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x444700: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x444700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x444704: 0x24c644d8  addiu       $a2, $a2, 0x44D8
    ctx->pc = 0x444704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17624));
    // 0x444708: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x444708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x44470c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x44470cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x444710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444714: 0xc1110a4  jal         func_444290
    ctx->pc = 0x444714u;
    SET_GPR_U32(ctx, 31, 0x44471Cu);
    ctx->pc = 0x444718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444714u;
    // 0x444718: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444290u, 0x444714u, 0x44471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44471Cu;
label_44471c:
    // 0x44471c: 0xc111058  jal         func_444160
    ctx->pc = 0x44471Cu;
    SET_GPR_U32(ctx, 31, 0x444724u);
    ctx->pc = 0x444720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44471Cu;
    // 0x444720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444160u, 0x44471Cu, 0x444724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444724u;
label_444724:
    // 0x444724: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x444724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x444728: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x444728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x44472c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x44472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x444730: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x444730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_444734:
    // 0x444734: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x444734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_444738:
    // 0x444738: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x444738u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44473c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44473cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x444740: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x444740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x444744: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x444744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444748: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x444748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44474c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44474cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444750: 0x3e00008  jr          $ra
    ctx->pc = 0x444750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444750u;
        // 0x444754: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444758u;
label_444758:
    // 0x444758: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x444758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x44475c: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x44475cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x444760: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x444760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x444764: 0xac409ec0  sw          $zero, -0x6140($v0)
    ctx->pc = 0x444764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x519EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x519EC0u, _value); } while (0);
    // 0x444768: 0xac609ec4  sw          $zero, -0x613C($v1)
    ctx->pc = 0x444768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x519EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x519EC4u, _value); } while (0);
    // 0x44476c: 0x24845f88  addiu       $a0, $a0, 0x5F88
    ctx->pc = 0x44476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24456));
    // 0x444770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x444770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444774: 0x810c1fa  j           func_4307E8
    ctx->pc = 0x444774u;
    ctx->pc = 0x444778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444774u;
    // 0x444778: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    sub_004307E8_0x4307e8(rdram, ctx, runtime); return;
    ctx->pc = 0x44477Cu;
    // 0x44477c: 0x0  nop
    ctx->pc = 0x44477cu;
    // NOP
    // 0x444780: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x444780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x444784: 0x0  nop
    ctx->pc = 0x444784u;
    // NOP
    // 0x444788: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x444788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x44478c: 0x0  nop
    ctx->pc = 0x44478cu;
    // NOP
    ctx->pc = 0x444790u;
}
