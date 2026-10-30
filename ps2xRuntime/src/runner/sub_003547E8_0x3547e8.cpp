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

// Function: sub_003547E8
// Address: 0x3547e8 - 0x354b38
void sub_003547E8_0x3547e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003547E8_0x3547e8");
#endif

    switch (ctx->pc) {
        case 0x3547e8u: goto label_3547e8;
        case 0x3547ecu: goto label_3547ec;
        case 0x3547f0u: goto label_3547f0;
        case 0x3547f4u: goto label_3547f4;
        case 0x3547f8u: goto label_3547f8;
        case 0x3547fcu: goto label_3547fc;
        case 0x354800u: goto label_354800;
        case 0x354804u: goto label_354804;
        case 0x354808u: goto label_354808;
        case 0x35480cu: goto label_35480c;
        case 0x354810u: goto label_354810;
        case 0x354814u: goto label_354814;
        case 0x354818u: goto label_354818;
        case 0x35481cu: goto label_35481c;
        case 0x354820u: goto label_354820;
        case 0x354824u: goto label_354824;
        case 0x354828u: goto label_354828;
        case 0x35482cu: goto label_35482c;
        case 0x354830u: goto label_354830;
        case 0x354834u: goto label_354834;
        case 0x354838u: goto label_354838;
        case 0x35483cu: goto label_35483c;
        case 0x354840u: goto label_354840;
        case 0x354844u: goto label_354844;
        case 0x354848u: goto label_354848;
        case 0x35484cu: goto label_35484c;
        case 0x354850u: goto label_354850;
        case 0x354854u: goto label_354854;
        case 0x354858u: goto label_354858;
        case 0x35485cu: goto label_35485c;
        case 0x354860u: goto label_354860;
        case 0x354864u: goto label_354864;
        case 0x354868u: goto label_354868;
        case 0x35486cu: goto label_35486c;
        case 0x354870u: goto label_354870;
        case 0x354874u: goto label_354874;
        case 0x354878u: goto label_354878;
        case 0x35487cu: goto label_35487c;
        case 0x354880u: goto label_354880;
        case 0x354884u: goto label_354884;
        case 0x354888u: goto label_354888;
        case 0x35488cu: goto label_35488c;
        case 0x354890u: goto label_354890;
        case 0x354894u: goto label_354894;
        case 0x354898u: goto label_354898;
        case 0x35489cu: goto label_35489c;
        case 0x3548a0u: goto label_3548a0;
        case 0x3548a4u: goto label_3548a4;
        case 0x3548a8u: goto label_3548a8;
        case 0x3548acu: goto label_3548ac;
        case 0x3548b0u: goto label_3548b0;
        case 0x3548b4u: goto label_3548b4;
        case 0x3548b8u: goto label_3548b8;
        case 0x3548bcu: goto label_3548bc;
        case 0x3548c0u: goto label_3548c0;
        case 0x3548c4u: goto label_3548c4;
        case 0x3548c8u: goto label_3548c8;
        case 0x3548ccu: goto label_3548cc;
        case 0x3548d0u: goto label_3548d0;
        case 0x3548d4u: goto label_3548d4;
        case 0x3548d8u: goto label_3548d8;
        case 0x3548dcu: goto label_3548dc;
        case 0x3548e0u: goto label_3548e0;
        case 0x3548e4u: goto label_3548e4;
        case 0x3548e8u: goto label_3548e8;
        case 0x3548ecu: goto label_3548ec;
        case 0x3548f0u: goto label_3548f0;
        case 0x3548f4u: goto label_3548f4;
        case 0x3548f8u: goto label_3548f8;
        case 0x3548fcu: goto label_3548fc;
        case 0x354900u: goto label_354900;
        case 0x354904u: goto label_354904;
        case 0x354908u: goto label_354908;
        case 0x35490cu: goto label_35490c;
        case 0x354910u: goto label_354910;
        case 0x354914u: goto label_354914;
        case 0x354918u: goto label_354918;
        case 0x35491cu: goto label_35491c;
        case 0x354920u: goto label_354920;
        case 0x354924u: goto label_354924;
        case 0x354928u: goto label_354928;
        case 0x35492cu: goto label_35492c;
        case 0x354930u: goto label_354930;
        case 0x354934u: goto label_354934;
        case 0x354938u: goto label_354938;
        case 0x35493cu: goto label_35493c;
        case 0x354940u: goto label_354940;
        case 0x354944u: goto label_354944;
        case 0x354948u: goto label_354948;
        case 0x35494cu: goto label_35494c;
        case 0x354950u: goto label_354950;
        case 0x354954u: goto label_354954;
        case 0x354958u: goto label_354958;
        case 0x35495cu: goto label_35495c;
        case 0x354960u: goto label_354960;
        case 0x354964u: goto label_354964;
        case 0x354968u: goto label_354968;
        case 0x35496cu: goto label_35496c;
        case 0x354970u: goto label_354970;
        case 0x354974u: goto label_354974;
        case 0x354978u: goto label_354978;
        case 0x35497cu: goto label_35497c;
        case 0x354980u: goto label_354980;
        case 0x354984u: goto label_354984;
        case 0x354988u: goto label_354988;
        case 0x35498cu: goto label_35498c;
        case 0x354990u: goto label_354990;
        case 0x354994u: goto label_354994;
        case 0x354998u: goto label_354998;
        case 0x35499cu: goto label_35499c;
        case 0x3549a0u: goto label_3549a0;
        case 0x3549a4u: goto label_3549a4;
        case 0x3549a8u: goto label_3549a8;
        case 0x3549acu: goto label_3549ac;
        case 0x3549b0u: goto label_3549b0;
        case 0x3549b4u: goto label_3549b4;
        case 0x3549b8u: goto label_3549b8;
        case 0x3549bcu: goto label_3549bc;
        case 0x3549c0u: goto label_3549c0;
        case 0x3549c4u: goto label_3549c4;
        case 0x3549c8u: goto label_3549c8;
        case 0x3549ccu: goto label_3549cc;
        case 0x3549d0u: goto label_3549d0;
        case 0x3549d4u: goto label_3549d4;
        case 0x3549d8u: goto label_3549d8;
        case 0x3549dcu: goto label_3549dc;
        case 0x3549e0u: goto label_3549e0;
        case 0x3549e4u: goto label_3549e4;
        case 0x3549e8u: goto label_3549e8;
        case 0x3549ecu: goto label_3549ec;
        case 0x3549f0u: goto label_3549f0;
        case 0x3549f4u: goto label_3549f4;
        case 0x3549f8u: goto label_3549f8;
        case 0x3549fcu: goto label_3549fc;
        case 0x354a00u: goto label_354a00;
        case 0x354a04u: goto label_354a04;
        case 0x354a08u: goto label_354a08;
        case 0x354a0cu: goto label_354a0c;
        case 0x354a10u: goto label_354a10;
        case 0x354a14u: goto label_354a14;
        case 0x354a18u: goto label_354a18;
        case 0x354a1cu: goto label_354a1c;
        case 0x354a20u: goto label_354a20;
        case 0x354a24u: goto label_354a24;
        case 0x354a28u: goto label_354a28;
        case 0x354a2cu: goto label_354a2c;
        case 0x354a30u: goto label_354a30;
        case 0x354a34u: goto label_354a34;
        case 0x354a38u: goto label_354a38;
        case 0x354a3cu: goto label_354a3c;
        case 0x354a40u: goto label_354a40;
        case 0x354a44u: goto label_354a44;
        case 0x354a48u: goto label_354a48;
        case 0x354a4cu: goto label_354a4c;
        case 0x354a50u: goto label_354a50;
        case 0x354a54u: goto label_354a54;
        case 0x354a58u: goto label_354a58;
        case 0x354a5cu: goto label_354a5c;
        case 0x354a60u: goto label_354a60;
        case 0x354a64u: goto label_354a64;
        case 0x354a68u: goto label_354a68;
        case 0x354a6cu: goto label_354a6c;
        case 0x354a70u: goto label_354a70;
        case 0x354a74u: goto label_354a74;
        case 0x354a78u: goto label_354a78;
        case 0x354a7cu: goto label_354a7c;
        case 0x354a80u: goto label_354a80;
        case 0x354a84u: goto label_354a84;
        case 0x354a88u: goto label_354a88;
        case 0x354a8cu: goto label_354a8c;
        case 0x354a90u: goto label_354a90;
        case 0x354a94u: goto label_354a94;
        case 0x354a98u: goto label_354a98;
        case 0x354a9cu: goto label_354a9c;
        case 0x354aa0u: goto label_354aa0;
        case 0x354aa4u: goto label_354aa4;
        case 0x354aa8u: goto label_354aa8;
        case 0x354aacu: goto label_354aac;
        case 0x354ab0u: goto label_354ab0;
        case 0x354ab4u: goto label_354ab4;
        case 0x354ab8u: goto label_354ab8;
        case 0x354abcu: goto label_354abc;
        case 0x354ac0u: goto label_354ac0;
        case 0x354ac4u: goto label_354ac4;
        case 0x354ac8u: goto label_354ac8;
        case 0x354accu: goto label_354acc;
        case 0x354ad0u: goto label_354ad0;
        case 0x354ad4u: goto label_354ad4;
        case 0x354ad8u: goto label_354ad8;
        case 0x354adcu: goto label_354adc;
        case 0x354ae0u: goto label_354ae0;
        case 0x354ae4u: goto label_354ae4;
        case 0x354ae8u: goto label_354ae8;
        case 0x354aecu: goto label_354aec;
        case 0x354af0u: goto label_354af0;
        case 0x354af4u: goto label_354af4;
        case 0x354af8u: goto label_354af8;
        case 0x354afcu: goto label_354afc;
        case 0x354b00u: goto label_354b00;
        case 0x354b04u: goto label_354b04;
        case 0x354b08u: goto label_354b08;
        case 0x354b0cu: goto label_354b0c;
        case 0x354b10u: goto label_354b10;
        case 0x354b14u: goto label_354b14;
        case 0x354b18u: goto label_354b18;
        case 0x354b1cu: goto label_354b1c;
        case 0x354b20u: goto label_354b20;
        case 0x354b24u: goto label_354b24;
        case 0x354b28u: goto label_354b28;
        case 0x354b2cu: goto label_354b2c;
        case 0x354b30u: goto label_354b30;
        case 0x354b34u: goto label_354b34;
        default: break;
    }

    ctx->pc = 0x3547e8u;

