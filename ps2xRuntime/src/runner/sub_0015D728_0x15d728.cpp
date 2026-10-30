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

// Function: sub_0015D728
// Address: 0x15d728 - 0x15d890
void sub_0015D728_0x15d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D728_0x15d728");
#endif

    switch (ctx->pc) {
        case 0x15d728u: goto label_15d728;
        case 0x15d72cu: goto label_15d72c;
        case 0x15d730u: goto label_15d730;
        case 0x15d734u: goto label_15d734;
        case 0x15d738u: goto label_15d738;
        case 0x15d73cu: goto label_15d73c;
        case 0x15d740u: goto label_15d740;
        case 0x15d744u: goto label_15d744;
        case 0x15d748u: goto label_15d748;
        case 0x15d74cu: goto label_15d74c;
        case 0x15d750u: goto label_15d750;
        case 0x15d754u: goto label_15d754;
        case 0x15d758u: goto label_15d758;
        case 0x15d75cu: goto label_15d75c;
        case 0x15d760u: goto label_15d760;
        case 0x15d764u: goto label_15d764;
        case 0x15d768u: goto label_15d768;
        case 0x15d76cu: goto label_15d76c;
        case 0x15d770u: goto label_15d770;
        case 0x15d774u: goto label_15d774;
        case 0x15d778u: goto label_15d778;
        case 0x15d77cu: goto label_15d77c;
        case 0x15d780u: goto label_15d780;
        case 0x15d784u: goto label_15d784;
        case 0x15d788u: goto label_15d788;
        case 0x15d78cu: goto label_15d78c;
        case 0x15d790u: goto label_15d790;
        case 0x15d794u: goto label_15d794;
        case 0x15d798u: goto label_15d798;
        case 0x15d79cu: goto label_15d79c;
        case 0x15d7a0u: goto label_15d7a0;
        case 0x15d7a4u: goto label_15d7a4;
        case 0x15d7a8u: goto label_15d7a8;
        case 0x15d7acu: goto label_15d7ac;
        case 0x15d7b0u: goto label_15d7b0;
        case 0x15d7b4u: goto label_15d7b4;
        case 0x15d7b8u: goto label_15d7b8;
        case 0x15d7bcu: goto label_15d7bc;
        case 0x15d7c0u: goto label_15d7c0;
        case 0x15d7c4u: goto label_15d7c4;
        case 0x15d7c8u: goto label_15d7c8;
        case 0x15d7ccu: goto label_15d7cc;
        case 0x15d7d0u: goto label_15d7d0;
        case 0x15d7d4u: goto label_15d7d4;
        case 0x15d7d8u: goto label_15d7d8;
        case 0x15d7dcu: goto label_15d7dc;
        case 0x15d7e0u: goto label_15d7e0;
        case 0x15d7e4u: goto label_15d7e4;
        case 0x15d7e8u: goto label_15d7e8;
        case 0x15d7ecu: goto label_15d7ec;
        case 0x15d7f0u: goto label_15d7f0;
        case 0x15d7f4u: goto label_15d7f4;
        case 0x15d7f8u: goto label_15d7f8;
        case 0x15d7fcu: goto label_15d7fc;
        case 0x15d800u: goto label_15d800;
        case 0x15d804u: goto label_15d804;
        case 0x15d808u: goto label_15d808;
        case 0x15d80cu: goto label_15d80c;
        case 0x15d810u: goto label_15d810;
        case 0x15d814u: goto label_15d814;
        case 0x15d818u: goto label_15d818;
        case 0x15d81cu: goto label_15d81c;
        case 0x15d820u: goto label_15d820;
        case 0x15d824u: goto label_15d824;
        case 0x15d828u: goto label_15d828;
        case 0x15d82cu: goto label_15d82c;
        case 0x15d830u: goto label_15d830;
        case 0x15d834u: goto label_15d834;
        case 0x15d838u: goto label_15d838;
        case 0x15d83cu: goto label_15d83c;
        case 0x15d840u: goto label_15d840;
        case 0x15d844u: goto label_15d844;
        case 0x15d848u: goto label_15d848;
        case 0x15d84cu: goto label_15d84c;
        case 0x15d850u: goto label_15d850;
        case 0x15d854u: goto label_15d854;
        case 0x15d858u: goto label_15d858;
        case 0x15d85cu: goto label_15d85c;
        case 0x15d860u: goto label_15d860;
        case 0x15d864u: goto label_15d864;
        case 0x15d868u: goto label_15d868;
        case 0x15d86cu: goto label_15d86c;
        case 0x15d870u: goto label_15d870;
        case 0x15d874u: goto label_15d874;
        case 0x15d878u: goto label_15d878;
        case 0x15d87cu: goto label_15d87c;
        case 0x15d880u: goto label_15d880;
        case 0x15d884u: goto label_15d884;
        case 0x15d888u: goto label_15d888;
        case 0x15d88cu: goto label_15d88c;
        default: break;
    }

    ctx->pc = 0x15d728u;

