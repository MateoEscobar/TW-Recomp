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

// Function: sub_002FF898
// Address: 0x2ff898 - 0x2ffb30
void sub_002FF898_0x2ff898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF898_0x2ff898");
#endif

    switch (ctx->pc) {
        case 0x2ff898u: goto label_2ff898;
        case 0x2ff89cu: goto label_2ff89c;
        case 0x2ff8a0u: goto label_2ff8a0;
        case 0x2ff8a4u: goto label_2ff8a4;
        case 0x2ff8a8u: goto label_2ff8a8;
        case 0x2ff8acu: goto label_2ff8ac;
        case 0x2ff8b0u: goto label_2ff8b0;
        case 0x2ff8b4u: goto label_2ff8b4;
        case 0x2ff8b8u: goto label_2ff8b8;
        case 0x2ff8bcu: goto label_2ff8bc;
        case 0x2ff8c0u: goto label_2ff8c0;
        case 0x2ff8c4u: goto label_2ff8c4;
        case 0x2ff8c8u: goto label_2ff8c8;
        case 0x2ff8ccu: goto label_2ff8cc;
        case 0x2ff8d0u: goto label_2ff8d0;
        case 0x2ff8d4u: goto label_2ff8d4;
        case 0x2ff8d8u: goto label_2ff8d8;
        case 0x2ff8dcu: goto label_2ff8dc;
        case 0x2ff8e0u: goto label_2ff8e0;
        case 0x2ff8e4u: goto label_2ff8e4;
        case 0x2ff8e8u: goto label_2ff8e8;
        case 0x2ff8ecu: goto label_2ff8ec;
        case 0x2ff8f0u: goto label_2ff8f0;
        case 0x2ff8f4u: goto label_2ff8f4;
        case 0x2ff8f8u: goto label_2ff8f8;
        case 0x2ff8fcu: goto label_2ff8fc;
        case 0x2ff900u: goto label_2ff900;
        case 0x2ff904u: goto label_2ff904;
        case 0x2ff908u: goto label_2ff908;
        case 0x2ff90cu: goto label_2ff90c;
        case 0x2ff910u: goto label_2ff910;
        case 0x2ff914u: goto label_2ff914;
        case 0x2ff918u: goto label_2ff918;
        case 0x2ff91cu: goto label_2ff91c;
        case 0x2ff920u: goto label_2ff920;
        case 0x2ff924u: goto label_2ff924;
        case 0x2ff928u: goto label_2ff928;
        case 0x2ff92cu: goto label_2ff92c;
        case 0x2ff930u: goto label_2ff930;
        case 0x2ff934u: goto label_2ff934;
        case 0x2ff938u: goto label_2ff938;
        case 0x2ff93cu: goto label_2ff93c;
        case 0x2ff940u: goto label_2ff940;
        case 0x2ff944u: goto label_2ff944;
        case 0x2ff948u: goto label_2ff948;
        case 0x2ff94cu: goto label_2ff94c;
        case 0x2ff950u: goto label_2ff950;
        case 0x2ff954u: goto label_2ff954;
        case 0x2ff958u: goto label_2ff958;
        case 0x2ff95cu: goto label_2ff95c;
        case 0x2ff960u: goto label_2ff960;
        case 0x2ff964u: goto label_2ff964;
        case 0x2ff968u: goto label_2ff968;
        case 0x2ff96cu: goto label_2ff96c;
        case 0x2ff970u: goto label_2ff970;
        case 0x2ff974u: goto label_2ff974;
        case 0x2ff978u: goto label_2ff978;
        case 0x2ff97cu: goto label_2ff97c;
        case 0x2ff980u: goto label_2ff980;
        case 0x2ff984u: goto label_2ff984;
        case 0x2ff988u: goto label_2ff988;
        case 0x2ff98cu: goto label_2ff98c;
        case 0x2ff990u: goto label_2ff990;
        case 0x2ff994u: goto label_2ff994;
        case 0x2ff998u: goto label_2ff998;
        case 0x2ff99cu: goto label_2ff99c;
        case 0x2ff9a0u: goto label_2ff9a0;
        case 0x2ff9a4u: goto label_2ff9a4;
        case 0x2ff9a8u: goto label_2ff9a8;
        case 0x2ff9acu: goto label_2ff9ac;
        case 0x2ff9b0u: goto label_2ff9b0;
        case 0x2ff9b4u: goto label_2ff9b4;
        case 0x2ff9b8u: goto label_2ff9b8;
        case 0x2ff9bcu: goto label_2ff9bc;
        case 0x2ff9c0u: goto label_2ff9c0;
        case 0x2ff9c4u: goto label_2ff9c4;
        case 0x2ff9c8u: goto label_2ff9c8;
        case 0x2ff9ccu: goto label_2ff9cc;
        case 0x2ff9d0u: goto label_2ff9d0;
        case 0x2ff9d4u: goto label_2ff9d4;
        case 0x2ff9d8u: goto label_2ff9d8;
        case 0x2ff9dcu: goto label_2ff9dc;
        case 0x2ff9e0u: goto label_2ff9e0;
        case 0x2ff9e4u: goto label_2ff9e4;
        case 0x2ff9e8u: goto label_2ff9e8;
        case 0x2ff9ecu: goto label_2ff9ec;
        case 0x2ff9f0u: goto label_2ff9f0;
        case 0x2ff9f4u: goto label_2ff9f4;
        case 0x2ff9f8u: goto label_2ff9f8;
        case 0x2ff9fcu: goto label_2ff9fc;
        case 0x2ffa00u: goto label_2ffa00;
        case 0x2ffa04u: goto label_2ffa04;
        case 0x2ffa08u: goto label_2ffa08;
        case 0x2ffa0cu: goto label_2ffa0c;
        case 0x2ffa10u: goto label_2ffa10;
        case 0x2ffa14u: goto label_2ffa14;
        case 0x2ffa18u: goto label_2ffa18;
        case 0x2ffa1cu: goto label_2ffa1c;
        case 0x2ffa20u: goto label_2ffa20;
        case 0x2ffa24u: goto label_2ffa24;
        case 0x2ffa28u: goto label_2ffa28;
        case 0x2ffa2cu: goto label_2ffa2c;
        case 0x2ffa30u: goto label_2ffa30;
        case 0x2ffa34u: goto label_2ffa34;
        case 0x2ffa38u: goto label_2ffa38;
        case 0x2ffa3cu: goto label_2ffa3c;
        case 0x2ffa40u: goto label_2ffa40;
        case 0x2ffa44u: goto label_2ffa44;
        case 0x2ffa48u: goto label_2ffa48;
        case 0x2ffa4cu: goto label_2ffa4c;
        case 0x2ffa50u: goto label_2ffa50;
        case 0x2ffa54u: goto label_2ffa54;
        case 0x2ffa58u: goto label_2ffa58;
        case 0x2ffa5cu: goto label_2ffa5c;
        case 0x2ffa60u: goto label_2ffa60;
        case 0x2ffa64u: goto label_2ffa64;
        case 0x2ffa68u: goto label_2ffa68;
        case 0x2ffa6cu: goto label_2ffa6c;
        case 0x2ffa70u: goto label_2ffa70;
        case 0x2ffa74u: goto label_2ffa74;
        case 0x2ffa78u: goto label_2ffa78;
        case 0x2ffa7cu: goto label_2ffa7c;
        case 0x2ffa80u: goto label_2ffa80;
        case 0x2ffa84u: goto label_2ffa84;
        case 0x2ffa88u: goto label_2ffa88;
        case 0x2ffa8cu: goto label_2ffa8c;
        case 0x2ffa90u: goto label_2ffa90;
        case 0x2ffa94u: goto label_2ffa94;
        case 0x2ffa98u: goto label_2ffa98;
        case 0x2ffa9cu: goto label_2ffa9c;
        case 0x2ffaa0u: goto label_2ffaa0;
        case 0x2ffaa4u: goto label_2ffaa4;
        case 0x2ffaa8u: goto label_2ffaa8;
        case 0x2ffaacu: goto label_2ffaac;
        case 0x2ffab0u: goto label_2ffab0;
        case 0x2ffab4u: goto label_2ffab4;
        case 0x2ffab8u: goto label_2ffab8;
        case 0x2ffabcu: goto label_2ffabc;
        case 0x2ffac0u: goto label_2ffac0;
        case 0x2ffac4u: goto label_2ffac4;
        case 0x2ffac8u: goto label_2ffac8;
        case 0x2ffaccu: goto label_2ffacc;
        case 0x2ffad0u: goto label_2ffad0;
        case 0x2ffad4u: goto label_2ffad4;
        case 0x2ffad8u: goto label_2ffad8;
        case 0x2ffadcu: goto label_2ffadc;
        case 0x2ffae0u: goto label_2ffae0;
        case 0x2ffae4u: goto label_2ffae4;
        case 0x2ffae8u: goto label_2ffae8;
        case 0x2ffaecu: goto label_2ffaec;
        case 0x2ffaf0u: goto label_2ffaf0;
        case 0x2ffaf4u: goto label_2ffaf4;
        case 0x2ffaf8u: goto label_2ffaf8;
        case 0x2ffafcu: goto label_2ffafc;
        case 0x2ffb00u: goto label_2ffb00;
        case 0x2ffb04u: goto label_2ffb04;
        case 0x2ffb08u: goto label_2ffb08;
        case 0x2ffb0cu: goto label_2ffb0c;
        case 0x2ffb10u: goto label_2ffb10;
        case 0x2ffb14u: goto label_2ffb14;
        case 0x2ffb18u: goto label_2ffb18;
        case 0x2ffb1cu: goto label_2ffb1c;
        case 0x2ffb20u: goto label_2ffb20;
        case 0x2ffb24u: goto label_2ffb24;
        case 0x2ffb28u: goto label_2ffb28;
        case 0x2ffb2cu: goto label_2ffb2c;
        default: break;
    }

    ctx->pc = 0x2ff898u;