label_3547e8:
    // 0x3547e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3547e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3547ec:
    // 0x3547ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3547ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3547f0:
    // 0x3547f0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3547f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3547f4:
    // 0x3547f4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3547f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3547f8:
    // 0x3547f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3547f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3547fc:
    // 0x3547fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3547fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_354800:
    // 0x354800: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x354800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_354804:
    // 0x354804: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x354804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_354808:
    // 0x354808: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x354808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_35480c:
    // 0x35480c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x35480cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_354810:
    // 0x354810: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x354810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_354814:
    // 0x354814: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x354814u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_354818:
    // 0x354818: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x354818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_35481c:
    // 0x35481c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35481cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_354820:
    // 0x354820: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x354820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_354824:
    // 0x354824: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x354824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_354828:
    // 0x354828: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x354828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_35482c:
    // 0x35482c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x35482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_354830:
    // 0x354830: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x354830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_354834:
    // 0x354834: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x354834u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_354838:
    // 0x354838: 0x7ee50000  sq          $a1, 0x0($s7)
    ctx->pc = 0x354838u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 5));
label_35483c:
    // 0x35483c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x35483cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_354840:
    // 0x354840: 0x124000b0  beqz        $s2, . + 4 + (0xB0 << 2)
label_354844:
    if (ctx->pc == 0x354844u) {
        ctx->pc = 0x354844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354840u;
        // 0x354844: 0x7fc20000  sq          $v0, 0x0($fp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354848u;
        goto label_354848;
    }
    ctx->pc = 0x354840u;
    {
        const bool branch_taken_0x354840 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x354844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354840u;
        // 0x354844: 0x7fc20000  sq          $v0, 0x0($fp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354840) {
            ctx->pc = 0x354B04u;
            goto label_354b04;
        }
    }
    ctx->pc = 0x354848u;
