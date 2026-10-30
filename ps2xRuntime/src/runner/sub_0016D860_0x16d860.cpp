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

// Function: sub_0016D860
// Address: 0x16d860 - 0x16db30
void sub_0016D860_0x16d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D860_0x16d860");
#endif

    switch (ctx->pc) {
        case 0x16d860u: goto label_16d860;
        case 0x16d864u: goto label_16d864;
        case 0x16d868u: goto label_16d868;
        case 0x16d86cu: goto label_16d86c;
        case 0x16d870u: goto label_16d870;
        case 0x16d874u: goto label_16d874;
        case 0x16d878u: goto label_16d878;
        case 0x16d87cu: goto label_16d87c;
        case 0x16d880u: goto label_16d880;
        case 0x16d884u: goto label_16d884;
        case 0x16d888u: goto label_16d888;
        case 0x16d88cu: goto label_16d88c;
        case 0x16d890u: goto label_16d890;
        case 0x16d894u: goto label_16d894;
        case 0x16d898u: goto label_16d898;
        case 0x16d89cu: goto label_16d89c;
        case 0x16d8a0u: goto label_16d8a0;
        case 0x16d8a4u: goto label_16d8a4;
        case 0x16d8a8u: goto label_16d8a8;
        case 0x16d8acu: goto label_16d8ac;
        case 0x16d8b0u: goto label_16d8b0;
        case 0x16d8b4u: goto label_16d8b4;
        case 0x16d8b8u: goto label_16d8b8;
        case 0x16d8bcu: goto label_16d8bc;
        case 0x16d8c0u: goto label_16d8c0;
        case 0x16d8c4u: goto label_16d8c4;
        case 0x16d8c8u: goto label_16d8c8;
        case 0x16d8ccu: goto label_16d8cc;
        case 0x16d8d0u: goto label_16d8d0;
        case 0x16d8d4u: goto label_16d8d4;
        case 0x16d8d8u: goto label_16d8d8;
        case 0x16d8dcu: goto label_16d8dc;
        case 0x16d8e0u: goto label_16d8e0;
        case 0x16d8e4u: goto label_16d8e4;
        case 0x16d8e8u: goto label_16d8e8;
        case 0x16d8ecu: goto label_16d8ec;
        case 0x16d8f0u: goto label_16d8f0;
        case 0x16d8f4u: goto label_16d8f4;
        case 0x16d8f8u: goto label_16d8f8;
        case 0x16d8fcu: goto label_16d8fc;
        case 0x16d900u: goto label_16d900;
        case 0x16d904u: goto label_16d904;
        case 0x16d908u: goto label_16d908;
        case 0x16d90cu: goto label_16d90c;
        case 0x16d910u: goto label_16d910;
        case 0x16d914u: goto label_16d914;
        case 0x16d918u: goto label_16d918;
        case 0x16d91cu: goto label_16d91c;
        case 0x16d920u: goto label_16d920;
        case 0x16d924u: goto label_16d924;
        case 0x16d928u: goto label_16d928;
        case 0x16d92cu: goto label_16d92c;
        case 0x16d930u: goto label_16d930;
        case 0x16d934u: goto label_16d934;
        case 0x16d938u: goto label_16d938;
        case 0x16d93cu: goto label_16d93c;
        case 0x16d940u: goto label_16d940;
        case 0x16d944u: goto label_16d944;
        case 0x16d948u: goto label_16d948;
        case 0x16d94cu: goto label_16d94c;
        case 0x16d950u: goto label_16d950;
        case 0x16d954u: goto label_16d954;
        case 0x16d958u: goto label_16d958;
        case 0x16d95cu: goto label_16d95c;
        case 0x16d960u: goto label_16d960;
        case 0x16d964u: goto label_16d964;
        case 0x16d968u: goto label_16d968;
        case 0x16d96cu: goto label_16d96c;
        case 0x16d970u: goto label_16d970;
        case 0x16d974u: goto label_16d974;
        case 0x16d978u: goto label_16d978;
        case 0x16d97cu: goto label_16d97c;
        case 0x16d980u: goto label_16d980;
        case 0x16d984u: goto label_16d984;
        case 0x16d988u: goto label_16d988;
        case 0x16d98cu: goto label_16d98c;
        case 0x16d990u: goto label_16d990;
        case 0x16d994u: goto label_16d994;
        case 0x16d998u: goto label_16d998;
        case 0x16d99cu: goto label_16d99c;
        case 0x16d9a0u: goto label_16d9a0;
        case 0x16d9a4u: goto label_16d9a4;
        case 0x16d9a8u: goto label_16d9a8;
        case 0x16d9acu: goto label_16d9ac;
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16d9b4u: goto label_16d9b4;
        case 0x16d9b8u: goto label_16d9b8;
        case 0x16d9bcu: goto label_16d9bc;
        case 0x16d9c0u: goto label_16d9c0;
        case 0x16d9c4u: goto label_16d9c4;
        case 0x16d9c8u: goto label_16d9c8;
        case 0x16d9ccu: goto label_16d9cc;
        case 0x16d9d0u: goto label_16d9d0;
        case 0x16d9d4u: goto label_16d9d4;
        case 0x16d9d8u: goto label_16d9d8;
        case 0x16d9dcu: goto label_16d9dc;
        case 0x16d9e0u: goto label_16d9e0;
        case 0x16d9e4u: goto label_16d9e4;
        case 0x16d9e8u: goto label_16d9e8;
        case 0x16d9ecu: goto label_16d9ec;
        case 0x16d9f0u: goto label_16d9f0;
        case 0x16d9f4u: goto label_16d9f4;
        case 0x16d9f8u: goto label_16d9f8;
        case 0x16d9fcu: goto label_16d9fc;
        case 0x16da00u: goto label_16da00;
        case 0x16da04u: goto label_16da04;
        case 0x16da08u: goto label_16da08;
        case 0x16da0cu: goto label_16da0c;
        case 0x16da10u: goto label_16da10;
        case 0x16da14u: goto label_16da14;
        case 0x16da18u: goto label_16da18;
        case 0x16da1cu: goto label_16da1c;
        case 0x16da20u: goto label_16da20;
        case 0x16da24u: goto label_16da24;
        case 0x16da28u: goto label_16da28;
        case 0x16da2cu: goto label_16da2c;
        case 0x16da30u: goto label_16da30;
        case 0x16da34u: goto label_16da34;
        case 0x16da38u: goto label_16da38;
        case 0x16da3cu: goto label_16da3c;
        case 0x16da40u: goto label_16da40;
        case 0x16da44u: goto label_16da44;
        case 0x16da48u: goto label_16da48;
        case 0x16da4cu: goto label_16da4c;
        case 0x16da50u: goto label_16da50;
        case 0x16da54u: goto label_16da54;
        case 0x16da58u: goto label_16da58;
        case 0x16da5cu: goto label_16da5c;
        case 0x16da60u: goto label_16da60;
        case 0x16da64u: goto label_16da64;
        case 0x16da68u: goto label_16da68;
        case 0x16da6cu: goto label_16da6c;
        case 0x16da70u: goto label_16da70;
        case 0x16da74u: goto label_16da74;
        case 0x16da78u: goto label_16da78;
        case 0x16da7cu: goto label_16da7c;
        case 0x16da80u: goto label_16da80;
        case 0x16da84u: goto label_16da84;
        case 0x16da88u: goto label_16da88;
        case 0x16da8cu: goto label_16da8c;
        case 0x16da90u: goto label_16da90;
        case 0x16da94u: goto label_16da94;
        case 0x16da98u: goto label_16da98;
        case 0x16da9cu: goto label_16da9c;
        case 0x16daa0u: goto label_16daa0;
        case 0x16daa4u: goto label_16daa4;
        case 0x16daa8u: goto label_16daa8;
        case 0x16daacu: goto label_16daac;
        case 0x16dab0u: goto label_16dab0;
        case 0x16dab4u: goto label_16dab4;
        case 0x16dab8u: goto label_16dab8;
        case 0x16dabcu: goto label_16dabc;
        case 0x16dac0u: goto label_16dac0;
        case 0x16dac4u: goto label_16dac4;
        case 0x16dac8u: goto label_16dac8;
        case 0x16daccu: goto label_16dacc;
        case 0x16dad0u: goto label_16dad0;
        case 0x16dad4u: goto label_16dad4;
        case 0x16dad8u: goto label_16dad8;
        case 0x16dadcu: goto label_16dadc;
        case 0x16dae0u: goto label_16dae0;
        case 0x16dae4u: goto label_16dae4;
        case 0x16dae8u: goto label_16dae8;
        case 0x16daecu: goto label_16daec;
        case 0x16daf0u: goto label_16daf0;
        case 0x16daf4u: goto label_16daf4;
        case 0x16daf8u: goto label_16daf8;
        case 0x16dafcu: goto label_16dafc;
        case 0x16db00u: goto label_16db00;
        case 0x16db04u: goto label_16db04;
        case 0x16db08u: goto label_16db08;
        case 0x16db0cu: goto label_16db0c;
        case 0x16db10u: goto label_16db10;
        case 0x16db14u: goto label_16db14;
        case 0x16db18u: goto label_16db18;
        case 0x16db1cu: goto label_16db1c;
        case 0x16db20u: goto label_16db20;
        case 0x16db24u: goto label_16db24;
        case 0x16db28u: goto label_16db28;
        case 0x16db2cu: goto label_16db2c;
        default: break;
    }

    ctx->pc = 0x16d860u;

