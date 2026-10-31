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

// Function: sub_00311928
// Address: 0x311928 - 0x311ad8
void sub_00311928_0x311928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311928_0x311928");
#endif

    switch (ctx->pc) {
        case 0x311928u: goto label_311928;
        case 0x31192cu: goto label_31192c;
        case 0x311930u: goto label_311930;
        case 0x311934u: goto label_311934;
        case 0x311938u: goto label_311938;
        case 0x31193cu: goto label_31193c;
        case 0x311940u: goto label_311940;
        case 0x311944u: goto label_311944;
        case 0x311948u: goto label_311948;
        case 0x31194cu: goto label_31194c;
        case 0x311950u: goto label_311950;
        case 0x311954u: goto label_311954;
        case 0x311958u: goto label_311958;
        case 0x31195cu: goto label_31195c;
        case 0x311960u: goto label_311960;
        case 0x311964u: goto label_311964;
        case 0x311968u: goto label_311968;
        case 0x31196cu: goto label_31196c;
        case 0x311970u: goto label_311970;
        case 0x311974u: goto label_311974;
        case 0x311978u: goto label_311978;
        case 0x31197cu: goto label_31197c;
        case 0x311980u: goto label_311980;
        case 0x311984u: goto label_311984;
        case 0x311988u: goto label_311988;
        case 0x31198cu: goto label_31198c;
        case 0x311990u: goto label_311990;
        case 0x311994u: goto label_311994;
        case 0x311998u: goto label_311998;
        case 0x31199cu: goto label_31199c;
        case 0x3119a0u: goto label_3119a0;
        case 0x3119a4u: goto label_3119a4;
        case 0x3119a8u: goto label_3119a8;
        case 0x3119acu: goto label_3119ac;
        case 0x3119b0u: goto label_3119b0;
        case 0x3119b4u: goto label_3119b4;
        case 0x3119b8u: goto label_3119b8;
        case 0x3119bcu: goto label_3119bc;
        case 0x3119c0u: goto label_3119c0;
        case 0x3119c4u: goto label_3119c4;
        case 0x3119c8u: goto label_3119c8;
        case 0x3119ccu: goto label_3119cc;
        case 0x3119d0u: goto label_3119d0;
        case 0x3119d4u: goto label_3119d4;
        case 0x3119d8u: goto label_3119d8;
        case 0x3119dcu: goto label_3119dc;
        case 0x3119e0u: goto label_3119e0;
        case 0x3119e4u: goto label_3119e4;
        case 0x3119e8u: goto label_3119e8;
        case 0x3119ecu: goto label_3119ec;
        case 0x3119f0u: goto label_3119f0;
        case 0x3119f4u: goto label_3119f4;
        case 0x3119f8u: goto label_3119f8;
        case 0x3119fcu: goto label_3119fc;
        case 0x311a00u: goto label_311a00;
        case 0x311a04u: goto label_311a04;
        case 0x311a08u: goto label_311a08;
        case 0x311a0cu: goto label_311a0c;
        case 0x311a10u: goto label_311a10;
        case 0x311a14u: goto label_311a14;
        case 0x311a18u: goto label_311a18;
        case 0x311a1cu: goto label_311a1c;
        case 0x311a20u: goto label_311a20;
        case 0x311a24u: goto label_311a24;
        case 0x311a28u: goto label_311a28;
        case 0x311a2cu: goto label_311a2c;
        case 0x311a30u: goto label_311a30;
        case 0x311a34u: goto label_311a34;
        case 0x311a38u: goto label_311a38;
        case 0x311a3cu: goto label_311a3c;
        case 0x311a40u: goto label_311a40;
        case 0x311a44u: goto label_311a44;
        case 0x311a48u: goto label_311a48;
        case 0x311a4cu: goto label_311a4c;
        case 0x311a50u: goto label_311a50;
        case 0x311a54u: goto label_311a54;
        case 0x311a58u: goto label_311a58;
        case 0x311a5cu: goto label_311a5c;
        case 0x311a60u: goto label_311a60;
        case 0x311a64u: goto label_311a64;
        case 0x311a68u: goto label_311a68;
        case 0x311a6cu: goto label_311a6c;
        case 0x311a70u: goto label_311a70;
        case 0x311a74u: goto label_311a74;
        case 0x311a78u: goto label_311a78;
        case 0x311a7cu: goto label_311a7c;
        case 0x311a80u: goto label_311a80;
        case 0x311a84u: goto label_311a84;
        case 0x311a88u: goto label_311a88;
        case 0x311a8cu: goto label_311a8c;
        case 0x311a90u: goto label_311a90;
        case 0x311a94u: goto label_311a94;
        case 0x311a98u: goto label_311a98;
        case 0x311a9cu: goto label_311a9c;
        case 0x311aa0u: goto label_311aa0;
        case 0x311aa4u: goto label_311aa4;
        case 0x311aa8u: goto label_311aa8;
        case 0x311aacu: goto label_311aac;
        case 0x311ab0u: goto label_311ab0;
        case 0x311ab4u: goto label_311ab4;
        case 0x311ab8u: goto label_311ab8;
        case 0x311abcu: goto label_311abc;
        case 0x311ac0u: goto label_311ac0;
        case 0x311ac4u: goto label_311ac4;
        case 0x311ac8u: goto label_311ac8;
        case 0x311accu: goto label_311acc;
        case 0x311ad0u: goto label_311ad0;
        case 0x311ad4u: goto label_311ad4;
        default: break;
    }

    ctx->pc = 0x311928u;

