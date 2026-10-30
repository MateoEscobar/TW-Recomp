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

// Function: sub_0043C700
// Address: 0x43c700 - 0x43cd80
void sub_0043C700_0x43c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C700_0x43c700");
#endif

    switch (ctx->pc) {
        case 0x43cc88u: goto label_43cc88;
        case 0x43cc98u: goto label_43cc98;
        case 0x43cca8u: goto label_43cca8;
        case 0x43ccb8u: goto label_43ccb8;
        case 0x43ccc0u: goto label_43ccc0;
        case 0x43ccc8u: goto label_43ccc8;
        case 0x43ccd8u: goto label_43ccd8;
        case 0x43cce8u: goto label_43cce8;
        case 0x43ccf8u: goto label_43ccf8;
        case 0x43cd08u: goto label_43cd08;
        case 0x43cd18u: goto label_43cd18;
        case 0x43cd28u: goto label_43cd28;
        case 0x43cd38u: goto label_43cd38;
        case 0x43cd48u: goto label_43cd48;
        case 0x43cd58u: goto label_43cd58;
        case 0x43cd68u: goto label_43cd68;
        case 0x43cd78u: goto label_43cd78;
        default: break;
    }

    ctx->pc = 0x43c700u;

    // 0x43c700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43c704: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x43c704u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x43c708: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x43c708u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x43c70c: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x43c70cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x43c710: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x43c710u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x43c714: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x43c714u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43c718: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x43c718u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x43c71c: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x43C71Cu;
    {
        const bool branch_taken_0x43c71c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C71Cu;
        // 0x43c720: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c71c) {
            ctx->pc = 0x43C9ECu;
            goto label_43c9ec;
        }
    }
    ctx->pc = 0x43C724u;
    // 0x43c724: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x43c724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c728: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x43C728u;
    {
        const bool branch_taken_0x43c728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C728u;
        // 0x43c72c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c728) {
            ctx->pc = 0x43C7B8u;
            goto label_43c7b8;
        }
    }
    ctx->pc = 0x43C730u;
    // 0x43c730: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x43c730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c734: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C734u;
    {
        const bool branch_taken_0x43c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C734u;
        // 0x43c738: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c734) {
            ctx->pc = 0x43C750u;
            goto label_43c750;
        }
    }
    ctx->pc = 0x43C73Cu;
    // 0x43c73c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x43c73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x43c740: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x43c740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43c744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43C744u;
    {
        const bool branch_taken_0x43c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C744u;
        // 0x43c748: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c744) {
            ctx->pc = 0x43C768u;
            goto label_43c768;
        }
    }
    ctx->pc = 0x43C74Cu;
    // 0x43c74c: 0x0  nop
    ctx->pc = 0x43c74cu;
    // NOP
label_43c750:
    // 0x43c750: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x43c750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x43c754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43c758: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x43c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43c75c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x43c75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c760: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x43c760u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x43c764: 0x0  nop
    ctx->pc = 0x43c764u;
    // NOP
label_43c768:
    // 0x43c768: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43c768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x43c76c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x43c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x43c770: 0x2442d710  addiu       $v0, $v0, -0x28F0
    ctx->pc = 0x43c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956816));
    // 0x43c774: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x43c774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43c778: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43c77c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x43c77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43c780: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x43c780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x43c784: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x43c784u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x43c788: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C788u;
    {
        const bool branch_taken_0x43c788 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C788u;
        // 0x43c78c: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c788) {
            ctx->pc = 0x43C7A4u;
            goto label_43c7a4;
        }
    }
    ctx->pc = 0x43C790u;
    // 0x43c790: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x43c790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x43c794: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x43c794u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x43c798: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x43c798u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x43c79c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x43c79cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43c7a0: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x43c7a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_43c7a4:
    // 0x43c7a4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x43c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x43c7a8: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x43c7a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x43c7ac: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x43C7ACu;
    {
        const bool branch_taken_0x43c7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C7ACu;
        // 0x43c7b0: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c7ac) {
            ctx->pc = 0x43C930u;
            goto label_43c930;
        }
    }
    ctx->pc = 0x43C7B4u;
    // 0x43c7b4: 0x0  nop
    ctx->pc = 0x43c7b4u;
    // NOP