label_16d860:
    // 0x16d860: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x16d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_16d864:
    // 0x16d864: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16d864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16d868:
    // 0x16d868: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x16d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_16d86c:
    // 0x16d86c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x16d86cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_16d870:
    // 0x16d870: 0x4ac03  sra         $s5, $a0, 16
    ctx->pc = 0x16d870u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 4), 16));
label_16d874:
    // 0x16d874: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x16d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_16d878:
    // 0x16d878: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x16d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_16d87c:
    // 0x16d87c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_16d880:
    // 0x16d880: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x16d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_16d884:
    // 0x16d884: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16d884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d888:
    // 0x16d888: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x16d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_16d88c:
    // 0x16d88c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_16d890:
    // 0x16d890: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x16d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_16d894:
    // 0x16d894: 0x8a403  sra         $s4, $t0, 16
    ctx->pc = 0x16d894u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 16));
label_16d898:
    // 0x16d898: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x16d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_16d89c:
    // 0x16d89c: 0x6b403  sra         $s6, $a2, 16
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 16));
label_16d8a0:
    // 0x16d8a0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x16d8a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_16d8a4:
    // 0x16d8a4: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x16d8a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_16d8a8:
    // 0x16d8a8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x16d8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_16d8ac:
    // 0x16d8ac: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16d8acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_16d8b0:
    // 0x16d8b0: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x16d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_16d8b4:
    // 0x16d8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d8b8:
    // 0x16d8b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16d8bc:
    // 0x16d8bc: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x16d8bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16d8c0:
    // 0x16d8c0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x16d8c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_16d8c4:
    // 0x16d8c4: 0xc085fc2  jal         func_217F08
