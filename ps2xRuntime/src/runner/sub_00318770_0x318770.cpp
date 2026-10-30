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

// Function: sub_00318770
// Address: 0x318770 - 0x31891c
void sub_00318770_0x318770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318770_0x318770");
#endif

    switch (ctx->pc) {
        case 0x318770u: goto label_318770;
        case 0x318774u: goto label_318774;
        case 0x318778u: goto label_318778;
        case 0x31877cu: goto label_31877c;
        case 0x318780u: goto label_318780;
        case 0x318784u: goto label_318784;
        case 0x318788u: goto label_318788;
        case 0x31878cu: goto label_31878c;
        case 0x318790u: goto label_318790;
        case 0x318794u: goto label_318794;
        case 0x318798u: goto label_318798;
        case 0x31879cu: goto label_31879c;
        case 0x3187a0u: goto label_3187a0;
        case 0x3187a4u: goto label_3187a4;
        case 0x3187a8u: goto label_3187a8;
        case 0x3187acu: goto label_3187ac;
        case 0x3187b0u: goto label_3187b0;
        case 0x3187b4u: goto label_3187b4;
        case 0x3187b8u: goto label_3187b8;
        case 0x3187bcu: goto label_3187bc;
        case 0x3187c0u: goto label_3187c0;
        case 0x3187c4u: goto label_3187c4;
        case 0x3187c8u: goto label_3187c8;
        case 0x3187ccu: goto label_3187cc;
        case 0x3187d0u: goto label_3187d0;
        case 0x3187d4u: goto label_3187d4;
        case 0x3187d8u: goto label_3187d8;
        case 0x3187dcu: goto label_3187dc;
        case 0x3187e0u: goto label_3187e0;
        case 0x3187e4u: goto label_3187e4;
        case 0x3187e8u: goto label_3187e8;
        case 0x3187ecu: goto label_3187ec;
        case 0x3187f0u: goto label_3187f0;
        case 0x3187f4u: goto label_3187f4;
        case 0x3187f8u: goto label_3187f8;
        case 0x3187fcu: goto label_3187fc;
        case 0x318800u: goto label_318800;
        case 0x318804u: goto label_318804;
        case 0x318808u: goto label_318808;
        case 0x31880cu: goto label_31880c;
        case 0x318810u: goto label_318810;
        case 0x318814u: goto label_318814;
        case 0x318818u: goto label_318818;
        case 0x31881cu: goto label_31881c;
        case 0x318820u: goto label_318820;
        case 0x318824u: goto label_318824;
        case 0x318828u: goto label_318828;
        case 0x31882cu: goto label_31882c;
        case 0x318830u: goto label_318830;
        case 0x318834u: goto label_318834;
        case 0x318838u: goto label_318838;
        case 0x31883cu: goto label_31883c;
        case 0x318840u: goto label_318840;
        case 0x318844u: goto label_318844;
        case 0x318848u: goto label_318848;
        case 0x31884cu: goto label_31884c;
        case 0x318850u: goto label_318850;
        case 0x318854u: goto label_318854;
        case 0x318858u: goto label_318858;
        case 0x31885cu: goto label_31885c;
        case 0x318860u: goto label_318860;
        case 0x318864u: goto label_318864;
        case 0x318868u: goto label_318868;
        case 0x31886cu: goto label_31886c;
        case 0x318870u: goto label_318870;
        case 0x318874u: goto label_318874;
        case 0x318878u: goto label_318878;
        case 0x31887cu: goto label_31887c;
        case 0x318880u: goto label_318880;
        case 0x318884u: goto label_318884;
        case 0x318888u: goto label_318888;
        case 0x31888cu: goto label_31888c;
        case 0x318890u: goto label_318890;
        case 0x318894u: goto label_318894;
        case 0x318898u: goto label_318898;
        case 0x31889cu: goto label_31889c;
        case 0x3188a0u: goto label_3188a0;
        case 0x3188a4u: goto label_3188a4;
        case 0x3188a8u: goto label_3188a8;
        case 0x3188acu: goto label_3188ac;
        case 0x3188b0u: goto label_3188b0;
        case 0x3188b4u: goto label_3188b4;
        case 0x3188b8u: goto label_3188b8;
        case 0x3188bcu: goto label_3188bc;
        case 0x3188c0u: goto label_3188c0;
        case 0x3188c4u: goto label_3188c4;
        case 0x3188c8u: goto label_3188c8;
        case 0x3188ccu: goto label_3188cc;
        case 0x3188d0u: goto label_3188d0;
        case 0x3188d4u: goto label_3188d4;
        case 0x3188d8u: goto label_3188d8;
        case 0x3188dcu: goto label_3188dc;
        case 0x3188e0u: goto label_3188e0;
        case 0x3188e4u: goto label_3188e4;
        case 0x3188e8u: goto label_3188e8;
        case 0x3188ecu: goto label_3188ec;
        case 0x3188f0u: goto label_3188f0;
        case 0x3188f4u: goto label_3188f4;
        case 0x3188f8u: goto label_3188f8;
        case 0x3188fcu: goto label_3188fc;
        case 0x318900u: goto label_318900;
        case 0x318904u: goto label_318904;
        case 0x318908u: goto label_318908;
        case 0x31890cu: goto label_31890c;
        case 0x318910u: goto label_318910;
        case 0x318914u: goto label_318914;
        case 0x318918u: goto label_318918;
        default: break;
    }

    ctx->pc = 0x318770u;

