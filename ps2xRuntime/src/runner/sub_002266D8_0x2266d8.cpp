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

// Function: sub_002266D8
// Address: 0x2266d8 - 0x226760
void sub_002266D8_0x2266d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266D8_0x2266d8");
#endif

    switch (ctx->pc) {
        case 0x2266d8u: goto label_2266d8;
        case 0x2266dcu: goto label_2266dc;
        case 0x2266e0u: goto label_2266e0;
        case 0x2266e4u: goto label_2266e4;
        case 0x2266e8u: goto label_2266e8;
        case 0x2266ecu: goto label_2266ec;
        case 0x2266f0u: goto label_2266f0;
        case 0x2266f4u: goto label_2266f4;
        case 0x2266f8u: goto label_2266f8;
        case 0x2266fcu: goto label_2266fc;
        case 0x226700u: goto label_226700;
        case 0x226704u: goto label_226704;
        case 0x226708u: goto label_226708;
        case 0x22670cu: goto label_22670c;
        case 0x226710u: goto label_226710;
        case 0x226714u: goto label_226714;
        case 0x226718u: goto label_226718;
        case 0x22671cu: goto label_22671c;
        case 0x226720u: goto label_226720;
        case 0x226724u: goto label_226724;
        case 0x226728u: goto label_226728;
        case 0x22672cu: goto label_22672c;
        case 0x226730u: goto label_226730;
        case 0x226734u: goto label_226734;
        case 0x226738u: goto label_226738;
        case 0x22673cu: goto label_22673c;
        case 0x226740u: goto label_226740;
        case 0x226744u: goto label_226744;
        case 0x226748u: goto label_226748;
        case 0x22674cu: goto label_22674c;
        case 0x226750u: goto label_226750;
        case 0x226754u: goto label_226754;
        case 0x226758u: goto label_226758;
        case 0x22675cu: goto label_22675c;
        default: break;
    }

    ctx->pc = 0x2266d8u;

label_2266d8:
    // 0x2266d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2266dc:
    // 0x2266dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2266dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2266e0:
    // 0x2266e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2266e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2266e4:
    // 0x2266e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2266e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2266e8:
    // 0x2266e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2266e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2266ec:
    // 0x2266ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2266ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2266f0:
    // 0x2266f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2266f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2266f4:
    // 0x2266f4: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2266f8:
    // 0x2266f8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_2266fc:
    if (ctx->pc == 0x2266FCu) {
        ctx->pc = 0x2266FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266F8u;
        // 0x2266fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226700u;
        goto label_226700;
    }
    ctx->pc = 0x2266F8u;
    {
        const bool branch_taken_0x2266f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2266FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266F8u;
        // 0x2266fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266f8) {
            ctx->pc = 0x22673Cu;
            goto label_22673c;
        }
    }
    ctx->pc = 0x226700u;
label_226700:
    // 0x226700: 0xc0e409a  jal         func_390268
label_226704:
    if (ctx->pc == 0x226704u) {
        ctx->pc = 0x226704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226700u;
        // 0x226704: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226708u;
        goto label_226708;
    }
    ctx->pc = 0x226700u;
    SET_GPR_U32(ctx, 31, 0x226708u);
    ctx->pc = 0x226704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226700u;
    // 0x226704: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226700u, 0x226708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226708u;
label_226708:
    // 0x226708: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22670c:
    if (ctx->pc == 0x22670Cu) {
        ctx->pc = 0x22670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226708u;
        // 0x22670c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226710u;
        goto label_226710;
    }
    ctx->pc = 0x226708u;
    {
        const bool branch_taken_0x226708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226708) {
            ctx->pc = 0x22670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226708u;
            // 0x22670c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22671Cu;
            goto label_22671c;
        }
    }
    ctx->pc = 0x226710u;
label_226710:
    // 0x226710: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_226714:
    // 0x226714: 0x10000005  b           . + 4 + (0x5 << 2)
label_226718:
    if (ctx->pc == 0x226718u) {
        ctx->pc = 0x226718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226714u;
        // 0x226718: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22671Cu;
        goto label_22671c;
    }
    ctx->pc = 0x226714u;
    {
        const bool branch_taken_0x226714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226714u;
        // 0x226718: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226714) {
            ctx->pc = 0x22672Cu;
            goto label_22672c;
        }
    }
    ctx->pc = 0x22671Cu;
label_22671c:
    // 0x22671c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22671cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226720:
    // 0x226720: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226724:
    // 0x226724: 0x40f809  jalr        $v0
label_226728:
    if (ctx->pc == 0x226728u) {
        ctx->pc = 0x226728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226724u;
        // 0x226728: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22672Cu;
        goto label_22672c;
    }
    ctx->pc = 0x226724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22672Cu);
        ctx->pc = 0x226728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226724u;
        // 0x226728: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226724u, 0x22672Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22672Cu;
label_22672c:
    // 0x22672c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22672cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_226730:
    // 0x226730: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_226734:
    // 0x226734: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x226734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_226738:
    // 0x226738: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x226738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_22673c:
    // 0x22673c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22673cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226740:
    // 0x226740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226744:
    // 0x226744: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x226744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226748:
    // 0x226748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22674c:
    // 0x22674c: 0x3e00008  jr          $ra
label_226750:
    if (ctx->pc == 0x226750u) {
        ctx->pc = 0x226750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22674Cu;
        // 0x226750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226754u;
        goto label_226754;
    }
    ctx->pc = 0x22674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22674Cu;
        // 0x226750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22674Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226754u;
label_226754:
    // 0x226754: 0x0  nop
    ctx->pc = 0x226754u;
    // NOP
label_226758:
    // 0x226758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22675c:
    // 0x22675c: 0x0  nop
    ctx->pc = 0x22675cu;
    // NOP
    ctx->pc = 0x226760u;
}
