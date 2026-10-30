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

// Function: sub_004E97C0
// Address: 0x4e97c0 - 0x4e9960
void sub_004E97C0_0x4e97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E97C0_0x4e97c0");
#endif

    switch (ctx->pc) {
        case 0x4e97c0u: goto label_4e97c0;
        case 0x4e97c4u: goto label_4e97c4;
        case 0x4e97c8u: goto label_4e97c8;
        case 0x4e97ccu: goto label_4e97cc;
        case 0x4e97d0u: goto label_4e97d0;
        case 0x4e97d4u: goto label_4e97d4;
        case 0x4e97d8u: goto label_4e97d8;
        case 0x4e97dcu: goto label_4e97dc;
        case 0x4e97e0u: goto label_4e97e0;
        case 0x4e97e4u: goto label_4e97e4;
        case 0x4e97e8u: goto label_4e97e8;
        case 0x4e97ecu: goto label_4e97ec;
        case 0x4e97f0u: goto label_4e97f0;
        case 0x4e97f4u: goto label_4e97f4;
        case 0x4e97f8u: goto label_4e97f8;
        case 0x4e97fcu: goto label_4e97fc;
        case 0x4e9800u: goto label_4e9800;
        case 0x4e9804u: goto label_4e9804;
        case 0x4e9808u: goto label_4e9808;
        case 0x4e980cu: goto label_4e980c;
        case 0x4e9810u: goto label_4e9810;
        case 0x4e9814u: goto label_4e9814;
        case 0x4e9818u: goto label_4e9818;
        case 0x4e981cu: goto label_4e981c;
        case 0x4e9820u: goto label_4e9820;
        case 0x4e9824u: goto label_4e9824;
        case 0x4e9828u: goto label_4e9828;
        case 0x4e982cu: goto label_4e982c;
        case 0x4e9830u: goto label_4e9830;
        case 0x4e9834u: goto label_4e9834;
        case 0x4e9838u: goto label_4e9838;
        case 0x4e983cu: goto label_4e983c;
        case 0x4e9840u: goto label_4e9840;
        case 0x4e9844u: goto label_4e9844;
        case 0x4e9848u: goto label_4e9848;
        case 0x4e984cu: goto label_4e984c;
        case 0x4e9850u: goto label_4e9850;
        case 0x4e9854u: goto label_4e9854;
        case 0x4e9858u: goto label_4e9858;
        case 0x4e985cu: goto label_4e985c;
        case 0x4e9860u: goto label_4e9860;
        case 0x4e9864u: goto label_4e9864;
        case 0x4e9868u: goto label_4e9868;
        case 0x4e986cu: goto label_4e986c;
        case 0x4e9870u: goto label_4e9870;
        case 0x4e9874u: goto label_4e9874;
        case 0x4e9878u: goto label_4e9878;
        case 0x4e987cu: goto label_4e987c;
        case 0x4e9880u: goto label_4e9880;
        case 0x4e9884u: goto label_4e9884;
        case 0x4e9888u: goto label_4e9888;
        case 0x4e988cu: goto label_4e988c;
        case 0x4e9890u: goto label_4e9890;
        case 0x4e9894u: goto label_4e9894;
        case 0x4e9898u: goto label_4e9898;
        case 0x4e989cu: goto label_4e989c;
        case 0x4e98a0u: goto label_4e98a0;
        case 0x4e98a4u: goto label_4e98a4;
        case 0x4e98a8u: goto label_4e98a8;
        case 0x4e98acu: goto label_4e98ac;
        case 0x4e98b0u: goto label_4e98b0;
        case 0x4e98b4u: goto label_4e98b4;
        case 0x4e98b8u: goto label_4e98b8;
        case 0x4e98bcu: goto label_4e98bc;
        case 0x4e98c0u: goto label_4e98c0;
        case 0x4e98c4u: goto label_4e98c4;
        case 0x4e98c8u: goto label_4e98c8;
        case 0x4e98ccu: goto label_4e98cc;
        case 0x4e98d0u: goto label_4e98d0;
        case 0x4e98d4u: goto label_4e98d4;
        case 0x4e98d8u: goto label_4e98d8;
        case 0x4e98dcu: goto label_4e98dc;
        case 0x4e98e0u: goto label_4e98e0;
        case 0x4e98e4u: goto label_4e98e4;
        case 0x4e98e8u: goto label_4e98e8;
        case 0x4e98ecu: goto label_4e98ec;
        case 0x4e98f0u: goto label_4e98f0;
        case 0x4e98f4u: goto label_4e98f4;
        case 0x4e98f8u: goto label_4e98f8;
        case 0x4e98fcu: goto label_4e98fc;
        case 0x4e9900u: goto label_4e9900;
        case 0x4e9904u: goto label_4e9904;
        case 0x4e9908u: goto label_4e9908;
        case 0x4e990cu: goto label_4e990c;
        case 0x4e9910u: goto label_4e9910;
        case 0x4e9914u: goto label_4e9914;
        case 0x4e9918u: goto label_4e9918;
        case 0x4e991cu: goto label_4e991c;
        case 0x4e9920u: goto label_4e9920;
        case 0x4e9924u: goto label_4e9924;
        case 0x4e9928u: goto label_4e9928;
        case 0x4e992cu: goto label_4e992c;
        case 0x4e9930u: goto label_4e9930;
        case 0x4e9934u: goto label_4e9934;
        case 0x4e9938u: goto label_4e9938;
        case 0x4e993cu: goto label_4e993c;
        case 0x4e9940u: goto label_4e9940;
        case 0x4e9944u: goto label_4e9944;
        case 0x4e9948u: goto label_4e9948;
        case 0x4e994cu: goto label_4e994c;
        case 0x4e9950u: goto label_4e9950;
        case 0x4e9954u: goto label_4e9954;
        case 0x4e9958u: goto label_4e9958;
        case 0x4e995cu: goto label_4e995c;
        default: break;
    }

    ctx->pc = 0x4e97c0u;