label_43c7b8:
    // 0x43c7b8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43C7B8u;
    {
        const bool branch_taken_0x43c7b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C7B8u;
        // 0x43c7bc: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c7b8) {
            ctx->pc = 0x43C7E0u;
            goto label_43c7e0;
        }
    }
    ctx->pc = 0x43C7C0u;
    // 0x43c7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43c7c4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C7C4u;
    {
        const bool branch_taken_0x43c7c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c7c4) {
            ctx->pc = 0x43C7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C7C4u;
            // 0x43c7c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C7CCu;
            goto label_43c7cc;
        }
    }
    ctx->pc = 0x43C7CCu;
label_43c7cc:
    // 0x43c7cc: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x43c7ccu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x43c7d0: 0x1012  mflo        $v0
    ctx->pc = 0x43c7d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x43c7d4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x43c7d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c7d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x43c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x43c7dc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x43c7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_43c7e0:
    // 0x43c7e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C7E0u;
    {
        const bool branch_taken_0x43c7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C7E0u;
        // 0x43c7e4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c7e0) {
            ctx->pc = 0x43C7F8u;
            goto label_43c7f8;
        }
    }
    ctx->pc = 0x43C7E8u;
    // 0x43c7e8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x43c7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x43c7ec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x43c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43c7f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x43C7F0u;
    {
        const bool branch_taken_0x43c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C7F0u;
        // 0x43c7f4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c7f0) {
            ctx->pc = 0x43C810u;
            goto label_43c810;
        }
    }
    ctx->pc = 0x43C7F8u;
label_43c7f8:
    // 0x43c7f8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x43c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x43c7fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43c800: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x43c800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43c804: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x43c804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c808: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x43c808u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x43c80c: 0x0  nop
    ctx->pc = 0x43c80cu;
    // NOP
label_43c810:
    // 0x43c810: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x43c814: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x43c814u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x43c818: 0x2442d710  addiu       $v0, $v0, -0x28F0
    ctx->pc = 0x43c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956816));
    // 0x43c81c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x43c81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43c820: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43c820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43c824: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x43c824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43c828: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x43c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x43c82c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x43c82cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x43c830: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C830u;
    {
        const bool branch_taken_0x43c830 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C830u;
        // 0x43c834: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c830) {
            ctx->pc = 0x43C848u;
            goto label_43c848;
        }
    }
    ctx->pc = 0x43C838u;
    // 0x43c838: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x43c838u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x43c83c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x43c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x43c840: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x43C840u;
    {
        const bool branch_taken_0x43c840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C840u;
        // 0x43c844: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c840) {
            ctx->pc = 0x43C924u;
            goto label_43c924;
        }
    }
    ctx->pc = 0x43C848u;
label_43c848:
    // 0x43c848: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x43c848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x43c84c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x43c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x43c850: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x43c850u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x43c854: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x43c854u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43c858: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x43c858u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x43c85c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x43c85cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x43c860: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x43c860u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x43c864: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x43c864u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x43c868: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x43c868u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x43c86c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x43c86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c870: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x43c870u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x43c874: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C874u;
    {
        const bool branch_taken_0x43c874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c874) {
            ctx->pc = 0x43C878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C874u;
            // 0x43c878: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C87Cu;
            goto label_43c87c;
        }
    }
    ctx->pc = 0x43C87Cu;
label_43c87c:
    // 0x43c87c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x43c87cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c880: 0x1012  mflo        $v0
    ctx->pc = 0x43c880u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x43c884: 0x1810  mfhi        $v1
    ctx->pc = 0x43c884u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x43c888: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43c888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43c88c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43c88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x43c890: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43c890u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43c894: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x43c894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x43c898: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c89c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x43c89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43c8a0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x43C8A0u;
    {
        const bool branch_taken_0x43c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c8a0) {
            ctx->pc = 0x43C8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C8A0u;
            // 0x43c8a4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C8CCu;
            goto label_43c8cc;
        }
    }
    ctx->pc = 0x43C8A8u;
    // 0x43c8a8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x43c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x43c8ac: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x43c8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c8b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C8B0u;
    {
        const bool branch_taken_0x43c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43c8b0) {
            ctx->pc = 0x43C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C8B0u;
            // 0x43c8b4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C8CCu;
            goto label_43c8cc;
        }
    }
    ctx->pc = 0x43C8B8u;
    // 0x43c8b8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x43c8b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43c8bc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x43C8BCu;
    {
        const bool branch_taken_0x43c8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43c8bc) {
            ctx->pc = 0x43C8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C8BCu;
            // 0x43c8c0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C8C8u;
            goto label_43c8c8;
        }
    }
    ctx->pc = 0x43C8C4u;
    // 0x43c8c4: 0x0  nop
    ctx->pc = 0x43c8c4u;
    // NOP
