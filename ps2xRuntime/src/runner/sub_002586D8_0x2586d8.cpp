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

// Function: sub_002586D8
// Address: 0x2586d8 - 0x258968
void sub_002586D8_0x2586d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002586D8_0x2586d8");
#endif

    switch (ctx->pc) {
        case 0x2586d8u: goto label_2586d8;
        case 0x2586dcu: goto label_2586dc;
        case 0x2586e0u: goto label_2586e0;
        case 0x2586e4u: goto label_2586e4;
        case 0x2586e8u: goto label_2586e8;
        case 0x2586ecu: goto label_2586ec;
        case 0x2586f0u: goto label_2586f0;
        case 0x2586f4u: goto label_2586f4;
        case 0x2586f8u: goto label_2586f8;
        case 0x2586fcu: goto label_2586fc;
        case 0x258700u: goto label_258700;
        case 0x258704u: goto label_258704;
        case 0x258708u: goto label_258708;
        case 0x25870cu: goto label_25870c;
        case 0x258710u: goto label_258710;
        case 0x258714u: goto label_258714;
        case 0x258718u: goto label_258718;
        case 0x25871cu: goto label_25871c;
        case 0x258720u: goto label_258720;
        case 0x258724u: goto label_258724;
        case 0x258728u: goto label_258728;
        case 0x25872cu: goto label_25872c;
        case 0x258730u: goto label_258730;
        case 0x258734u: goto label_258734;
        case 0x258738u: goto label_258738;
        case 0x25873cu: goto label_25873c;
        case 0x258740u: goto label_258740;
        case 0x258744u: goto label_258744;
        case 0x258748u: goto label_258748;
        case 0x25874cu: goto label_25874c;
        case 0x258750u: goto label_258750;
        case 0x258754u: goto label_258754;
        case 0x258758u: goto label_258758;
        case 0x25875cu: goto label_25875c;
        case 0x258760u: goto label_258760;
        case 0x258764u: goto label_258764;
        case 0x258768u: goto label_258768;
        case 0x25876cu: goto label_25876c;
        case 0x258770u: goto label_258770;
        case 0x258774u: goto label_258774;
        case 0x258778u: goto label_258778;
        case 0x25877cu: goto label_25877c;
        case 0x258780u: goto label_258780;
        case 0x258784u: goto label_258784;
        case 0x258788u: goto label_258788;
        case 0x25878cu: goto label_25878c;
        case 0x258790u: goto label_258790;
        case 0x258794u: goto label_258794;
        case 0x258798u: goto label_258798;
        case 0x25879cu: goto label_25879c;
        case 0x2587a0u: goto label_2587a0;
        case 0x2587a4u: goto label_2587a4;
        case 0x2587a8u: goto label_2587a8;
        case 0x2587acu: goto label_2587ac;
        case 0x2587b0u: goto label_2587b0;
        case 0x2587b4u: goto label_2587b4;
        case 0x2587b8u: goto label_2587b8;
        case 0x2587bcu: goto label_2587bc;
        case 0x2587c0u: goto label_2587c0;
        case 0x2587c4u: goto label_2587c4;
        case 0x2587c8u: goto label_2587c8;
        case 0x2587ccu: goto label_2587cc;
        case 0x2587d0u: goto label_2587d0;
        case 0x2587d4u: goto label_2587d4;
        case 0x2587d8u: goto label_2587d8;
        case 0x2587dcu: goto label_2587dc;
        case 0x2587e0u: goto label_2587e0;
        case 0x2587e4u: goto label_2587e4;
        case 0x2587e8u: goto label_2587e8;
        case 0x2587ecu: goto label_2587ec;
        case 0x2587f0u: goto label_2587f0;
        case 0x2587f4u: goto label_2587f4;
        case 0x2587f8u: goto label_2587f8;
        case 0x2587fcu: goto label_2587fc;
        case 0x258800u: goto label_258800;
        case 0x258804u: goto label_258804;
        case 0x258808u: goto label_258808;
        case 0x25880cu: goto label_25880c;
        case 0x258810u: goto label_258810;
        case 0x258814u: goto label_258814;
        case 0x258818u: goto label_258818;
        case 0x25881cu: goto label_25881c;
        case 0x258820u: goto label_258820;
        case 0x258824u: goto label_258824;
        case 0x258828u: goto label_258828;
        case 0x25882cu: goto label_25882c;
        case 0x258830u: goto label_258830;
        case 0x258834u: goto label_258834;
        case 0x258838u: goto label_258838;
        case 0x25883cu: goto label_25883c;
        case 0x258840u: goto label_258840;
        case 0x258844u: goto label_258844;
        case 0x258848u: goto label_258848;
        case 0x25884cu: goto label_25884c;
        case 0x258850u: goto label_258850;
        case 0x258854u: goto label_258854;
        case 0x258858u: goto label_258858;
        case 0x25885cu: goto label_25885c;
        case 0x258860u: goto label_258860;
        case 0x258864u: goto label_258864;
        case 0x258868u: goto label_258868;
        case 0x25886cu: goto label_25886c;
        case 0x258870u: goto label_258870;
        case 0x258874u: goto label_258874;
        case 0x258878u: goto label_258878;
        case 0x25887cu: goto label_25887c;
        case 0x258880u: goto label_258880;
        case 0x258884u: goto label_258884;
        case 0x258888u: goto label_258888;
        case 0x25888cu: goto label_25888c;
        case 0x258890u: goto label_258890;
        case 0x258894u: goto label_258894;
        case 0x258898u: goto label_258898;
        case 0x25889cu: goto label_25889c;
        case 0x2588a0u: goto label_2588a0;
        case 0x2588a4u: goto label_2588a4;
        case 0x2588a8u: goto label_2588a8;
        case 0x2588acu: goto label_2588ac;
        case 0x2588b0u: goto label_2588b0;
        case 0x2588b4u: goto label_2588b4;
        case 0x2588b8u: goto label_2588b8;
        case 0x2588bcu: goto label_2588bc;
        case 0x2588c0u: goto label_2588c0;
        case 0x2588c4u: goto label_2588c4;
        case 0x2588c8u: goto label_2588c8;
        case 0x2588ccu: goto label_2588cc;
        case 0x2588d0u: goto label_2588d0;
        case 0x2588d4u: goto label_2588d4;
        case 0x2588d8u: goto label_2588d8;
        case 0x2588dcu: goto label_2588dc;
        case 0x2588e0u: goto label_2588e0;
        case 0x2588e4u: goto label_2588e4;
        case 0x2588e8u: goto label_2588e8;
        case 0x2588ecu: goto label_2588ec;
        case 0x2588f0u: goto label_2588f0;
        case 0x2588f4u: goto label_2588f4;
        case 0x2588f8u: goto label_2588f8;
        case 0x2588fcu: goto label_2588fc;
        case 0x258900u: goto label_258900;
        case 0x258904u: goto label_258904;
        case 0x258908u: goto label_258908;
        case 0x25890cu: goto label_25890c;
        case 0x258910u: goto label_258910;
        case 0x258914u: goto label_258914;
        case 0x258918u: goto label_258918;
        case 0x25891cu: goto label_25891c;
        case 0x258920u: goto label_258920;
        case 0x258924u: goto label_258924;
        case 0x258928u: goto label_258928;
        case 0x25892cu: goto label_25892c;
        case 0x258930u: goto label_258930;
        case 0x258934u: goto label_258934;
        case 0x258938u: goto label_258938;
        case 0x25893cu: goto label_25893c;
        case 0x258940u: goto label_258940;
        case 0x258944u: goto label_258944;
        case 0x258948u: goto label_258948;
        case 0x25894cu: goto label_25894c;
        case 0x258950u: goto label_258950;
        case 0x258954u: goto label_258954;
        case 0x258958u: goto label_258958;
        case 0x25895cu: goto label_25895c;
        case 0x258960u: goto label_258960;
        case 0x258964u: goto label_258964;
        default: break;
    }

    ctx->pc = 0x2586d8u;

