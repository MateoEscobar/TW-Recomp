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

// Function: sub_003A8698
// Address: 0x3a8698 - 0x3a8790
void sub_003A8698_0x3a8698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8698_0x3a8698");
#endif

    switch (ctx->pc) {
        case 0x3a8698u: goto label_3a8698;
        case 0x3a869cu: goto label_3a869c;
        case 0x3a86a0u: goto label_3a86a0;
        case 0x3a86a4u: goto label_3a86a4;
        case 0x3a86a8u: goto label_3a86a8;
        case 0x3a86acu: goto label_3a86ac;
        case 0x3a86b0u: goto label_3a86b0;
        case 0x3a86b4u: goto label_3a86b4;
        case 0x3a86b8u: goto label_3a86b8;
        case 0x3a86bcu: goto label_3a86bc;
        case 0x3a86c0u: goto label_3a86c0;
        case 0x3a86c4u: goto label_3a86c4;
        case 0x3a86c8u: goto label_3a86c8;
        case 0x3a86ccu: goto label_3a86cc;
        case 0x3a86d0u: goto label_3a86d0;
        case 0x3a86d4u: goto label_3a86d4;
        case 0x3a86d8u: goto label_3a86d8;
        case 0x3a86dcu: goto label_3a86dc;
        case 0x3a86e0u: goto label_3a86e0;
        case 0x3a86e4u: goto label_3a86e4;
        case 0x3a86e8u: goto label_3a86e8;
        case 0x3a86ecu: goto label_3a86ec;
        case 0x3a86f0u: goto label_3a86f0;
        case 0x3a86f4u: goto label_3a86f4;
        case 0x3a86f8u: goto label_3a86f8;
        case 0x3a86fcu: goto label_3a86fc;
        case 0x3a8700u: goto label_3a8700;
        case 0x3a8704u: goto label_3a8704;
        case 0x3a8708u: goto label_3a8708;
        case 0x3a870cu: goto label_3a870c;
        case 0x3a8710u: goto label_3a8710;
        case 0x3a8714u: goto label_3a8714;
        case 0x3a8718u: goto label_3a8718;
        case 0x3a871cu: goto label_3a871c;
        case 0x3a8720u: goto label_3a8720;
        case 0x3a8724u: goto label_3a8724;
        case 0x3a8728u: goto label_3a8728;
        case 0x3a872cu: goto label_3a872c;
        case 0x3a8730u: goto label_3a8730;
        case 0x3a8734u: goto label_3a8734;
        case 0x3a8738u: goto label_3a8738;
        case 0x3a873cu: goto label_3a873c;
        case 0x3a8740u: goto label_3a8740;
        case 0x3a8744u: goto label_3a8744;
        case 0x3a8748u: goto label_3a8748;
        case 0x3a874cu: goto label_3a874c;
        case 0x3a8750u: goto label_3a8750;
        case 0x3a8754u: goto label_3a8754;
        case 0x3a8758u: goto label_3a8758;
        case 0x3a875cu: goto label_3a875c;
        case 0x3a8760u: goto label_3a8760;
        case 0x3a8764u: goto label_3a8764;
        case 0x3a8768u: goto label_3a8768;
        case 0x3a876cu: goto label_3a876c;
        case 0x3a8770u: goto label_3a8770;
        case 0x3a8774u: goto label_3a8774;
        case 0x3a8778u: goto label_3a8778;
        case 0x3a877cu: goto label_3a877c;
        case 0x3a8780u: goto label_3a8780;
        case 0x3a8784u: goto label_3a8784;
        case 0x3a8788u: goto label_3a8788;
        case 0x3a878cu: goto label_3a878c;
        default: break;
    }

    ctx->pc = 0x3a8698u;