label_4e97c0:
    // 0x4e97c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e97c4:
    // 0x4e97c4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e97c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e97c8:
    // 0x4e97c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e97cc:
    // 0x4e97cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e97ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e97d0:
    // 0x4e97d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e97d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e97d4:
    // 0x4e97d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e97d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e97d8:
    // 0x4e97d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e97d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e97dc:
    // 0x4e97dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e97dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e97e0:
    // 0x4e97e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e97e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e97e4:
    // 0x4e97e4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e97e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e97e8:
    // 0x4e97e8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e97e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e97ec:
    // 0x4e97ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e97ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e97f0:
    // 0x4e97f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e97f4:
    // 0x4e97f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e97f8:
    // 0x4e97f8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e97fc:
    if (ctx->pc == 0x4E97FCu) {
        ctx->pc = 0x4E97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E97F8u;
        // 0x4e97fc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9800u;
        goto label_4e9800;
    }
    ctx->pc = 0x4E97F8u;
    {
        const bool branch_taken_0x4e97f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E97F8u;
        // 0x4e97fc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e97f8) {
            ctx->pc = 0x4E9844u;
            goto label_4e9844;
        }
    }
    ctx->pc = 0x4E9800u;
label_4e9800:
    // 0x4e9800: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e9804:
    if (ctx->pc == 0x4E9804u) {
        ctx->pc = 0x4E9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9800u;
        // 0x4e9804: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9808u;
        goto label_4e9808;
    }
    ctx->pc = 0x4E9800u;
    {
        const bool branch_taken_0x4e9800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9800) {
            ctx->pc = 0x4E9804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9800u;
            // 0x4e9804: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9814u;
            goto label_4e9814;
        }
    }
    ctx->pc = 0x4E9808u;
label_4e9808:
    // 0x4e9808: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e980c:
    // 0x4e980c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e980cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e9810:
    // 0x4e9810: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e9810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9814:
    // 0x4e9814: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e9814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e9818:
    // 0x4e9818: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e9818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e981c:
    // 0x4e981c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e9820:
    // 0x4e9820: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e9820u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e9824:
    // 0x4e9824: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e9824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e9828:
    // 0x4e9828: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e9828u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e982c:
    // 0x4e982c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e982cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e9830:
    // 0x4e9830: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e9830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e9834:
    // 0x4e9834: 0xc10c1bb  jal         func_4306EC