label_354848:
    // 0x354848: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x354848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_35484c:
    // 0x35484c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_354850:
    if (ctx->pc == 0x354850u) {
        ctx->pc = 0x354850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35484Cu;
        // 0x354850: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354854u;
        goto label_354854;
    }
    ctx->pc = 0x35484Cu;
    {
        const bool branch_taken_0x35484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35484Cu;
        // 0x354850: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35484c) {
            ctx->pc = 0x3549B0u;
            goto label_3549b0;
        }
    }
    ctx->pc = 0x354854u;
label_354854:
    // 0x354854: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x354854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_354858:
    // 0x354858: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x354858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_35485c:
    // 0x35485c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_354860:
    if (ctx->pc == 0x354860u) {
        ctx->pc = 0x354860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35485Cu;
        // 0x354860: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354864u;
        goto label_354864;
    }
    ctx->pc = 0x35485Cu;
    {
        const bool branch_taken_0x35485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35485Cu;
        // 0x354860: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35485c) {
            ctx->pc = 0x35494Cu;
            goto label_35494c;
        }
    }
    ctx->pc = 0x354864u;
label_354864:
    // 0x354864: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x354864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354868:
    // 0x354868: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x354868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_35486c:
    // 0x35486c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x35486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_354870:
    // 0x354870: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x354870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_354874:
    // 0x354874: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
label_354878:
    if (ctx->pc == 0x354878u) {
        ctx->pc = 0x354878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354874u;
        // 0x354878: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35487Cu;
        goto label_35487c;
    }
    ctx->pc = 0x354874u;
    {
        const bool branch_taken_0x354874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x354874) {
            ctx->pc = 0x354878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354874u;
            // 0x354878: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35493Cu;
            goto label_35493c;
        }
    }
    ctx->pc = 0x35487Cu;
