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

// Function: sub_00288698
// Address: 0x288698 - 0x288838
void sub_00288698_0x288698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288698_0x288698");
#endif

    switch (ctx->pc) {
        case 0x2886b4u: goto label_2886b4;
        case 0x2886c0u: goto label_2886c0;
        case 0x28871cu: goto label_28871c;
        case 0x28872cu: goto label_28872c;
        case 0x28873cu: goto label_28873c;
        case 0x28874cu: goto label_28874c;
        case 0x28875cu: goto label_28875c;
        case 0x28876cu: goto label_28876c;
        case 0x288780u: goto label_288780;
        case 0x288798u: goto label_288798;
        case 0x2887bcu: goto label_2887bc;
        case 0x2887ccu: goto label_2887cc;
        case 0x2887dcu: goto label_2887dc;
        case 0x2887f0u: goto label_2887f0;
        case 0x2887f8u: goto label_2887f8;
        case 0x288810u: goto label_288810;
        case 0x28881cu: goto label_28881c;
        default: break;
    }

    ctx->pc = 0x288698u;

    // 0x288698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28869c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2886a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2886a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2886a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2886a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2886a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2886a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2886ac: 0xc089b88  jal         func_226E20
    ctx->pc = 0x2886ACu;
    SET_GPR_U32(ctx, 31, 0x2886B4u);
    ctx->pc = 0x2886B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2886ACu;
    // 0x2886b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E20u, 0x2886ACu, 0x2886B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886B4u;
label_2886b4:
    // 0x2886b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2886b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886b8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2886B8u;
    SET_GPR_U32(ctx, 31, 0x2886C0u);
    ctx->pc = 0x2886BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2886B8u;
    // 0x2886bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2886B8u, 0x2886C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886C0u;
label_2886c0:
    // 0x2886c0: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2886c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x2886c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2886c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886c8: 0x2463f430  addiu       $v1, $v1, -0xBD0
    ctx->pc = 0x2886c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964272));
    // 0x2886cc: 0x860401be  lh          $a0, 0x1BE($s0)
    ctx->pc = 0x2886ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x2886d0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2886d0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55F432u));
    // 0x2886d4: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2886D4u;
    {
        const bool branch_taken_0x2886d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2886D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886D4u;
        // 0x2886d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886d4) {
            ctx->pc = 0x28870Cu;
            goto label_28870c;
        }
    }
    ctx->pc = 0x2886DCu;
    // 0x2886dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2886dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2886e0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2886E0u;
    {
        const bool branch_taken_0x2886e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2886E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886E0u;
        // 0x2886e4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886e0) {
            ctx->pc = 0x2886F8u;
            goto label_2886f8;
        }
    }
    ctx->pc = 0x2886E8u;
    // 0x2886e8: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x2886e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2886ec: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2886ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2886f0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2886F0u;
    {
        const bool branch_taken_0x2886f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2886F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886F0u;
        // 0x2886f4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886f0) {
            ctx->pc = 0x288708u;
            goto label_288708;
        }
    }
    ctx->pc = 0x2886F8u;
label_2886f8:
    // 0x2886f8: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2886f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2886fc: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x2886fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x288700: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x288700u;
    {
        const bool branch_taken_0x288700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288700) {
            ctx->pc = 0x28870Cu;
            goto label_28870c;
        }
    }
    ctx->pc = 0x288708u;
label_288708:
    // 0x288708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28870c:
    // 0x28870c: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x28870Cu;
    {
        const bool branch_taken_0x28870c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x288710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28870Cu;
        // 0x288710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28870c) {
            ctx->pc = 0x288820u;
            goto label_288820;
        }
    }
    ctx->pc = 0x288714u;
    // 0x288714: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x288714u;
    SET_GPR_U32(ctx, 31, 0x28871Cu);
    ctx->pc = 0x288718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288714u;
    // 0x288718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x288714u, 0x28871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28871Cu;
label_28871c:
    // 0x28871c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x28871Cu;
    {
        const bool branch_taken_0x28871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28871Cu;
        // 0x288720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28871c) {
            ctx->pc = 0x288820u;
            goto label_288820;
        }
    }
    ctx->pc = 0x288724u;
    // 0x288724: 0xc088e98  jal         func_223A60
    ctx->pc = 0x288724u;
    SET_GPR_U32(ctx, 31, 0x28872Cu);
    ctx->pc = 0x288728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288724u;
    // 0x288728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x288724u, 0x28872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28872Cu;
label_28872c:
    // 0x28872c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28872Cu;
    {
        const bool branch_taken_0x28872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28872Cu;
        // 0x288730: 0x241201d8  addiu       $s2, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28872c) {
            ctx->pc = 0x288790u;
            goto label_288790;
        }
    }
    ctx->pc = 0x288734u;
    // 0x288734: 0xc088e94  jal         func_223A50
    ctx->pc = 0x288734u;
    SET_GPR_U32(ctx, 31, 0x28873Cu);
    ctx->pc = 0x288738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288734u;
    // 0x288738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x288734u, 0x28873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28873Cu;
label_28873c:
    // 0x28873c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28873Cu;
    {
        const bool branch_taken_0x28873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28873Cu;
        // 0x288740: 0x241201d8  addiu       $s2, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28873c) {
            ctx->pc = 0x288790u;
            goto label_288790;
        }
    }
    ctx->pc = 0x288744u;
    // 0x288744: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x288744u;
    SET_GPR_U32(ctx, 31, 0x28874Cu);
    ctx->pc = 0x288748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288744u;
    // 0x288748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x288744u, 0x28874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28874Cu;