label_2ff898:
    // 0x2ff898: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ff898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ff89c:
    // 0x2ff89c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ff89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ff8a0:
    // 0x2ff8a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ff8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2ff8a4:
    // 0x2ff8a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ff8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8a8:
    // 0x2ff8a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ff8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2ff8ac:
    // 0x2ff8ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ff8acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8b0:
    // 0x2ff8b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ff8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2ff8b4:
    // 0x2ff8b4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ff8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2ff8b8:
    // 0x2ff8b8: 0x12600095  beqz        $s3, . + 4 + (0x95 << 2)
label_2ff8bc:
    if (ctx->pc == 0x2FF8BCu) {
        ctx->pc = 0x2FF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8B8u;
        // 0x2ff8bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8C0u;
        goto label_2ff8c0;
    }
    ctx->pc = 0x2FF8B8u;
    {
        const bool branch_taken_0x2ff8b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8B8u;
        // 0x2ff8bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8b8) {
            ctx->pc = 0x2FFB10u;
            goto label_2ffb10;
        }
    }
    ctx->pc = 0x2FF8C0u;
label_2ff8c0:
    // 0x2ff8c0: 0xc08a076  jal         func_2281D8
label_2ff8c4:
    if (ctx->pc == 0x2FF8C4u) {
        ctx->pc = 0x2FF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8C0u;
        // 0x2ff8c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8C8u;
        goto label_2ff8c8;
    }
    ctx->pc = 0x2FF8C0u;
    SET_GPR_U32(ctx, 31, 0x2FF8C8u);
    ctx->pc = 0x2FF8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8C0u;
    // 0x2ff8c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x2FF8C0u, 0x2FF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8C8u;