label_35487c:
    // 0x35487c: 0xc08a61a  jal         func_229868
label_354880:
    if (ctx->pc == 0x354880u) {
        ctx->pc = 0x354880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35487Cu;
        // 0x354880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354884u;
        goto label_354884;
    }
    ctx->pc = 0x35487Cu;
    SET_GPR_U32(ctx, 31, 0x354884u);
    ctx->pc = 0x354880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35487Cu;
    // 0x354880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x35487Cu, 0x354884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354884u;
label_354884:
    // 0x354884: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_354888:
    if (ctx->pc == 0x354888u) {
        ctx->pc = 0x354888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354884u;
        // 0x354888: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35488Cu;
        goto label_35488c;
    }
    ctx->pc = 0x354884u;
    {
        const bool branch_taken_0x354884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354884u;
        // 0x354888: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354884) {
            ctx->pc = 0x354938u;
            goto label_354938;
        }
    }
    ctx->pc = 0x35488Cu;
label_35488c:
    // 0x35488c: 0x8e040280  lw          $a0, 0x280($s0)
    ctx->pc = 0x35488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_354890:
    // 0x354890: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_354894:
    if (ctx->pc == 0x354894u) {
        ctx->pc = 0x354894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354890u;
        // 0x354894: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354898u;
        goto label_354898;
    }
    ctx->pc = 0x354890u;
    {
        const bool branch_taken_0x354890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x354890) {
            ctx->pc = 0x354894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354890u;
            // 0x354894: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3548A4u;
            goto label_3548a4;
        }
    }
    ctx->pc = 0x354898u;
label_354898:
    // 0x354898: 0x54960028  bnel        $a0, $s6, . + 4 + (0x28 << 2)
label_35489c:
    if (ctx->pc == 0x35489Cu) {
        ctx->pc = 0x35489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354898u;
        // 0x35489c: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3548A0u;
        goto label_3548a0;
    }
    ctx->pc = 0x354898u;
    {
        const bool branch_taken_0x354898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x354898) {
            ctx->pc = 0x35489Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354898u;
            // 0x35489c: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35493Cu;
            goto label_35493c;
        }
    }
    ctx->pc = 0x3548A0u;
label_3548a0:
    // 0x3548a0: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x3548a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_3548a4:
    // 0x3548a4: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x3548a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3548a8:
    // 0x3548a8: 0x223a00a  movz        $s4, $s1, $v1
    ctx->pc = 0x3548a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
label_3548ac:
    // 0x3548ac: 0x3c01b727  lui         $at, 0xB727
    ctx->pc = 0x3548acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46887 << 16));
label_3548b0:
    // 0x3548b0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3548b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_3548b4:
    // 0x3548b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3548b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3548b8:
    // 0x3548b8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3548b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3548bc:
    // 0x3548bc: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x3548bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_3548c0:
    // 0x3548c0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3548c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3548c4:
    // 0x3548c4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3548c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3548c8:
    // 0x3548c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3548c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3548cc:
    // 0x3548cc: 0x0  nop
    ctx->pc = 0x3548ccu;
    // NOP
label_3548d0:
    // 0x3548d0: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_3548d4:
    if (ctx->pc == 0x3548D4u) {
        ctx->pc = 0x3548D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548D0u;
        // 0x3548d4: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3548D8u;
        goto label_3548d8;
    }
    ctx->pc = 0x3548D0u;
    {
        const bool branch_taken_0x3548d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3548d0) {
            ctx->pc = 0x3548D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3548D0u;
            // 0x3548d4: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35493Cu;
            goto label_35493c;
        }
    }
    ctx->pc = 0x3548D8u;
label_3548d8:
    // 0x3548d8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x3548d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_3548dc:
    // 0x3548dc: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3548dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_3548e0:
    // 0x3548e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3548e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3548e4:
    // 0x3548e4: 0x0  nop
    ctx->pc = 0x3548e4u;
    // NOP
label_3548e8:
    // 0x3548e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3548e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3548ec:
    // 0x3548ec: 0x0  nop
    ctx->pc = 0x3548ecu;
    // NOP
label_3548f0:
    // 0x3548f0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_3548f4:
    if (ctx->pc == 0x3548F4u) {
        ctx->pc = 0x3548F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548F0u;
        // 0x3548f4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3548F8u;
        goto label_3548f8;
    }
    ctx->pc = 0x3548F0u;
    {
        const bool branch_taken_0x3548f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3548F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548F0u;
        // 0x3548f4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3548f0) {
            ctx->pc = 0x354938u;
            goto label_354938;
        }
    }
    ctx->pc = 0x3548F8u;
