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

// Function: sub_00476898
// Address: 0x476898 - 0x476b60
void sub_00476898_0x476898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476898_0x476898");
#endif

    switch (ctx->pc) {
        case 0x476898u: goto label_476898;
        case 0x47689cu: goto label_47689c;
        case 0x4768a0u: goto label_4768a0;
        case 0x4768a4u: goto label_4768a4;
        case 0x4768a8u: goto label_4768a8;
        case 0x4768acu: goto label_4768ac;
        case 0x4768b0u: goto label_4768b0;
        case 0x4768b4u: goto label_4768b4;
        case 0x4768b8u: goto label_4768b8;
        case 0x4768bcu: goto label_4768bc;
        case 0x4768c0u: goto label_4768c0;
        case 0x4768c4u: goto label_4768c4;
        case 0x4768c8u: goto label_4768c8;
        case 0x4768ccu: goto label_4768cc;
        case 0x4768d0u: goto label_4768d0;
        case 0x4768d4u: goto label_4768d4;
        case 0x4768d8u: goto label_4768d8;
        case 0x4768dcu: goto label_4768dc;
        case 0x4768e0u: goto label_4768e0;
        case 0x4768e4u: goto label_4768e4;
        case 0x4768e8u: goto label_4768e8;
        case 0x4768ecu: goto label_4768ec;
        case 0x4768f0u: goto label_4768f0;
        case 0x4768f4u: goto label_4768f4;
        case 0x4768f8u: goto label_4768f8;
        case 0x4768fcu: goto label_4768fc;
        case 0x476900u: goto label_476900;
        case 0x476904u: goto label_476904;
        case 0x476908u: goto label_476908;
        case 0x47690cu: goto label_47690c;
        case 0x476910u: goto label_476910;
        case 0x476914u: goto label_476914;
        case 0x476918u: goto label_476918;
        case 0x47691cu: goto label_47691c;
        case 0x476920u: goto label_476920;
        case 0x476924u: goto label_476924;
        case 0x476928u: goto label_476928;
        case 0x47692cu: goto label_47692c;
        case 0x476930u: goto label_476930;
        case 0x476934u: goto label_476934;
        case 0x476938u: goto label_476938;
        case 0x47693cu: goto label_47693c;
        case 0x476940u: goto label_476940;
        case 0x476944u: goto label_476944;
        case 0x476948u: goto label_476948;
        case 0x47694cu: goto label_47694c;
        case 0x476950u: goto label_476950;
        case 0x476954u: goto label_476954;
        case 0x476958u: goto label_476958;
        case 0x47695cu: goto label_47695c;
        case 0x476960u: goto label_476960;
        case 0x476964u: goto label_476964;
        case 0x476968u: goto label_476968;
        case 0x47696cu: goto label_47696c;
        case 0x476970u: goto label_476970;
        case 0x476974u: goto label_476974;
        case 0x476978u: goto label_476978;
        case 0x47697cu: goto label_47697c;
        case 0x476980u: goto label_476980;
        case 0x476984u: goto label_476984;
        case 0x476988u: goto label_476988;
        case 0x47698cu: goto label_47698c;
        case 0x476990u: goto label_476990;
        case 0x476994u: goto label_476994;
        case 0x476998u: goto label_476998;
        case 0x47699cu: goto label_47699c;
        case 0x4769a0u: goto label_4769a0;
        case 0x4769a4u: goto label_4769a4;
        case 0x4769a8u: goto label_4769a8;
        case 0x4769acu: goto label_4769ac;
        case 0x4769b0u: goto label_4769b0;
        case 0x4769b4u: goto label_4769b4;
        case 0x4769b8u: goto label_4769b8;
        case 0x4769bcu: goto label_4769bc;
        case 0x4769c0u: goto label_4769c0;
        case 0x4769c4u: goto label_4769c4;
        case 0x4769c8u: goto label_4769c8;
        case 0x4769ccu: goto label_4769cc;
        case 0x4769d0u: goto label_4769d0;
        case 0x4769d4u: goto label_4769d4;
        case 0x4769d8u: goto label_4769d8;
        case 0x4769dcu: goto label_4769dc;
        case 0x4769e0u: goto label_4769e0;
        case 0x4769e4u: goto label_4769e4;
        case 0x4769e8u: goto label_4769e8;
        case 0x4769ecu: goto label_4769ec;
        case 0x4769f0u: goto label_4769f0;
        case 0x4769f4u: goto label_4769f4;
        case 0x4769f8u: goto label_4769f8;
        case 0x4769fcu: goto label_4769fc;
        case 0x476a00u: goto label_476a00;
        case 0x476a04u: goto label_476a04;
        case 0x476a08u: goto label_476a08;
        case 0x476a0cu: goto label_476a0c;
        case 0x476a10u: goto label_476a10;
        case 0x476a14u: goto label_476a14;
        case 0x476a18u: goto label_476a18;
        case 0x476a1cu: goto label_476a1c;
        case 0x476a20u: goto label_476a20;
        case 0x476a24u: goto label_476a24;
        case 0x476a28u: goto label_476a28;
        case 0x476a2cu: goto label_476a2c;
        case 0x476a30u: goto label_476a30;
        case 0x476a34u: goto label_476a34;
        case 0x476a38u: goto label_476a38;
        case 0x476a3cu: goto label_476a3c;
        case 0x476a40u: goto label_476a40;
        case 0x476a44u: goto label_476a44;
        case 0x476a48u: goto label_476a48;
        case 0x476a4cu: goto label_476a4c;
        case 0x476a50u: goto label_476a50;
        case 0x476a54u: goto label_476a54;
        case 0x476a58u: goto label_476a58;
        case 0x476a5cu: goto label_476a5c;
        case 0x476a60u: goto label_476a60;
        case 0x476a64u: goto label_476a64;
        case 0x476a68u: goto label_476a68;
        case 0x476a6cu: goto label_476a6c;
        case 0x476a70u: goto label_476a70;
        case 0x476a74u: goto label_476a74;
        case 0x476a78u: goto label_476a78;
        case 0x476a7cu: goto label_476a7c;
        case 0x476a80u: goto label_476a80;
        case 0x476a84u: goto label_476a84;
        case 0x476a88u: goto label_476a88;
        case 0x476a8cu: goto label_476a8c;
        case 0x476a90u: goto label_476a90;
        case 0x476a94u: goto label_476a94;
        case 0x476a98u: goto label_476a98;
        case 0x476a9cu: goto label_476a9c;
        case 0x476aa0u: goto label_476aa0;
        case 0x476aa4u: goto label_476aa4;
        case 0x476aa8u: goto label_476aa8;
        case 0x476aacu: goto label_476aac;
        case 0x476ab0u: goto label_476ab0;
        case 0x476ab4u: goto label_476ab4;
        case 0x476ab8u: goto label_476ab8;
        case 0x476abcu: goto label_476abc;
        case 0x476ac0u: goto label_476ac0;
        case 0x476ac4u: goto label_476ac4;
        case 0x476ac8u: goto label_476ac8;
        case 0x476accu: goto label_476acc;
        case 0x476ad0u: goto label_476ad0;
        case 0x476ad4u: goto label_476ad4;
        case 0x476ad8u: goto label_476ad8;
        case 0x476adcu: goto label_476adc;
        case 0x476ae0u: goto label_476ae0;
        case 0x476ae4u: goto label_476ae4;
        case 0x476ae8u: goto label_476ae8;
        case 0x476aecu: goto label_476aec;
        case 0x476af0u: goto label_476af0;
        case 0x476af4u: goto label_476af4;
        case 0x476af8u: goto label_476af8;
        case 0x476afcu: goto label_476afc;
        case 0x476b00u: goto label_476b00;
        case 0x476b04u: goto label_476b04;
        case 0x476b08u: goto label_476b08;
        case 0x476b0cu: goto label_476b0c;
        case 0x476b10u: goto label_476b10;
        case 0x476b14u: goto label_476b14;
        case 0x476b18u: goto label_476b18;
        case 0x476b1cu: goto label_476b1c;
        case 0x476b20u: goto label_476b20;
        case 0x476b24u: goto label_476b24;
        case 0x476b28u: goto label_476b28;
        case 0x476b2cu: goto label_476b2c;
        case 0x476b30u: goto label_476b30;
        case 0x476b34u: goto label_476b34;
        case 0x476b38u: goto label_476b38;
        case 0x476b3cu: goto label_476b3c;
        case 0x476b40u: goto label_476b40;
        case 0x476b44u: goto label_476b44;
        case 0x476b48u: goto label_476b48;
        case 0x476b4cu: goto label_476b4c;
        case 0x476b50u: goto label_476b50;
        case 0x476b54u: goto label_476b54;
        case 0x476b58u: goto label_476b58;
        case 0x476b5cu: goto label_476b5c;
        default: break;
    }

    ctx->pc = 0x476898u;