label_2586d8:
    // 0x2586d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2586d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2586dc:
    // 0x2586dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2586dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2586e0:
    // 0x2586e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2586e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2586e4:
    // 0x2586e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2586e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2586e8:
    // 0x2586e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2586e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2586ec:
    // 0x2586ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2586ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2586f0:
    // 0x2586f0: 0xc089bfc  jal         func_226FF0
label_2586f4:
    if (ctx->pc == 0x2586F4u) {
        ctx->pc = 0x2586F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586F0u;
        // 0x2586f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2586F8u;
        goto label_2586f8;
    }
    ctx->pc = 0x2586F0u;
    SET_GPR_U32(ctx, 31, 0x2586F8u);
    ctx->pc = 0x2586F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2586F0u;
    // 0x2586f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2586F0u, 0x2586F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2586F8u;
label_2586f8:
    // 0x2586f8: 0xc0e57ce  jal         func_395F38
label_2586fc:
    if (ctx->pc == 0x2586FCu) {
        ctx->pc = 0x2586FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586F8u;
        // 0x2586fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258700u;
        goto label_258700;
    }
    ctx->pc = 0x2586F8u;
    SET_GPR_U32(ctx, 31, 0x258700u);
    ctx->pc = 0x2586FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2586F8u;
    // 0x2586fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2586F8u, 0x258700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258700u;
