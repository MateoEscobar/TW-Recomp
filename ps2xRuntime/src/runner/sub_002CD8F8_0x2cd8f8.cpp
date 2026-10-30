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

// Function: sub_002CD8F8
// Address: 0x2cd8f8 - 0x2cda28
void sub_002CD8F8_0x2cd8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD8F8_0x2cd8f8");
#endif

    switch (ctx->pc) {
        case 0x2cd8f8u: goto label_2cd8f8;
        case 0x2cd8fcu: goto label_2cd8fc;
        case 0x2cd900u: goto label_2cd900;
        case 0x2cd904u: goto label_2cd904;
        case 0x2cd908u: goto label_2cd908;
        case 0x2cd90cu: goto label_2cd90c;
        case 0x2cd910u: goto label_2cd910;
        case 0x2cd914u: goto label_2cd914;
        case 0x2cd918u: goto label_2cd918;
        case 0x2cd91cu: goto label_2cd91c;
        case 0x2cd920u: goto label_2cd920;
        case 0x2cd924u: goto label_2cd924;
        case 0x2cd928u: goto label_2cd928;
        case 0x2cd92cu: goto label_2cd92c;
        case 0x2cd930u: goto label_2cd930;
        case 0x2cd934u: goto label_2cd934;
        case 0x2cd938u: goto label_2cd938;
        case 0x2cd93cu: goto label_2cd93c;
        case 0x2cd940u: goto label_2cd940;
        case 0x2cd944u: goto label_2cd944;
        case 0x2cd948u: goto label_2cd948;
        case 0x2cd94cu: goto label_2cd94c;
        case 0x2cd950u: goto label_2cd950;
        case 0x2cd954u: goto label_2cd954;
        case 0x2cd958u: goto label_2cd958;
        case 0x2cd95cu: goto label_2cd95c;
        case 0x2cd960u: goto label_2cd960;
        case 0x2cd964u: goto label_2cd964;
        case 0x2cd968u: goto label_2cd968;
        case 0x2cd96cu: goto label_2cd96c;
        case 0x2cd970u: goto label_2cd970;
        case 0x2cd974u: goto label_2cd974;
        case 0x2cd978u: goto label_2cd978;
        case 0x2cd97cu: goto label_2cd97c;
        case 0x2cd980u: goto label_2cd980;
        case 0x2cd984u: goto label_2cd984;
        case 0x2cd988u: goto label_2cd988;
        case 0x2cd98cu: goto label_2cd98c;
        case 0x2cd990u: goto label_2cd990;
        case 0x2cd994u: goto label_2cd994;
        case 0x2cd998u: goto label_2cd998;
        case 0x2cd99cu: goto label_2cd99c;
        case 0x2cd9a0u: goto label_2cd9a0;
        case 0x2cd9a4u: goto label_2cd9a4;
        case 0x2cd9a8u: goto label_2cd9a8;
        case 0x2cd9acu: goto label_2cd9ac;
        case 0x2cd9b0u: goto label_2cd9b0;
        case 0x2cd9b4u: goto label_2cd9b4;
        case 0x2cd9b8u: goto label_2cd9b8;
        case 0x2cd9bcu: goto label_2cd9bc;
        case 0x2cd9c0u: goto label_2cd9c0;
        case 0x2cd9c4u: goto label_2cd9c4;
        case 0x2cd9c8u: goto label_2cd9c8;
        case 0x2cd9ccu: goto label_2cd9cc;
        case 0x2cd9d0u: goto label_2cd9d0;
        case 0x2cd9d4u: goto label_2cd9d4;
        case 0x2cd9d8u: goto label_2cd9d8;
        case 0x2cd9dcu: goto label_2cd9dc;
        case 0x2cd9e0u: goto label_2cd9e0;
        case 0x2cd9e4u: goto label_2cd9e4;
        case 0x2cd9e8u: goto label_2cd9e8;
        case 0x2cd9ecu: goto label_2cd9ec;
        case 0x2cd9f0u: goto label_2cd9f0;
        case 0x2cd9f4u: goto label_2cd9f4;
        case 0x2cd9f8u: goto label_2cd9f8;
        case 0x2cd9fcu: goto label_2cd9fc;
        case 0x2cda00u: goto label_2cda00;
        case 0x2cda04u: goto label_2cda04;
        case 0x2cda08u: goto label_2cda08;
        case 0x2cda0cu: goto label_2cda0c;
        case 0x2cda10u: goto label_2cda10;
        case 0x2cda14u: goto label_2cda14;
        case 0x2cda18u: goto label_2cda18;
        case 0x2cda1cu: goto label_2cda1c;
        case 0x2cda20u: goto label_2cda20;
        case 0x2cda24u: goto label_2cda24;
        default: break;
    }

    ctx->pc = 0x2cd8f8u;