label_2ff8c8:
    // 0x2ff8c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8cc:
    // 0x2ff8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff8d0:
    // 0x2ff8d0: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_2ff8d4:
    if (ctx->pc == 0x2FF8D4u) {
        ctx->pc = 0x2FF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8D0u;
        // 0x2ff8d4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8D8u;
        goto label_2ff8d8;
    }
    ctx->pc = 0x2FF8D0u;
    {
        const bool branch_taken_0x2ff8d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff8d0) {
            ctx->pc = 0x2FF8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF8D0u;
            // 0x2ff8d4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF8F0u;
            goto label_2ff8f0;
        }
    }
    ctx->pc = 0x2FF8D8u;
label_2ff8d8:
    // 0x2ff8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8dc:
    // 0x2ff8dc: 0xc0a4742  jal         func_291D08
label_2ff8e0:
    if (ctx->pc == 0x2FF8E0u) {
        ctx->pc = 0x2FF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8DCu;
        // 0x2ff8e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8E4u;
        goto label_2ff8e4;
    }
    ctx->pc = 0x2FF8DCu;
    SET_GPR_U32(ctx, 31, 0x2FF8E4u);
    ctx->pc = 0x2FF8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8DCu;
    // 0x2ff8e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x2FF8DCu, 0x2FF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8E4u;
label_2ff8e4:
    // 0x2ff8e4: 0x1050008b  beq         $v0, $s0, . + 4 + (0x8B << 2)
label_2ff8e8:
    if (ctx->pc == 0x2FF8E8u) {
        ctx->pc = 0x2FF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8E4u;
        // 0x2ff8e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8ECu;
        goto label_2ff8ec;
    }
    ctx->pc = 0x2FF8E4u;
    {
        const bool branch_taken_0x2ff8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8E4u;
        // 0x2ff8e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8e4) {
            ctx->pc = 0x2FFB14u;
            goto label_2ffb14;
        }
    }
    ctx->pc = 0x2FF8ECu;
label_2ff8ec:
    // 0x2ff8ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ff8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ff8f0:
    // 0x2ff8f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ff8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8f4:
    // 0x2ff8f4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2ff8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2ff8f8:
    // 0x2ff8f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff8fc:
    // 0x2ff8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff900:
    // 0x2ff900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff904:
    // 0x2ff904: 0xc0a4d90  jal         func_293640
label_2ff908:
    if (ctx->pc == 0x2FF908u) {
        ctx->pc = 0x2FF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF904u;
        // 0x2ff908: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF90Cu;
        goto label_2ff90c;
    }
    ctx->pc = 0x2FF904u;
    SET_GPR_U32(ctx, 31, 0x2FF90Cu);
    ctx->pc = 0x2FF908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF904u;
    // 0x2ff908: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2FF904u, 0x2FF90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF90Cu;
label_2ff90c:
    // 0x2ff90c: 0xc087502  jal         func_21D408