label_3548f8:
    // 0x3548f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3548f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3548fc:
    // 0x3548fc: 0x0  nop
    ctx->pc = 0x3548fcu;
    // NOP
label_354900:
    // 0x354900: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_354904:
    if (ctx->pc == 0x354904u) {
        ctx->pc = 0x354904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354900u;
        // 0x354904: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354908u;
        goto label_354908;
    }
    ctx->pc = 0x354900u;
    {
        const bool branch_taken_0x354900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x354900) {
            ctx->pc = 0x354904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354900u;
            // 0x354904: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35493Cu;
            goto label_35493c;
        }
    }
    ctx->pc = 0x354908u;
label_354908:
    // 0x354908: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x354908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35490c:
    // 0x35490c: 0x0  nop
    ctx->pc = 0x35490cu;
    // NOP
label_354910:
    // 0x354910: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_354914:
    if (ctx->pc == 0x354914u) {
        ctx->pc = 0x354914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354910u;
        // 0x354914: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x354918u;
        goto label_354918;
    }
    ctx->pc = 0x354910u;
    {
        const bool branch_taken_0x354910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354910u;
        // 0x354914: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x354910) {
            ctx->pc = 0x354938u;
            goto label_354938;
        }
    }
    ctx->pc = 0x354918u;
label_354918:
    // 0x354918: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x354918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35491c:
    // 0x35491c: 0x0  nop
    ctx->pc = 0x35491cu;
    // NOP
label_354920:
    // 0x354920: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_354924:
    if (ctx->pc == 0x354924u) {
        ctx->pc = 0x354924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354920u;
        // 0x354924: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354928u;
        goto label_354928;
    }
    ctx->pc = 0x354920u;
    {
        const bool branch_taken_0x354920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x354920) {
            ctx->pc = 0x354924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354920u;
            // 0x354924: 0x92420020  lbu         $v0, 0x20($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35493Cu;
            goto label_35493c;
        }
    }
    ctx->pc = 0x354928u;
label_354928:
    // 0x354928: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x354928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35492c:
    // 0x35492c: 0x0  nop
    ctx->pc = 0x35492cu;
    // NOP
label_354930:
    // 0x354930: 0x45030072  bc1tl       . + 4 + (0x72 << 2)
label_354934:
    if (ctx->pc == 0x354934u) {
        ctx->pc = 0x354934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354930u;
        // 0x354934: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354938u;
        goto label_354938;
    }
    ctx->pc = 0x354930u;
    {
        const bool branch_taken_0x354930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x354930) {
            ctx->pc = 0x354934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354930u;
            // 0x354934: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354AFCu;
            goto label_354afc;
        }
    }
    ctx->pc = 0x354938u;
label_354938:
    // 0x354938: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x354938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_35493c:
    // 0x35493c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35493cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_354940:
    // 0x354940: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x354940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_354944:
    // 0x354944: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_354948:
    if (ctx->pc == 0x354948u) {
        ctx->pc = 0x354948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354944u;
        // 0x354948: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35494Cu;
        goto label_35494c;
    }
    ctx->pc = 0x354944u;
    {
        const bool branch_taken_0x354944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354944u;
        // 0x354948: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354944) {
            ctx->pc = 0x354868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354868;
        }
    }
    ctx->pc = 0x35494Cu;
label_35494c:
    // 0x35494c: 0x6800018  bltz        $s4, . + 4 + (0x18 << 2)
label_354950:
    if (ctx->pc == 0x354950u) {
        ctx->pc = 0x354950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35494Cu;
        // 0x354950: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354954u;
        goto label_354954;
    }
    ctx->pc = 0x35494Cu;
    {
        const bool branch_taken_0x35494c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x354950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35494Cu;
        // 0x354950: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35494c) {
            ctx->pc = 0x3549B0u;
            goto label_3549b0;
        }
    }
    ctx->pc = 0x354954u;
label_354954:
    // 0x354954: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x354954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_354958:
    // 0x354958: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x354958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_35495c:
    // 0x35495c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x35495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_354960:
    // 0x354960: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x354960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_354964:
    // 0x354964: 0x8c470050  lw          $a3, 0x50($v0)
    ctx->pc = 0x354964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_354968:
    // 0x354968: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x354968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_35496c:
    // 0x35496c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x35496cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_354970:
    // 0x354970: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x354970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_354974:
    // 0x354974: 0xc0f809  jalr        $a2