label_43c8c8:
    // 0x43c8c8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x43c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_43c8cc:
    // 0x43c8cc: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x43c8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x43c8d0: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x43c8d0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x43c8d4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C8D4u;
    {
        const bool branch_taken_0x43c8d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c8d4) {
            ctx->pc = 0x43C8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C8D4u;
            // 0x43c8d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C8DCu;
            goto label_43c8dc;
        }
    }
    ctx->pc = 0x43C8DCu;
label_43c8dc:
    // 0x43c8dc: 0x1012  mflo        $v0
    ctx->pc = 0x43c8dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x43c8e0: 0x1810  mfhi        $v1
    ctx->pc = 0x43c8e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x43c8e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43c8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43c8e8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43c8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x43c8ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43c8ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43c8f0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x43c8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x43c8f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c8f8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x43c8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43c8fc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43C8FCu;
    {
        const bool branch_taken_0x43c8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c8fc) {
            ctx->pc = 0x43C900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C8FCu;
            // 0x43c900: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C924u;
            goto label_43c924;
        }
    }
    ctx->pc = 0x43C904u;
    // 0x43c904: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x43c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x43c908: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x43c908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c90c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C90Cu;
    {
        const bool branch_taken_0x43c90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C90Cu;
        // 0x43c910: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c90c) {
            ctx->pc = 0x43C924u;
            goto label_43c924;
        }
    }
    ctx->pc = 0x43C914u;
    // 0x43c914: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x43c914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43c918: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C918u;
    {
        const bool branch_taken_0x43c918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43c918) {
            ctx->pc = 0x43C91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C918u;
            // 0x43c91c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C920u;
            goto label_43c920;
        }
    }
    ctx->pc = 0x43C920u;
label_43c920:
    // 0x43c920: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x43c920u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_43c924:
    // 0x43c924: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x43c924u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x43c928: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x43c928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c92c: 0x0  nop
    ctx->pc = 0x43c92cu;
    // NOP
label_43c930:
    // 0x43c930: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x43c930u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x43c934: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C934u;
    {
        const bool branch_taken_0x43c934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c934) {
            ctx->pc = 0x43C938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C934u;
            // 0x43c938: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C93Cu;
            goto label_43c93c;
        }
    }
    ctx->pc = 0x43C93Cu;
label_43c93c:
    // 0x43c93c: 0x1012  mflo        $v0
    ctx->pc = 0x43c93cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x43c940: 0x1810  mfhi        $v1
    ctx->pc = 0x43c940u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x43c944: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43c944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43c948: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x43c94c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43c94cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43c950: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x43c950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x43c954: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c958: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x43c958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43c95c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43C95Cu;
    {
        const bool branch_taken_0x43c95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c95c) {
            ctx->pc = 0x43C960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C95Cu;
            // 0x43c960: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C984u;
            goto label_43c984;
        }
    }
    ctx->pc = 0x43C964u;
    // 0x43c964: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x43c964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x43c968: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x43c968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c96c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C96Cu;
    {
        const bool branch_taken_0x43c96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43c96c) {
            ctx->pc = 0x43C970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C96Cu;
            // 0x43c970: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C984u;
            goto label_43c984;
        }
    }
    ctx->pc = 0x43C974u;
    // 0x43c974: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x43c974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43c978: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C978u;
    {
        const bool branch_taken_0x43c978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43c978) {
            ctx->pc = 0x43C97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C978u;
            // 0x43c97c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C980u;
            goto label_43c980;
        }
    }
    ctx->pc = 0x43C980u;
label_43c980:
    // 0x43c980: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x43c980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_43c984:
    // 0x43c984: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x43c984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x43c988: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x43c988u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x43c98c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C98Cu;
    {
        const bool branch_taken_0x43c98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c98c) {
            ctx->pc = 0x43C990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C98Cu;
            // 0x43c990: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C994u;
            goto label_43c994;
        }
    }
    ctx->pc = 0x43C994u;