label_16d8c8:
    if (ctx->pc == 0x16D8C8u) {
        ctx->pc = 0x16D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8C4u;
        // 0x16d8c8: 0x8fb70110  lw          $s7, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8CCu;
        goto label_16d8cc;
    }
    ctx->pc = 0x16D8C4u;
    SET_GPR_U32(ctx, 31, 0x16D8CCu);
    ctx->pc = 0x16D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8C4u;
    // 0x16d8c8: 0x8fb70110  lw          $s7, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217F08u, 0x16D8C4u, 0x16D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8CCu;
label_16d8cc:
    // 0x16d8cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16d8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d8d0:
    // 0x16d8d0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_16d8d4:
    if (ctx->pc == 0x16D8D4u) {
        ctx->pc = 0x16D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8D0u;
        // 0x16d8d4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8D8u;
        goto label_16d8d8;
    }
    ctx->pc = 0x16D8D0u;
    {
        const bool branch_taken_0x16d8d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8D0u;
        // 0x16d8d4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8d0) {
            ctx->pc = 0x16D8E8u;
            goto label_16d8e8;
        }
    }
    ctx->pc = 0x16D8D8u;
label_16d8d8:
    // 0x16d8d8: 0xc05b552  jal         func_16D548
label_16d8dc:
    if (ctx->pc == 0x16D8DCu) {
        ctx->pc = 0x16D8E0u;
        goto label_16d8e0;
    }
    ctx->pc = 0x16D8D8u;
    SET_GPR_U32(ctx, 31, 0x16D8E0u);
    ctx->pc = 0x16D548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D548u, 0x16D8D8u, 0x16D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8E0u;