label_15d728:
    // 0x15d728: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15d72c:
    // 0x15d72c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15d730:
    // 0x15d730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d734:
    // 0x15d734: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15d734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15d738:
    // 0x15d738: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15d738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_15d73c:
    // 0x15d73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15d740:
    // 0x15d740: 0xc06f50a  jal         func_1BD428
label_15d744:
    if (ctx->pc == 0x15D744u) {
        ctx->pc = 0x15D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D740u;
        // 0x15d744: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D748u;
        goto label_15d748;
    }
    ctx->pc = 0x15D740u;
    SET_GPR_U32(ctx, 31, 0x15D748u);
    ctx->pc = 0x15D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D740u;
    // 0x15d744: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD428u, 0x15D740u, 0x15D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D748u;
label_15d748:
    // 0x15d748: 0xc05755c  jal         func_15D570
label_15d74c:
    if (ctx->pc == 0x15D74Cu) {
        ctx->pc = 0x15D750u;
        goto label_15d750;
    }
    ctx->pc = 0x15D748u;
    SET_GPR_U32(ctx, 31, 0x15D750u);
    ctx->pc = 0x15D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D570u, 0x15D748u, 0x15D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D750u;
label_15d750:
    // 0x15d750: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_15d754:
    if (ctx->pc == 0x15D754u) {
        ctx->pc = 0x15D758u;
        goto label_15d758;
    }
    ctx->pc = 0x15D750u;
    {
        const bool branch_taken_0x15d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d750) {
            ctx->pc = 0x15D7C0u;
            goto label_15d7c0;
        }
    }
    ctx->pc = 0x15D758u;
label_15d758:
    // 0x15d758: 0x822206d8  lb          $v0, 0x6D8($s1)
    ctx->pc = 0x15d758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1752)));
label_15d75c:
    // 0x15d75c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15d760:
    if (ctx->pc == 0x15D760u) {
        ctx->pc = 0x15D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D75Cu;
        // 0x15d760: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D764u;
        goto label_15d764;
    }
    ctx->pc = 0x15D75Cu;
    {
        const bool branch_taken_0x15d75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D75Cu;
        // 0x15d760: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d75c) {
            ctx->pc = 0x15D7C0u;
            goto label_15d7c0;
        }
    }
    ctx->pc = 0x15D764u;
label_15d764:
    // 0x15d764: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15d764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15d768:
    // 0x15d768: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x15d768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_15d76c:
    // 0x15d76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d770:
    // 0x15d770: 0x24a5f688  addiu       $a1, $a1, -0x978
    ctx->pc = 0x15d770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964872));
label_15d774:
    // 0x15d774: 0xc043e94  jal         func_10FA50
label_15d778:
    if (ctx->pc == 0x15D778u) {
        ctx->pc = 0x15D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D774u;
        // 0x15d778: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D77Cu;
        goto label_15d77c;
    }
    ctx->pc = 0x15D774u;
    SET_GPR_U32(ctx, 31, 0x15D77Cu);
    ctx->pc = 0x15D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D774u;
    // 0x15d778: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15D774u, 0x15D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D77Cu;
label_15d77c:
    // 0x15d77c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15d77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15d780:
    // 0x15d780: 0x262506d8  addiu       $a1, $s1, 0x6D8
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1752));
label_15d784:
    // 0x15d784: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15d788:
    // 0x15d788: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15d788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15d78c:
    // 0x15d78c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15d790:
    // 0x15d790: 0x40f809  jalr        $v0