label_2ff910:
    if (ctx->pc == 0x2FF910u) {
        ctx->pc = 0x2FF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF90Cu;
        // 0x2ff910: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF914u;
        goto label_2ff914;
    }
    ctx->pc = 0x2FF90Cu;
    SET_GPR_U32(ctx, 31, 0x2FF914u);
    ctx->pc = 0x2FF910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF90Cu;
    // 0x2ff910: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FF90Cu, 0x2FF914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF914u;
label_2ff914:
    // 0x2ff914: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ff914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff918:
    // 0x2ff918: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x2ff918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2ff91c:
    // 0x2ff91c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ff920:
    if (ctx->pc == 0x2FF920u) {
        ctx->pc = 0x2FF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF91Cu;
        // 0x2ff920: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF924u;
        goto label_2ff924;
    }
    ctx->pc = 0x2FF91Cu;
    {
        const bool branch_taken_0x2ff91c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF91Cu;
        // 0x2ff920: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff91c) {
            ctx->pc = 0x2FF930u;
            goto label_2ff930;
        }
    }
    ctx->pc = 0x2FF924u;
label_2ff924:
    // 0x2ff924: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ff924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2ff928:
    // 0x2ff928: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff92c:
    if (ctx->pc == 0x2FF92Cu) {
        ctx->pc = 0x2FF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF928u;
        // 0x2ff92c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF930u;
        goto label_2ff930;
    }
    ctx->pc = 0x2FF928u;
    {
        const bool branch_taken_0x2ff928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF928u;
        // 0x2ff92c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff928) {
            ctx->pc = 0x2FF934u;
            goto label_2ff934;
        }
    }
    ctx->pc = 0x2FF930u;
label_2ff930:
    // 0x2ff930: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ff930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff934:
    // 0x2ff934: 0xc0bfc66  jal         func_2FF198
label_2ff938:
    if (ctx->pc == 0x2FF938u) {
        ctx->pc = 0x2FF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF934u;
        // 0x2ff938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF93Cu;
        goto label_2ff93c;
    }
    ctx->pc = 0x2FF934u;
    SET_GPR_U32(ctx, 31, 0x2FF93Cu);
    ctx->pc = 0x2FF938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF934u;
    // 0x2ff938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF198u, 0x2FF934u, 0x2FF93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF93Cu;
label_2ff93c:
    // 0x2ff93c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff940:
    // 0x2ff940: 0x1443003f  bne         $v0, $v1, . + 4 + (0x3F << 2)
label_2ff944:
    if (ctx->pc == 0x2FF944u) {
        ctx->pc = 0x2FF948u;
        goto label_2ff948;
    }
    ctx->pc = 0x2FF940u;
    {
        const bool branch_taken_0x2ff940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff940) {
            ctx->pc = 0x2FFA40u;
            goto label_2ffa40;
        }
    }
    ctx->pc = 0x2FF948u;
label_2ff948:
    // 0x2ff948: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_2ff94c:
    if (ctx->pc == 0x2FF94Cu) {
        ctx->pc = 0x2FF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF948u;
        // 0x2ff94c: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF950u;
        goto label_2ff950;
    }
    ctx->pc = 0x2FF948u;
    {
        const bool branch_taken_0x2ff948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff948) {
            ctx->pc = 0x2FF94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF948u;
            // 0x2ff94c: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF99Cu;
            goto label_2ff99c;
        }
    }
    ctx->pc = 0x2FF950u;
label_2ff950:
    // 0x2ff950: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ff950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ff954:
    // 0x2ff954: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff958:
    // 0x2ff958: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff95c:
    // 0x2ff95c: 0x40f809  jalr        $v0
label_2ff960:
    if (ctx->pc == 0x2FF960u) {
        ctx->pc = 0x2FF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF95Cu;
        // 0x2ff960: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF964u;
        goto label_2ff964;
    }
    ctx->pc = 0x2FF95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF964u);
        ctx->pc = 0x2FF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF95Cu;
        // 0x2ff960: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF95Cu, 0x2FF964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF964u;
label_2ff964:
    // 0x2ff964: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ff964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ff968:
    // 0x2ff968: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_2ff96c:
    if (ctx->pc == 0x2FF96Cu) {
        ctx->pc = 0x2FF970u;
        goto label_2ff970;
    }
    ctx->pc = 0x2FF968u;
    {
        const bool branch_taken_0x2ff968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ff968) {
            ctx->pc = 0x2FF990u;
            goto label_2ff990;
        }
    }
    ctx->pc = 0x2FF970u;
label_2ff970:
    // 0x2ff970: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ff970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ff974:
    // 0x2ff974: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff978:
    // 0x2ff978: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff97c:
    // 0x2ff97c: 0x40f809  jalr        $v0