label_16d8e0:
    // 0x16d8e0: 0x10000085  b           . + 4 + (0x85 << 2)
label_16d8e4:
    if (ctx->pc == 0x16D8E4u) {
        ctx->pc = 0x16D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E0u;
        // 0x16d8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8E8u;
        goto label_16d8e8;
    }
    ctx->pc = 0x16D8E0u;
    {
        const bool branch_taken_0x16d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E0u;
        // 0x16d8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8e0) {
            ctx->pc = 0x16DAF8u;
            goto label_16daf8;
        }
    }
    ctx->pc = 0x16D8E8u;
label_16d8e8:
    // 0x16d8e8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x16d8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_16d8ec:
    // 0x16d8ec: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x16d8ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_16d8f0:
    // 0x16d8f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16d8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16d8f4:
    // 0x16d8f4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x16d8f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_16d8f8:
    // 0x16d8f8: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x16d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_16d8fc:
    // 0x16d8fc: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x16d8fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_16d900:
    // 0x16d900: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16d900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_16d904:
    // 0x16d904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16d904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d908:
    // 0x16d908: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_16d90c:
    // 0x16d90c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16d90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16d910:
    // 0x16d910: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16d910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16d914:
    // 0x16d914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16d914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_16d918:
    // 0x16d918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16d918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d91c:
    // 0x16d91c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x16d91cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16d920:
    // 0x16d920: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x16d920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_16d924:
    // 0x16d924: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x16d924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_16d928:
    // 0x16d928: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16d928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_16d92c:
    // 0x16d92c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16d92cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16d930:
    // 0x16d930: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x16d930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_16d934:
    // 0x16d934: 0xc12e310  jal         func_4B8C40
label_16d938:
    if (ctx->pc == 0x16D938u) {
        ctx->pc = 0x16D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D934u;
        // 0x16d938: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D93Cu;
        goto label_16d93c;
    }
    ctx->pc = 0x16D934u;
    SET_GPR_U32(ctx, 31, 0x16D93Cu);
    ctx->pc = 0x16D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D934u;
    // 0x16d938: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x16D934u, 0x16D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D93Cu;
label_16d93c:
    // 0x16d93c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16d93cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16d940:
    // 0x16d940: 0xc12e29c  jal         func_4B8A70
label_16d944:
    if (ctx->pc == 0x16D944u) {
        ctx->pc = 0x16D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D940u;
        // 0x16d944: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D948u;
        goto label_16d948;
    }
    ctx->pc = 0x16D940u;
    SET_GPR_U32(ctx, 31, 0x16D948u);
    ctx->pc = 0x16D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D940u;
    // 0x16d944: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x16D940u, 0x16D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D948u;
label_16d948:
    // 0x16d948: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x16d948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d94c:
    // 0x16d94c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16d94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d950:
    // 0x16d950: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x16d950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16d954:
    // 0x16d954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d958:
    // 0x16d958: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x16d958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16d95c:
    // 0x16d95c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x16d95cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_16d960:
    // 0x16d960: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16d960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16d964:
    // 0x16d964: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x16d964u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_16d968:
    // 0x16d968: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16d968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16d96c:
    // 0x16d96c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x16d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_16d970:
    // 0x16d970: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x16d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_16d974:
    // 0x16d974: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x16d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d978:
    // 0x16d978: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x16d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d97c:
    // 0x16d97c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x16d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16d980:
    // 0x16d980: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x16d980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_16d984:
    // 0x16d984: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x16d984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_16d988:
    // 0x16d988: 0xc08736a  jal         func_21CDA8