label_476898:
    // 0x476898: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x476898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_47689c:
    // 0x47689c: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x47689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_4768a0:
    // 0x4768a0: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x4768a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_4768a4:
    // 0x4768a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4768a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4768a8:
    // 0x4768a8: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x4768a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_4768ac:
    // 0x4768ac: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x4768acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_4768b0:
    // 0x4768b0: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x4768b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_4768b4:
    // 0x4768b4: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x4768b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
label_4768b8:
    // 0x4768b8: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x4768b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_4768bc:
    // 0x4768bc: 0x8e130030  lw          $s3, 0x30($s0)
    ctx->pc = 0x4768bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_4768c0:
    // 0x4768c0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x4768c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_4768c4:
    // 0x4768c4: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x4768c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4768c8:
    // 0x4768c8: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x4768c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
label_4768cc:
    // 0x4768cc: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x4768ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_4768d0:
    // 0x4768d0: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x4768d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
label_4768d4:
    // 0x4768d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4768d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4768d8:
    // 0x4768d8: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_4768dc:
    if (ctx->pc == 0x4768DCu) {
        ctx->pc = 0x4768DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4768D8u;
        // 0x4768dc: 0x24510018  addiu       $s1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4768E0u;
        goto label_4768e0;
    }
    ctx->pc = 0x4768D8u;
    {
        const bool branch_taken_0x4768d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4768DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4768D8u;
        // 0x4768dc: 0x24510018  addiu       $s1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4768d8) {
            ctx->pc = 0x476AD8u;
            goto label_476ad8;
        }
    }
    ctx->pc = 0x4768E0u;