label_258700:
    // 0x258700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258704:
    // 0x258704: 0xc089b98  jal         func_226E60
label_258708:
    if (ctx->pc == 0x258708u) {
        ctx->pc = 0x258708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258704u;
        // 0x258708: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25870Cu;
        goto label_25870c;
    }
    ctx->pc = 0x258704u;
    SET_GPR_U32(ctx, 31, 0x25870Cu);
    ctx->pc = 0x258708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258704u;
    // 0x258708: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x258704u, 0x25870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25870Cu;
label_25870c:
    // 0x25870c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25870cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258710:
    // 0x258710: 0xc095018  jal         func_254060
label_258714:
    if (ctx->pc == 0x258714u) {
        ctx->pc = 0x258714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258710u;
        // 0x258714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258718u;
        goto label_258718;
    }
    ctx->pc = 0x258710u;
    SET_GPR_U32(ctx, 31, 0x258718u);
    ctx->pc = 0x258714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258710u;
    // 0x258714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x258710u, 0x258718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258718u;
label_258718:
    // 0x258718: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x258718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25871c:
    // 0x25871c: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x25871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_258720:
    // 0x258720: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x258720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_258724:
    // 0x258724: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_258728:
    if (ctx->pc == 0x258728u) {
        ctx->pc = 0x258728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258724u;
        // 0x258728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25872Cu;
        goto label_25872c;
    }
    ctx->pc = 0x258724u;
    {
        const bool branch_taken_0x258724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258724u;
        // 0x258728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258724) {
            ctx->pc = 0x25874Cu;
            goto label_25874c;
        }
    }
    ctx->pc = 0x25872Cu;
label_25872c:
    // 0x25872c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_258730:
    if (ctx->pc == 0x258730u) {
        ctx->pc = 0x258730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25872Cu;
        // 0x258730: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258734u;
        goto label_258734;
    }
    ctx->pc = 0x25872Cu;
    {
        const bool branch_taken_0x25872c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25872Cu;
        // 0x258730: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25872c) {
            ctx->pc = 0x25874Cu;
            goto label_25874c;
        }
    }
    ctx->pc = 0x258734u;
label_258734:
    // 0x258734: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_258738:
    if (ctx->pc == 0x258738u) {
        ctx->pc = 0x258738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258734u;
        // 0x258738: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25873Cu;
        goto label_25873c;
    }
    ctx->pc = 0x258734u;
    {
        const bool branch_taken_0x258734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258734u;
        // 0x258738: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258734) {
            ctx->pc = 0x25874Cu;
            goto label_25874c;
        }
    }
    ctx->pc = 0x25873Cu;
label_25873c:
    // 0x25873c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_258740:
    if (ctx->pc == 0x258740u) {
        ctx->pc = 0x258740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25873Cu;
        // 0x258740: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258744u;
        goto label_258744;
    }
    ctx->pc = 0x25873Cu;
    {
        const bool branch_taken_0x25873c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25873Cu;
        // 0x258740: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25873c) {
            ctx->pc = 0x25874Cu;
            goto label_25874c;
        }
    }
    ctx->pc = 0x258744u;
label_258744:
    // 0x258744: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_258748:
    if (ctx->pc == 0x258748u) {
        ctx->pc = 0x25874Cu;
        goto label_25874c;
    }
    ctx->pc = 0x258744u;
    {
        const bool branch_taken_0x258744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x258744) {
            ctx->pc = 0x25875Cu;
            goto label_25875c;
        }
    }
    ctx->pc = 0x25874Cu;
label_25874c:
    // 0x25874c: 0xc094fca  jal         func_253F28
label_258750:
    if (ctx->pc == 0x258750u) {
        ctx->pc = 0x258750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25874Cu;
        // 0x258750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258754u;
        goto label_258754;
    }
    ctx->pc = 0x25874Cu;
    SET_GPR_U32(ctx, 31, 0x258754u);
    ctx->pc = 0x258750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25874Cu;
    // 0x258750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x25874Cu, 0x258754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258754u;
label_258754:
    // 0x258754: 0x10000007  b           . + 4 + (0x7 << 2)