label_311928:
    // 0x311928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31192c:
    // 0x31192c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_311930:
    // 0x311930: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x311930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_311934:
    // 0x311934: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x311934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_311938:
    // 0x311938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31193c:
    // 0x31193c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_311940:
    // 0x311940: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x311940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_311944:
    // 0x311944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_311948:
    // 0x311948: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x311948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31194c:
    // 0x31194c: 0xc08a61a  jal         func_229868
label_311950:
    if (ctx->pc == 0x311950u) {
        ctx->pc = 0x311950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31194Cu;
        // 0x311950: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311954u;
        goto label_311954;
    }
    ctx->pc = 0x31194Cu;
    SET_GPR_U32(ctx, 31, 0x311954u);
    ctx->pc = 0x311950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31194Cu;
    // 0x311950: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31194Cu, 0x311954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311954u;
label_311954:
    // 0x311954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311958:
    // 0x311958: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
label_31195c:
    if (ctx->pc == 0x31195Cu) {
        ctx->pc = 0x31195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311958u;
        // 0x31195c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311960u;
        goto label_311960;
    }
    ctx->pc = 0x311958u;
    {
        const bool branch_taken_0x311958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311958u;
        // 0x31195c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311958) {
            ctx->pc = 0x311AB8u;
            goto label_311ab8;
        }
    }
    ctx->pc = 0x311960u;
label_311960:
    // 0x311960: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x311960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_311964:
    // 0x311964: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_311968:
    if (ctx->pc == 0x311968u) {
        ctx->pc = 0x311968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311964u;
        // 0x311968: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31196Cu;
        goto label_31196c;
    }
    ctx->pc = 0x311964u;
    {
        const bool branch_taken_0x311964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x311968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311964u;
        // 0x311968: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311964) {
            ctx->pc = 0x3119DCu;
            goto label_3119dc;
        }
    }
    ctx->pc = 0x31196Cu;
label_31196c:
    // 0x31196c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_311970:
    if (ctx->pc == 0x311970u) {
        ctx->pc = 0x311970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31196Cu;
        // 0x311970: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311974u;
        goto label_311974;
    }
    ctx->pc = 0x31196Cu;
    {
        const bool branch_taken_0x31196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31196Cu;
        // 0x311970: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31196c) {
            ctx->pc = 0x311984u;
            goto label_311984;
        }
    }
    ctx->pc = 0x311974u;