label_2cd8f8:
    // 0x2cd8f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cd8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2cd8fc:
    // 0x2cd8fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2cd8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2cd900:
    // 0x2cd900: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2cd900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2cd904:
    // 0x2cd904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd908:
    // 0x2cd908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cd908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cd90c:
    // 0x2cd90c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cd910:
    // 0x2cd910: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cd910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd914:
    // 0x2cd914: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2cd914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd918:
    // 0x2cd918: 0xc089bfc  jal         func_226FF0
label_2cd91c:
    if (ctx->pc == 0x2CD91Cu) {
        ctx->pc = 0x2CD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD918u;
        // 0x2cd91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD920u;
        goto label_2cd920;
    }
    ctx->pc = 0x2CD918u;
    SET_GPR_U32(ctx, 31, 0x2CD920u);
    ctx->pc = 0x2CD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD918u;
    // 0x2cd91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2CD918u, 0x2CD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD920u;
label_2cd920:
    // 0x2cd920: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_2cd924:
    if (ctx->pc == 0x2CD924u) {
        ctx->pc = 0x2CD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD920u;
        // 0x2cd924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD928u;
        goto label_2cd928;
    }
    ctx->pc = 0x2CD920u;
    {
        const bool branch_taken_0x2cd920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD920u;
        // 0x2cd924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd920) {
            ctx->pc = 0x2CDA0Cu;
            goto label_2cda0c;
        }
    }
    ctx->pc = 0x2CD928u;
label_2cd928:
    // 0x2cd928: 0xc08a08a  jal         func_228228
label_2cd92c:
    if (ctx->pc == 0x2CD92Cu) {
        ctx->pc = 0x2CD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD928u;
        // 0x2cd92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD930u;
        goto label_2cd930;
    }
    ctx->pc = 0x2CD928u;
    SET_GPR_U32(ctx, 31, 0x2CD930u);
    ctx->pc = 0x2CD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD928u;
    // 0x2cd92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2CD928u, 0x2CD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD930u;
label_2cd930:
    // 0x2cd930: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_2cd934:
    if (ctx->pc == 0x2CD934u) {
        ctx->pc = 0x2CD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD930u;
        // 0x2cd934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD938u;
        goto label_2cd938;
    }
    ctx->pc = 0x2CD930u;
    {
        const bool branch_taken_0x2cd930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD930u;
        // 0x2cd934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd930) {
            ctx->pc = 0x2CDA0Cu;
            goto label_2cda0c;
        }
    }
    ctx->pc = 0x2CD938u;
label_2cd938:
    // 0x2cd938: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2cd938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2cd93c:
    // 0x2cd93c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cd93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd940:
    // 0x2cd940: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2cd944:
    if (ctx->pc == 0x2CD944u) {
        ctx->pc = 0x2CD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD940u;
        // 0x2cd944: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD948u;
        goto label_2cd948;
    }
    ctx->pc = 0x2CD940u;
    {
        const bool branch_taken_0x2cd940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd940) {
            ctx->pc = 0x2CD944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD940u;
            // 0x2cd944: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD948u;
            goto label_2cd948;
        }
    }
    ctx->pc = 0x2CD948u;