label_43c994:
    // 0x43c994: 0x1012  mflo        $v0
    ctx->pc = 0x43c994u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x43c998: 0x1810  mfhi        $v1
    ctx->pc = 0x43c998u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x43c99c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43c99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43c9a0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43c9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x43c9a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43c9a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43c9a8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x43c9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x43c9ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c9b0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x43c9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43c9b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43C9B4u;
    {
        const bool branch_taken_0x43c9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c9b4) {
            ctx->pc = 0x43C9D4u;
            goto label_43c9d4;
        }
    }
    ctx->pc = 0x43C9BCu;
    // 0x43c9bc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x43c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x43c9c0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x43c9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43c9c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C9C4u;
    {
        const bool branch_taken_0x43c9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C9C4u;
        // 0x43c9c8: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c9c4) {
            ctx->pc = 0x43C9D4u;
            goto label_43c9d4;
        }
    }
    ctx->pc = 0x43C9CCu;
    // 0x43c9cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C9CCu;
    {
        const bool branch_taken_0x43c9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43c9cc) {
            ctx->pc = 0x43C9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C9CCu;
            // 0x43c9d0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C9D4u;
            goto label_43c9d4;
        }
    }
    ctx->pc = 0x43C9D4u;
label_43c9d4:
    // 0x43c9d4: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x43C9D4u;
    {
        const bool branch_taken_0x43c9d4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C9D4u;
        // 0x43c9d8: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c9d4) {
            ctx->pc = 0x43CC34u;
            goto label_43cc34;
        }
    }
    ctx->pc = 0x43C9DCu;
    // 0x43c9dc: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x43c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x43c9e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43c9e4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x43C9E4u;
    {
        const bool branch_taken_0x43c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C9E4u;
        // 0x43c9e8: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c9e4) {
            ctx->pc = 0x43CC30u;
            goto label_43cc30;
        }
    }
    ctx->pc = 0x43C9ECu;
label_43c9ec:
    // 0x43c9ec: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x43c9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x43c9f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C9F0u;
    {
        const bool branch_taken_0x43c9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C9F0u;
        // 0x43c9f4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c9f0) {
            ctx->pc = 0x43CA0Cu;
            goto label_43ca0c;
        }
    }
    ctx->pc = 0x43C9F8u;
    // 0x43c9f8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x43c9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x43c9fc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x43c9fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43ca00: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x43ca00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x43ca04: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x43CA04u;
    {
        const bool branch_taken_0x43ca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA04u;
        // 0x43ca08: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca04) {
            ctx->pc = 0x43CC34u;
            goto label_43cc34;
        }
    }
    ctx->pc = 0x43CA0Cu;
label_43ca0c:
    // 0x43ca0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x43ca0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x43ca10: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x43ca10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x43ca14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43CA14u;
    {
        const bool branch_taken_0x43ca14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA14u;
        // 0x43ca18: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca14) {
            ctx->pc = 0x43CA30u;
            goto label_43ca30;
        }
    }
    ctx->pc = 0x43CA1Cu;
    // 0x43ca1c: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x43ca1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x43ca20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x43ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43ca24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43CA24u;
    {
        const bool branch_taken_0x43ca24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA24u;
        // 0x43ca28: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca24) {
            ctx->pc = 0x43CA48u;
            goto label_43ca48;
        }
    }
    ctx->pc = 0x43CA2Cu;
    // 0x43ca2c: 0x0  nop
    ctx->pc = 0x43ca2cu;
    // NOP
label_43ca30:
    // 0x43ca30: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x43ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x43ca34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43ca34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43ca38: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x43ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43ca3c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x43ca3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x43ca40: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x43ca40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x43ca44: 0x0  nop
    ctx->pc = 0x43ca44u;
    // NOP
label_43ca48:
    // 0x43ca48: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x43ca4c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x43ca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x43ca50: 0x2442d710  addiu       $v0, $v0, -0x28F0
    ctx->pc = 0x43ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956816));
    // 0x43ca54: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x43ca54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43ca58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43ca5c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x43ca5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43ca60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x43ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x43ca64: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x43ca64u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x43ca68: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x43CA68u;
    {
        const bool branch_taken_0x43ca68 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA68u;
        // 0x43ca6c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca68) {
            ctx->pc = 0x43CAB0u;
            goto label_43cab0;
        }
    }
    ctx->pc = 0x43CA70u;
    // 0x43ca70: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x43ca70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x43ca74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43CA74u;
    {
        const bool branch_taken_0x43ca74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA74u;
        // 0x43ca78: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca74) {
            ctx->pc = 0x43CA88u;
            goto label_43ca88;
        }
    }
    ctx->pc = 0x43CA7Cu;
    // 0x43ca7c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x43ca7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x43ca80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43CA80u;
    {
        const bool branch_taken_0x43ca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43ca80) {
            ctx->pc = 0x43CA98u;
            goto label_43ca98;
        }
    }
    ctx->pc = 0x43CA88u;