label_28874c:
    // 0x28874c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28874Cu;
    {
        const bool branch_taken_0x28874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28874c) {
            ctx->pc = 0x288764u;
            goto label_288764;
        }
    }
    ctx->pc = 0x288754u;
    // 0x288754: 0xc088e90  jal         func_223A40
    ctx->pc = 0x288754u;
    SET_GPR_U32(ctx, 31, 0x28875Cu);
    ctx->pc = 0x288758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288754u;
    // 0x288758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x288754u, 0x28875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28875Cu;
label_28875c:
    // 0x28875c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28875Cu;
    {
        const bool branch_taken_0x28875c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28875Cu;
        // 0x288760: 0x241201d7  addiu       $s2, $zero, 0x1D7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28875c) {
            ctx->pc = 0x288790u;
            goto label_288790;
        }
    }
    ctx->pc = 0x288764u;
label_288764:
    // 0x288764: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x288764u;
    SET_GPR_U32(ctx, 31, 0x28876Cu);
    ctx->pc = 0x288768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288764u;
    // 0x288768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x288764u, 0x28876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28876Cu;
label_28876c:
    // 0x28876c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288770: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x288770u;
    {
        const bool branch_taken_0x288770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x288774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288770u;
        // 0x288774: 0x241201eb  addiu       $s2, $zero, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288770) {
            ctx->pc = 0x288790u;
            goto label_288790;
        }
    }
    ctx->pc = 0x288778u;
    // 0x288778: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x288778u;
    SET_GPR_U32(ctx, 31, 0x288780u);
    ctx->pc = 0x28877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288778u;
    // 0x28877c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x288778u, 0x288780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288780u;
label_288780:
    // 0x288780: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288784: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x288784u;
    {
        const bool branch_taken_0x288784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x288788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288784u;
        // 0x288788: 0x241201f6  addiu       $s2, $zero, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288784) {
            ctx->pc = 0x288790u;
            goto label_288790;
        }
    }
    ctx->pc = 0x28878Cu;
    // 0x28878c: 0x241201eb  addiu       $s2, $zero, 0x1EB
    ctx->pc = 0x28878cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
label_288790:
    // 0x288790: 0xc087502  jal         func_21D408
    ctx->pc = 0x288790u;
    SET_GPR_U32(ctx, 31, 0x288798u);
    ctx->pc = 0x288794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288790u;
    // 0x288794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x288790u, 0x288798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288798u;
label_288798:
    // 0x288798: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x288798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28879c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28879Cu;
    {
        const bool branch_taken_0x28879c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2887A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28879Cu;
        // 0x2887a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28879c) {
            ctx->pc = 0x2887CCu;
            goto label_2887cc;
        }
    }
    ctx->pc = 0x2887A4u;
    // 0x2887a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2887a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2887a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2887a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2887ac: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2887acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2887b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2887b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2887b4: 0xc09eb60  jal         func_27AD80
    ctx->pc = 0x2887B4u;
    SET_GPR_U32(ctx, 31, 0x2887BCu);
    ctx->pc = 0x2887B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887B4u;
    // 0x2887b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AD80u, 0x2887B4u, 0x2887BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887BCu;
label_2887bc:
    // 0x2887bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2887bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2887c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887c4: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x2887C4u;
    SET_GPR_U32(ctx, 31, 0x2887CCu);
    ctx->pc = 0x2887C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887C4u;
    // 0x2887c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x2887C4u, 0x2887CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887CCu;
label_2887cc:
    // 0x2887cc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2887CCu;
    {
        const bool branch_taken_0x2887cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2887D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887CCu;
        // 0x2887d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887cc) {
            ctx->pc = 0x2887F0u;
            goto label_2887f0;
        }
    }
    ctx->pc = 0x2887D4u;
    // 0x2887d4: 0xc040596  jal         func_101658
    ctx->pc = 0x2887D4u;
    SET_GPR_U32(ctx, 31, 0x2887DCu);
    ctx->pc = 0x2887D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887D4u;
    // 0x2887d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x2887D4u, 0x2887DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887DCu;
label_2887dc:
    // 0x2887dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2887dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2887e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2887e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2887e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887e8: 0xc088736  jal         func_221CD8
    ctx->pc = 0x2887E8u;
    SET_GPR_U32(ctx, 31, 0x2887F0u);
    ctx->pc = 0x2887ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887E8u;
    // 0x2887ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x2887E8u, 0x2887F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887F0u;
label_2887f0:
    // 0x2887f0: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x2887F0u;
    SET_GPR_U32(ctx, 31, 0x2887F8u);
    ctx->pc = 0x2887F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887F0u;
    // 0x2887f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2887F0u, 0x2887F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887F8u;
label_2887f8:
    // 0x2887f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2887f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2887fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2887fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x288800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288808: 0xc08a5dc  jal         func_229770
    ctx->pc = 0x288808u;
    SET_GPR_U32(ctx, 31, 0x288810u);
    ctx->pc = 0x28880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288808u;
    // 0x28880c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229770u, 0x288808u, 0x288810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288810u;
label_288810:
    // 0x288810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288814: 0xc09879e  jal         func_261E78
    ctx->pc = 0x288814u;
    SET_GPR_U32(ctx, 31, 0x28881Cu);
    ctx->pc = 0x288818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288814u;
    // 0x288818: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261E78u, 0x288814u, 0x28881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28881Cu;
label_28881c:
    // 0x28881c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_288820:
    // 0x288820: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x288820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288824: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x288824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28882c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28882cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288830: 0x3e00008  jr          $ra
    ctx->pc = 0x288830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288830u;
        // 0x288834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288838u;
}