label_3a8698:
    // 0x3a8698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a8698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3a869c:
    // 0x3a869c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3a86a0:
    // 0x3a86a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3a86a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3a86a4:
    // 0x3a86a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a86a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a86a8:
    // 0x3a86a8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3a86a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3a86ac:
    // 0x3a86ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a86acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a86b0:
    // 0x3a86b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a86b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3a86b4:
    // 0x3a86b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a86b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a86b8:
    // 0x3a86b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3a86bc:
    // 0x3a86bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a86c0:
    // 0x3a86c0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a86c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a86c4:
    // 0x3a86c4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a86c8:
    // 0x3a86c8: 0x40f809  jalr        $v0
label_3a86cc:
    if (ctx->pc == 0x3A86CCu) {
        ctx->pc = 0x3A86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86C8u;
        // 0x3a86cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A86D0u;
        goto label_3a86d0;
    }
    ctx->pc = 0x3A86C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A86D0u);
        ctx->pc = 0x3A86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86C8u;
        // 0x3a86cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A86C8u, 0x3A86D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A86D0u;
label_3a86d0:
    // 0x3a86d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a86d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a86d4:
    // 0x3a86d4: 0xc0ea146  jal         func_3A8518
label_3a86d8:
    if (ctx->pc == 0x3A86D8u) {
        ctx->pc = 0x3A86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86D4u;
        // 0x3a86d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A86DCu;
        goto label_3a86dc;
    }
    ctx->pc = 0x3A86D4u;
    SET_GPR_U32(ctx, 31, 0x3A86DCu);
    ctx->pc = 0x3A86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A86D4u;
    // 0x3a86d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A86D4u, 0x3A86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A86DCu;
label_3a86dc:
    // 0x3a86dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a86e0:
    // 0x3a86e0: 0xc0ea12a  jal         func_3A84A8
label_3a86e4:
    if (ctx->pc == 0x3A86E4u) {
        ctx->pc = 0x3A86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86E0u;
        // 0x3a86e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A86E8u;
        goto label_3a86e8;
    }
    ctx->pc = 0x3A86E0u;
    SET_GPR_U32(ctx, 31, 0x3A86E8u);
    ctx->pc = 0x3A86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A86E0u;
    // 0x3a86e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A86E0u, 0x3A86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A86E8u;
label_3a86e8:
    // 0x3a86e8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a86e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a86ec:
    // 0x3a86ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a86ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a86f0:
    // 0x3a86f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a86f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a86f4:
    // 0x3a86f4: 0xc0ea12a  jal         func_3A84A8
label_3a86f8:
    if (ctx->pc == 0x3A86F8u) {
        ctx->pc = 0x3A86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86F4u;
        // 0x3a86f8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A86FCu;
        goto label_3a86fc;
    }
    ctx->pc = 0x3A86F4u;
    SET_GPR_U32(ctx, 31, 0x3A86FCu);
    ctx->pc = 0x3A86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A86F4u;
    // 0x3a86f8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A86F4u, 0x3A86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A86FCu;
label_3a86fc:
    // 0x3a86fc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a86fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8700:
    // 0x3a8700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a8700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a8704:
    // 0x3a8704: 0xc0ea146  jal         func_3A8518
label_3a8708:
    if (ctx->pc == 0x3A8708u) {
        ctx->pc = 0x3A8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8704u;
        // 0x3a8708: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A870Cu;
        goto label_3a870c;
    }
    ctx->pc = 0x3A8704u;
    SET_GPR_U32(ctx, 31, 0x3A870Cu);
    ctx->pc = 0x3A8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8704u;
    // 0x3a8708: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A8704u, 0x3A870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A870Cu;
label_3a870c:
    // 0x3a870c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a870cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8710:
    // 0x3a8710: 0xc0ea14c  jal         func_3A8530
label_3a8714:
    if (ctx->pc == 0x3A8714u) {
        ctx->pc = 0x3A8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8710u;
        // 0x3a8714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8718u;
        goto label_3a8718;
    }
    ctx->pc = 0x3A8710u;
    SET_GPR_U32(ctx, 31, 0x3A8718u);
    ctx->pc = 0x3A8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8710u;
    // 0x3a8714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A8710u, 0x3A8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8718u;