label_43ca88:
    // 0x43ca88: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x43ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x43ca8c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x43ca8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x43ca90: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x43ca90u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43ca94: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x43ca94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ca98:
    // 0x43ca98: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x43CA98u;
    {
        const bool branch_taken_0x43ca98 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA98u;
        // 0x43ca9c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca98) {
            ctx->pc = 0x43CC34u;
            goto label_43cc34;
        }
    }
    ctx->pc = 0x43CAA0u;
    // 0x43caa0: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x43caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x43caa4: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x43caa4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43caa8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x43CAA8u;
    {
        const bool branch_taken_0x43caa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CAA8u;
        // 0x43caac: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43caa8) {
            ctx->pc = 0x43CC30u;
            goto label_43cc30;
        }
    }
    ctx->pc = 0x43CAB0u;
label_43cab0:
    // 0x43cab0: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x43cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x43cab4: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x43cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x43cab8: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x43cab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x43cabc: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x43cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x43cac0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x43cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x43cac4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x43cac4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43cac8: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x43cac8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x43cacc: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x43caccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x43cad0: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x43cad0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x43cad4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x43cad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x43cad8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x43cad8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x43cadc: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x43cadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x43cae0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x43cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x43cae4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43CAE4u;
    {
        const bool branch_taken_0x43cae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cae4) {
            ctx->pc = 0x43CAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43CAE4u;
            // 0x43cae8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43CAECu;
            goto label_43caec;
        }
    }
    ctx->pc = 0x43CAECu;
label_43caec:
    // 0x43caec: 0x1012  mflo        $v0
    ctx->pc = 0x43caecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x43caf0: 0x1810  mfhi        $v1
    ctx->pc = 0x43caf0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x43caf4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x43caf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43caf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43cafc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43cafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x43cb00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43cb00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43cb04: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x43cb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x43cb08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43cb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43cb0c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x43cb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x43cb10: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x43CB10u;
    {
        const bool branch_taken_0x43cb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cb10) {
            ctx->pc = 0x43CB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43CB10u;
            // 0x43cb14: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43CB44u;
            goto label_43cb44;
        }
    }
    ctx->pc = 0x43CB18u;
    // 0x43cb18: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x43cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x43cb1c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x43cb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x43cb20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43CB20u;
    {
        const bool branch_taken_0x43cb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CB20u;
        // 0x43cb24: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cb20) {
            ctx->pc = 0x43CB40u;
            goto label_43cb40;
        }
    }
    ctx->pc = 0x43CB28u;
    // 0x43cb28: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x43cb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x43cb2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x43CB2Cu;
    {
        const bool branch_taken_0x43cb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cb2c) {
            ctx->pc = 0x43CB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43CB2Cu;
            // 0x43cb30: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43CB44u;
            goto label_43cb44;
        }
    }
    ctx->pc = 0x43CB34u;
    // 0x43cb34: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x43cb34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x43cb38: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x43cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x43cb3c: 0x0  nop
    ctx->pc = 0x43cb3cu;
    // NOP
label_43cb40:
    // 0x43cb40: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x43cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_43cb44:
    // 0x43cb44: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43CB44u;
    {
        const bool branch_taken_0x43cb44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cb44) {
            ctx->pc = 0x43CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43CB44u;
            // 0x43cb48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43CB4Cu;
            goto label_43cb4c;
        }
    }
    ctx->pc = 0x43CB4Cu;