label_4768e0:
    // 0x4768e0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x4768e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_4768e4:
    // 0x4768e4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x4768e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_4768e8:
    // 0x4768e8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4768e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4768ec:
    // 0x4768ec: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x4768ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_4768f0:
    // 0x4768f0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x4768f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4768f4:
    // 0x4768f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x4768f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4768f8:
    // 0x4768f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4768f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4768fc:
    // 0x4768fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4768fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_476900:
    // 0x476900: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_476904:
    if (ctx->pc == 0x476904u) {
        ctx->pc = 0x476904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476900u;
        // 0x476904: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476908u;
        goto label_476908;
    }
    ctx->pc = 0x476900u;
    {
        const bool branch_taken_0x476900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476900u;
        // 0x476904: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476900) {
            ctx->pc = 0x476918u;
            goto label_476918;
        }
    }
    ctx->pc = 0x476908u;
label_476908:
    // 0x476908: 0x2643fffe  addiu       $v1, $s2, -0x2
    ctx->pc = 0x476908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_47690c:
    // 0x47690c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47690cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_476910:
    // 0x476910: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x476910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_476914:
    // 0x476914: 0x0  nop
    ctx->pc = 0x476914u;
    // NOP
label_476918:
    // 0x476918: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x476918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47691c:
    // 0x47691c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476920:
    // 0x476920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x476920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_476924:
    // 0x476924: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x476924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_476928:
    // 0x476928: 0x27a80184  addiu       $t0, $sp, 0x184
    ctx->pc = 0x476928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_47692c:
    // 0x47692c: 0xc11d21e  jal         func_474878