label_311974:
    // 0x311974: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_311978:
    if (ctx->pc == 0x311978u) {
        ctx->pc = 0x311978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311974u;
        // 0x311978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31197Cu;
        goto label_31197c;
    }
    ctx->pc = 0x311974u;
    {
        const bool branch_taken_0x311974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x311978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311974u;
        // 0x311978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311974) {
            ctx->pc = 0x3119A0u;
            goto label_3119a0;
        }
    }
    ctx->pc = 0x31197Cu;
label_31197c:
    // 0x31197c: 0x10000050  b           . + 4 + (0x50 << 2)
label_311980:
    if (ctx->pc == 0x311980u) {
        ctx->pc = 0x311980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31197Cu;
        // 0x311980: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311984u;
        goto label_311984;
    }
    ctx->pc = 0x31197Cu;
    {
        const bool branch_taken_0x31197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31197Cu;
        // 0x311980: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31197c) {
            ctx->pc = 0x311AC0u;
            goto label_311ac0;
        }
    }
    ctx->pc = 0x311984u;
label_311984:
    // 0x311984: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x311984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_311988:
    // 0x311988: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
label_31198c:
    if (ctx->pc == 0x31198Cu) {
        ctx->pc = 0x31198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311988u;
        // 0x31198c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311990u;
        goto label_311990;
    }
    ctx->pc = 0x311988u;
    {
        const bool branch_taken_0x311988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311988u;
        // 0x31198c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311988) {
            ctx->pc = 0x311AA0u;
            goto label_311aa0;
        }
    }
    ctx->pc = 0x311990u;
label_311990:
    // 0x311990: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_311994:
    if (ctx->pc == 0x311994u) {
        ctx->pc = 0x311994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311990u;
        // 0x311994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311998u;
        goto label_311998;
    }
    ctx->pc = 0x311990u;
    {
        const bool branch_taken_0x311990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x311994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311990u;
        // 0x311994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311990) {
            ctx->pc = 0x311A7Cu;
            goto label_311a7c;
        }
    }
    ctx->pc = 0x311998u;
label_311998:
    // 0x311998: 0x10000049  b           . + 4 + (0x49 << 2)
label_31199c:
    if (ctx->pc == 0x31199Cu) {
        ctx->pc = 0x31199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311998u;
        // 0x31199c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119A0u;
        goto label_3119a0;
    }
    ctx->pc = 0x311998u;
    {
        const bool branch_taken_0x311998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311998u;
        // 0x31199c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311998) {
            ctx->pc = 0x311AC0u;
            goto label_311ac0;
        }
    }
    ctx->pc = 0x3119A0u;
label_3119a0:
    // 0x3119a0: 0xc087502  jal         func_21D408
label_3119a4:
    if (ctx->pc == 0x3119A4u) {
        ctx->pc = 0x3119A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119A0u;
        // 0x3119a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119A8u;
        goto label_3119a8;
    }
    ctx->pc = 0x3119A0u;
    SET_GPR_U32(ctx, 31, 0x3119A8u);
    ctx->pc = 0x3119A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119A0u;
    // 0x3119a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3119A0u, 0x3119A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119A8u;