label_16d98c:
    if (ctx->pc == 0x16D98Cu) {
        ctx->pc = 0x16D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D988u;
        // 0x16d98c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D990u;
        goto label_16d990;
    }
    ctx->pc = 0x16D988u;
    SET_GPR_U32(ctx, 31, 0x16D990u);
    ctx->pc = 0x16D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D988u;
    // 0x16d98c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CDA8u, 0x16D988u, 0x16D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D990u;
label_16d990:
    // 0x16d990: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16d990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d994:
    // 0x16d994: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16d994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d998:
    // 0x16d998: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16d998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16d99c:
    // 0x16d99c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16d99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16d9a0:
    // 0x16d9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d9a4:
    // 0x16d9a4: 0xc086002  jal         func_218008
label_16d9a8:
    if (ctx->pc == 0x16D9A8u) {
        ctx->pc = 0x16D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9A4u;
        // 0x16d9a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9ACu;
        goto label_16d9ac;
    }
    ctx->pc = 0x16D9A4u;
    SET_GPR_U32(ctx, 31, 0x16D9ACu);
    ctx->pc = 0x16D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9A4u;
    // 0x16d9a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218008u, 0x16D9A4u, 0x16D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9ACu;
label_16d9ac:
    // 0x16d9ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x16d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_16d9b0:
    // 0x16d9b0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x16d9b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d9b4:
    // 0x16d9b4: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_16d9b8:
    // 0x16d9b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d9bc:
    // 0x16d9bc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x16d9bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16d9c0:
    // 0x16d9c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16d9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_16d9c4:
    // 0x16d9c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16d9c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16d9c8:
    // 0x16d9c8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x16d9c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16d9cc:
    // 0x16d9cc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16d9ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_16d9d0:
    // 0x16d9d0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16d9d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_16d9d4:
    // 0x16d9d4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x16d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_16d9d8:
    // 0x16d9d8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x16d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_16d9dc:
    // 0x16d9dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d9e0:
    // 0x16d9e0: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x16d9e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16d9e4:
    // 0x16d9e4: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x16d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_16d9e8:
    // 0x16d9e8: 0x60f809  jalr        $v1
label_16d9ec:
    if (ctx->pc == 0x16D9ECu) {
        ctx->pc = 0x16D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9E8u;
        // 0x16d9ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9F0u;
        goto label_16d9f0;
    }
    ctx->pc = 0x16D9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16D9F0u);
        ctx->pc = 0x16D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9E8u;
        // 0x16d9ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D9E8u, 0x16D9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D9F0u;
label_16d9f0:
    // 0x16d9f0: 0xc087502  jal         func_21D408
label_16d9f4:
    if (ctx->pc == 0x16D9F4u) {
        ctx->pc = 0x16D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9F0u;
        // 0x16d9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9F8u;
        goto label_16d9f8;
    }
    ctx->pc = 0x16D9F0u;
    SET_GPR_U32(ctx, 31, 0x16D9F8u);
    ctx->pc = 0x16D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9F0u;
    // 0x16d9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16D9F0u, 0x16D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9F8u;
label_16d9f8:
    // 0x16d9f8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16d9fc:
    // 0x16d9fc: 0xa4550210  sh          $s5, 0x210($v0)
    ctx->pc = 0x16d9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 528), (uint16_t)GPR_U32(ctx, 21));
label_16da00:
    // 0x16da00: 0x24a51840  addiu       $a1, $a1, 0x1840
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6208));
label_16da04:
    // 0x16da04: 0xc10c313  jal         func_430C4C
label_16da08:
    if (ctx->pc == 0x16DA08u) {
        ctx->pc = 0x16DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA04u;
        // 0x16da08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA0Cu;
        goto label_16da0c;
    }
    ctx->pc = 0x16DA04u;
    SET_GPR_U32(ctx, 31, 0x16DA0Cu);
    ctx->pc = 0x16DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA04u;
    // 0x16da08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x16DA04u, 0x16DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA0Cu;