label_4e9838:
    if (ctx->pc == 0x4E9838u) {
        ctx->pc = 0x4E9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9834u;
        // 0x4e9838: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E983Cu;
        goto label_4e983c;
    }
    ctx->pc = 0x4E9834u;
    SET_GPR_U32(ctx, 31, 0x4E983Cu);
    ctx->pc = 0x4E9838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9834u;
    // 0x4e9838: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E9834u, 0x4E983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E983Cu;
label_4e983c:
    // 0x4e983c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e9840:
    if (ctx->pc == 0x4E9840u) {
        ctx->pc = 0x4E9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E983Cu;
        // 0x4e9840: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9844u;
        goto label_4e9844;
    }
    ctx->pc = 0x4E983Cu;
    {
        const bool branch_taken_0x4e983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E983Cu;
        // 0x4e9840: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e983c) {
            ctx->pc = 0x4E9934u;
            goto label_4e9934;
        }
    }
    ctx->pc = 0x4E9844u;
label_4e9844:
    // 0x4e9844: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9848:
    // 0x4e9848: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e9848u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e984c:
    // 0x4e984c: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e984cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e9850:
    // 0x4e9850: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e9850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e9854:
    // 0x4e9854: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e9854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e9858:
    // 0x4e9858: 0x24966c58  addiu       $s6, $a0, 0x6C58
    ctx->pc = 0x4e9858u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 27736));
label_4e985c:
    // 0x4e985c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e985cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e9860:
    // 0x4e9860: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e9860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e9864:
    // 0x4e9864: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e9864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e9868:
    // 0x4e9868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e9868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e986c:
    // 0x4e986c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e986cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e9870:
    // 0x4e9870: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e9870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e9874:
    // 0x4e9874: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e9874u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e9878:
    // 0x4e9878: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e9878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e987c:
    // 0x4e987c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e9880:
    // 0x4e9880: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e9880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e9884:
    // 0x4e9884: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e9884u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e9888:
    // 0x4e9888: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e9888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e988c:
    // 0x4e988c: 0x24a56c50  addiu       $a1, $a1, 0x6C50
    ctx->pc = 0x4e988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27728));
label_4e9890:
    // 0x4e9890: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e9890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e9894:
    // 0x4e9894: 0x254a6c80  addiu       $t2, $t2, 0x6C80
    ctx->pc = 0x4e9894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27776));
label_4e9898:
    // 0x4e9898: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e9898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e989c:
    // 0x4e989c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e989cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e98a0:
    // 0x4e98a0: 0x40f809  jalr        $v0
label_4e98a4:
    if (ctx->pc == 0x4E98A4u) {
        ctx->pc = 0x4E98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E98A0u;
        // 0x4e98a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E98A8u;
        goto label_4e98a8;
    }
    ctx->pc = 0x4E98A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E98A8u);
        ctx->pc = 0x4E98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E98A0u;
        // 0x4e98a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E98A0u, 0x4E98A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E98A8u;
label_4e98a8:
    // 0x4e98a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e98a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e98ac:
    // 0x4e98ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e98acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e98b0:
    // 0x4e98b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e98b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e98b4:
    // 0x4e98b4: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e98b8:
    // 0x4e98b8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e98b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e98bc:
    // 0x4e98bc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e98bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e98c0:
    // 0x4e98c0: 0xc10c1bb  jal         func_4306EC
label_4e98c4:
    if (ctx->pc == 0x4E98C4u) {
        ctx->pc = 0x4E98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E98C0u;
        // 0x4e98c4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E98C8u;
        goto label_4e98c8;
    }
    ctx->pc = 0x4E98C0u;
    SET_GPR_U32(ctx, 31, 0x4E98C8u);
    ctx->pc = 0x4E98C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E98C0u;
    // 0x4e98c4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E98C0u, 0x4E98C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E98C8u;