label_258758:
    if (ctx->pc == 0x258758u) {
        ctx->pc = 0x25875Cu;
        goto label_25875c;
    }
    ctx->pc = 0x258754u;
    {
        const bool branch_taken_0x258754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258754) {
            ctx->pc = 0x258774u;
            goto label_258774;
        }
    }
    ctx->pc = 0x25875Cu;
label_25875c:
    // 0x25875c: 0xc08c6a0  jal         func_231A80
label_258760:
    if (ctx->pc == 0x258760u) {
        ctx->pc = 0x258760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25875Cu;
        // 0x258760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258764u;
        goto label_258764;
    }
    ctx->pc = 0x25875Cu;
    SET_GPR_U32(ctx, 31, 0x258764u);
    ctx->pc = 0x258760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25875Cu;
    // 0x258760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x25875Cu, 0x258764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258764u;
label_258764:
    // 0x258764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_258768:
    if (ctx->pc == 0x258768u) {
        ctx->pc = 0x258768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258764u;
        // 0x258768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25876Cu;
        goto label_25876c;
    }
    ctx->pc = 0x258764u;
    {
        const bool branch_taken_0x258764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258764u;
        // 0x258768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258764) {
            ctx->pc = 0x258774u;
            goto label_258774;
        }
    }
    ctx->pc = 0x25876Cu;
label_25876c:
    // 0x25876c: 0xc094fde  jal         func_253F78
label_258770:
    if (ctx->pc == 0x258770u) {
        ctx->pc = 0x258770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25876Cu;
        // 0x258770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258774u;
        goto label_258774;
    }
    ctx->pc = 0x25876Cu;
    SET_GPR_U32(ctx, 31, 0x258774u);
    ctx->pc = 0x258770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25876Cu;
    // 0x258770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x25876Cu, 0x258774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258774u;
label_258774:
    // 0x258774: 0xc0e8568  jal         func_3A15A0
label_258778:
    if (ctx->pc == 0x258778u) {
        ctx->pc = 0x25877Cu;
        goto label_25877c;
    }
    ctx->pc = 0x258774u;
    SET_GPR_U32(ctx, 31, 0x25877Cu);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x258774u, 0x25877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25877Cu;
label_25877c:
    // 0x25877c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x25877cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_258780:
    // 0x258780: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x258780u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_258784:
    // 0x258784: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x258784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_258788:
    // 0x258788: 0xc0e44cc  jal         func_391330
label_25878c:
    if (ctx->pc == 0x25878Cu) {
        ctx->pc = 0x25878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258788u;
        // 0x25878c: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x258790u;
        goto label_258790;
    }
    ctx->pc = 0x258788u;
    SET_GPR_U32(ctx, 31, 0x258790u);
    ctx->pc = 0x25878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258788u;
    // 0x25878c: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x258788u, 0x258790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258790u;
label_258790:
    // 0x258790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x258790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258794:
    // 0x258794: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x258794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_258798:
    // 0x258798: 0x80820084  lb          $v0, 0x84($a0)
    ctx->pc = 0x258798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_25879c:
    // 0x25879c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_2587a0:
    if (ctx->pc == 0x2587A0u) {
        ctx->pc = 0x2587A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25879Cu;
        // 0x2587a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2587A4u;
        goto label_2587a4;
    }
    ctx->pc = 0x25879Cu;
    {
        const bool branch_taken_0x25879c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2587A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25879Cu;
        // 0x2587a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25879c) {
            ctx->pc = 0x2587C0u;
            goto label_2587c0;
        }
    }
    ctx->pc = 0x2587A4u;
label_2587a4:
    // 0x2587a4: 0x8083005a  lb          $v1, 0x5A($a0)
    ctx->pc = 0x2587a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
label_2587a8:
    // 0x2587a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2587ac:
    if (ctx->pc == 0x2587ACu) {
        ctx->pc = 0x2587B0u;
        goto label_2587b0;
    }
    ctx->pc = 0x2587A8u;
    {
        const bool branch_taken_0x2587a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2587a8) {
            ctx->pc = 0x2587C0u;
            goto label_2587c0;
        }
    }
    ctx->pc = 0x2587B0u;
label_2587b0:
    // 0x2587b0: 0xc0e48ee  jal         func_3923B8
label_2587b4:
    if (ctx->pc == 0x2587B4u) {
        ctx->pc = 0x2587B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587B0u;
        // 0x2587b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2587B8u;
        goto label_2587b8;
    }
    ctx->pc = 0x2587B0u;
    SET_GPR_U32(ctx, 31, 0x2587B8u);
    ctx->pc = 0x2587B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2587B0u;
    // 0x2587b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3923B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3923B8u, 0x2587B0u, 0x2587B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587B8u;