label_2ff980:
    if (ctx->pc == 0x2FF980u) {
        ctx->pc = 0x2FF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF97Cu;
        // 0x2ff980: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF984u;
        goto label_2ff984;
    }
    ctx->pc = 0x2FF97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF984u);
        ctx->pc = 0x2FF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF97Cu;
        // 0x2ff980: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF97Cu, 0x2FF984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF984u;
label_2ff984:
    // 0x2ff984: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2ff984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2ff988:
    // 0x2ff988: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2ff98c:
    if (ctx->pc == 0x2FF98Cu) {
        ctx->pc = 0x2FF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF988u;
        // 0x2ff98c: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF990u;
        goto label_2ff990;
    }
    ctx->pc = 0x2FF988u;
    {
        const bool branch_taken_0x2ff988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff988) {
            ctx->pc = 0x2FF98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF988u;
            // 0x2ff98c: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF99Cu;
            goto label_2ff99c;
        }
    }
    ctx->pc = 0x2FF990u;
label_2ff990:
    // 0x2ff990: 0xc0a35f6  jal         func_28D7D8
label_2ff994:
    if (ctx->pc == 0x2FF994u) {
        ctx->pc = 0x2FF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF990u;
        // 0x2ff994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF998u;
        goto label_2ff998;
    }
    ctx->pc = 0x2FF990u;
    SET_GPR_U32(ctx, 31, 0x2FF998u);
    ctx->pc = 0x2FF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF990u;
    // 0x2ff994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2FF990u, 0x2FF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF998u;
label_2ff998:
    // 0x2ff998: 0x8e43026c  lw          $v1, 0x26C($s2)
    ctx->pc = 0x2ff998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_2ff99c:
    // 0x2ff99c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ff99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff9a0:
    // 0x2ff9a0: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_2ff9a4:
    if (ctx->pc == 0x2FF9A4u) {
        ctx->pc = 0x2FF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9A0u;
        // 0x2ff9a4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9A8u;
        goto label_2ff9a8;
    }
    ctx->pc = 0x2FF9A0u;
    {
        const bool branch_taken_0x2ff9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff9a0) {
            ctx->pc = 0x2FF9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF9A0u;
            // 0x2ff9a4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA04u;
            goto label_2ffa04;
        }
    }
    ctx->pc = 0x2FF9A8u;
label_2ff9a8:
    // 0x2ff9a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff9ac:
    // 0x2ff9ac: 0xc0a408c  jal         func_290230
label_2ff9b0:
    if (ctx->pc == 0x2FF9B0u) {
        ctx->pc = 0x2FF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9ACu;
        // 0x2ff9b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9B4u;
        goto label_2ff9b4;
    }
    ctx->pc = 0x2FF9ACu;
    SET_GPR_U32(ctx, 31, 0x2FF9B4u);
    ctx->pc = 0x2FF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9ACu;
    // 0x2ff9b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2FF9ACu, 0x2FF9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9B4u;
label_2ff9b4:
    // 0x2ff9b4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2ff9b8:
    if (ctx->pc == 0x2FF9B8u) {
        ctx->pc = 0x2FF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9B4u;
        // 0x2ff9b8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9BCu;
        goto label_2ff9bc;
    }
    ctx->pc = 0x2FF9B4u;
    {
        const bool branch_taken_0x2ff9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9b4) {
            ctx->pc = 0x2FF9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF9B4u;
            // 0x2ff9b8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA04u;
            goto label_2ffa04;
        }
    }
    ctx->pc = 0x2FF9BCu;
label_2ff9bc:
    // 0x2ff9bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff9c0:
    // 0x2ff9c0: 0xc0a404e  jal         func_290138
label_2ff9c4:
    if (ctx->pc == 0x2FF9C4u) {
        ctx->pc = 0x2FF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9C0u;
        // 0x2ff9c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9C8u;
        goto label_2ff9c8;
    }
    ctx->pc = 0x2FF9C0u;
    SET_GPR_U32(ctx, 31, 0x2FF9C8u);
    ctx->pc = 0x2FF9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9C0u;
    // 0x2ff9c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2FF9C0u, 0x2FF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9C8u;
label_2ff9c8:
    // 0x2ff9c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ff9cc:
    if (ctx->pc == 0x2FF9CCu) {
        ctx->pc = 0x2FF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9C8u;
        // 0x2ff9cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9D0u;
        goto label_2ff9d0;
    }
    ctx->pc = 0x2FF9C8u;
    {
        const bool branch_taken_0x2ff9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9C8u;
        // 0x2ff9cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9c8) {
            ctx->pc = 0x2FF9E0u;
            goto label_2ff9e0;
        }
    }
    ctx->pc = 0x2FF9D0u;
label_2ff9d0:
    // 0x2ff9d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ff9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ff9d4:
    // 0x2ff9d4: 0xc0a40ca  jal         func_290328