label_354978:
    if (ctx->pc == 0x354978u) {
        ctx->pc = 0x354978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354974u;
        // 0x354978: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35497Cu;
        goto label_35497c;
    }
    ctx->pc = 0x354974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x35497Cu);
        ctx->pc = 0x354978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354974u;
        // 0x354978: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354974u, 0x35497Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35497Cu;
label_35497c:
    // 0x35497c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x35497cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_354980:
    // 0x354980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x354980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_354984:
    // 0x354984: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x354984u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
label_354988:
    // 0x354988: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x354988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_35498c:
    // 0x35498c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x35498cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_354990:
    // 0x354990: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x354990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_354994:
    // 0x354994: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x354994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_354998:
    // 0x354998: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x354998u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_35499c:
    // 0x35499c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x35499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_3549a0:
    // 0x3549a0: 0x60f809  jalr        $v1
label_3549a4:
    if (ctx->pc == 0x3549A4u) {
        ctx->pc = 0x3549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549A0u;
        // 0x3549a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3549A8u;
        goto label_3549a8;
    }
    ctx->pc = 0x3549A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3549A8u);
        ctx->pc = 0x3549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549A0u;
        // 0x3549a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3549A0u, 0x3549A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3549A8u;
label_3549a8:
    // 0x3549a8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3549a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3549ac:
    // 0x3549ac: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x3549acu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
label_3549b0:
    // 0x3549b0: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x3549b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_3549b4:
    // 0x3549b4: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
label_3549b8:
    if (ctx->pc == 0x3549B8u) {
        ctx->pc = 0x3549B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549B4u;
        // 0x3549b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3549BCu;
        goto label_3549bc;
    }
    ctx->pc = 0x3549B4u;
    {
        const bool branch_taken_0x3549b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3549b4) {
            ctx->pc = 0x3549B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3549B4u;
            // 0x3549b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354B08u;
            goto label_354b08;
        }
    }
    ctx->pc = 0x3549BCu;
label_3549bc:
    // 0x3549bc: 0x56a00052  bnel        $s5, $zero, . + 4 + (0x52 << 2)
label_3549c0:
    if (ctx->pc == 0x3549C0u) {
        ctx->pc = 0x3549C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549BCu;
        // 0x3549c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3549C4u;
        goto label_3549c4;
    }
    ctx->pc = 0x3549BCu;
    {
        const bool branch_taken_0x3549bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3549bc) {
            ctx->pc = 0x3549C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3549BCu;
            // 0x3549c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354B08u;
            goto label_354b08;
        }
    }
    ctx->pc = 0x3549C4u;
label_3549c4:
    // 0x3549c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3549c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3549c8:
    // 0x3549c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3549c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3549cc:
    // 0x3549cc: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x3549ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3549d0:
    // 0x3549d0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_3549d4:
    if (ctx->pc == 0x3549D4u) {
        ctx->pc = 0x3549D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549D0u;
        // 0x3549d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3549D8u;
        goto label_3549d8;
    }
    ctx->pc = 0x3549D0u;
    {
        const bool branch_taken_0x3549d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3549D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549D0u;
        // 0x3549d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3549d0) {
            ctx->pc = 0x354A90u;
            goto label_354a90;
        }
    }
    ctx->pc = 0x3549D8u;
label_3549d8:
    // 0x3549d8: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x3549d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_3549dc:
    // 0x3549dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3549dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3549e0:
    // 0x3549e0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3549e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3549e4:
    // 0x3549e4: 0x0  nop
    ctx->pc = 0x3549e4u;
    // NOP
label_3549e8:
    // 0x3549e8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x3549e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3549ec:
    // 0x3549ec: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_3549f0:
    if (ctx->pc == 0x3549F0u) {
        ctx->pc = 0x3549F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549ECu;
        // 0x3549f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3549F4u;
        goto label_3549f4;
    }
    ctx->pc = 0x3549ECu;
    {
        const bool branch_taken_0x3549ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3549ec) {
            ctx->pc = 0x3549F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3549ECu;
            // 0x3549f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354A84u;
            goto label_354a84;
        }
    }
    ctx->pc = 0x3549F4u;
label_3549f4:
    // 0x3549f4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x3549f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_3549f8:
    // 0x3549f8: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x3549f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3549fc:
    // 0x3549fc: 0x3c01b727  lui         $at, 0xB727
    ctx->pc = 0x3549fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46887 << 16));
label_354a00:
    // 0x354a00: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x354a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_354a04:
    // 0x354a04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x354a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_354a08:
    // 0x354a08: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x354a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_354a0c:
    // 0x354a0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x354a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354a10:
    // 0x354a10: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x354a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354a14:
    // 0x354a14: 0x0  nop
    ctx->pc = 0x354a14u;
    // NOP