label_3119a8:
    // 0x3119a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3119a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3119ac:
    // 0x3119ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3119acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3119b0:
    // 0x3119b0: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_3119b4:
    if (ctx->pc == 0x3119B4u) {
        ctx->pc = 0x3119B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119B0u;
        // 0x3119b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119B8u;
        goto label_3119b8;
    }
    ctx->pc = 0x3119B0u;
    {
        const bool branch_taken_0x3119b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3119B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119B0u;
        // 0x3119b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119b0) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x3119B8u;
label_3119b8:
    // 0x3119b8: 0xc087502  jal         func_21D408
label_3119bc:
    if (ctx->pc == 0x3119BCu) {
        ctx->pc = 0x3119BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119B8u;
        // 0x3119bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119C0u;
        goto label_3119c0;
    }
    ctx->pc = 0x3119B8u;
    SET_GPR_U32(ctx, 31, 0x3119C0u);
    ctx->pc = 0x3119BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119B8u;
    // 0x3119bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3119B8u, 0x3119C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119C0u;
label_3119c0:
    // 0x3119c0: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x3119c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3119c4:
    // 0x3119c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3119c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3119c8:
    // 0x3119c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3119c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3119cc:
    // 0x3119cc: 0xc05a468  jal         func_1691A0
label_3119d0:
    if (ctx->pc == 0x3119D0u) {
        ctx->pc = 0x3119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119CCu;
        // 0x3119d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119D4u;
        goto label_3119d4;
    }
    ctx->pc = 0x3119CCu;
    SET_GPR_U32(ctx, 31, 0x3119D4u);
    ctx->pc = 0x3119D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119CCu;
    // 0x3119d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1691A0u, 0x3119CCu, 0x3119D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119D4u;
label_3119d4:
    // 0x3119d4: 0x10000039  b           . + 4 + (0x39 << 2)
label_3119d8:
    if (ctx->pc == 0x3119D8u) {
        ctx->pc = 0x3119D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119D4u;
        // 0x3119d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119DCu;
        goto label_3119dc;
    }
    ctx->pc = 0x3119D4u;
    {
        const bool branch_taken_0x3119d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119D4u;
        // 0x3119d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119d4) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x3119DCu;
label_3119dc:
    // 0x3119dc: 0xc087502  jal         func_21D408
label_3119e0:
    if (ctx->pc == 0x3119E0u) {
        ctx->pc = 0x3119E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119DCu;
        // 0x3119e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119E4u;
        goto label_3119e4;
    }
    ctx->pc = 0x3119DCu;
    SET_GPR_U32(ctx, 31, 0x3119E4u);
    ctx->pc = 0x3119E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119DCu;
    // 0x3119e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3119DCu, 0x3119E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119E4u;
label_3119e4:
    // 0x3119e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3119e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3119e8:
    // 0x3119e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3119e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3119ec:
    // 0x3119ec: 0x8e44020c  lw          $a0, 0x20C($s2)
    ctx->pc = 0x3119ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_3119f0:
    // 0x3119f0: 0x14820032  bne         $a0, $v0, . + 4 + (0x32 << 2)
label_3119f4:
    if (ctx->pc == 0x3119F4u) {
        ctx->pc = 0x3119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119F0u;
        // 0x3119f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119F8u;
        goto label_3119f8;
    }
    ctx->pc = 0x3119F0u;
    {
        const bool branch_taken_0x3119f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119F0u;
        // 0x3119f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119f0) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x3119F8u;
label_3119f8:
    // 0x3119f8: 0xc05959e  jal         func_165678
label_3119fc:
    if (ctx->pc == 0x3119FCu) {
        ctx->pc = 0x311A00u;
        goto label_311a00;
    }
    ctx->pc = 0x3119F8u;
    SET_GPR_U32(ctx, 31, 0x311A00u);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3119F8u, 0x311A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A00u;
label_311a00:
    // 0x311a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311a04:
    // 0x311a04: 0x1230002d  beq         $s1, $s0, . + 4 + (0x2D << 2)
label_311a08:
    if (ctx->pc == 0x311A08u) {
        ctx->pc = 0x311A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A04u;
        // 0x311a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A0Cu;
        goto label_311a0c;
    }
    ctx->pc = 0x311A04u;
    {
        const bool branch_taken_0x311a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x311A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A04u;
        // 0x311a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a04) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x311A0Cu;
label_311a0c:
    // 0x311a0c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x311a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_311a10:
    // 0x311a10: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_311a14:
    if (ctx->pc == 0x311A14u) {
        ctx->pc = 0x311A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A10u;
        // 0x311a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A18u;
        goto label_311a18;
    }
    ctx->pc = 0x311A10u;
    {
        const bool branch_taken_0x311a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A10u;
        // 0x311a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a10) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x311A18u;
label_311a18:
    // 0x311a18: 0xc0a3630  jal         func_28D8C0
label_311a1c:
    if (ctx->pc == 0x311A1Cu) {
        ctx->pc = 0x311A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A18u;
        // 0x311a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A20u;
        goto label_311a20;
    }
    ctx->pc = 0x311A18u;
    SET_GPR_U32(ctx, 31, 0x311A20u);
    ctx->pc = 0x311A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A18u;
    // 0x311a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x311A18u, 0x311A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A20u;
label_311a20:
    // 0x311a20: 0xc0a3628  jal         func_28D8A0
label_311a24:
    if (ctx->pc == 0x311A24u) {
        ctx->pc = 0x311A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A20u;
        // 0x311a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A28u;
        goto label_311a28;
    }
    ctx->pc = 0x311A20u;
    SET_GPR_U32(ctx, 31, 0x311A28u);
    ctx->pc = 0x311A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A20u;
    // 0x311a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x311A20u, 0x311A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A28u;
label_311a28:
    // 0x311a28: 0xc0a4e54  jal         func_293950
label_311a2c:
    if (ctx->pc == 0x311A2Cu) {
        ctx->pc = 0x311A30u;
        goto label_311a30;
    }
    ctx->pc = 0x311A28u;
    SET_GPR_U32(ctx, 31, 0x311A30u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x311A28u, 0x311A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A30u;
label_311a30:
    // 0x311a30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311a34:
    // 0x311a34: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_311a38:
    if (ctx->pc == 0x311A38u) {
        ctx->pc = 0x311A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A34u;
        // 0x311a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A3Cu;
        goto label_311a3c;
    }
    ctx->pc = 0x311A34u;
    {
        const bool branch_taken_0x311a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A34u;
        // 0x311a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a34) {
            ctx->pc = 0x311A6Cu;
            goto label_311a6c;
        }
    }
    ctx->pc = 0x311A3Cu;
label_311a3c:
    // 0x311a3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x311a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311a40:
    // 0x311a40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x311a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_311a44:
    // 0x311a44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x311a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_311a48:
    // 0x311a48: 0x40f809  jalr        $v0
label_311a4c:
    if (ctx->pc == 0x311A4Cu) {
        ctx->pc = 0x311A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A48u;
        // 0x311a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A50u;
        goto label_311a50;
    }
    ctx->pc = 0x311A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311A50u);
        ctx->pc = 0x311A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A48u;
        // 0x311a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311A48u, 0x311A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311A50u;
label_311a50:
    // 0x311a50: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x311a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_311a54:
    // 0x311a54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x311a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311a58:
    // 0x311a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311a5c:
    // 0x311a5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x311a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311a60:
    // 0x311a60: 0xc0b78e0  jal         func_2DE380
label_311a64:
    if (ctx->pc == 0x311A64u) {
        ctx->pc = 0x311A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A60u;
        // 0x311a64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A68u;
        goto label_311a68;
    }
    ctx->pc = 0x311A60u;
    SET_GPR_U32(ctx, 31, 0x311A68u);
    ctx->pc = 0x311A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A60u;
    // 0x311a64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x311A60u, 0x311A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A68u;
label_311a68:
    // 0x311a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311a6c:
    // 0x311a6c: 0xc0a35d6  jal         func_28D758
label_311a70:
    if (ctx->pc == 0x311A70u) {
        ctx->pc = 0x311A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A6Cu;
        // 0x311a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A74u;
        goto label_311a74;
    }
    ctx->pc = 0x311A6Cu;
    SET_GPR_U32(ctx, 31, 0x311A74u);
    ctx->pc = 0x311A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A6Cu;
    // 0x311a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x311A6Cu, 0x311A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A74u;
label_311a74:
    // 0x311a74: 0x10000011  b           . + 4 + (0x11 << 2)
label_311a78:
    if (ctx->pc == 0x311A78u) {
        ctx->pc = 0x311A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A74u;
        // 0x311a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A7Cu;
        goto label_311a7c;
    }
    ctx->pc = 0x311A74u;
    {
        const bool branch_taken_0x311a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A74u;
        // 0x311a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a74) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x311A7Cu;
label_311a7c:
    // 0x311a7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x311a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_311a80:
    // 0x311a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311a84:
    // 0x311a84: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_311a88:
    if (ctx->pc == 0x311A88u) {
        ctx->pc = 0x311A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A84u;
        // 0x311a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A8Cu;
        goto label_311a8c;
    }
    ctx->pc = 0x311A84u;
    {
        const bool branch_taken_0x311a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x311A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A84u;
        // 0x311a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a84) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x311A8Cu;
label_311a8c:
    // 0x311a8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311a90:
    // 0x311a90: 0xc0c43ce  jal         func_310F38
label_311a94:
    if (ctx->pc == 0x311A94u) {
        ctx->pc = 0x311A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A90u;
        // 0x311a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A98u;
        goto label_311a98;
    }
    ctx->pc = 0x311A90u;
    SET_GPR_U32(ctx, 31, 0x311A98u);
    ctx->pc = 0x311A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A90u;
    // 0x311a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310F38u, 0x311A90u, 0x311A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A98u;
label_311a98:
    // 0x311a98: 0x10000008  b           . + 4 + (0x8 << 2)
label_311a9c:
    if (ctx->pc == 0x311A9Cu) {
        ctx->pc = 0x311A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A98u;
        // 0x311a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AA0u;
        goto label_311aa0;
    }
    ctx->pc = 0x311A98u;
    {
        const bool branch_taken_0x311a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A98u;
        // 0x311a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a98) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x311AA0u;
label_311aa0:
    // 0x311aa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311aa4:
    // 0x311aa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x311aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311aa8:
    // 0x311aa8: 0xc0c4494  jal         func_311250
label_311aac:
    if (ctx->pc == 0x311AACu) {
        ctx->pc = 0x311AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AA8u;
        // 0x311aac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AB0u;
        goto label_311ab0;
    }
    ctx->pc = 0x311AA8u;
    SET_GPR_U32(ctx, 31, 0x311AB0u);
    ctx->pc = 0x311AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AA8u;
    // 0x311aac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311250u, 0x311AA8u, 0x311AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AB0u;
label_311ab0:
    // 0x311ab0: 0x10000002  b           . + 4 + (0x2 << 2)
label_311ab4:
    if (ctx->pc == 0x311AB4u) {
        ctx->pc = 0x311AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AB0u;
        // 0x311ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AB8u;
        goto label_311ab8;
    }
    ctx->pc = 0x311AB0u;
    {
        const bool branch_taken_0x311ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AB0u;
        // 0x311ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ab0) {
            ctx->pc = 0x311ABCu;
            goto label_311abc;
        }
    }
    ctx->pc = 0x311AB8u;
label_311ab8:
    // 0x311ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x311ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311abc:
    // 0x311abc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x311abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311ac0:
    // 0x311ac0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x311ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311ac4:
    // 0x311ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311ac8:
    // 0x311ac8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x311ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311acc:
    // 0x311acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311ad0:
    // 0x311ad0: 0x3e00008  jr          $ra
label_311ad4:
    if (ctx->pc == 0x311AD4u) {
        ctx->pc = 0x311AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AD0u;
        // 0x311ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AD8u;
        goto label_fallthrough_0x311ad0;
    }
    ctx->pc = 0x311AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AD0u;
        // 0x311ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x311ad0:
    ctx->pc = 0x311AD8u;
}