label_43cb4c:
    // 0x43cb4c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x43cb4cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x43cb50: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x43cb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x43cb54: 0x1012  mflo        $v0
    ctx->pc = 0x43cb54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x43cb58: 0x1810  mfhi        $v1
    ctx->pc = 0x43cb58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x43cb5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x43cb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cb60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43cb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43cb64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43cb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x43cb68: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43cb68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43cb6c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x43cb6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x43cb70: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x43cb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43cb74: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x43cb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x43cb78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43CB78u;
    {
        const bool branch_taken_0x43cb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CB78u;
        // 0x43cb7c: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cb78) {
            ctx->pc = 0x43CBA8u;
            goto label_43cba8;
        }
    }
    ctx->pc = 0x43CB80u;
    // 0x43cb80: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x43cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x43cb84: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x43cb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x43cb88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43CB88u;
    {
        const bool branch_taken_0x43cb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CB88u;
        // 0x43cb8c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cb88) {
            ctx->pc = 0x43CBA4u;
            goto label_43cba4;
        }
    }
    ctx->pc = 0x43CB90u;
    // 0x43cb90: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x43cb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x43cb94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43CB94u;
    {
        const bool branch_taken_0x43cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CB94u;
        // 0x43cb98: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cb94) {
            ctx->pc = 0x43CBA8u;
            goto label_43cba8;
        }
    }
    ctx->pc = 0x43CB9Cu;
    // 0x43cb9c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43cb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x43cba0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x43cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_43cba4:
    // 0x43cba4: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x43cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_43cba8:
    // 0x43cba8: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x43cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x43cbac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x43cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x43cbb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43cbb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43cbb4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x43cbb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cbb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x43cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x43cbbc: 0x480019  multu       $v0, $t0
    ctx->pc = 0x43cbbcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x43cbc0: 0x3810  mfhi        $a3
    ctx->pc = 0x43cbc0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x43cbc4: 0x3012  mflo        $a2
    ctx->pc = 0x43cbc4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x43cbc8: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x43cbc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x43cbcc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x43CBCCu;
    {
        const bool branch_taken_0x43cbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CBCCu;
        // 0x43cbd0: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cbcc) {
            ctx->pc = 0x43CBE8u;
            goto label_43cbe8;
        }
    }
    ctx->pc = 0x43CBD4u;
    // 0x43cbd4: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x43CBD4u;
    {
        const bool branch_taken_0x43cbd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x43CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CBD4u;
        // 0x43cbd8: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cbd4) {
            ctx->pc = 0x43CBF8u;
            goto label_43cbf8;
        }
    }
    ctx->pc = 0x43CBDCu;
    // 0x43cbdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43CBDCu;
    {
        const bool branch_taken_0x43cbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cbdc) {
            ctx->pc = 0x43CBF8u;
            goto label_43cbf8;
        }
    }
    ctx->pc = 0x43CBE4u;
    // 0x43cbe4: 0x0  nop
    ctx->pc = 0x43cbe4u;
    // NOP
label_43cbe8:
    // 0x43cbe8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x43cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x43cbec: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x43cbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x43cbf0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x43cbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43cbf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x43cbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43cbf8:
    // 0x43cbf8: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x43CBF8u;
    {
        const bool branch_taken_0x43cbf8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CBF8u;
        // 0x43cbfc: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cbf8) {
            ctx->pc = 0x43CC34u;
            goto label_43cc34;
        }
    }
    ctx->pc = 0x43CC00u;
    // 0x43cc00: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x43cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x43cc04: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x43cc04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x43cc08: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x43cc08u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43cc0c: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x43cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x43cc10: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x43cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x43cc14: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x43cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x43cc18: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x43cc18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x43cc1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43cc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43cc20: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x43cc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x43cc24: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x43cc24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x43cc28: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x43cc28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x43cc2c: 0x0  nop
    ctx->pc = 0x43cc2cu;
    // NOP