label_4e98c8:
    // 0x4e98c8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e98cc:
    if (ctx->pc == 0x4E98CCu) {
        ctx->pc = 0x4E98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E98C8u;
        // 0x4e98cc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E98D0u;
        goto label_4e98d0;
    }
    ctx->pc = 0x4E98C8u;
    {
        const bool branch_taken_0x4e98c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e98c8) {
            ctx->pc = 0x4E98CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E98C8u;
            // 0x4e98cc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E98DCu;
            goto label_4e98dc;
        }
    }
    ctx->pc = 0x4E98D0u;
label_4e98d0:
    // 0x4e98d0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e98d4:
    // 0x4e98d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e98d8:
    // 0x4e98d8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e98d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e98dc:
    // 0x4e98dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e98dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e98e0:
    // 0x4e98e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e98e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e98e4:
    // 0x4e98e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e98e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e98e8:
    // 0x4e98e8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e98e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e98ec:
    // 0x4e98ec: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e98ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e98f0:
    // 0x4e98f0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e98f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e98f4:
    // 0x4e98f4: 0xc10c1bb  jal         func_4306EC
label_4e98f8:
    if (ctx->pc == 0x4E98F8u) {
        ctx->pc = 0x4E98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E98F4u;
        // 0x4e98f8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E98FCu;
        goto label_4e98fc;
    }
    ctx->pc = 0x4E98F4u;
    SET_GPR_U32(ctx, 31, 0x4E98FCu);
    ctx->pc = 0x4E98F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E98F4u;
    // 0x4e98f8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E98F4u, 0x4E98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E98FCu;
label_4e98fc:
    // 0x4e98fc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e98fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9900:
    // 0x4e9900: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e9904:
    if (ctx->pc == 0x4E9904u) {
        ctx->pc = 0x4E9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9900u;
        // 0x4e9904: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9908u;
        goto label_4e9908;
    }
    ctx->pc = 0x4E9900u;
    {
        const bool branch_taken_0x4e9900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9900u;
        // 0x4e9904: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9900) {
            ctx->pc = 0x4E9924u;
            goto label_4e9924;
        }
    }
    ctx->pc = 0x4E9908u;
label_4e9908:
    // 0x4e9908: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e9908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e990c:
    // 0x4e990c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e990cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e9910:
    // 0x4e9910: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9914:
    // 0x4e9914: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9918:
    // 0x4e9918: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e991c:
    // 0x4e991c: 0x60f809  jalr        $v1
label_4e9920:
    if (ctx->pc == 0x4E9920u) {
        ctx->pc = 0x4E9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E991Cu;
        // 0x4e9920: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9924u;
        goto label_4e9924;
    }
    ctx->pc = 0x4E991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9924u);
        ctx->pc = 0x4E9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E991Cu;
        // 0x4e9920: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E991Cu, 0x4E9924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9924u;
label_4e9924:
    // 0x4e9924: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e9924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e9928:
    // 0x4e9928: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e9928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e992c:
    // 0x4e992c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e992cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e9930:
    // 0x4e9930: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e9930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e9934:
    // 0x4e9934: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e9934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e9938:
    // 0x4e9938: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e9938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e993c:
    // 0x4e993c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e993cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e9940:
    // 0x4e9940: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e9940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e9944:
    // 0x4e9944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e9944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e9948:
    // 0x4e9948: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e9948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e994c:
    // 0x4e994c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e994cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9950:
    // 0x4e9950: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e9950u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9954:
    // 0x4e9954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9958:
    // 0x4e9958: 0x3e00008  jr          $ra
label_4e995c:
    if (ctx->pc == 0x4E995Cu) {
        ctx->pc = 0x4E995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9958u;
        // 0x4e995c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9960u;
        goto label_fallthrough_0x4e9958;
    }
    ctx->pc = 0x4E9958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9958u;
        // 0x4e995c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e9958:
    ctx->pc = 0x4E9960u;
}
