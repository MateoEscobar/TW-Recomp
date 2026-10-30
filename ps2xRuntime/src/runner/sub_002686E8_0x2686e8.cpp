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

// Function: sub_002686E8
// Address: 0x2686e8 - 0x2688d0
void sub_002686E8_0x2686e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002686E8_0x2686e8");
#endif

    switch (ctx->pc) {
        case 0x2686e8u: goto label_2686e8;
        case 0x2686ecu: goto label_2686ec;
        case 0x2686f0u: goto label_2686f0;
        case 0x2686f4u: goto label_2686f4;
        case 0x2686f8u: goto label_2686f8;
        case 0x2686fcu: goto label_2686fc;
        case 0x268700u: goto label_268700;
        case 0x268704u: goto label_268704;
        case 0x268708u: goto label_268708;
        case 0x26870cu: goto label_26870c;
        case 0x268710u: goto label_268710;
        case 0x268714u: goto label_268714;
        case 0x268718u: goto label_268718;
        case 0x26871cu: goto label_26871c;
        case 0x268720u: goto label_268720;
        case 0x268724u: goto label_268724;
        case 0x268728u: goto label_268728;
        case 0x26872cu: goto label_26872c;
        case 0x268730u: goto label_268730;
        case 0x268734u: goto label_268734;
        case 0x268738u: goto label_268738;
        case 0x26873cu: goto label_26873c;
        case 0x268740u: goto label_268740;
        case 0x268744u: goto label_268744;
        case 0x268748u: goto label_268748;
        case 0x26874cu: goto label_26874c;
        case 0x268750u: goto label_268750;
        case 0x268754u: goto label_268754;
        case 0x268758u: goto label_268758;
        case 0x26875cu: goto label_26875c;
        case 0x268760u: goto label_268760;
        case 0x268764u: goto label_268764;
        case 0x268768u: goto label_268768;
        case 0x26876cu: goto label_26876c;
        case 0x268770u: goto label_268770;
        case 0x268774u: goto label_268774;
        case 0x268778u: goto label_268778;
        case 0x26877cu: goto label_26877c;
        case 0x268780u: goto label_268780;
        case 0x268784u: goto label_268784;
        case 0x268788u: goto label_268788;
        case 0x26878cu: goto label_26878c;
        case 0x268790u: goto label_268790;
        case 0x268794u: goto label_268794;
        case 0x268798u: goto label_268798;
        case 0x26879cu: goto label_26879c;
        case 0x2687a0u: goto label_2687a0;
        case 0x2687a4u: goto label_2687a4;
        case 0x2687a8u: goto label_2687a8;
        case 0x2687acu: goto label_2687ac;
        case 0x2687b0u: goto label_2687b0;
        case 0x2687b4u: goto label_2687b4;
        case 0x2687b8u: goto label_2687b8;
        case 0x2687bcu: goto label_2687bc;
        case 0x2687c0u: goto label_2687c0;
        case 0x2687c4u: goto label_2687c4;
        case 0x2687c8u: goto label_2687c8;
        case 0x2687ccu: goto label_2687cc;
        case 0x2687d0u: goto label_2687d0;
        case 0x2687d4u: goto label_2687d4;
        case 0x2687d8u: goto label_2687d8;
        case 0x2687dcu: goto label_2687dc;
        case 0x2687e0u: goto label_2687e0;
        case 0x2687e4u: goto label_2687e4;
        case 0x2687e8u: goto label_2687e8;
        case 0x2687ecu: goto label_2687ec;
        case 0x2687f0u: goto label_2687f0;
        case 0x2687f4u: goto label_2687f4;
        case 0x2687f8u: goto label_2687f8;
        case 0x2687fcu: goto label_2687fc;
        case 0x268800u: goto label_268800;
        case 0x268804u: goto label_268804;
        case 0x268808u: goto label_268808;
        case 0x26880cu: goto label_26880c;
        case 0x268810u: goto label_268810;
        case 0x268814u: goto label_268814;
        case 0x268818u: goto label_268818;
        case 0x26881cu: goto label_26881c;
        case 0x268820u: goto label_268820;
        case 0x268824u: goto label_268824;
        case 0x268828u: goto label_268828;
        case 0x26882cu: goto label_26882c;
        case 0x268830u: goto label_268830;
        case 0x268834u: goto label_268834;
        case 0x268838u: goto label_268838;
        case 0x26883cu: goto label_26883c;
        case 0x268840u: goto label_268840;
        case 0x268844u: goto label_268844;
        case 0x268848u: goto label_268848;
        case 0x26884cu: goto label_26884c;
        case 0x268850u: goto label_268850;
        case 0x268854u: goto label_268854;
        case 0x268858u: goto label_268858;
        case 0x26885cu: goto label_26885c;
        case 0x268860u: goto label_268860;
        case 0x268864u: goto label_268864;
        case 0x268868u: goto label_268868;
        case 0x26886cu: goto label_26886c;
        case 0x268870u: goto label_268870;
        case 0x268874u: goto label_268874;
        case 0x268878u: goto label_268878;
        case 0x26887cu: goto label_26887c;
        case 0x268880u: goto label_268880;
        case 0x268884u: goto label_268884;
        case 0x268888u: goto label_268888;
        case 0x26888cu: goto label_26888c;
        case 0x268890u: goto label_268890;
        case 0x268894u: goto label_268894;
        case 0x268898u: goto label_268898;
        case 0x26889cu: goto label_26889c;
        case 0x2688a0u: goto label_2688a0;
        case 0x2688a4u: goto label_2688a4;
        case 0x2688a8u: goto label_2688a8;
        case 0x2688acu: goto label_2688ac;
        case 0x2688b0u: goto label_2688b0;
        case 0x2688b4u: goto label_2688b4;
        case 0x2688b8u: goto label_2688b8;
        case 0x2688bcu: goto label_2688bc;
        case 0x2688c0u: goto label_2688c0;
        case 0x2688c4u: goto label_2688c4;
        case 0x2688c8u: goto label_2688c8;
        case 0x2688ccu: goto label_2688cc;
        default: break;
    }

    ctx->pc = 0x2686e8u;