label_318770:
    // 0x318770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x318770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_318774:
    // 0x318774: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x318774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_318778:
    // 0x318778: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x318778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_31877c:
    // 0x31877c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31877cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_318780:
    // 0x318780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_318784:
    // 0x318784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x318784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_318788:
    // 0x318788: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x318788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_31878c:
    // 0x31878c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_318790:
    // 0x318790: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x318790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_318794:
    // 0x318794: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x318794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_318798:
    // 0x318798: 0x2c830017  sltiu       $v1, $a0, 0x17
    ctx->pc = 0x318798u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_31879c:
    // 0x31879c: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_3187a0:
    if (ctx->pc == 0x3187A0u) {
        ctx->pc = 0x3187A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31879Cu;
        // 0x3187a0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187A4u;
        goto label_3187a4;
    }
    ctx->pc = 0x31879Cu;
    {
        const bool branch_taken_0x31879c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3187A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31879Cu;
        // 0x3187a0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31879c) {
            ctx->pc = 0x31891Cu;
            return;
        }
    }
    ctx->pc = 0x3187A4u;
label_3187a4:
    // 0x3187a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3187a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3187a8:
    // 0x3187a8: 0x24420390  addiu       $v0, $v0, 0x390
    ctx->pc = 0x3187a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
label_3187ac:
    // 0x3187ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3187acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3187b0:
    // 0x3187b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3187b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3187b4:
    // 0x3187b4: 0x800008  jr          $a0
label_3187b8:
    if (ctx->pc == 0x3187B8u) {
        ctx->pc = 0x3187BCu;
        goto label_3187bc;
    }
    ctx->pc = 0x3187B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3187BCu: goto label_3187bc;
            case 0x3187F8u: goto label_3187f8;
            case 0x318808u: goto label_318808;
            case 0x318814u: goto label_318814;
            case 0x31888Cu: goto label_31888c;
            case 0x318908u: goto label_318908;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3187B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3187BCu;
label_3187bc:
    // 0x3187bc: 0xc08a61a  jal         func_229868
label_3187c0:
    if (ctx->pc == 0x3187C0u) {
        ctx->pc = 0x3187C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187BCu;
        // 0x3187c0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187C4u;
        goto label_3187c4;
    }
    ctx->pc = 0x3187BCu;
    SET_GPR_U32(ctx, 31, 0x3187C4u);
    ctx->pc = 0x3187C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187BCu;
    // 0x3187c0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3187BCu, 0x3187C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187C4u;
label_3187c4:
    // 0x3187c4: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