label_2cd948:
    // 0x2cd948: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2cd948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2cd94c:
    // 0x2cd94c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2cd94cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2cd950:
    // 0x2cd950: 0x2010  mfhi        $a0
    ctx->pc = 0x2cd950u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2cd954:
    // 0x2cd954: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
label_2cd958:
    if (ctx->pc == 0x2CD958u) {
        ctx->pc = 0x2CD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD954u;
        // 0x2cd958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD95Cu;
        goto label_2cd95c;
    }
    ctx->pc = 0x2CD954u;
    {
        const bool branch_taken_0x2cd954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD954u;
        // 0x2cd958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd954) {
            ctx->pc = 0x2CDA0Cu;
            goto label_2cda0c;
        }
    }
    ctx->pc = 0x2CD95Cu;
label_2cd95c:
    // 0x2cd95c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2cd95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2cd960:
    // 0x2cd960: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2cd960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2cd964:
    // 0x2cd964: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2cd964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2cd968:
    // 0x2cd968: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2cd968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2cd96c:
    // 0x2cd96c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2cd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_2cd970:
    // 0x2cd970: 0x2472f2f0  addiu       $s2, $v1, -0xD10
    ctx->pc = 0x2cd970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_2cd974:
    // 0x2cd974: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2cd974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_2cd978:
    // 0x2cd978: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cd978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cd97c:
    // 0x2cd97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd980:
    // 0x2cd980: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2cd980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2cd984:
    // 0x2cd984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd988:
    // 0x2cd988: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cd988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cd98c:
    // 0x2cd98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd990:
    // 0x2cd990: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cd990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd994:
    // 0x2cd994: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cd994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd998:
    // 0x2cd998: 0xc0a757c  jal         func_29D5F0
label_2cd99c:
    if (ctx->pc == 0x2CD99Cu) {
        ctx->pc = 0x2CD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD998u;
        // 0x2cd99c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9A0u;
        goto label_2cd9a0;
    }
    ctx->pc = 0x2CD998u;
    SET_GPR_U32(ctx, 31, 0x2CD9A0u);
    ctx->pc = 0x2CD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD998u;
    // 0x2cd99c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2CD998u, 0x2CD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9A0u;
label_2cd9a0:
    // 0x2cd9a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cd9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd9a4:
    // 0x2cd9a4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2cd9a8:
    if (ctx->pc == 0x2CD9A8u) {
        ctx->pc = 0x2CD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9A4u;
        // 0x2cd9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9ACu;
        goto label_2cd9ac;
    }
    ctx->pc = 0x2CD9A4u;
    {
        const bool branch_taken_0x2cd9a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9A4u;
        // 0x2cd9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9a4) {
            ctx->pc = 0x2CDA04u;
            goto label_2cda04;
        }
    }
    ctx->pc = 0x2CD9ACu;
label_2cd9ac:
    // 0x2cd9ac: 0xc0e5452  jal         func_395148
label_2cd9b0:
    if (ctx->pc == 0x2CD9B0u) {
        ctx->pc = 0x2CD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9ACu;
        // 0x2cd9b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9B4u;
        goto label_2cd9b4;
    }
    ctx->pc = 0x2CD9ACu;
    SET_GPR_U32(ctx, 31, 0x2CD9B4u);
    ctx->pc = 0x2CD9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD9ACu;
    // 0x2cd9b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395148u, 0x2CD9ACu, 0x2CD9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9B4u;