label_2686e8:
    // 0x2686e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2686e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2686ec:
    // 0x2686ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2686ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2686f0:
    // 0x2686f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2686f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2686f4:
    // 0x2686f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2686f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2686f8:
    // 0x2686f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2686f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2686fc:
    // 0x2686fc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2686fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_268700:
    // 0x268700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x268700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_268704:
    // 0x268704: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x268704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_268708:
    // 0x268708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26870c:
    // 0x26870c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x26870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_268710:
    // 0x268710: 0xc099cb4  jal         func_2672D0
label_268714:
    if (ctx->pc == 0x268714u) {
        ctx->pc = 0x268714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268710u;
        // 0x268714: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268718u;
        goto label_268718;
    }
    ctx->pc = 0x268710u;
    SET_GPR_U32(ctx, 31, 0x268718u);
    ctx->pc = 0x268714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268710u;
    // 0x268714: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x268710u, 0x268718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268718u;
label_268718:
    // 0x268718: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x268718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26871c:
    // 0x26871c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26871cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268720:
    // 0x268720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x268720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268724:
    // 0x268724: 0xc089988  jal         func_226620
label_268728:
    if (ctx->pc == 0x268728u) {
        ctx->pc = 0x268728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268724u;
        // 0x268728: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26872Cu;
        goto label_26872c;
    }
    ctx->pc = 0x268724u;
    SET_GPR_U32(ctx, 31, 0x26872Cu);
    ctx->pc = 0x268728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268724u;
    // 0x268728: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x268724u, 0x26872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26872Cu;
label_26872c:
    // 0x26872c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268730:
    // 0x268730: 0xc0899aa  jal         func_2266A8
label_268734:
    if (ctx->pc == 0x268734u) {
        ctx->pc = 0x268734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268730u;
        // 0x268734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268738u;
        goto label_268738;
    }
    ctx->pc = 0x268730u;
    SET_GPR_U32(ctx, 31, 0x268738u);
    ctx->pc = 0x268734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268730u;
    // 0x268734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x268730u, 0x268738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268738u;
label_268738:
    // 0x268738: 0x12a0005b  beqz        $s5, . + 4 + (0x5B << 2)
label_26873c:
    if (ctx->pc == 0x26873Cu) {
        ctx->pc = 0x26873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268738u;
        // 0x26873c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268740u;
        goto label_268740;
    }
    ctx->pc = 0x268738u;
    {
        const bool branch_taken_0x268738 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268738u;
        // 0x26873c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268738) {
            ctx->pc = 0x2688A8u;
            goto label_2688a8;
        }
    }
    ctx->pc = 0x268740u;