label_2ff9d8:
    if (ctx->pc == 0x2FF9D8u) {
        ctx->pc = 0x2FF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9D4u;
        // 0x2ff9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9DCu;
        goto label_2ff9dc;
    }
    ctx->pc = 0x2FF9D4u;
    SET_GPR_U32(ctx, 31, 0x2FF9DCu);
    ctx->pc = 0x2FF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9D4u;
    // 0x2ff9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x2FF9D4u, 0x2FF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9DCu;
label_2ff9dc:
    // 0x2ff9dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ff9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ff9e0:
    // 0x2ff9e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2ff9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2ff9e4:
    // 0x2ff9e4: 0xae42021c  sw          $v0, 0x21C($s2)
    ctx->pc = 0x2ff9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 2));
label_2ff9e8:
    // 0x2ff9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff9ec:
    // 0x2ff9ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ff9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff9f0:
    // 0x2ff9f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2ff9f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2ff9f4:
    // 0x2ff9f4: 0xc0a34ba  jal         func_28D2E8
label_2ff9f8:
    if (ctx->pc == 0x2FF9F8u) {
        ctx->pc = 0x2FF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9F4u;
        // 0x2ff9f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9FCu;
        goto label_2ff9fc;
    }
    ctx->pc = 0x2FF9F4u;
    SET_GPR_U32(ctx, 31, 0x2FF9FCu);
    ctx->pc = 0x2FF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9F4u;
    // 0x2ff9f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2FF9F4u, 0x2FF9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9FCu;
label_2ff9fc:
    // 0x2ff9fc: 0x10000045  b           . + 4 + (0x45 << 2)
label_2ffa00:
    if (ctx->pc == 0x2FFA00u) {
        ctx->pc = 0x2FFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9FCu;
        // 0x2ffa00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA04u;
        goto label_2ffa04;
    }
    ctx->pc = 0x2FF9FCu;
    {
        const bool branch_taken_0x2ff9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9FCu;
        // 0x2ffa00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9fc) {
            ctx->pc = 0x2FFB14u;
            goto label_2ffb14;
        }
    }
    ctx->pc = 0x2FFA04u;
label_2ffa04:
    // 0x2ffa04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ffa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ffa08:
    // 0x2ffa08: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ffa08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ffa0c:
    // 0x2ffa0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ffa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ffa10:
    // 0x2ffa10: 0x40f809  jalr        $v0
label_2ffa14:
    if (ctx->pc == 0x2FFA14u) {
        ctx->pc = 0x2FFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA10u;
        // 0x2ffa14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA18u;
        goto label_2ffa18;
    }
    ctx->pc = 0x2FFA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FFA18u);
        ctx->pc = 0x2FFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA10u;
        // 0x2ffa14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA10u, 0x2FFA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFA18u;
label_2ffa18:
    // 0x2ffa18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ffa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ffa1c:
    // 0x2ffa1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa20:
    // 0x2ffa20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ffa20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ffa24:
    // 0x2ffa24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ffa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ffa28:
    // 0x2ffa28: 0x40f809  jalr        $v0
label_2ffa2c:
    if (ctx->pc == 0x2FFA2Cu) {
        ctx->pc = 0x2FFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA28u;
        // 0x2ffa2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA30u;
        goto label_2ffa30;
    }
    ctx->pc = 0x2FFA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FFA30u);
        ctx->pc = 0x2FFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA28u;
        // 0x2ffa2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA28u, 0x2FFA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFA30u;
label_2ffa30:
    // 0x2ffa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa34:
    // 0x2ffa34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ffa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa38:
    // 0x2ffa38: 0xc0aa924  jal         func_2AA490
label_2ffa3c:
    if (ctx->pc == 0x2FFA3Cu) {
        ctx->pc = 0x2FFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA38u;
        // 0x2ffa3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA40u;
        goto label_2ffa40;
    }
    ctx->pc = 0x2FFA38u;
    SET_GPR_U32(ctx, 31, 0x2FFA40u);
    ctx->pc = 0x2FFA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA38u;
    // 0x2ffa3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA490u, 0x2FFA38u, 0x2FFA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA40u;
label_2ffa40:
    // 0x2ffa40: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_2ffa44:
    if (ctx->pc == 0x2FFA44u) {
        ctx->pc = 0x2FFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA40u;
        // 0x2ffa44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA48u;
        goto label_2ffa48;
    }
    ctx->pc = 0x2FFA40u;
    {
        const bool branch_taken_0x2ffa40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA40u;
        // 0x2ffa44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa40) {
            ctx->pc = 0x2FFAA8u;
            goto label_2ffaa8;
        }
    }
    ctx->pc = 0x2FFA48u;
label_2ffa48:
    // 0x2ffa48: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ffa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ffa4c:
    // 0x2ffa4c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ffa4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ffa50:
    // 0x2ffa50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ffa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ffa54:
    // 0x2ffa54: 0x40f809  jalr        $v0
