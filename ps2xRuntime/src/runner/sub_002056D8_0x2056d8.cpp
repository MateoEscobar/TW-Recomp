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

// Function: sub_002056D8
// Address: 0x2056d8 - 0x205768
void sub_002056D8_0x2056d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002056D8_0x2056d8");
#endif

    switch (ctx->pc) {
        case 0x2056d8u: goto label_2056d8;
        case 0x2056dcu: goto label_2056dc;
        case 0x2056e0u: goto label_2056e0;
        case 0x2056e4u: goto label_2056e4;
        case 0x2056e8u: goto label_2056e8;
        case 0x2056ecu: goto label_2056ec;
        case 0x2056f0u: goto label_2056f0;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056f8u: goto label_2056f8;
        case 0x2056fcu: goto label_2056fc;
        case 0x205700u: goto label_205700;
        case 0x205704u: goto label_205704;
        case 0x205708u: goto label_205708;
        case 0x20570cu: goto label_20570c;
        case 0x205710u: goto label_205710;
        case 0x205714u: goto label_205714;
        case 0x205718u: goto label_205718;
        case 0x20571cu: goto label_20571c;
        case 0x205720u: goto label_205720;
        case 0x205724u: goto label_205724;
        case 0x205728u: goto label_205728;
        case 0x20572cu: goto label_20572c;
        case 0x205730u: goto label_205730;
        case 0x205734u: goto label_205734;
        case 0x205738u: goto label_205738;
        case 0x20573cu: goto label_20573c;
        case 0x205740u: goto label_205740;
        case 0x205744u: goto label_205744;
        case 0x205748u: goto label_205748;
        case 0x20574cu: goto label_20574c;
        case 0x205750u: goto label_205750;
        case 0x205754u: goto label_205754;
        case 0x205758u: goto label_205758;
        case 0x20575cu: goto label_20575c;
        case 0x205760u: goto label_205760;
        case 0x205764u: goto label_205764;
        default: break;
    }

    ctx->pc = 0x2056d8u;

label_2056d8:
    // 0x2056d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2056d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2056dc:
    // 0x2056dc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2056dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2056e0:
    // 0x2056e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2056e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2056e4:
    // 0x2056e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2056e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2056e8:
    // 0x2056e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2056e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2056ec:
    // 0x2056ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2056ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2056f0:
    // 0x2056f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2056f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2056f4:
    // 0x2056f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2056f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2056f8:
    // 0x2056f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2056f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2056fc:
    // 0x2056fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2056fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205700:
    // 0x205700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205704:
    // 0x205704: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x205704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_205708:
    // 0x205708: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x205708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20570c:
    // 0x20570c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20570cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_205710:
    // 0x205710: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x205710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_205714:
    // 0x205714: 0x60f809  jalr        $v1
label_205718:
    if (ctx->pc == 0x205718u) {
        ctx->pc = 0x205718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205714u;
        // 0x205718: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20571Cu;
        goto label_20571c;
    }
    ctx->pc = 0x205714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20571Cu);
        ctx->pc = 0x205718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205714u;
        // 0x205718: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205714u, 0x20571Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20571Cu;
label_20571c:
    // 0x20571c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_205720:
    // 0x205720: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_205724:
    if (ctx->pc == 0x205724u) {
        ctx->pc = 0x205724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205720u;
        // 0x205724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205728u;
        goto label_205728;
    }
    ctx->pc = 0x205720u;
    {
        const bool branch_taken_0x205720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x205724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205720u;
        // 0x205724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205720) {
            ctx->pc = 0x205754u;
            goto label_205754;
        }
    }
    ctx->pc = 0x205728u;
label_205728:
    // 0x205728: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x205728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_20572c:
    // 0x20572c: 0xc081026  jal         func_204098
label_205730:
    if (ctx->pc == 0x205730u) {
        ctx->pc = 0x205730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20572Cu;
        // 0x205730: 0x248487a8  addiu       $a0, $a0, -0x7858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205734u;
        goto label_205734;
    }
    ctx->pc = 0x20572Cu;
    SET_GPR_U32(ctx, 31, 0x205734u);
    ctx->pc = 0x205730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20572Cu;
    // 0x205730: 0x248487a8  addiu       $a0, $a0, -0x7858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204098u, 0x20572Cu, 0x205734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205734u;
label_205734:
    // 0x205734: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x205734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_205738:
    // 0x205738: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x205738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20573c:
    // 0x20573c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_205740:
    // 0x205740: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x205740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_205744:
    // 0x205744: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x205744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_205748:
    // 0x205748: 0xc043f0c  jal         func_10FC30
label_20574c:
    if (ctx->pc == 0x20574Cu) {
        ctx->pc = 0x20574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205748u;
        // 0x20574c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205750u;
        goto label_205750;
    }
    ctx->pc = 0x205748u;
    SET_GPR_U32(ctx, 31, 0x205750u);
    ctx->pc = 0x20574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205748u;
    // 0x20574c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x205748u, 0x205750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205750u;
label_205750:
    // 0x205750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205754:
    // 0x205754: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x205754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205758:
    // 0x205758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20575c:
    // 0x20575c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205760:
    // 0x205760: 0x3e00008  jr          $ra
label_205764:
    if (ctx->pc == 0x205764u) {
        ctx->pc = 0x205764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205760u;
        // 0x205764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205768u;
        goto label_fallthrough_0x205760;
    }
    ctx->pc = 0x205760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205760u;
        // 0x205764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x205760:
    ctx->pc = 0x205768u;
}