label_268740:
    // 0x268740: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x268740u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_268744:
    // 0x268744: 0x310ba  dsrl        $v0, $v1, 2
    ctx->pc = 0x268744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
label_268748:
    // 0x268748: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26874c:
    // 0x26874c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_268750:
    if (ctx->pc == 0x268750u) {
        ctx->pc = 0x268750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26874Cu;
        // 0x268750: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268754u;
        goto label_268754;
    }
    ctx->pc = 0x26874Cu;
    {
        const bool branch_taken_0x26874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26874c) {
            ctx->pc = 0x268750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26874Cu;
            // 0x268750: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268768u;
            goto label_268768;
        }
    }
    ctx->pc = 0x268754u;
label_268754:
    // 0x268754: 0x310fa  dsrl        $v0, $v1, 3
    ctx->pc = 0x268754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 3);
label_268758:
    // 0x268758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26875c:
    // 0x26875c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_268760:
    if (ctx->pc == 0x268760u) {
        ctx->pc = 0x268760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26875Cu;
        // 0x268760: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268764u;
        goto label_268764;
    }
    ctx->pc = 0x26875Cu;
    {
        const bool branch_taken_0x26875c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26875Cu;
        // 0x268760: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26875c) {
            ctx->pc = 0x268774u;
            goto label_268774;
        }
    }
    ctx->pc = 0x268764u;
label_268764:
    // 0x268764: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x268764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_268768:
    // 0x268768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26876c:
    // 0x26876c: 0xa4620144  sh          $v0, 0x144($v1)
    ctx->pc = 0x26876cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
label_268770:
    // 0x268770: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_268774:
    // 0x268774: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x268774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_268778:
    // 0x268778: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x268778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_26877c:
    // 0x26877c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x26877cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_268780:
    // 0x268780: 0x8c650794  lw          $a1, 0x794($v1)
    ctx->pc = 0x268780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1940)));
label_268784:
    // 0x268784: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x268784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_268788:
    // 0x268788: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x268788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_26878c:
    // 0x26878c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_268790:
    // 0x268790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268794:
    // 0x268794: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x268794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_268798:
    // 0x268798: 0xc041532  jal         func_1054C8
label_26879c:
    if (ctx->pc == 0x26879Cu) {
        ctx->pc = 0x26879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268798u;
        // 0x26879c: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687A0u;
        goto label_2687a0;
    }
    ctx->pc = 0x268798u;
    SET_GPR_U32(ctx, 31, 0x2687A0u);
    ctx->pc = 0x26879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268798u;
    // 0x26879c: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x268798u, 0x2687A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687A0u;
label_2687a0:
    // 0x2687a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2687a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2687a4:
    // 0x2687a4: 0xc041532  jal         func_1054C8
label_2687a8:
    if (ctx->pc == 0x2687A8u) {
        ctx->pc = 0x2687A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687A4u;
        // 0x2687a8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687ACu;
        goto label_2687ac;
    }
    ctx->pc = 0x2687A4u;
    SET_GPR_U32(ctx, 31, 0x2687ACu);
    ctx->pc = 0x2687A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687A4u;
    // 0x2687a8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2687A4u, 0x2687ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687ACu;
label_2687ac:
    // 0x2687ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2687acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2687b0:
    // 0x2687b0: 0xc041532  jal         func_1054C8
label_2687b4:
    if (ctx->pc == 0x2687B4u) {
        ctx->pc = 0x2687B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687B0u;
        // 0x2687b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687B8u;
        goto label_2687b8;
    }
    ctx->pc = 0x2687B0u;
    SET_GPR_U32(ctx, 31, 0x2687B8u);
    ctx->pc = 0x2687B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687B0u;
    // 0x2687b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2687B0u, 0x2687B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687B8u;
label_2687b8:
    // 0x2687b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2687b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2687bc:
    // 0x2687bc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2687c0:
    if (ctx->pc == 0x2687C0u) {
        ctx->pc = 0x2687C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687BCu;
        // 0x2687c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687C4u;
        goto label_2687c4;
    }
    ctx->pc = 0x2687BCu;
    {
        const bool branch_taken_0x2687bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687BCu;
        // 0x2687c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687bc) {
            ctx->pc = 0x2687E0u;
            goto label_2687e0;
        }
    }
    ctx->pc = 0x2687C4u;