label_2cd9b4:
    // 0x2cd9b4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2cd9b8:
    if (ctx->pc == 0x2CD9B8u) {
        ctx->pc = 0x2CD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B4u;
        // 0x2cd9b8: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9BCu;
        goto label_2cd9bc;
    }
    ctx->pc = 0x2CD9B4u;
    {
        const bool branch_taken_0x2cd9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9b4) {
            ctx->pc = 0x2CD9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD9B4u;
            // 0x2cd9b8: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA08u;
            goto label_2cda08;
        }
    }
    ctx->pc = 0x2CD9BCu;
label_2cd9bc:
    // 0x2cd9bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd9c0:
    // 0x2cd9c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cd9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cd9c4:
    // 0x2cd9c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cd9c8:
    // 0x2cd9c8: 0x40f809  jalr        $v0
label_2cd9cc:
    if (ctx->pc == 0x2CD9CCu) {
        ctx->pc = 0x2CD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9C8u;
        // 0x2cd9cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9D0u;
        goto label_2cd9d0;
    }
    ctx->pc = 0x2CD9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD9D0u);
        ctx->pc = 0x2CD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9C8u;
        // 0x2cd9cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD9C8u, 0x2CD9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD9D0u;
label_2cd9d0:
    // 0x2cd9d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd9d4:
    // 0x2cd9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd9d8:
    // 0x2cd9d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cd9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cd9dc:
    // 0x2cd9dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cd9e0:
    // 0x2cd9e0: 0x40f809  jalr        $v0
label_2cd9e4:
    if (ctx->pc == 0x2CD9E4u) {
        ctx->pc = 0x2CD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9E0u;
        // 0x2cd9e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9E8u;
        goto label_2cd9e8;
    }
    ctx->pc = 0x2CD9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD9E8u);
        ctx->pc = 0x2CD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9E0u;
        // 0x2cd9e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD9E0u, 0x2CD9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD9E8u;
label_2cd9e8:
    // 0x2cd9e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cd9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd9ec:
    // 0x2cd9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd9f0:
    // 0x2cd9f0: 0xc0b71c2  jal         func_2DC708
label_2cd9f4:
    if (ctx->pc == 0x2CD9F4u) {
        ctx->pc = 0x2CD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9F0u;
        // 0x2cd9f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9F8u;
        goto label_2cd9f8;
    }
    ctx->pc = 0x2CD9F0u;
    SET_GPR_U32(ctx, 31, 0x2CD9F8u);
    ctx->pc = 0x2CD9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD9F0u;
    // 0x2cd9f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2CD9F0u, 0x2CD9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9F8u;
label_2cd9f8:
    // 0x2cd9f8: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2cd9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_2cd9fc:
    // 0x2cd9fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2cda00:
    if (ctx->pc == 0x2CDA00u) {
        ctx->pc = 0x2CDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9FCu;
        // 0x2cda00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA04u;
        goto label_2cda04;
    }
    ctx->pc = 0x2CD9FCu;
    {
        const bool branch_taken_0x2cd9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9FCu;
        // 0x2cda00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9fc) {
            ctx->pc = 0x2CDA0Cu;
            goto label_2cda0c;
        }
    }
    ctx->pc = 0x2CDA04u;
label_2cda04:
    // 0x2cda04: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2cda04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_2cda08:
    // 0x2cda08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cda08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cda0c:
    // 0x2cda0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2cda0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cda10:
    // 0x2cda10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2cda10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cda14:
    // 0x2cda14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cda14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cda18:
    // 0x2cda18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cda18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cda1c:
    // 0x2cda1c: 0x3e00008  jr          $ra
label_2cda20:
    if (ctx->pc == 0x2CDA20u) {
        ctx->pc = 0x2CDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA1Cu;
        // 0x2cda20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA24u;
        goto label_2cda24;
    }
    ctx->pc = 0x2CDA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA1Cu;
        // 0x2cda20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA24u;
label_2cda24:
    // 0x2cda24: 0x0  nop
    ctx->pc = 0x2cda24u;
    // NOP
    ctx->pc = 0x2cda28u;
}