label_354a18:
    // 0x354a18: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_354a1c:
    if (ctx->pc == 0x354A1Cu) {
        ctx->pc = 0x354A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A18u;
        // 0x354a1c: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A20u;
        goto label_354a20;
    }
    ctx->pc = 0x354A18u;
    {
        const bool branch_taken_0x354a18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A18u;
        // 0x354a1c: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a18) {
            ctx->pc = 0x354A80u;
            goto label_354a80;
        }
    }
    ctx->pc = 0x354A20u;
label_354a20:
    // 0x354a20: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x354a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_354a24:
    // 0x354a24: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x354a24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_354a28:
    // 0x354a28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x354a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354a2c:
    // 0x354a2c: 0x0  nop
    ctx->pc = 0x354a2cu;
    // NOP
label_354a30:
    // 0x354a30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x354a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354a34:
    // 0x354a34: 0x0  nop
    ctx->pc = 0x354a34u;
    // NOP
label_354a38:
    // 0x354a38: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_354a3c:
    if (ctx->pc == 0x354A3Cu) {
        ctx->pc = 0x354A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A38u;
        // 0x354a3c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A40u;
        goto label_354a40;
    }
    ctx->pc = 0x354A38u;
    {
        const bool branch_taken_0x354a38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A38u;
        // 0x354a3c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a38) {
            ctx->pc = 0x354A80u;
            goto label_354a80;
        }
    }
    ctx->pc = 0x354A40u;
label_354a40:
    // 0x354a40: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x354a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354a44:
    // 0x354a44: 0x0  nop
    ctx->pc = 0x354a44u;
    // NOP
label_354a48:
    // 0x354a48: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_354a4c:
    if (ctx->pc == 0x354A4Cu) {
        ctx->pc = 0x354A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A48u;
        // 0x354a4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A50u;
        goto label_354a50;
    }
    ctx->pc = 0x354A48u;
    {
        const bool branch_taken_0x354a48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x354a48) {
            ctx->pc = 0x354A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354A48u;
            // 0x354a4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354A84u;
            goto label_354a84;
        }
    }
    ctx->pc = 0x354A50u;
label_354a50:
    // 0x354a50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x354a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354a54:
    // 0x354a54: 0x0  nop
    ctx->pc = 0x354a54u;
    // NOP
label_354a58:
    // 0x354a58: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_354a5c:
    if (ctx->pc == 0x354A5Cu) {
        ctx->pc = 0x354A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A58u;
        // 0x354a5c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A60u;
        goto label_354a60;
    }
    ctx->pc = 0x354A58u;
    {
        const bool branch_taken_0x354a58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A58u;
        // 0x354a5c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a58) {
            ctx->pc = 0x354A80u;
            goto label_354a80;
        }
    }
    ctx->pc = 0x354A60u;
label_354a60:
    // 0x354a60: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x354a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354a64:
    // 0x354a64: 0x0  nop
    ctx->pc = 0x354a64u;
    // NOP
label_354a68:
    // 0x354a68: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_354a6c:
    if (ctx->pc == 0x354A6Cu) {
        ctx->pc = 0x354A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A68u;
        // 0x354a6c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A70u;
        goto label_354a70;
    }
    ctx->pc = 0x354A68u;
    {
        const bool branch_taken_0x354a68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x354a68) {
            ctx->pc = 0x354A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354A68u;
            // 0x354a6c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354A84u;
            goto label_354a84;
        }
    }
    ctx->pc = 0x354A70u;
label_354a70:
    // 0x354a70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x354a70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354a74:
    // 0x354a74: 0x0  nop
    ctx->pc = 0x354a74u;
    // NOP
label_354a78:
    // 0x354a78: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_354a7c:
    if (ctx->pc == 0x354A7Cu) {
        ctx->pc = 0x354A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A78u;
        // 0x354a7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A80u;
        goto label_354a80;
    }
    ctx->pc = 0x354A78u;
    {
        const bool branch_taken_0x354a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x354a78) {
            ctx->pc = 0x354A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354A78u;
            // 0x354a7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354A90u;
            goto label_354a90;
        }
    }
    ctx->pc = 0x354A80u;
label_354a80:
    // 0x354a80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x354a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_354a84:
    // 0x354a84: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x354a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_354a88:
    // 0x354a88: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_354a8c:
    if (ctx->pc == 0x354A8Cu) {
        ctx->pc = 0x354A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A88u;
        // 0x354a8c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A90u;
        goto label_354a90;
    }
    ctx->pc = 0x354A88u;
    {
        const bool branch_taken_0x354a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A88u;
        // 0x354a8c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a88) {
            ctx->pc = 0x3549E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3549e8;
        }
    }
    ctx->pc = 0x354A90u;