label_2ffa58:
    if (ctx->pc == 0x2FFA58u) {
        ctx->pc = 0x2FFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA54u;
        // 0x2ffa58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA5Cu;
        goto label_2ffa5c;
    }
    ctx->pc = 0x2FFA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FFA5Cu);
        ctx->pc = 0x2FFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA54u;
        // 0x2ffa58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA54u, 0x2FFA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFA5Cu;
label_2ffa5c:
    // 0x2ffa5c: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x2ffa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2ffa60:
    // 0x2ffa60: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2ffa64:
    if (ctx->pc == 0x2FFA64u) {
        ctx->pc = 0x2FFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA60u;
        // 0x2ffa64: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA68u;
        goto label_2ffa68;
    }
    ctx->pc = 0x2FFA60u;
    {
        const bool branch_taken_0x2ffa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ffa60) {
            ctx->pc = 0x2FFA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFA60u;
            // 0x2ffa64: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA7Cu;
            goto label_2ffa7c;
        }
    }
    ctx->pc = 0x2FFA68u;
label_2ffa68:
    // 0x2ffa68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa6c:
    // 0x2ffa6c: 0xc0aa064  jal         func_2A8190
label_2ffa70:
    if (ctx->pc == 0x2FFA70u) {
        ctx->pc = 0x2FFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA6Cu;
        // 0x2ffa70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA74u;
        goto label_2ffa74;
    }
    ctx->pc = 0x2FFA6Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA74u);
    ctx->pc = 0x2FFA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA6Cu;
    // 0x2ffa70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8190u, 0x2FFA6Cu, 0x2FFA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA74u;
label_2ffa74:
    // 0x2ffa74: 0x1000000c  b           . + 4 + (0xC << 2)
label_2ffa78:
    if (ctx->pc == 0x2FFA78u) {
        ctx->pc = 0x2FFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA74u;
        // 0x2ffa78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA7Cu;
        goto label_2ffa7c;
    }
    ctx->pc = 0x2FFA74u;
    {
        const bool branch_taken_0x2ffa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA74u;
        // 0x2ffa78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa74) {
            ctx->pc = 0x2FFAA8u;
            goto label_2ffaa8;
        }
    }
    ctx->pc = 0x2FFA7Cu;
label_2ffa7c:
    // 0x2ffa7c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ffa7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ffa80:
    // 0x2ffa80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ffa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ffa84:
    // 0x2ffa84: 0x40f809  jalr        $v0
label_2ffa88:
    if (ctx->pc == 0x2FFA88u) {
        ctx->pc = 0x2FFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA84u;
        // 0x2ffa88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA8Cu;
        goto label_2ffa8c;
    }
    ctx->pc = 0x2FFA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FFA8Cu);
        ctx->pc = 0x2FFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA84u;
        // 0x2ffa88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA84u, 0x2FFA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFA8Cu;
label_2ffa8c:
    // 0x2ffa8c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2ffa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2ffa90:
    // 0x2ffa90: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2ffa94:
    if (ctx->pc == 0x2FFA94u) {
        ctx->pc = 0x2FFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA90u;
        // 0x2ffa94: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA98u;
        goto label_2ffa98;
    }
    ctx->pc = 0x2FFA90u;
    {
        const bool branch_taken_0x2ffa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA90u;
        // 0x2ffa94: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa90) {
            ctx->pc = 0x2FFAA8u;
            goto label_2ffaa8;
        }
    }
    ctx->pc = 0x2FFA98u;
label_2ffa98:
    // 0x2ffa98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa9c:
    // 0x2ffa9c: 0xc0ab56a  jal         func_2AD5A8
label_2ffaa0:
    if (ctx->pc == 0x2FFAA0u) {
        ctx->pc = 0x2FFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA9Cu;
        // 0x2ffaa0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAA4u;
        goto label_2ffaa4;
    }
    ctx->pc = 0x2FFA9Cu;
    SET_GPR_U32(ctx, 31, 0x2FFAA4u);
    ctx->pc = 0x2FFAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA9Cu;
    // 0x2ffaa0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD5A8u, 0x2FFA9Cu, 0x2FFAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAA4u;
label_2ffaa4:
    // 0x2ffaa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ffaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ffaa8:
    // 0x2ffaa8: 0xc0a408c  jal         func_290230
label_2ffaac:
    if (ctx->pc == 0x2FFAACu) {
        ctx->pc = 0x2FFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAA8u;
        // 0x2ffaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAB0u;
        goto label_2ffab0;
    }
    ctx->pc = 0x2FFAA8u;
    SET_GPR_U32(ctx, 31, 0x2FFAB0u);
    ctx->pc = 0x2FFAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFAA8u;
    // 0x2ffaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2FFAA8u, 0x2FFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAB0u;