label_2687c4:
    // 0x2687c4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2687c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2687c8:
    // 0x2687c8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2687c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2687cc:
    // 0x2687cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2687ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2687d0:
    // 0x2687d0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2687d4:
    // 0x2687d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2687d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2687d8:
    // 0x2687d8: 0xc04159e  jal         func_105678
label_2687dc:
    if (ctx->pc == 0x2687DCu) {
        ctx->pc = 0x2687DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687D8u;
        // 0x2687dc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687E0u;
        goto label_2687e0;
    }
    ctx->pc = 0x2687D8u;
    SET_GPR_U32(ctx, 31, 0x2687E0u);
    ctx->pc = 0x2687DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687D8u;
    // 0x2687dc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2687D8u, 0x2687E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687E0u;
label_2687e0:
    // 0x2687e0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2687e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2687e4:
    // 0x2687e4: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_2687e8:
    if (ctx->pc == 0x2687E8u) {
        ctx->pc = 0x2687E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687E4u;
        // 0x2687e8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687ECu;
        goto label_2687ec;
    }
    ctx->pc = 0x2687E4u;
    {
        const bool branch_taken_0x2687e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687E4u;
        // 0x2687e8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687e4) {
            ctx->pc = 0x268838u;
            goto label_268838;
        }
    }
    ctx->pc = 0x2687ECu;
label_2687ec:
    // 0x2687ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2687ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2687f0:
    // 0x2687f0: 0xc088edc  jal         func_223B70
label_2687f4:
    if (ctx->pc == 0x2687F4u) {
        ctx->pc = 0x2687F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687F0u;
        // 0x2687f4: 0x2410015e  addiu       $s0, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687F8u;
        goto label_2687f8;
    }
    ctx->pc = 0x2687F0u;
    SET_GPR_U32(ctx, 31, 0x2687F8u);
    ctx->pc = 0x2687F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687F0u;
    // 0x2687f4: 0x2410015e  addiu       $s0, $zero, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2687F0u, 0x2687F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687F8u;
label_2687f8:
    // 0x2687f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2687f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2687fc:
    // 0x2687fc: 0x24030144  addiu       $v1, $zero, 0x144
    ctx->pc = 0x2687fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
label_268800:
    // 0x268800: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x268800u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_268804:
    // 0x268804: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x268804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_268808:
    // 0x268808: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x268808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_26880c:
    // 0x26880c: 0x40f809  jalr        $v0
label_268810:
    if (ctx->pc == 0x268810u) {
        ctx->pc = 0x268810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26880Cu;
        // 0x268810: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268814u;
        goto label_268814;
    }
    ctx->pc = 0x26880Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x268814u);
        ctx->pc = 0x268810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26880Cu;
        // 0x268810: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26880Cu, 0x268814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268814u;
label_268814:
    // 0x268814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_268818:
    // 0x268818: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x268818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26881c:
    // 0x26881c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26881cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_268820:
    // 0x268820: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x268820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268824:
    // 0x268824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_268828:
    // 0x268828: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x268828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26882c:
    // 0x26882c: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x26882cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_268830:
    // 0x268830: 0xc041664  jal         func_105990
label_268834:
    if (ctx->pc == 0x268834u) {
        ctx->pc = 0x268834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268830u;
        // 0x268834: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268838u;
        goto label_268838;
    }
    ctx->pc = 0x268830u;
    SET_GPR_U32(ctx, 31, 0x268838u);
    ctx->pc = 0x268834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268830u;
    // 0x268834: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x268830u, 0x268838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268838u;
label_268838:
    // 0x268838: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_26883c:
    if (ctx->pc == 0x26883Cu) {
        ctx->pc = 0x26883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268838u;
        // 0x26883c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268840u;
        goto label_268840;
    }
    ctx->pc = 0x268838u;
    {
        const bool branch_taken_0x268838 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268838u;
        // 0x26883c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268838) {
            ctx->pc = 0x268858u;
            goto label_268858;
        }
    }
    ctx->pc = 0x268840u;
label_268840:
    // 0x268840: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x268840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_268844:
    // 0x268844: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x268844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_268848:
    // 0x268848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26884c:
    // 0x26884c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26884cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_268850:
    // 0x268850: 0xc041b20  jal         func_106C80