label_3187c8:
    if (ctx->pc == 0x3187C8u) {
        ctx->pc = 0x3187C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187C4u;
        // 0x3187c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187CCu;
        goto label_3187cc;
    }
    ctx->pc = 0x3187C4u;
    {
        const bool branch_taken_0x3187c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3187c4) {
            ctx->pc = 0x3187C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3187C4u;
            // 0x3187c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x3187CCu;
label_3187cc:
    // 0x3187cc: 0xc087502  jal         func_21D408
label_3187d0:
    if (ctx->pc == 0x3187D0u) {
        ctx->pc = 0x3187D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187CCu;
        // 0x3187d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187D4u;
        goto label_3187d4;
    }
    ctx->pc = 0x3187CCu;
    SET_GPR_U32(ctx, 31, 0x3187D4u);
    ctx->pc = 0x3187D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187CCu;
    // 0x3187d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3187CCu, 0x3187D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187D4u;
label_3187d4:
    // 0x3187d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3187d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3187d8:
    // 0x3187d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3187d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3187dc:
    // 0x3187dc: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x3187dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_3187e0:
    // 0x3187e0: 0x1443004f  bne         $v0, $v1, . + 4 + (0x4F << 2)
label_3187e4:
    if (ctx->pc == 0x3187E4u) {
        ctx->pc = 0x3187E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187E0u;
        // 0x3187e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187E8u;
        goto label_3187e8;
    }
    ctx->pc = 0x3187E0u;
    {
        const bool branch_taken_0x3187e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3187E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187E0u;
        // 0x3187e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187e0) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x3187E8u;
label_3187e8:
    // 0x3187e8: 0xc0a36c8  jal         func_28DB20
label_3187ec:
    if (ctx->pc == 0x3187ECu) {
        ctx->pc = 0x3187F0u;
        goto label_3187f0;
    }
    ctx->pc = 0x3187E8u;
    SET_GPR_U32(ctx, 31, 0x3187F0u);
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3187E8u, 0x3187F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187F0u;
label_3187f0:
    // 0x3187f0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3187f4:
    if (ctx->pc == 0x3187F4u) {
        ctx->pc = 0x3187F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187F0u;
        // 0x3187f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187F8u;
        goto label_3187f8;
    }
    ctx->pc = 0x3187F0u;
    {
        const bool branch_taken_0x3187f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3187F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187F0u;
        // 0x3187f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187f0) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x3187F8u;
label_3187f8:
    // 0x3187f8: 0xc0c5f4e  jal         func_317D38
label_3187fc:
    if (ctx->pc == 0x3187FCu) {
        ctx->pc = 0x3187FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187F8u;
        // 0x3187fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318800u;
        goto label_318800;
    }
    ctx->pc = 0x3187F8u;
    SET_GPR_U32(ctx, 31, 0x318800u);
    ctx->pc = 0x3187FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187F8u;
    // 0x3187fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317D38u, 0x3187F8u, 0x318800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318800u;
label_318800:
    // 0x318800: 0x10000047  b           . + 4 + (0x47 << 2)
label_318804:
    if (ctx->pc == 0x318804u) {
        ctx->pc = 0x318804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318800u;
        // 0x318804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318808u;
        goto label_318808;
    }
    ctx->pc = 0x318800u;
    {
        const bool branch_taken_0x318800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318800u;
        // 0x318804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318800) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x318808u;
label_318808:
    // 0x318808: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x318808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_31880c:
    // 0x31880c: 0x10000019  b           . + 4 + (0x19 << 2)
label_318810:
    if (ctx->pc == 0x318810u) {
        ctx->pc = 0x318810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31880Cu;
        // 0x318810: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318814u;
        goto label_318814;
    }
    ctx->pc = 0x31880Cu;
    {
        const bool branch_taken_0x31880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31880Cu;
        // 0x318810: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31880c) {
            ctx->pc = 0x318874u;
            goto label_318874;
        }
    }
    ctx->pc = 0x318814u;
label_318814:
    // 0x318814: 0xc08a61a  jal         func_229868
label_318818:
    if (ctx->pc == 0x318818u) {
        ctx->pc = 0x318818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318814u;
        // 0x318818: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31881Cu;
        goto label_31881c;
    }
    ctx->pc = 0x318814u;
    SET_GPR_U32(ctx, 31, 0x31881Cu);
    ctx->pc = 0x318818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318814u;
    // 0x318818: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x318814u, 0x31881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31881Cu;
label_31881c:
    // 0x31881c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31881cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318820:
    // 0x318820: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
label_318824:
    if (ctx->pc == 0x318824u) {
        ctx->pc = 0x318824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318820u;
        // 0x318824: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318828u;
        goto label_318828;
    }
    ctx->pc = 0x318820u;
    {
        const bool branch_taken_0x318820 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x318820) {
            ctx->pc = 0x318824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318820u;
            // 0x318824: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318870u;
            goto label_318870;
        }
    }
    ctx->pc = 0x318828u;
label_318828:
    // 0x318828: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x318828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31882c:
    // 0x31882c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_318830:
    if (ctx->pc == 0x318830u) {
        ctx->pc = 0x318830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31882Cu;
        // 0x318830: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318834u;
        goto label_318834;
    }
    ctx->pc = 0x31882Cu;
    {
        const bool branch_taken_0x31882c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31882c) {
            ctx->pc = 0x318830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31882Cu;
            // 0x318830: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318870u;
            goto label_318870;
        }
    }
    ctx->pc = 0x318834u;
label_318834:
    // 0x318834: 0xc08a076  jal         func_2281D8
label_318838:
    if (ctx->pc == 0x318838u) {
        ctx->pc = 0x318838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318834u;
        // 0x318838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31883Cu;
        goto label_31883c;
    }
    ctx->pc = 0x318834u;
    SET_GPR_U32(ctx, 31, 0x31883Cu);
    ctx->pc = 0x318838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318834u;
    // 0x318838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x318834u, 0x31883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31883Cu;
label_31883c:
    // 0x31883c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31883cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318840:
    // 0x318840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318844:
    // 0x318844: 0x5642000a  bnel        $s2, $v0, . + 4 + (0xA << 2)
label_318848:
    if (ctx->pc == 0x318848u) {
        ctx->pc = 0x318848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318844u;
        // 0x318848: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31884Cu;
        goto label_31884c;
    }
    ctx->pc = 0x318844u;
    {
        const bool branch_taken_0x318844 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x318844) {
            ctx->pc = 0x318848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318844u;
            // 0x318848: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318870u;
            goto label_318870;
        }
    }
    ctx->pc = 0x31884Cu;