label_16da0c:
    // 0x16da0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16da10:
    if (ctx->pc == 0x16DA10u) {
        ctx->pc = 0x16DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA0Cu;
        // 0x16da10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA14u;
        goto label_16da14;
    }
    ctx->pc = 0x16DA0Cu;
    {
        const bool branch_taken_0x16da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA0Cu;
        // 0x16da10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da0c) {
            ctx->pc = 0x16DA24u;
            goto label_16da24;
        }
    }
    ctx->pc = 0x16DA14u;
label_16da14:
    // 0x16da14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16da14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16da18:
    // 0x16da18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16da18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16da1c:
    // 0x16da1c: 0xc0930a0  jal         func_24C280
label_16da20:
    if (ctx->pc == 0x16DA20u) {
        ctx->pc = 0x16DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA1Cu;
        // 0x16da20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA24u;
        goto label_16da24;
    }
    ctx->pc = 0x16DA1Cu;
    SET_GPR_U32(ctx, 31, 0x16DA24u);
    ctx->pc = 0x16DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA1Cu;
    // 0x16da20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x16DA1Cu, 0x16DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA24u;
label_16da24:
    // 0x16da24: 0x12e00033  beqz        $s7, . + 4 + (0x33 << 2)
label_16da28:
    if (ctx->pc == 0x16DA28u) {
        ctx->pc = 0x16DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA24u;
        // 0x16da28: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA2Cu;
        goto label_16da2c;
    }
    ctx->pc = 0x16DA24u;
    {
        const bool branch_taken_0x16da24 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA24u;
        // 0x16da28: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da24) {
            ctx->pc = 0x16DAF4u;
            goto label_16daf4;
        }
    }
    ctx->pc = 0x16DA2Cu;
label_16da2c:
    // 0x16da2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16da2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16da30:
    // 0x16da30: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x16da30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_16da34:
    // 0x16da34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16da34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16da38:
    // 0x16da38: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x16da38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_16da3c:
    // 0x16da3c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x16da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_16da40:
    // 0x16da40: 0x40f809  jalr        $v0
label_16da44:
    if (ctx->pc == 0x16DA44u) {
        ctx->pc = 0x16DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA40u;
        // 0x16da44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA48u;
        goto label_16da48;
    }
    ctx->pc = 0x16DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DA48u);
        ctx->pc = 0x16DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA40u;
        // 0x16da44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA40u, 0x16DA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DA48u;
label_16da48:
    // 0x16da48: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_16da4c:
    if (ctx->pc == 0x16DA4Cu) {
        ctx->pc = 0x16DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA48u;
        // 0x16da4c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA50u;
        goto label_16da50;
    }
    ctx->pc = 0x16DA48u;
    {
        const bool branch_taken_0x16da48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA48u;
        // 0x16da4c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da48) {
            ctx->pc = 0x16DAF4u;
            goto label_16daf4;
        }
    }
    ctx->pc = 0x16DA50u;
label_16da50:
    // 0x16da50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16da54:
    // 0x16da54: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x16da54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16da58:
    // 0x16da58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16da58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16da5c:
    // 0x16da5c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_16da60:
    // 0x16da60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16da64:
    // 0x16da64: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_16da68:
    // 0x16da68: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x16da68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_16da6c:
    // 0x16da6c: 0x40f809  jalr        $v0
label_16da70:
    if (ctx->pc == 0x16DA70u) {
        ctx->pc = 0x16DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA6Cu;
        // 0x16da70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA74u;
        goto label_16da74;
    }
    ctx->pc = 0x16DA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DA74u);
        ctx->pc = 0x16DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA6Cu;
        // 0x16da70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA6Cu, 0x16DA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DA74u;
label_16da74:
    // 0x16da74: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x16da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_16da78:
    // 0x16da78: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16da78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16da7c:
    // 0x16da7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16da80:
    // 0x16da80: 0x40f809  jalr        $v0
label_16da84:
    if (ctx->pc == 0x16DA84u) {
        ctx->pc = 0x16DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA80u;
        // 0x16da84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA88u;
        goto label_16da88;
    }
    ctx->pc = 0x16DA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DA88u);
        ctx->pc = 0x16DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA80u;
        // 0x16da84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA80u, 0x16DA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DA88u;