label_268854:
    if (ctx->pc == 0x268854u) {
        ctx->pc = 0x268854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268850u;
        // 0x268854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268858u;
        goto label_268858;
    }
    ctx->pc = 0x268850u;
    SET_GPR_U32(ctx, 31, 0x268858u);
    ctx->pc = 0x268854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268850u;
    // 0x268854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x268850u, 0x268858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268858u;
label_268858:
    // 0x268858: 0xc05d484  jal         func_175210
label_26885c:
    if (ctx->pc == 0x26885Cu) {
        ctx->pc = 0x26885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268858u;
        // 0x26885c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268860u;
        goto label_268860;
    }
    ctx->pc = 0x268858u;
    SET_GPR_U32(ctx, 31, 0x268860u);
    ctx->pc = 0x26885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268858u;
    // 0x26885c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x268858u, 0x268860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268860u;
label_268860:
    // 0x268860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268864:
    // 0x268864: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_268868:
    // 0x268868: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x268868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26886c:
    // 0x26886c: 0xa0f809  jalr        $a1
label_268870:
    if (ctx->pc == 0x268870u) {
        ctx->pc = 0x268870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26886Cu;
        // 0x268870: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268874u;
        goto label_268874;
    }
    ctx->pc = 0x26886Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268874u);
        ctx->pc = 0x268870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26886Cu;
        // 0x268870: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26886Cu, 0x268874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268874u;
label_268874:
    // 0x268874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268878:
    // 0x268878: 0xc087016  jal         func_21C058
label_26887c:
    if (ctx->pc == 0x26887Cu) {
        ctx->pc = 0x26887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268878u;
        // 0x26887c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268880u;
        goto label_268880;
    }
    ctx->pc = 0x268878u;
    SET_GPR_U32(ctx, 31, 0x268880u);
    ctx->pc = 0x26887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268878u;
    // 0x26887c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x268878u, 0x268880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268880u;
label_268880:
    // 0x268880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268884:
    // 0x268884: 0xc089990  jal         func_226640
label_268888:
    if (ctx->pc == 0x268888u) {
        ctx->pc = 0x268888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268884u;
        // 0x268888: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26888Cu;
        goto label_26888c;
    }
    ctx->pc = 0x268884u;
    SET_GPR_U32(ctx, 31, 0x26888Cu);
    ctx->pc = 0x268888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268884u;
    // 0x268888: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x268884u, 0x26888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26888Cu;
label_26888c:
    // 0x26888c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26888cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_268890:
    // 0x268890: 0xc05d53a  jal         func_1754E8
label_268894:
    if (ctx->pc == 0x268894u) {
        ctx->pc = 0x268894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268890u;
        // 0x268894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268898u;
        goto label_268898;
    }
    ctx->pc = 0x268890u;
    SET_GPR_U32(ctx, 31, 0x268898u);
    ctx->pc = 0x268894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268890u;
    // 0x268894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x268890u, 0x268898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268898u;
label_268898:
    // 0x268898: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26889c:
    // 0x26889c: 0xc05d4f6  jal         func_1753D8
label_2688a0:
    if (ctx->pc == 0x2688A0u) {
        ctx->pc = 0x2688A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26889Cu;
        // 0x2688a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2688A4u;
        goto label_2688a4;
    }
    ctx->pc = 0x26889Cu;
    SET_GPR_U32(ctx, 31, 0x2688A4u);
    ctx->pc = 0x2688A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26889Cu;
    // 0x2688a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26889Cu, 0x2688A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688A4u;
label_2688a4:
    // 0x2688a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2688a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2688a8:
    // 0x2688a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2688a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2688ac:
    // 0x2688ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2688acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2688b0:
    // 0x2688b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2688b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2688b4:
    // 0x2688b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2688b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2688b8:
    // 0x2688b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2688b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2688bc:
    // 0x2688bc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2688bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2688c0:
    // 0x2688c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2688c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2688c4:
    // 0x2688c4: 0x3e00008  jr          $ra
label_2688c8:
    if (ctx->pc == 0x2688C8u) {
        ctx->pc = 0x2688C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688C4u;
        // 0x2688c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2688CCu;
        goto label_2688cc;
    }
    ctx->pc = 0x2688C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2688C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688C4u;
        // 0x2688c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2688C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2688CCu;
label_2688cc:
    // 0x2688cc: 0x0  nop
    ctx->pc = 0x2688ccu;
    // NOP
    ctx->pc = 0x2688d0u;
}