label_2587b8:
    // 0x2587b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2587bc:
    if (ctx->pc == 0x2587BCu) {
        ctx->pc = 0x2587BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587B8u;
        // 0x2587bc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2587C0u;
        goto label_2587c0;
    }
    ctx->pc = 0x2587B8u;
    {
        const bool branch_taken_0x2587b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587B8u;
        // 0x2587bc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587b8) {
            ctx->pc = 0x2587CCu;
            goto label_2587cc;
        }
    }
    ctx->pc = 0x2587C0u;
label_2587c0:
    // 0x2587c0: 0xc0e4752  jal         func_391D48
label_2587c4:
    if (ctx->pc == 0x2587C4u) {
        ctx->pc = 0x2587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587C0u;
        // 0x2587c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2587C8u;
        goto label_2587c8;
    }
    ctx->pc = 0x2587C0u;
    SET_GPR_U32(ctx, 31, 0x2587C8u);
    ctx->pc = 0x2587C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2587C0u;
    // 0x2587c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391D48u, 0x2587C0u, 0x2587C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587C8u;
label_2587c8:
    // 0x2587c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2587c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2587cc:
    // 0x2587cc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2587ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2587d0:
    // 0x2587d0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2587d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2587d4:
    // 0x2587d4: 0x40f809  jalr        $v0
label_2587d8:
    if (ctx->pc == 0x2587D8u) {
        ctx->pc = 0x2587D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587D4u;
        // 0x2587d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2587DCu;
        goto label_2587dc;
    }
    ctx->pc = 0x2587D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2587DCu);
        ctx->pc = 0x2587D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587D4u;
        // 0x2587d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2587D4u, 0x2587DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2587DCu;
label_2587dc:
    // 0x2587dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2587e0:
    if (ctx->pc == 0x2587E0u) {
        ctx->pc = 0x2587E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587DCu;
        // 0x2587e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2587E4u;
        goto label_2587e4;
    }
    ctx->pc = 0x2587DCu;
    {
        const bool branch_taken_0x2587dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587DCu;
        // 0x2587e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587dc) {
            ctx->pc = 0x258808u;
            goto label_258808;
        }
    }
    ctx->pc = 0x2587E4u;
label_2587e4:
    // 0x2587e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2587e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2587e8:
    // 0x2587e8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2587e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2587ec:
    // 0x2587ec: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2587ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2587f0:
    // 0x2587f0: 0x40f809  jalr        $v0
label_2587f4:
    if (ctx->pc == 0x2587F4u) {
        ctx->pc = 0x2587F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587F0u;
        // 0x2587f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2587F8u;
        goto label_2587f8;
    }
    ctx->pc = 0x2587F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2587F8u);
        ctx->pc = 0x2587F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587F0u;
        // 0x2587f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2587F0u, 0x2587F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2587F8u;
label_2587f8:
    // 0x2587f8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2587f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2587fc:
    // 0x2587fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2587fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_258800:
    // 0x258800: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x258800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_258804:
    // 0x258804: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x258804u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_258808:
    // 0x258808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25880c:
    // 0x25880c: 0xc0e8cda  jal         func_3A3368
label_258810:
    if (ctx->pc == 0x258810u) {
        ctx->pc = 0x258810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25880Cu;
        // 0x258810: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258814u;
        goto label_258814;
    }
    ctx->pc = 0x25880Cu;
    SET_GPR_U32(ctx, 31, 0x258814u);
    ctx->pc = 0x258810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25880Cu;
    // 0x258810: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x25880Cu, 0x258814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258814u;
label_258814:
    // 0x258814: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x258814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_258818:
    // 0x258818: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x258818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25881c:
    // 0x25881c: 0xc0e8cbc  jal         func_3A32F0
label_258820:
    if (ctx->pc == 0x258820u) {
        ctx->pc = 0x258820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25881Cu;
        // 0x258820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258824u;
        goto label_258824;
    }
    ctx->pc = 0x25881Cu;
    SET_GPR_U32(ctx, 31, 0x258824u);
    ctx->pc = 0x258820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25881Cu;
    // 0x258820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x25881Cu, 0x258824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258824u;
label_258824:
    // 0x258824: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x258824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_258828:
    // 0x258828: 0xc095c3a  jal         func_2570E8