label_31884c:
    // 0x31884c: 0xc087502  jal         func_21D408
label_318850:
    if (ctx->pc == 0x318850u) {
        ctx->pc = 0x318850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31884Cu;
        // 0x318850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318854u;
        goto label_318854;
    }
    ctx->pc = 0x31884Cu;
    SET_GPR_U32(ctx, 31, 0x318854u);
    ctx->pc = 0x318850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31884Cu;
    // 0x318850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31884Cu, 0x318854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318854u;
label_318854:
    // 0x318854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318858:
    // 0x318858: 0xc0a4742  jal         func_291D08
label_31885c:
    if (ctx->pc == 0x31885Cu) {
        ctx->pc = 0x31885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318858u;
        // 0x31885c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318860u;
        goto label_318860;
    }
    ctx->pc = 0x318858u;
    SET_GPR_U32(ctx, 31, 0x318860u);
    ctx->pc = 0x31885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318858u;
    // 0x31885c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x318858u, 0x318860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318860u;
label_318860:
    // 0x318860: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
label_318864:
    if (ctx->pc == 0x318864u) {
        ctx->pc = 0x318864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318860u;
        // 0x318864: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318868u;
        goto label_318868;
    }
    ctx->pc = 0x318860u;
    {
        const bool branch_taken_0x318860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x318860) {
            ctx->pc = 0x318864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318860u;
            // 0x318864: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318870u;
            goto label_318870;
        }
    }
    ctx->pc = 0x318868u;
label_318868:
    // 0x318868: 0x1000002d  b           . + 4 + (0x2D << 2)