label_476930:
    if (ctx->pc == 0x476930u) {
        ctx->pc = 0x476930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47692Cu;
        // 0x476930: 0x27a90188  addiu       $t1, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476934u;
        goto label_476934;
    }
    ctx->pc = 0x47692Cu;
    SET_GPR_U32(ctx, 31, 0x476934u);
    ctx->pc = 0x476930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47692Cu;
    // 0x476930: 0x27a90188  addiu       $t1, $sp, 0x188 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x474878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474878u, 0x47692Cu, 0x476934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476934u;
label_476934:
    // 0x476934: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x476934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476938:
    // 0x476938: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x476938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47693c:
    // 0x47693c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_476940:
    if (ctx->pc == 0x476940u) {
        ctx->pc = 0x476940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47693Cu;
        // 0x476940: 0x3c070047  lui         $a3, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476944u;
        goto label_476944;
    }
    ctx->pc = 0x47693Cu;
    {
        const bool branch_taken_0x47693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47693Cu;
        // 0x476940: 0x3c070047  lui         $a3, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47693c) {
            ctx->pc = 0x47694Cu;
            goto label_47694c;
        }
    }
    ctx->pc = 0x476944u;
label_476944:
    // 0x476944: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x476944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_476948:
    // 0x476948: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x476948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_47694c:
    // 0x47694c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x47694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_476950:
    // 0x476950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x476950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476954:
    // 0x476954: 0x24e75690  addiu       $a3, $a3, 0x5690
    ctx->pc = 0x476954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22160));
label_476958:
    // 0x476958: 0x40f809  jalr        $v0
label_47695c:
    if (ctx->pc == 0x47695Cu) {
        ctx->pc = 0x47695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476958u;
        // 0x47695c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476960u;
        goto label_476960;
    }
    ctx->pc = 0x476958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476960u);
        ctx->pc = 0x47695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476958u;
        // 0x47695c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476958u, 0x476960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476960u;
label_476960:
    // 0x476960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x476960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476964:
    // 0x476964: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_476968:
    if (ctx->pc == 0x476968u) {
        ctx->pc = 0x476968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476964u;
        // 0x476968: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47696Cu;
        goto label_47696c;
    }
    ctx->pc = 0x476964u;
    {
        const bool branch_taken_0x476964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x476968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476964u;
        // 0x476968: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476964) {
            ctx->pc = 0x476974u;
            goto label_476974;
        }
    }
    ctx->pc = 0x47696Cu;
label_47696c:
    // 0x47696c: 0x10000073  b           . + 4 + (0x73 << 2)
label_476970:
    if (ctx->pc == 0x476970u) {
        ctx->pc = 0x476970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47696Cu;
        // 0x476970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476974u;
        goto label_476974;
    }
    ctx->pc = 0x47696Cu;
    {
        const bool branch_taken_0x47696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47696Cu;
        // 0x476970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47696c) {
            ctx->pc = 0x476B3Cu;
            goto label_476b3c;
        }
    }
    ctx->pc = 0x476974u;
label_476974:
    // 0x476974: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x476974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_476978:
    // 0x476978: 0x24910018  addiu       $s1, $a0, 0x18
    ctx->pc = 0x476978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_47697c:
    // 0x47697c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x47697cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_476980:
    // 0x476980: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x476980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_476984:
    // 0x476984: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x476984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_476988:
    // 0x476988: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x476988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47698c:
    // 0x47698c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_476990:
    // 0x476990: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x476990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_476994:
    // 0x476994: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x476994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_476998:
    // 0x476998: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x476998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_47699c:
    // 0x47699c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x47699cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4769a0:
    // 0x4769a0: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x4769a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