label_25882c:
    if (ctx->pc == 0x25882Cu) {
        ctx->pc = 0x25882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258828u;
        // 0x25882c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258830u;
        goto label_258830;
    }
    ctx->pc = 0x258828u;
    SET_GPR_U32(ctx, 31, 0x258830u);
    ctx->pc = 0x25882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258828u;
    // 0x25882c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2570E8u, 0x258828u, 0x258830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258830u;
label_258830:
    // 0x258830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258834:
    // 0x258834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258838:
    // 0x258838: 0xc08a5b0  jal         func_2296C0
label_25883c:
    if (ctx->pc == 0x25883Cu) {
        ctx->pc = 0x25883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258838u;
        // 0x25883c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258840u;
        goto label_258840;
    }
    ctx->pc = 0x258838u;
    SET_GPR_U32(ctx, 31, 0x258840u);
    ctx->pc = 0x25883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258838u;
    // 0x25883c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2296C0u, 0x258838u, 0x258840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258840u;
label_258840:
    // 0x258840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x258840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258844:
    // 0x258844: 0xae32011c  sw          $s2, 0x11C($s1)
    ctx->pc = 0x258844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 18));
label_258848:
    // 0x258848: 0xa2230116  sb          $v1, 0x116($s1)
    ctx->pc = 0x258848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 278), (uint8_t)GPR_U32(ctx, 3));
label_25884c:
    // 0x25884c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x25884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_258850:
    // 0x258850: 0x2444d838  addiu       $a0, $v0, -0x27C8
    ctx->pc = 0x258850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957112));
label_258854:
    // 0x258854: 0x864301be  lh          $v1, 0x1BE($s2)
    ctx->pc = 0x258854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 446)));
label_258858:
    // 0x258858: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x258858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_25885c:
    // 0x25885c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_258860:
    if (ctx->pc == 0x258860u) {
        ctx->pc = 0x258860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25885Cu;
        // 0x258860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258864u;
        goto label_258864;
    }
    ctx->pc = 0x25885Cu;
    {
        const bool branch_taken_0x25885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25885Cu;
        // 0x258860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25885c) {
            ctx->pc = 0x258894u;
            goto label_258894;
        }
    }
    ctx->pc = 0x258864u;
label_258864:
    // 0x258864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x258864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_258868:
    // 0x258868: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_25886c:
    if (ctx->pc == 0x25886Cu) {
        ctx->pc = 0x25886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258868u;
        // 0x25886c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258870u;
        goto label_258870;
    }
    ctx->pc = 0x258868u;
    {
        const bool branch_taken_0x258868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258868u;
        // 0x25886c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258868) {
            ctx->pc = 0x258880u;
            goto label_258880;
        }
    }
    ctx->pc = 0x258870u;
label_258870:
    // 0x258870: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x258870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_258874:
    // 0x258874: 0x864201c0  lh          $v0, 0x1C0($s2)
    ctx->pc = 0x258874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 448)));
label_258878:
    // 0x258878: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_25887c:
    if (ctx->pc == 0x25887Cu) {
        ctx->pc = 0x25887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258878u;
        // 0x25887c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258880u;
        goto label_258880;
    }
    ctx->pc = 0x258878u;
    {
        const bool branch_taken_0x258878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258878u;
        // 0x25887c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258878) {
            ctx->pc = 0x258890u;
            goto label_258890;
        }
    }
    ctx->pc = 0x258880u;
label_258880:
    // 0x258880: 0x8e4301c0  lw          $v1, 0x1C0($s2)
    ctx->pc = 0x258880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_258884:
    // 0x258884: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x258884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
label_258888:
    // 0x258888: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_25888c:
    if (ctx->pc == 0x25888Cu) {
        ctx->pc = 0x258890u;
        goto label_258890;
    }
    ctx->pc = 0x258888u;
    {
        const bool branch_taken_0x258888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x258888) {
            ctx->pc = 0x258894u;
            goto label_258894;
        }
    }
    ctx->pc = 0x258890u;
label_258890:
    // 0x258890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258894:
    // 0x258894: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_258898:
    if (ctx->pc == 0x258898u) {
        ctx->pc = 0x258898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258894u;
        // 0x258898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25889Cu;
        goto label_25889c;
    }
    ctx->pc = 0x258894u;
    {
        const bool branch_taken_0x258894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x258898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258894u;
        // 0x258898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258894) {
            ctx->pc = 0x2588BCu;
            goto label_2588bc;
        }
    }
    ctx->pc = 0x25889Cu;
label_25889c:
    // 0x25889c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2588a0:
    // 0x2588a0: 0xc08cade  jal         func_232B78