label_2ffab0:
    // 0x2ffab0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ffab4:
    if (ctx->pc == 0x2FFAB4u) {
        ctx->pc = 0x2FFAB8u;
        goto label_2ffab8;
    }
    ctx->pc = 0x2FFAB0u;
    {
        const bool branch_taken_0x2ffab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffab0) {
            ctx->pc = 0x2FFAC4u;
            goto label_2ffac4;
        }
    }
    ctx->pc = 0x2FFAB8u;
label_2ffab8:
    // 0x2ffab8: 0x8e420200  lw          $v0, 0x200($s2)
    ctx->pc = 0x2ffab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
label_2ffabc:
    // 0x2ffabc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ffabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ffac0:
    // 0x2ffac0: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x2ffac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_2ffac4:
    // 0x2ffac4: 0xc08a096  jal         func_228258
label_2ffac8:
    if (ctx->pc == 0x2FFAC8u) {
        ctx->pc = 0x2FFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAC4u;
        // 0x2ffac8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFACCu;
        goto label_2ffacc;
    }
    ctx->pc = 0x2FFAC4u;
    SET_GPR_U32(ctx, 31, 0x2FFACCu);
    ctx->pc = 0x2FFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFAC4u;
    // 0x2ffac8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2FFAC4u, 0x2FFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFACCu;
label_2ffacc:
    // 0x2ffacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffad0:
    // 0x2ffad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffad4:
    // 0x2ffad4: 0x5602000f  bnel        $s0, $v0, . + 4 + (0xF << 2)
label_2ffad8:
    if (ctx->pc == 0x2FFAD8u) {
        ctx->pc = 0x2FFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAD4u;
        // 0x2ffad8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFADCu;
        goto label_2ffadc;
    }
    ctx->pc = 0x2FFAD4u;
    {
        const bool branch_taken_0x2ffad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ffad4) {
            ctx->pc = 0x2FFAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFAD4u;
            // 0x2ffad8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFB14u;
            goto label_2ffb14;
        }
    }
    ctx->pc = 0x2FFADCu;
label_2ffadc:
    // 0x2ffadc: 0xc0874fa  jal         func_21D3E8
label_2ffae0:
    if (ctx->pc == 0x2FFAE0u) {
        ctx->pc = 0x2FFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFADCu;
        // 0x2ffae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAE4u;
        goto label_2ffae4;
    }
    ctx->pc = 0x2FFADCu;
    SET_GPR_U32(ctx, 31, 0x2FFAE4u);
    ctx->pc = 0x2FFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFADCu;
    // 0x2ffae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FFADCu, 0x2FFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAE4u;
label_2ffae4:
    // 0x2ffae4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2ffae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2ffae8:
    // 0x2ffae8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ffae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ffaec:
    // 0x2ffaec: 0x14700009  bne         $v1, $s0, . + 4 + (0x9 << 2)
label_2ffaf0:
    if (ctx->pc == 0x2FFAF0u) {
        ctx->pc = 0x2FFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAECu;
        // 0x2ffaf0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAF4u;
        goto label_2ffaf4;
    }
    ctx->pc = 0x2FFAECu;
    {
        const bool branch_taken_0x2ffaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAECu;
        // 0x2ffaf0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffaec) {
            ctx->pc = 0x2FFB14u;
            goto label_2ffb14;
        }
    }
    ctx->pc = 0x2FFAF4u;
label_2ffaf4:
    // 0x2ffaf4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ffaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ffaf8:
    // 0x2ffaf8: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2ffaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_2ffafc:
    // 0x2ffafc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ffafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2ffb00:
    // 0x2ffb00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ffb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffb04:
    // 0x2ffb04: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2ffb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2ffb08:
    // 0x2ffb08: 0xc0a6800  jal         func_29A000
label_2ffb0c:
    if (ctx->pc == 0x2FFB0Cu) {
        ctx->pc = 0x2FFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB08u;
        // 0x2ffb0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB10u;
        goto label_2ffb10;
    }
    ctx->pc = 0x2FFB08u;
    SET_GPR_U32(ctx, 31, 0x2FFB10u);
    ctx->pc = 0x2FFB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB08u;
    // 0x2ffb0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2FFB08u, 0x2FFB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB10u;
label_2ffb10:
    // 0x2ffb10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ffb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ffb14:
    // 0x2ffb14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ffb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ffb18:
    // 0x2ffb18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ffb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ffb1c:
    // 0x2ffb1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ffb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ffb20:
    // 0x2ffb20: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ffb20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ffb24:
    // 0x2ffb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffb28:
    // 0x2ffb28: 0x3e00008  jr          $ra
label_2ffb2c:
    if (ctx->pc == 0x2FFB2Cu) {
        ctx->pc = 0x2FFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB28u;
        // 0x2ffb2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB30u;
        goto label_fallthrough_0x2ffb28;
    }
    ctx->pc = 0x2FFB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB28u;
        // 0x2ffb2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ffb28:
    ctx->pc = 0x2FFB30u;
}