label_4769a4:
    // 0x4769a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4769a8:
    if (ctx->pc == 0x4769A8u) {
        ctx->pc = 0x4769A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4769A4u;
        // 0x4769a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4769ACu;
        goto label_4769ac;
    }
    ctx->pc = 0x4769A4u;
    {
        const bool branch_taken_0x4769a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4769A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4769A4u;
        // 0x4769a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4769a4) {
            ctx->pc = 0x476A04u;
            goto label_476a04;
        }
    }
    ctx->pc = 0x4769ACu;
label_4769ac:
    // 0x4769ac: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4769acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4769b0:
    // 0x4769b0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x4769b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4769b4:
    // 0x4769b4: 0x0  nop
    ctx->pc = 0x4769b4u;
    // NOP
label_4769b8:
    // 0x4769b8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4769b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4769bc:
    // 0x4769bc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4769bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4769c0:
    // 0x4769c0: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x4769c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4769c4:
    // 0x4769c4: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4769c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4769c8:
    // 0x4769c8: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4769c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4769cc:
    // 0x4769cc: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4769ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4769d0:
    // 0x4769d0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4769d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4769d4:
    // 0x4769d4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4769d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4769d8:
    // 0x4769d8: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x4769d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4769dc:
    // 0x4769dc: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x4769dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4769e0:
    // 0x4769e0: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x4769e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4769e4:
    // 0x4769e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4769e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4769e8:
    // 0x4769e8: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x4769e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4769ec:
    // 0x4769ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4769ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4769f0:
    // 0x4769f0: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4769f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_4769f4:
    // 0x4769f4: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x4769f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
label_4769f8:
    // 0x4769f8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4769f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4769fc:
    // 0x4769fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_476a00:
    if (ctx->pc == 0x476A00u) {
        ctx->pc = 0x476A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4769FCu;
        // 0x476a00: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476A04u;
        goto label_476a04;
    }
    ctx->pc = 0x4769FCu;
    {
        const bool branch_taken_0x4769fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4769FCu;
        // 0x476a00: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4769fc) {
            ctx->pc = 0x4769B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4769b8;
        }
    }
    ctx->pc = 0x476A04u;
label_476a04:
    // 0x476a04: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x476a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_476a08:
    // 0x476a08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x476a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_476a0c:
    // 0x476a0c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x476a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_476a10:
    // 0x476a10: 0x2624020f  addiu       $a0, $s1, 0x20F
    ctx->pc = 0x476a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 527));
label_476a14:
    // 0x476a14: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x476a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_476a18:
    // 0x476a18: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x476a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_476a1c:
    // 0x476a1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x476a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476a20:
    // 0x476a20: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x476a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_476a24:
    // 0x476a24: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x476a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_476a28:
    // 0x476a28: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x476a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_476a2c:
    // 0x476a2c: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x476a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_476a30:
    // 0x476a30: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x476a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_476a34:
    // 0x476a34: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x476a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_476a38:
    // 0x476a38: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x476a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_476a3c:
    // 0x476a3c: 0x928200c0  lbu         $v0, 0xC0($s4)
    ctx->pc = 0x476a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
label_476a40:
    // 0x476a40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_476a44:
    if (ctx->pc == 0x476A44u) {
        ctx->pc = 0x476A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476A40u;
        // 0x476a44: 0x2483007f  addiu       $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476A48u;
        goto label_476a48;
    }
    ctx->pc = 0x476A40u;
    {
        const bool branch_taken_0x476a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476A40u;
        // 0x476a44: 0x2483007f  addiu       $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476a40) {
            ctx->pc = 0x476A54u;
            goto label_476a54;
        }
    }
    ctx->pc = 0x476A48u;
label_476a48:
    // 0x476a48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x476a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_476a4c:
    // 0x476a4c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x476a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_476a50:
    // 0x476a50: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x476a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_476a54:
    // 0x476a54: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x476a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_476a58:
    // 0x476a58: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x476a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_476a5c:
    // 0x476a5c: 0x2482000b  addiu       $v0, $a0, 0xB
    ctx->pc = 0x476a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