label_2588a4:
    if (ctx->pc == 0x2588A4u) {
        ctx->pc = 0x2588A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588A0u;
        // 0x2588a4: 0xa222010c  sb          $v0, 0x10C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588A8u;
        goto label_2588a8;
    }
    ctx->pc = 0x2588A0u;
    SET_GPR_U32(ctx, 31, 0x2588A8u);
    ctx->pc = 0x2588A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588A0u;
    // 0x2588a4: 0xa222010c  sb          $v0, 0x10C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x2588A0u, 0x2588A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588A8u;
label_2588a8:
    // 0x2588a8: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x2588a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
label_2588ac:
    // 0x2588ac: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x2588acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_2588b0:
    // 0x2588b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2588b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2588b4:
    // 0x2588b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2588b8:
    if (ctx->pc == 0x2588B8u) {
        ctx->pc = 0x2588B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588B4u;
        // 0x2588b8: 0xe6400630  swc1        $f0, 0x630($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588BCu;
        goto label_2588bc;
    }
    ctx->pc = 0x2588B4u;
    {
        const bool branch_taken_0x2588b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588B4u;
        // 0x2588b8: 0xe6400630  swc1        $f0, 0x630($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588b4) {
            ctx->pc = 0x2588C0u;
            goto label_2588c0;
        }
    }
    ctx->pc = 0x2588BCu;
label_2588bc:
    // 0x2588bc: 0xa220010c  sb          $zero, 0x10C($s1)
    ctx->pc = 0x2588bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 0));
label_2588c0:
    // 0x2588c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2588c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2588c4:
    // 0x2588c4: 0xc089c04  jal         func_227010
label_2588c8:
    if (ctx->pc == 0x2588C8u) {
        ctx->pc = 0x2588C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588C4u;
        // 0x2588c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588CCu;
        goto label_2588cc;
    }
    ctx->pc = 0x2588C4u;
    SET_GPR_U32(ctx, 31, 0x2588CCu);
    ctx->pc = 0x2588C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588C4u;
    // 0x2588c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227010u, 0x2588C4u, 0x2588CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588CCu;
label_2588cc:
    // 0x2588cc: 0x3c02d2cf  lui         $v0, 0xD2CF
    ctx->pc = 0x2588ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53967 << 16));
label_2588d0:
    // 0x2588d0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2588d4:
    // 0x2588d4: 0x3442cd44  ori         $v0, $v0, 0xCD44
    ctx->pc = 0x2588d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52548);
label_2588d8:
    // 0x2588d8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_2588dc:
    if (ctx->pc == 0x2588DCu) {
        ctx->pc = 0x2588E0u;
        goto label_2588e0;
    }
    ctx->pc = 0x2588D8u;
    {
        const bool branch_taken_0x2588d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2588d8) {
            ctx->pc = 0x258930u;
            goto label_258930;
        }
    }
    ctx->pc = 0x2588E0u;
label_2588e0:
    // 0x2588e0: 0x3c02ae98  lui         $v0, 0xAE98
    ctx->pc = 0x2588e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44696 << 16));
label_2588e4:
    // 0x2588e4: 0x3442caf8  ori         $v0, $v0, 0xCAF8
    ctx->pc = 0x2588e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51960);
label_2588e8:
    // 0x2588e8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2588ec:
    if (ctx->pc == 0x2588ECu) {
        ctx->pc = 0x2588F0u;
        goto label_2588f0;
    }
    ctx->pc = 0x2588E8u;
    {
        const bool branch_taken_0x2588e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2588e8) {
            ctx->pc = 0x258930u;
            goto label_258930;
        }
    }
    ctx->pc = 0x2588F0u;
label_2588f0:
    // 0x2588f0: 0x3c02ae86  lui         $v0, 0xAE86
    ctx->pc = 0x2588f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44678 << 16));
label_2588f4:
    // 0x2588f4: 0x3442b5d3  ori         $v0, $v0, 0xB5D3
    ctx->pc = 0x2588f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46547);
label_2588f8:
    // 0x2588f8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2588fc:
    if (ctx->pc == 0x2588FCu) {
        ctx->pc = 0x2588FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588F8u;
        // 0x2588fc: 0x3c0203c5  lui         $v0, 0x3C5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)965 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258900u;
        goto label_258900;
    }
    ctx->pc = 0x2588F8u;
    {
        const bool branch_taken_0x2588f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2588FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588F8u;
        // 0x2588fc: 0x3c0203c5  lui         $v0, 0x3C5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)965 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588f8) {
            ctx->pc = 0x258930u;
            goto label_258930;
        }
    }
    ctx->pc = 0x258900u;