label_15d794:
    if (ctx->pc == 0x15D794u) {
        ctx->pc = 0x15D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D790u;
        // 0x15d794: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D798u;
        goto label_15d798;
    }
    ctx->pc = 0x15D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D798u);
        ctx->pc = 0x15D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D790u;
        // 0x15d794: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D790u, 0x15D798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D798u;
label_15d798:
    // 0x15d798: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x15d798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15d79c:
    // 0x15d79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d7a0:
    // 0x15d7a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d7a4:
    // 0x15d7a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15d7a8:
    // 0x15d7a8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15d7a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15d7ac:
    // 0x15d7ac: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15d7b0:
    // 0x15d7b0: 0x60f809  jalr        $v1
label_15d7b4:
    if (ctx->pc == 0x15D7B4u) {
        ctx->pc = 0x15D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B0u;
        // 0x15d7b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7B8u;
        goto label_15d7b8;
    }
    ctx->pc = 0x15D7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D7B8u);
        ctx->pc = 0x15D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B0u;
        // 0x15d7b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D7B0u, 0x15D7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D7B8u;
label_15d7b8:
    // 0x15d7b8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_15d7bc:
    if (ctx->pc == 0x15D7BCu) {
        ctx->pc = 0x15D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B8u;
        // 0x15d7bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7C0u;
        goto label_15d7c0;
    }
    ctx->pc = 0x15D7B8u;
    {
        const bool branch_taken_0x15d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B8u;
        // 0x15d7bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7b8) {
            ctx->pc = 0x15D86Cu;
            goto label_15d86c;
        }
    }
    ctx->pc = 0x15D7C0u;
label_15d7c0:
    // 0x15d7c0: 0xc057564  jal         func_15D590
label_15d7c4:
    if (ctx->pc == 0x15D7C4u) {
        ctx->pc = 0x15D7C8u;
        goto label_15d7c8;
    }
    ctx->pc = 0x15D7C0u;
    SET_GPR_U32(ctx, 31, 0x15D7C8u);
    ctx->pc = 0x15D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D590u, 0x15D7C0u, 0x15D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7C8u;
label_15d7c8:
    // 0x15d7c8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_15d7cc:
    if (ctx->pc == 0x15D7CCu) {
        ctx->pc = 0x15D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7C8u;
        // 0x15d7cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7D0u;
        goto label_15d7d0;
    }
    ctx->pc = 0x15D7C8u;
    {
        const bool branch_taken_0x15d7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7C8u;
        // 0x15d7cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7c8) {
            ctx->pc = 0x15D86Cu;
            goto label_15d86c;
        }
    }
    ctx->pc = 0x15D7D0u;
label_15d7d0:
    // 0x15d7d0: 0x822206f8  lb          $v0, 0x6F8($s1)
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1784)));
label_15d7d4:
    // 0x15d7d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_15d7d8:
    if (ctx->pc == 0x15D7D8u) {
        ctx->pc = 0x15D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D4u;
        // 0x15d7d8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7DCu;
        goto label_15d7dc;
    }
    ctx->pc = 0x15D7D4u;
    {
        const bool branch_taken_0x15d7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D4u;
        // 0x15d7d8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7d4) {
            ctx->pc = 0x15D868u;
            goto label_15d868;
        }
    }
    ctx->pc = 0x15D7DCu;
label_15d7dc:
    // 0x15d7dc: 0x262506f8  addiu       $a1, $s1, 0x6F8
    ctx->pc = 0x15d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1784));
label_15d7e0:
    // 0x15d7e0: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_15d7e4:
    // 0x15d7e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15d7e8:
    // 0x15d7e8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15d7ec:
    // 0x15d7ec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15d7f0:
    // 0x15d7f0: 0x40f809  jalr        $v0
label_15d7f4:
    if (ctx->pc == 0x15D7F4u) {
        ctx->pc = 0x15D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7F0u;
        // 0x15d7f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7F8u;
        goto label_15d7f8;
    }
    ctx->pc = 0x15D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D7F8u);
        ctx->pc = 0x15D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7F0u;
        // 0x15d7f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D7F0u, 0x15D7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D7F8u;
label_15d7f8:
    // 0x15d7f8: 0x8e512b04  lw          $s1, 0x2B04($s2)
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_15d7fc:
    // 0x15d7fc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15d800:
    // 0x15d800: 0x86020070  lh          $v0, 0x70($s0)
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_15d804:
    // 0x15d804: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15d808:
    // 0x15d808: 0xc05753a  jal         func_15D4E8