label_31886c:
    if (ctx->pc == 0x31886Cu) {
        ctx->pc = 0x31886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318868u;
        // 0x31886c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318870u;
        goto label_318870;
    }
    ctx->pc = 0x318868u;
    {
        const bool branch_taken_0x318868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318868u;
        // 0x31886c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318868) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x318870u;
label_318870:
    // 0x318870: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x318870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_318874:
    // 0x318874: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x318874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_318878:
    // 0x318878: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x318878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31887c:
    // 0x31887c: 0x60f809  jalr        $v1
label_318880:
    if (ctx->pc == 0x318880u) {
        ctx->pc = 0x318880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31887Cu;
        // 0x318880: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318884u;
        goto label_318884;
    }
    ctx->pc = 0x31887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x318884u);
        ctx->pc = 0x318880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31887Cu;
        // 0x318880: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31887Cu, 0x318884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x318884u;
label_318884:
    // 0x318884: 0x10000026  b           . + 4 + (0x26 << 2)
label_318888:
    if (ctx->pc == 0x318888u) {
        ctx->pc = 0x318888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318884u;
        // 0x318888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31888Cu;
        goto label_31888c;
    }
    ctx->pc = 0x318884u;
    {
        const bool branch_taken_0x318884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318884u;
        // 0x318888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318884) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x31888Cu;
label_31888c:
    // 0x31888c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_318890:
    // 0x318890: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
label_318894:
    if (ctx->pc == 0x318894u) {
        ctx->pc = 0x318894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318890u;
        // 0x318894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318898u;
        goto label_318898;
    }
    ctx->pc = 0x318890u;
    {
        const bool branch_taken_0x318890 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x318894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318890u;
        // 0x318894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318890) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x318898u;
label_318898:
    // 0x318898: 0xc05b0e2  jal         func_16C388
label_31889c:
    if (ctx->pc == 0x31889Cu) {
        ctx->pc = 0x31889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318898u;
        // 0x31889c: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188A0u;
        goto label_3188a0;
    }
    ctx->pc = 0x318898u;
    SET_GPR_U32(ctx, 31, 0x3188A0u);
    ctx->pc = 0x31889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318898u;
    // 0x31889c: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x318898u, 0x3188A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188A0u;
label_3188a0:
    // 0x3188a0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3188a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3188a4:
    // 0x3188a4: 0xc08a61a  jal         func_229868
label_3188a8:
    if (ctx->pc == 0x3188A8u) {
        ctx->pc = 0x3188A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188A4u;
        // 0x3188a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188ACu;
        goto label_3188ac;
    }
    ctx->pc = 0x3188A4u;
    SET_GPR_U32(ctx, 31, 0x3188ACu);
    ctx->pc = 0x3188A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188A4u;
    // 0x3188a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3188A4u, 0x3188ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188ACu;
label_3188ac:
    // 0x3188ac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3188b0:
    if (ctx->pc == 0x3188B0u) {
        ctx->pc = 0x3188B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188ACu;
        // 0x3188b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188B4u;
        goto label_3188b4;
    }
    ctx->pc = 0x3188ACu;
    {
        const bool branch_taken_0x3188ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3188ac) {
            ctx->pc = 0x3188B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3188ACu;
            // 0x3188b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3188D8u;
            goto label_3188d8;
        }
    }
    ctx->pc = 0x3188B4u;
label_3188b4:
    // 0x3188b4: 0xc087502  jal         func_21D408
label_3188b8:
    if (ctx->pc == 0x3188B8u) {
        ctx->pc = 0x3188B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188B4u;
        // 0x3188b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188BCu;
        goto label_3188bc;
    }
    ctx->pc = 0x3188B4u;
    SET_GPR_U32(ctx, 31, 0x3188BCu);
    ctx->pc = 0x3188B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188B4u;
    // 0x3188b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3188B4u, 0x3188BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188BCu;
label_3188bc:
    // 0x3188bc: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3188bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3188c0:
    // 0x3188c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3188c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3188c4:
    // 0x3188c4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_3188c8:
    if (ctx->pc == 0x3188C8u) {
        ctx->pc = 0x3188C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188C4u;
        // 0x3188c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188CCu;
        goto label_3188cc;
    }
    ctx->pc = 0x3188C4u;
    {
        const bool branch_taken_0x3188c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3188C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188C4u;
        // 0x3188c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188c4) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x3188CCu;
label_3188cc:
    // 0x3188cc: 0x50720015  beql        $v1, $s2, . + 4 + (0x15 << 2)
label_3188d0:
    if (ctx->pc == 0x3188D0u) {
        ctx->pc = 0x3188D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188CCu;
        // 0x3188d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188D4u;
        goto label_3188d4;
    }
    ctx->pc = 0x3188CCu;
    {
        const bool branch_taken_0x3188cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x3188cc) {
            ctx->pc = 0x3188D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3188CCu;
            // 0x3188d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318924u;
            return;
        }
    }
    ctx->pc = 0x3188D4u;
label_3188d4:
    // 0x3188d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3188d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3188d8:
    // 0x3188d8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_3188dc:
    if (ctx->pc == 0x3188DCu) {
        ctx->pc = 0x3188DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188D8u;
        // 0x3188dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188E0u;
        goto label_3188e0;
    }
    ctx->pc = 0x3188D8u;
    {
        const bool branch_taken_0x3188d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3188DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188D8u;
        // 0x3188dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188d8) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x3188E0u;
label_3188e0:
    // 0x3188e0: 0xc087502  jal         func_21D408
label_3188e4:
    if (ctx->pc == 0x3188E4u) {
        ctx->pc = 0x3188E8u;
        goto label_3188e8;
    }
    ctx->pc = 0x3188E0u;
    SET_GPR_U32(ctx, 31, 0x3188E8u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3188E0u, 0x3188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188E8u;
label_3188e8:
    // 0x3188e8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3188e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3188ec:
    // 0x3188ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3188ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3188f0:
    // 0x3188f0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3188f4:
    if (ctx->pc == 0x3188F4u) {
        ctx->pc = 0x3188F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188F0u;
        // 0x3188f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188F8u;
        goto label_3188f8;
    }
    ctx->pc = 0x3188F0u;
    {
        const bool branch_taken_0x3188f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3188F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188F0u;
        // 0x3188f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188f0) {
            ctx->pc = 0x318920u;
            return;
        }
    }
    ctx->pc = 0x3188F8u;
label_3188f8:
    // 0x3188f8: 0x10720008  beq         $v1, $s2, . + 4 + (0x8 << 2)
label_3188fc:
    if (ctx->pc == 0x3188FCu) {
        ctx->pc = 0x3188FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188F8u;
        // 0x3188fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318900u;
        goto label_318900;
    }
    ctx->pc = 0x3188F8u;
    {
        const bool branch_taken_0x3188f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x3188FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188F8u;
        // 0x3188fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188f8) {
            ctx->pc = 0x31891Cu;
            return;
        }
    }
    ctx->pc = 0x318900u;
label_318900:
    // 0x318900: 0x10000008  b           . + 4 + (0x8 << 2)
label_318904:
    if (ctx->pc == 0x318904u) {
        ctx->pc = 0x318904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318900u;
        // 0x318904: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318908u;
        goto label_318908;
    }
    ctx->pc = 0x318900u;
    {
        const bool branch_taken_0x318900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318900u;
        // 0x318904: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318900) {
            ctx->pc = 0x318924u;
            return;
        }
    }
    ctx->pc = 0x318908u;
label_318908:
    // 0x318908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31890c:
    // 0x31890c: 0xc0c607a  jal         func_3181E8
label_318910:
    if (ctx->pc == 0x318910u) {
        ctx->pc = 0x318910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31890Cu;
        // 0x318910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318914u;
        goto label_318914;
    }
    ctx->pc = 0x31890Cu;
    SET_GPR_U32(ctx, 31, 0x318914u);
    ctx->pc = 0x318910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31890Cu;
    // 0x318910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3181E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3181E8u, 0x31890Cu, 0x318914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318914u;
label_318914:
    // 0x318914: 0x10000002  b           . + 4 + (0x2 << 2)
label_318918:
    if (ctx->pc == 0x318918u) {
        ctx->pc = 0x318918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318914u;
        // 0x318918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31891Cu;
        goto label_fallthrough_0x318914;
    }
    ctx->pc = 0x318914u;
    {
        const bool branch_taken_0x318914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318914u;
        // 0x318918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318914) {
            ctx->pc = 0x318920u;
            return;
        }
    }
label_fallthrough_0x318914:
    ctx->pc = 0x31891Cu;
}