label_258900:
    // 0x258900: 0x3442256c  ori         $v0, $v0, 0x256C
    ctx->pc = 0x258900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9580);
label_258904:
    // 0x258904: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_258908:
    if (ctx->pc == 0x258908u) {
        ctx->pc = 0x258908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258904u;
        // 0x258908: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25890Cu;
        goto label_25890c;
    }
    ctx->pc = 0x258904u;
    {
        const bool branch_taken_0x258904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258904u;
        // 0x258908: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258904) {
            ctx->pc = 0x258920u;
            goto label_258920;
        }
    }
    ctx->pc = 0x25890Cu;
label_25890c:
    // 0x25890c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258910:
    // 0x258910: 0xc0e5748  jal         func_395D20
label_258914:
    if (ctx->pc == 0x258914u) {
        ctx->pc = 0x258914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258910u;
        // 0x258914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258918u;
        goto label_258918;
    }
    ctx->pc = 0x258910u;
    SET_GPR_U32(ctx, 31, 0x258918u);
    ctx->pc = 0x258914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258910u;
    // 0x258914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x258910u, 0x258918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258918u;
label_258918:
    // 0x258918: 0x10000005  b           . + 4 + (0x5 << 2)
label_25891c:
    if (ctx->pc == 0x25891Cu) {
        ctx->pc = 0x258920u;
        goto label_258920;
    }
    ctx->pc = 0x258918u;
    {
        const bool branch_taken_0x258918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258918) {
            ctx->pc = 0x258930u;
            goto label_258930;
        }
    }
    ctx->pc = 0x258920u;
label_258920:
    // 0x258920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258924:
    // 0x258924: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x258924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_258928:
    // 0x258928: 0xc0e5748  jal         func_395D20
label_25892c:
    if (ctx->pc == 0x25892Cu) {
        ctx->pc = 0x25892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258928u;
        // 0x25892c: 0x8c45026c  lw          $a1, 0x26C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258930u;
        goto label_258930;
    }
    ctx->pc = 0x258928u;
    SET_GPR_U32(ctx, 31, 0x258930u);
    ctx->pc = 0x25892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258928u;
    // 0x25892c: 0x8c45026c  lw          $a1, 0x26C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x258928u, 0x258930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258930u;
label_258930:
    // 0x258930: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_258934:
    if (ctx->pc == 0x258934u) {
        ctx->pc = 0x258934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258930u;
        // 0x258934: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258938u;
        goto label_258938;
    }
    ctx->pc = 0x258930u;
    {
        const bool branch_taken_0x258930 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x258934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258930u;
        // 0x258934: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258930) {
            ctx->pc = 0x258944u;
            goto label_258944;
        }
    }
    ctx->pc = 0x258938u;
label_258938:
    // 0x258938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25893c:
    // 0x25893c: 0xc087570  jal         func_21D5C0
label_258940:
    if (ctx->pc == 0x258940u) {
        ctx->pc = 0x258940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25893Cu;
        // 0x258940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258944u;
        goto label_258944;
    }
    ctx->pc = 0x25893Cu;
    SET_GPR_U32(ctx, 31, 0x258944u);
    ctx->pc = 0x258940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25893Cu;
    // 0x258940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x25893Cu, 0x258944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258944u;
label_258944:
    // 0x258944: 0xc08c07c  jal         func_2301F0
label_258948:
    if (ctx->pc == 0x258948u) {
        ctx->pc = 0x258948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258944u;
        // 0x258948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25894Cu;
        goto label_25894c;
    }
    ctx->pc = 0x258944u;
    SET_GPR_U32(ctx, 31, 0x25894Cu);
    ctx->pc = 0x258948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258944u;
    // 0x258948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x258944u, 0x25894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25894Cu;
label_25894c:
    // 0x25894c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25894cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_258950:
    // 0x258950: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x258950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_258954:
    // 0x258954: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x258954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258958:
    // 0x258958: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x258958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25895c:
    // 0x25895c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_258960:
    // 0x258960: 0x3e00008  jr          $ra
label_258964:
    if (ctx->pc == 0x258964u) {
        ctx->pc = 0x258964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258960u;
        // 0x258964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258968u;
        goto label_fallthrough_0x258960;
    }
    ctx->pc = 0x258960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258960u;
        // 0x258964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258960:
    ctx->pc = 0x258968u;
}