label_3a8718:
    // 0x3a8718: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a8718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a871c:
    // 0x3a871c: 0xc0ea146  jal         func_3A8518
label_3a8720:
    if (ctx->pc == 0x3A8720u) {
        ctx->pc = 0x3A8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A871Cu;
        // 0x3a8720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8724u;
        goto label_3a8724;
    }
    ctx->pc = 0x3A871Cu;
    SET_GPR_U32(ctx, 31, 0x3A8724u);
    ctx->pc = 0x3A8720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A871Cu;
    // 0x3a8720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A871Cu, 0x3A8724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8724u;
label_3a8724:
    // 0x3a8724: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a8724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a8728:
    // 0x3a8728: 0xc0e858c  jal         func_3A1630
label_3a872c:
    if (ctx->pc == 0x3A872Cu) {
        ctx->pc = 0x3A872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8728u;
        // 0x3a872c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8730u;
        goto label_3a8730;
    }
    ctx->pc = 0x3A8728u;
    SET_GPR_U32(ctx, 31, 0x3A8730u);
    ctx->pc = 0x3A872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8728u;
    // 0x3a872c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A8728u, 0x3A8730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8730u;
label_3a8730:
    // 0x3a8730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a8730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a8734:
    // 0x3a8734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a8734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8738:
    // 0x3a8738: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3a8738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3a873c:
    // 0x3a873c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8740:
    // 0x3a8740: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3a8740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3a8744:
    // 0x3a8744: 0xc0e896e  jal         func_3A25B8
label_3a8748:
    if (ctx->pc == 0x3A8748u) {
        ctx->pc = 0x3A8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8744u;
        // 0x3a8748: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A874Cu;
        goto label_3a874c;
    }
    ctx->pc = 0x3A8744u;
    SET_GPR_U32(ctx, 31, 0x3A874Cu);
    ctx->pc = 0x3A8748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8744u;
    // 0x3a8748: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3A8744u, 0x3A874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A874Cu;
label_3a874c:
    // 0x3a874c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a874cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8750:
    // 0x3a8750: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a8750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8754:
    // 0x3a8754: 0xc0e8604  jal         func_3A1810
label_3a8758:
    if (ctx->pc == 0x3A8758u) {
        ctx->pc = 0x3A8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8754u;
        // 0x3a8758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A875Cu;
        goto label_3a875c;
    }
    ctx->pc = 0x3A8754u;
    SET_GPR_U32(ctx, 31, 0x3A875Cu);
    ctx->pc = 0x3A8758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8754u;
    // 0x3a8758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3A8754u, 0x3A875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A875Cu;
label_3a875c:
    // 0x3a875c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a875cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a8760:
    // 0x3a8760: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3a8760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a8764:
    // 0x3a8764: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3a8764u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3a8768:
    // 0x3a8768: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3a8768u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3a876c:
    // 0x3a876c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3a876cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3a8770:
    // 0x3a8770: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a8770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a8774:
    // 0x3a8774: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3a8774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a8778:
    // 0x3a8778: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a8778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a877c:
    // 0x3a877c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a877cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a8780:
    // 0x3a8780: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a8780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a8784:
    // 0x3a8784: 0x3e00008  jr          $ra
label_3a8788:
    if (ctx->pc == 0x3A8788u) {
        ctx->pc = 0x3A8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8784u;
        // 0x3a8788: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A878Cu;
        goto label_3a878c;
    }
    ctx->pc = 0x3A8784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8784u;
        // 0x3a8788: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A878Cu;
label_3a878c:
    // 0x3a878c: 0x0  nop
    ctx->pc = 0x3a878cu;
    // NOP
    ctx->pc = 0x3a8790u;
}