label_15d80c:
    if (ctx->pc == 0x15D80Cu) {
        ctx->pc = 0x15D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D808u;
        // 0x15d80c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D810u;
        goto label_15d810;
    }
    ctx->pc = 0x15D808u;
    SET_GPR_U32(ctx, 31, 0x15D810u);
    ctx->pc = 0x15D80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D808u;
    // 0x15d80c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D4E8u, 0x15D808u, 0x15D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D810u;
label_15d810:
    // 0x15d810: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15d810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15d814:
    // 0x15d814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d818:
    // 0x15d818: 0x60f809  jalr        $v1
label_15d81c:
    if (ctx->pc == 0x15D81Cu) {
        ctx->pc = 0x15D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D818u;
        // 0x15d81c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D820u;
        goto label_15d820;
    }
    ctx->pc = 0x15D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D820u);
        ctx->pc = 0x15D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D818u;
        // 0x15d81c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D818u, 0x15D820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D820u;
label_15d820:
    // 0x15d820: 0x8e512b04  lw          $s1, 0x2B04($s2)
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_15d824:
    // 0x15d824: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x15d824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15d828:
    // 0x15d828: 0x86020070  lh          $v0, 0x70($s0)
    ctx->pc = 0x15d828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_15d82c:
    // 0x15d82c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15d830:
    // 0x15d830: 0xc057554  jal         func_15D550
label_15d834:
    if (ctx->pc == 0x15D834u) {
        ctx->pc = 0x15D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D830u;
        // 0x15d834: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D838u;
        goto label_15d838;
    }
    ctx->pc = 0x15D830u;
    SET_GPR_U32(ctx, 31, 0x15D838u);
    ctx->pc = 0x15D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D830u;
    // 0x15d834: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D550u, 0x15D830u, 0x15D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D838u;
label_15d838:
    // 0x15d838: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15d83c:
    // 0x15d83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d840:
    // 0x15d840: 0x60f809  jalr        $v1
label_15d844:
    if (ctx->pc == 0x15D844u) {
        ctx->pc = 0x15D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D840u;
        // 0x15d844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D848u;
        goto label_15d848;
    }
    ctx->pc = 0x15D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D848u);
        ctx->pc = 0x15D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D840u;
        // 0x15d844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D840u, 0x15D848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D848u;
label_15d848:
    // 0x15d848: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x15d848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_15d84c:
    // 0x15d84c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15d850:
    // 0x15d850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d854:
    // 0x15d854: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15d858:
    // 0x15d858: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15d858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15d85c:
    // 0x15d85c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15d860:
    // 0x15d860: 0x60f809  jalr        $v1
label_15d864:
    if (ctx->pc == 0x15D864u) {
        ctx->pc = 0x15D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D860u;
        // 0x15d864: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D868u;
        goto label_15d868;
    }
    ctx->pc = 0x15D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D868u);
        ctx->pc = 0x15D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D860u;
        // 0x15d864: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D860u, 0x15D868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D868u;
label_15d868:
    // 0x15d868: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15d86c:
    // 0x15d86c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d870:
    // 0x15d870: 0xc0517d8  jal         func_145F60
label_15d874:
    if (ctx->pc == 0x15D874u) {
        ctx->pc = 0x15D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D870u;
        // 0x15d874: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D878u;
        goto label_15d878;
    }
    ctx->pc = 0x15D870u;
    SET_GPR_U32(ctx, 31, 0x15D878u);
    ctx->pc = 0x15D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D870u;
    // 0x15d874: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15D870u, 0x15D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D878u;
label_15d878:
    // 0x15d878: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15d878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d87c:
    // 0x15d87c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15d87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d880:
    // 0x15d880: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15d880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d884:
    // 0x15d884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d888:
    // 0x15d888: 0x3e00008  jr          $ra
label_15d88c:
    if (ctx->pc == 0x15D88Cu) {
        ctx->pc = 0x15D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D888u;
        // 0x15d88c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D890u;
        goto label_fallthrough_0x15d888;
    }
    ctx->pc = 0x15D888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D888u;
        // 0x15d88c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d888:
    ctx->pc = 0x15D890u;
}