label_354a90:
    // 0x354a90: 0x4a00018  bltz        $a1, . + 4 + (0x18 << 2)
label_354a94:
    if (ctx->pc == 0x354A94u) {
        ctx->pc = 0x354A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A90u;
        // 0x354a94: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354A98u;
        goto label_354a98;
    }
    ctx->pc = 0x354A90u;
    {
        const bool branch_taken_0x354a90 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x354A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A90u;
        // 0x354a94: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a90) {
            ctx->pc = 0x354AF4u;
            goto label_354af4;
        }
    }
    ctx->pc = 0x354A98u;
label_354a98:
    // 0x354a98: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x354a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_354a9c:
    // 0x354a9c: 0xb08018  mult        $s0, $a1, $s0
    ctx->pc = 0x354a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_354aa0:
    // 0x354aa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x354aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_354aa4:
    // 0x354aa4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x354aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_354aa8:
    // 0x354aa8: 0x8c470050  lw          $a3, 0x50($v0)
    ctx->pc = 0x354aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_354aac:
    // 0x354aac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x354aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_354ab0:
    // 0x354ab0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x354ab0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_354ab4:
    // 0x354ab4: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x354ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_354ab8:
    // 0x354ab8: 0xc0f809  jalr        $a2
label_354abc:
    if (ctx->pc == 0x354ABCu) {
        ctx->pc = 0x354ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AB8u;
        // 0x354abc: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354AC0u;
        goto label_354ac0;
    }
    ctx->pc = 0x354AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x354AC0u);
        ctx->pc = 0x354ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AB8u;
        // 0x354abc: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354AB8u, 0x354AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354AC0u;
label_354ac0:
    // 0x354ac0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x354ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_354ac4:
    // 0x354ac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x354ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_354ac8:
    // 0x354ac8: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x354ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
label_354acc:
    // 0x354acc: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x354accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_354ad0:
    // 0x354ad0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x354ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_354ad4:
    // 0x354ad4: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x354ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_354ad8:
    // 0x354ad8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x354ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_354adc:
    // 0x354adc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x354adcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_354ae0:
    // 0x354ae0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x354ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_354ae4:
    // 0x354ae4: 0x60f809  jalr        $v1
label_354ae8:
    if (ctx->pc == 0x354AE8u) {
        ctx->pc = 0x354AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AE4u;
        // 0x354ae8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354AECu;
        goto label_354aec;
    }
    ctx->pc = 0x354AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x354AECu);
        ctx->pc = 0x354AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AE4u;
        // 0x354ae8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354AE4u, 0x354AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354AECu;
label_354aec:
    // 0x354aec: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x354aecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_354af0:
    // 0x354af0: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x354af0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
label_354af4:
    // 0x354af4: 0x10000004  b           . + 4 + (0x4 << 2)
label_354af8:
    if (ctx->pc == 0x354AF8u) {
        ctx->pc = 0x354AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AF4u;
        // 0x354af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354AFCu;
        goto label_354afc;
    }
    ctx->pc = 0x354AF4u;
    {
        const bool branch_taken_0x354af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AF4u;
        // 0x354af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354af4) {
            ctx->pc = 0x354B08u;
            goto label_354b08;
        }
    }
    ctx->pc = 0x354AFCu;
label_354afc:
    // 0x354afc: 0x1000ff93  b           . + 4 + (-0x6D << 2)
label_354b00:
    if (ctx->pc == 0x354B00u) {
        ctx->pc = 0x354B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AFCu;
        // 0x354b00: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354B04u;
        goto label_354b04;
    }
    ctx->pc = 0x354AFCu;
    {
        const bool branch_taken_0x354afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AFCu;
        // 0x354b00: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354afc) {
            ctx->pc = 0x35494Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35494c;
        }
    }
    ctx->pc = 0x354B04u;
label_354b04:
    // 0x354b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354b08:
    // 0x354b08: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x354b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_354b0c:
    // 0x354b0c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x354b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_354b10:
    // 0x354b10: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x354b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_354b14:
    // 0x354b14: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x354b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_354b18:
    // 0x354b18: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x354b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_354b1c:
    // 0x354b1c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x354b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_354b20:
    // 0x354b20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x354b20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_354b24:
    // 0x354b24: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x354b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_354b28:
    // 0x354b28: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x354b28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_354b2c:
    // 0x354b2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x354b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_354b30:
    // 0x354b30: 0x3e00008  jr          $ra
label_354b34:
    if (ctx->pc == 0x354B34u) {
        ctx->pc = 0x354B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B30u;
        // 0x354b34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354B38u;
        goto label_fallthrough_0x354b30;
    }
    ctx->pc = 0x354B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B30u;
        // 0x354b34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x354b30:
    ctx->pc = 0x354B38u;
}