label_16da88:
    // 0x16da88: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_16da8c:
    // 0x16da8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16da8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16da90:
    // 0x16da90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16da94:
    // 0x16da94: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x16da94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_16da98:
    // 0x16da98: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x16da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_16da9c:
    // 0x16da9c: 0x60f809  jalr        $v1
label_16daa0:
    if (ctx->pc == 0x16DAA0u) {
        ctx->pc = 0x16DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA9Cu;
        // 0x16daa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAA4u;
        goto label_16daa4;
    }
    ctx->pc = 0x16DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16DAA4u);
        ctx->pc = 0x16DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA9Cu;
        // 0x16daa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA9Cu, 0x16DAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DAA4u;
label_16daa4:
    // 0x16daa4: 0xc05b0e2  jal         func_16C388
label_16daa8:
    if (ctx->pc == 0x16DAA8u) {
        ctx->pc = 0x16DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAA4u;
        // 0x16daa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAACu;
        goto label_16daac;
    }
    ctx->pc = 0x16DAA4u;
    SET_GPR_U32(ctx, 31, 0x16DAACu);
    ctx->pc = 0x16DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAA4u;
    // 0x16daa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16DAA4u, 0x16DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAACu;
label_16daac:
    // 0x16daac: 0x24030130  addiu       $v1, $zero, 0x130
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_16dab0:
    // 0x16dab0: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_16dab4:
    // 0x16dab4: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x16dab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_16dab8:
    // 0x16dab8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16dabc:
    // 0x16dabc: 0x84a40078  lh          $a0, 0x78($a1)
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 120)));
label_16dac0:
    // 0x16dac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16dac4:
    // 0x16dac4: 0x8ca2007c  lw          $v0, 0x7C($a1)
    ctx->pc = 0x16dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
label_16dac8:
    // 0x16dac8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x16dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_16dacc:
    // 0x16dacc: 0x40f809  jalr        $v0
label_16dad0:
    if (ctx->pc == 0x16DAD0u) {
        ctx->pc = 0x16DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DACCu;
        // 0x16dad0: 0x8c650654  lw          $a1, 0x654($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAD4u;
        goto label_16dad4;
    }
    ctx->pc = 0x16DACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DAD4u);
        ctx->pc = 0x16DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DACCu;
        // 0x16dad0: 0x8c650654  lw          $a1, 0x654($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1620)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DACCu, 0x16DAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DAD4u;
label_16dad4:
    // 0x16dad4: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_16dad8:
    // 0x16dad8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16dadc:
    // 0x16dadc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dae0:
    // 0x16dae0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16dae4:
    // 0x16dae4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16dae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_16dae8:
    // 0x16dae8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x16dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16daec:
    // 0x16daec: 0x60f809  jalr        $v1
label_16daf0:
    if (ctx->pc == 0x16DAF0u) {
        ctx->pc = 0x16DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAECu;
        // 0x16daf0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAF4u;
        goto label_16daf4;
    }
    ctx->pc = 0x16DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16DAF4u);
        ctx->pc = 0x16DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAECu;
        // 0x16daf0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DAECu, 0x16DAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DAF4u;
label_16daf4:
    // 0x16daf4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16daf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16daf8:
    // 0x16daf8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x16daf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_16dafc:
    // 0x16dafc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x16dafcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_16db00:
    // 0x16db00: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x16db00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_16db04:
    // 0x16db04: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x16db04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_16db08:
    // 0x16db08: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x16db08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_16db0c:
    // 0x16db0c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x16db0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16db10:
    // 0x16db10: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x16db10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16db14:
    // 0x16db14: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x16db14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16db18:
    // 0x16db18: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x16db18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16db1c:
    // 0x16db1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16db1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16db20:
    // 0x16db20: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x16db20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16db24:
    // 0x16db24: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x16db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16db28:
    // 0x16db28: 0x3e00008  jr          $ra
label_16db2c:
    if (ctx->pc == 0x16DB2Cu) {
        ctx->pc = 0x16DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB28u;
        // 0x16db2c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB30u;
        goto label_fallthrough_0x16db28;
    }
    ctx->pc = 0x16DB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB28u;
        // 0x16db2c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16db28:
    ctx->pc = 0x16DB30u;
}