label_476a60:
    // 0x476a60: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_476a64:
    if (ctx->pc == 0x476A64u) {
        ctx->pc = 0x476A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476A60u;
        // 0x476a64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476A68u;
        goto label_476a68;
    }
    ctx->pc = 0x476A60u;
    {
        const bool branch_taken_0x476a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476A60u;
        // 0x476a64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476a60) {
            ctx->pc = 0x476AD0u;
            goto label_476ad0;
        }
    }
    ctx->pc = 0x476A68u;
label_476a68:
    // 0x476a68: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x476a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476a6c:
    // 0x476a6c: 0x262800a4  addiu       $t0, $s1, 0xA4
    ctx->pc = 0x476a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_476a70:
    // 0x476a70: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x476a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_476a74:
    // 0x476a74: 0x26250034  addiu       $a1, $s1, 0x34
    ctx->pc = 0x476a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_476a78:
    // 0x476a78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x476a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_476a7c:
    // 0x476a7c: 0x30422001  andi        $v0, $v0, 0x2001
    ctx->pc = 0x476a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8193);
label_476a80:
    // 0x476a80: 0x5449000d  bnel        $v0, $t1, . + 4 + (0xD << 2)
label_476a84:
    if (ctx->pc == 0x476A84u) {
        ctx->pc = 0x476A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476A80u;
        // 0x476a84: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476A88u;
        goto label_476a88;
    }
    ctx->pc = 0x476A80u;
    {
        const bool branch_taken_0x476a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x476a80) {
            ctx->pc = 0x476A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476A80u;
            // 0x476a84: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x476AB8u;
            goto label_476ab8;
        }
    }
    ctx->pc = 0x476A88u;
label_476a88:
    // 0x476a88: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_476a8c:
    if (ctx->pc == 0x476A8Cu) {
        ctx->pc = 0x476A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476A88u;
        // 0x476a8c: 0x8d03fffc  lw          $v1, -0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476A90u;
        goto label_476a90;
    }
    ctx->pc = 0x476A88u;
    {
        const bool branch_taken_0x476a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x476A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476A88u;
        // 0x476a8c: 0x8d03fffc  lw          $v1, -0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476a88) {
            ctx->pc = 0x476A94u;
            goto label_476a94;
        }
    }
    ctx->pc = 0x476A90u;
label_476a90:
    // 0x476a90: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x476a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_476a94:
    // 0x476a94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x476a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_476a98:
    // 0x476a98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x476a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_476a9c:
    // 0x476a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x476a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_476aa0:
    // 0x476aa0: 0xaca2fffc  sw          $v0, -0x4($a1)
    ctx->pc = 0x476aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 2));
label_476aa4:
    // 0x476aa4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x476aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_476aa8:
    // 0x476aa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x476aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_476aac:
    // 0x476aac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x476aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_476ab0:
    // 0x476ab0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x476ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_476ab4:
    // 0x476ab4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x476ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_476ab8:
    // 0x476ab8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x476ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_476abc:
    // 0x476abc: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x476abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
label_476ac0:
    // 0x476ac0: 0x2482000b  addiu       $v0, $a0, 0xB
    ctx->pc = 0x476ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
label_476ac4:
    // 0x476ac4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x476ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_476ac8:
    // 0x476ac8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_476acc:
    if (ctx->pc == 0x476ACCu) {
        ctx->pc = 0x476ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476AC8u;
        // 0x476acc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476AD0u;
        goto label_476ad0;
    }
    ctx->pc = 0x476AC8u;
    {
        const bool branch_taken_0x476ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476AC8u;
        // 0x476acc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476ac8) {
            ctx->pc = 0x476A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476a78;
        }
    }
    ctx->pc = 0x476AD0u;
label_476ad0:
    // 0x476ad0: 0xc11d3ae  jal         func_474EB8
label_476ad4:
    if (ctx->pc == 0x476AD4u) {
        ctx->pc = 0x476AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476AD0u;
        // 0x476ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476AD8u;
        goto label_476ad8;
    }
    ctx->pc = 0x476AD0u;
    SET_GPR_U32(ctx, 31, 0x476AD8u);
    ctx->pc = 0x476AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476AD0u;
    // 0x476ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x474EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474EB8u, 0x476AD0u, 0x476AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476AD8u;