label_43cc30:
    // 0x43cc30: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x43cc30u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_43cc34:
    // 0x43cc34: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x43cc34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x43CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CC38u;
        // 0x43cc3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CC40u;
    // 0x43cc40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x43cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x43cc44: 0x0  nop
    ctx->pc = 0x43cc44u;
    // NOP
    // 0x43cc48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x43cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x43cc4c: 0x0  nop
    ctx->pc = 0x43cc4cu;
    // NOP
    // 0x43cc50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x43cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x43cc54: 0x0  nop
    ctx->pc = 0x43cc54u;
    // NOP
    // 0x43cc58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x43cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x43cc5c: 0x0  nop
    ctx->pc = 0x43cc5cu;
    // NOP
    // 0x43cc60: 0x0  nop
    ctx->pc = 0x43cc60u;
    // NOP
    // 0x43cc64: 0x0  nop
    ctx->pc = 0x43cc64u;
    // NOP
    // 0x43cc68: 0x0  nop
    ctx->pc = 0x43cc68u;
    // NOP
    // 0x43cc6c: 0x0  nop
    ctx->pc = 0x43cc6cu;
    // NOP
    // 0x43cc70: 0x0  nop
    ctx->pc = 0x43cc70u;
    // NOP
    // 0x43cc74: 0x0  nop
    ctx->pc = 0x43cc74u;
    // NOP
    // 0x43cc78: 0x0  nop
    ctx->pc = 0x43cc78u;
    // NOP
    // 0x43cc7c: 0x0  nop
    ctx->pc = 0x43cc7cu;
    // NOP
    // 0x43cc80: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x43cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x43cc84: 0xc  syscall     0
    ctx->pc = 0x43cc84u;
    ctx->pc = 0x43CC88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cc88:
    // 0x43cc88: 0x3e00008  jr          $ra
    ctx->pc = 0x43CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CC90u;
    // 0x43cc90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43cc94: 0xc  syscall     0
    ctx->pc = 0x43cc94u;
    ctx->pc = 0x43CC98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cc98:
    // 0x43cc98: 0x3e00008  jr          $ra
    ctx->pc = 0x43CC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CCA0u;
    // 0x43cca0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43cca4: 0xc  syscall     0
    ctx->pc = 0x43cca4u;
    ctx->pc = 0x43CCA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cca8:
    // 0x43cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CCB0u;
    // 0x43ccb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x43ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x43ccb4: 0xc  syscall     0
    ctx->pc = 0x43ccb4u;
    ctx->pc = 0x43CCB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ccb8:
    // 0x43ccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CCC0u;
label_43ccc0:
    // 0x43ccc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43ccc4: 0xc  syscall     0
    ctx->pc = 0x43ccc4u;
    ctx->pc = 0x43CCC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ccc8:
    // 0x43ccc8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CCD0u;
    // 0x43ccd0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x43ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x43ccd4: 0xc  syscall     0
    ctx->pc = 0x43ccd4u;
    ctx->pc = 0x43CCD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ccd8:
    // 0x43ccd8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CCE0u;
    // 0x43cce0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x43cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x43cce4: 0xc  syscall     0
    ctx->pc = 0x43cce4u;
    ctx->pc = 0x43CCE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cce8:
    // 0x43cce8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CCF0u;
    // 0x43ccf0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x43ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x43ccf4: 0xc  syscall     0
    ctx->pc = 0x43ccf4u;
    ctx->pc = 0x43CCF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ccf8:
    // 0x43ccf8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD00u;
    // 0x43cd00: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x43cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43cd04: 0xc  syscall     0
    ctx->pc = 0x43cd04u;
    ctx->pc = 0x43CD08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd08:
    // 0x43cd08: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD10u;
    // 0x43cd10: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x43cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x43cd14: 0xc  syscall     0
    ctx->pc = 0x43cd14u;
    ctx->pc = 0x43CD18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd18:
    // 0x43cd18: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD20u;
    // 0x43cd20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x43cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x43cd24: 0xc  syscall     0
    ctx->pc = 0x43cd24u;
    ctx->pc = 0x43CD28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd28:
    // 0x43cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD30u;
    // 0x43cd30: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x43cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x43cd34: 0xc  syscall     0
    ctx->pc = 0x43cd34u;
    ctx->pc = 0x43CD38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd38:
    // 0x43cd38: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD40u;
    // 0x43cd40: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x43cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x43cd44: 0xc  syscall     0
    ctx->pc = 0x43cd44u;
    ctx->pc = 0x43CD48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd48:
    // 0x43cd48: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD50u;
    // 0x43cd50: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x43cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x43cd54: 0xc  syscall     0
    ctx->pc = 0x43cd54u;
    ctx->pc = 0x43CD58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd58:
    // 0x43cd58: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD60u;
    // 0x43cd60: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x43cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x43cd64: 0xc  syscall     0
    ctx->pc = 0x43cd64u;
    ctx->pc = 0x43CD68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd68:
    // 0x43cd68: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD70u;
    // 0x43cd70: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x43cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x43cd74: 0xc  syscall     0
    ctx->pc = 0x43cd74u;
    ctx->pc = 0x43CD78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd78:
    // 0x43cd78: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD80u;
}