label_476ad8:
    // 0x476ad8: 0x928600c1  lbu         $a2, 0xC1($s4)
    ctx->pc = 0x476ad8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 193)));
label_476adc:
    // 0x476adc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x476adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476ae0:
    // 0x476ae0: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_476ae4:
    if (ctx->pc == 0x476AE4u) {
        ctx->pc = 0x476AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476AE0u;
        // 0x476ae4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476AE8u;
        goto label_476ae8;
    }
    ctx->pc = 0x476AE0u;
    {
        const bool branch_taken_0x476ae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x476AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476AE0u;
        // 0x476ae4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476ae0) {
            ctx->pc = 0x476B0Cu;
            goto label_476b0c;
        }
    }
    ctx->pc = 0x476AE8u;
label_476ae8:
    // 0x476ae8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x476ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_476aec:
    // 0x476aec: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x476aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_476af0:
    // 0x476af0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x476af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476af4:
    // 0x476af4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x476af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_476af8:
    // 0x476af8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x476af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_476afc:
    // 0x476afc: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x476afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_476b00:
    // 0x476b00: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x476b00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_476b04:
    // 0x476b04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_476b08:
    if (ctx->pc == 0x476B08u) {
        ctx->pc = 0x476B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B04u;
        // 0x476b08: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476B0Cu;
        goto label_476b0c;
    }
    ctx->pc = 0x476B04u;
    {
        const bool branch_taken_0x476b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B04u;
        // 0x476b08: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476b04) {
            ctx->pc = 0x476AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476af0;
        }
    }
    ctx->pc = 0x476B0Cu;
label_476b0c:
    // 0x476b0c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x476b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_476b10:
    // 0x476b10: 0x40f809  jalr        $v0
label_476b14:
    if (ctx->pc == 0x476B14u) {
        ctx->pc = 0x476B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B10u;
        // 0x476b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476B18u;
        goto label_476b18;
    }
    ctx->pc = 0x476B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476B18u);
        ctx->pc = 0x476B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B10u;
        // 0x476b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476B10u, 0x476B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476B18u;
label_476b18:
    // 0x476b18: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x476b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_476b1c:
    // 0x476b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x476b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476b20:
    // 0x476b20: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x476b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_476b24:
    // 0x476b24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x476b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_476b28:
    // 0x476b28: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x476b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_476b2c:
    // 0x476b2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x476b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_476b30:
    // 0x476b30: 0xc10f644  jal         func_43D910
label_476b34:
    if (ctx->pc == 0x476B34u) {
        ctx->pc = 0x476B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B30u;
        // 0x476b34: 0x24a500db  addiu       $a1, $a1, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 219));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476B38u;
        goto label_476b38;
    }
    ctx->pc = 0x476B30u;
    SET_GPR_U32(ctx, 31, 0x476B38u);
    ctx->pc = 0x476B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476B30u;
    // 0x476b34: 0x24a500db  addiu       $a1, $a1, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x476B30u, 0x476B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476B38u;
label_476b38:
    // 0x476b38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x476b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476b3c:
    // 0x476b3c: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x476b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_476b40:
    // 0x476b40: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x476b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_476b44:
    // 0x476b44: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x476b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_476b48:
    // 0x476b48: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x476b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_476b4c:
    // 0x476b4c: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x476b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_476b50:
    // 0x476b50: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x476b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_476b54:
    // 0x476b54: 0x3e00008  jr          $ra
label_476b58:
    if (ctx->pc == 0x476B58u) {
        ctx->pc = 0x476B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B54u;
        // 0x476b58: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476B5Cu;
        goto label_476b5c;
    }
    ctx->pc = 0x476B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B54u;
        // 0x476b58: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476B5Cu;
label_476b5c:
    // 0x476b5c: 0x0  nop
    ctx->pc = 0x476b5cu;
    // NOP
    ctx->pc = 0x476b60u;
}
