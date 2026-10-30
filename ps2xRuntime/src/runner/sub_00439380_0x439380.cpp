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

// Function: sub_00439380
// Address: 0x439380 - 0x439678
void sub_00439380_0x439380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439380_0x439380");
#endif

    switch (ctx->pc) {
        case 0x4393a4u: goto label_4393a4;
        case 0x43943cu: goto label_43943c;
        case 0x439444u: goto label_439444;
        case 0x439628u: goto label_439628;
        case 0x439660u: goto label_439660;
        default: break;
    }

    ctx->pc = 0x439380u;

    // 0x439380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x439380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x439384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x439384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x439388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43938c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43938cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x439390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x439394: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x439394u;
    {
        const bool branch_taken_0x439394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x439398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439394u;
        // 0x439398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439394) {
            ctx->pc = 0x439660u;
            goto label_439660;
        }
    }
    ctx->pc = 0x43939Cu;
    // 0x43939c: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x43939Cu;
    SET_GPR_U32(ctx, 31, 0x4393A4u);
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x43939Cu, 0x4393A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4393A4u;
label_4393a4:
    // 0x4393a4: 0x260afff8  addiu       $t2, $s0, -0x8
    ctx->pc = 0x4393a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x4393a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4393a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4393ac: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x4393acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4393b0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4393b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4393b4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x4393b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x4393b8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4393b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4393bc: 0xc24824  and         $t1, $a2, $v0
    ctx->pc = 0x4393bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4393c0: 0x24ab6d90  addiu       $t3, $a1, 0x6D90
    ctx->pc = 0x4393c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 28048));
    // 0x4393c4: 0x1493821  addu        $a3, $t2, $t1
    ctx->pc = 0x4393c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x4393c8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x4393c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x4393cc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x4393ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4393d0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x4393d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4393d4: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x4393d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4393d8: 0x14e2001c  bne         $a3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4393D8u;
    {
        const bool branch_taken_0x4393d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4393DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4393D8u;
        // 0x4393dc: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4393d8) {
            ctx->pc = 0x43944Cu;
            goto label_43944c;
        }
    }
    ctx->pc = 0x4393E0u;
    // 0x4393e0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4393e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4393e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4393E4u;
    {
        const bool branch_taken_0x4393e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4393E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4393E4u;
        // 0x4393e8: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4393e4) {
            ctx->pc = 0x439408u;
            goto label_439408;
        }
    }
    ctx->pc = 0x4393ECu;
    // 0x4393ec: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x4393ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x4393f0: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x4393f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x4393f4: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x4393f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x4393f8: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x4393f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4393fc: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x4393fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x439400: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x439400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x439404: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x439404u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_439408:
    // 0x439408: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x439408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x43940c: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x43940cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x439410: 0xdc857198  ld          $a1, 0x7198($a0)
    ctx->pc = 0x439410u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 29080)));
    // 0x439414: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x439414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x439418: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x439418u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x43941c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x439420: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x439420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x439424: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x439424u;
    {
        const bool branch_taken_0x439424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439424u;
        // 0x439428: 0xad6a0008  sw          $t2, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439424) {
            ctx->pc = 0x43943Cu;
            goto label_43943c;
        }
    }
    ctx->pc = 0x43942Cu;
    // 0x43942c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x439430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x439430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439434: 0xc10e59e  jal         func_439678
    ctx->pc = 0x439434u;
    SET_GPR_U32(ctx, 31, 0x43943Cu);
    ctx->pc = 0x439438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439434u;
    // 0x439438: 0x8c4571a0  lw          $a1, 0x71A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439678u, 0x439434u, 0x43943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43943Cu;
label_43943c:
    // 0x43943c: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x43943Cu;
    SET_GPR_U32(ctx, 31, 0x439444u);
    ctx->pc = 0x439440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43943Cu;
    // 0x439440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x43943Cu, 0x439444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439444u;
label_439444:
    // 0x439444: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x439444u;
    {
        const bool branch_taken_0x439444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439444u;
        // 0x439448: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439444) {
            ctx->pc = 0x439664u;
            goto label_439664;
        }
    }
    ctx->pc = 0x43944Cu;
label_43944c:
    // 0x43944c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x43944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x439450: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x439450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x439454: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x439454u;
    {
        const bool branch_taken_0x439454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439454u;
        // 0x439458: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439454) {
            ctx->pc = 0x43948Cu;
            goto label_43948c;
        }
    }
    ctx->pc = 0x43945Cu;
    // 0x43945c: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x43945cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x439460: 0x25620008  addiu       $v0, $t3, 0x8
    ctx->pc = 0x439460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x439464: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x439464u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x439468: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x439468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x43946c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43946Cu;
    {
        const bool branch_taken_0x43946c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x439470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43946Cu;
        // 0x439470: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43946c) {
            ctx->pc = 0x43947Cu;
            goto label_43947c;
        }
    }
    ctx->pc = 0x439474u;
    // 0x439474: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x439474u;
    {
        const bool branch_taken_0x439474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439474u;
        // 0x439478: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439474) {
            ctx->pc = 0x43948Cu;
            goto label_43948c;
        }
    }
    ctx->pc = 0x43947Cu;
label_43947c:
    // 0x43947c: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x43947cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x439480: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x439480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439484: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x439484u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x439488: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x439488u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_43948c:
    // 0x43948c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x43948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x439490: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x439490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x439494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x439494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x439498: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x439498u;
    {
        const bool branch_taken_0x439498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439498u;
        // 0x43949c: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x439498) {
            ctx->pc = 0x4394E8u;
            goto label_4394e8;
        }
    }
    ctx->pc = 0x4394A0u;
    // 0x4394a0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x4394a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x4394a4: 0x1580000b  bnez        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x4394A4u;
    {
        const bool branch_taken_0x4394a4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x4394A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4394A4u;
        // 0x4394a8: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4394a4) {
            ctx->pc = 0x4394D4u;
            goto label_4394d4;
        }
    }
    ctx->pc = 0x4394ACu;
    // 0x4394ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4394acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4394b0: 0x24426d98  addiu       $v0, $v0, 0x6D98
    ctx->pc = 0x4394b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28056));
    // 0x4394b4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4394B4u;
    {
        const bool branch_taken_0x4394b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4394b4) {
            ctx->pc = 0x4394B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4394B4u;
            // 0x4394b8: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4394D8u;
            goto label_4394d8;
        }
    }
    ctx->pc = 0x4394BCu;
    // 0x4394bc: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x4394bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x4394c0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x4394c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4394c4: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x4394c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x4394c8: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x4394c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x4394cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4394CCu;
    {
        const bool branch_taken_0x4394cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4394D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4394CCu;
        // 0x4394d0: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4394cc) {
            ctx->pc = 0x4394E4u;
            goto label_4394e4;
        }
    }
    ctx->pc = 0x4394D4u;
label_4394d4:
    // 0x4394d4: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x4394d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_4394d8:
    // 0x4394d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4394d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4394dc: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x4394dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x4394e0: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x4394e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_4394e4:
    // 0x4394e4: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x4394e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_4394e8:
    // 0x4394e8: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x4394e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x4394ec: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x4394ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x4394f0: 0x15800059  bnez        $t4, . + 4 + (0x59 << 2)
    ctx->pc = 0x4394F0u;
    {
        const bool branch_taken_0x4394f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x4394F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4394F0u;
        // 0x4394f4: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4394f0) {
            ctx->pc = 0x439658u;
            goto label_439658;
        }
    }
    ctx->pc = 0x4394F8u;
    // 0x4394f8: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x4394f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x4394fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4394FCu;
    {
        const bool branch_taken_0x4394fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4394FCu;
        // 0x439500: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4394fc) {
            ctx->pc = 0x439548u;
            goto label_439548;
        }
    }
    ctx->pc = 0x439504u;
    // 0x439504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x439504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x439508: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x439508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x43950c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x43950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x439510: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x439510u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x439514: 0x25a56d90  addiu       $a1, $t5, 0x6D90
    ctx->pc = 0x439514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 28048));
    // 0x439518: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x439518u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x43951c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x439520: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x439520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x439524: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x439524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x439528: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x439528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43952c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43952cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x439530: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x439530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x439534: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x439534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x439538: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x439538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x43953c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x43953cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x439540: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x439540u;
    {
        const bool branch_taken_0x439540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439540u;
        // 0x439544: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439540) {
            ctx->pc = 0x439648u;
            goto label_439648;
        }
    }
    ctx->pc = 0x439548u;
label_439548:
    // 0x439548: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x439548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x43954c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43954Cu;
    {
        const bool branch_taken_0x43954c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43954Cu;
        // 0x439550: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43954c) {
            ctx->pc = 0x43955Cu;
            goto label_43955c;
        }
    }
    ctx->pc = 0x439554u;
    // 0x439554: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x439554u;
    {
        const bool branch_taken_0x439554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439554u;
        // 0x439558: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439554) {
            ctx->pc = 0x4395B8u;
            goto label_4395b8;
        }
    }
    ctx->pc = 0x43955Cu;
label_43955c:
    // 0x43955c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43955Cu;
    {
        const bool branch_taken_0x43955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43955Cu;
        // 0x439560: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43955c) {
            ctx->pc = 0x43956Cu;
            goto label_43956c;
        }
    }
    ctx->pc = 0x439564u;
    // 0x439564: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x439564u;
    {
        const bool branch_taken_0x439564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439564u;
        // 0x439568: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439564) {
            ctx->pc = 0x4395B8u;
            goto label_4395b8;
        }
    }
    ctx->pc = 0x43956Cu;
label_43956c:
    // 0x43956c: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x43956cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x439570: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x439570u;
    {
        const bool branch_taken_0x439570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439570u;
        // 0x439574: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439570) {
            ctx->pc = 0x4395B8u;
            goto label_4395b8;
        }
    }
    ctx->pc = 0x439578u;
    // 0x439578: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x439578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x43957c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43957Cu;
    {
        const bool branch_taken_0x43957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43957Cu;
        // 0x439580: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43957c) {
            ctx->pc = 0x43958Cu;
            goto label_43958c;
        }
    }
    ctx->pc = 0x439584u;
    // 0x439584: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x439584u;
    {
        const bool branch_taken_0x439584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439584u;
        // 0x439588: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439584) {
            ctx->pc = 0x4395B8u;
            goto label_4395b8;
        }
    }
    ctx->pc = 0x43958Cu;
label_43958c:
    // 0x43958c: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x43958cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x439590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x439590u;
    {
        const bool branch_taken_0x439590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439590u;
        // 0x439594: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439590) {
            ctx->pc = 0x4395A0u;
            goto label_4395a0;
        }
    }
    ctx->pc = 0x439598u;
    // 0x439598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x439598u;
    {
        const bool branch_taken_0x439598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439598u;
        // 0x43959c: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439598) {
            ctx->pc = 0x4395B8u;
            goto label_4395b8;
        }
    }
    ctx->pc = 0x4395A0u;
label_4395a0:
    // 0x4395a0: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x4395a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x4395a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4395A4u;
    {
        const bool branch_taken_0x4395a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4395A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4395A4u;
        // 0x4395a8: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4395a4) {
            ctx->pc = 0x4395B4u;
            goto label_4395b4;
        }
    }
    ctx->pc = 0x4395ACu;
    // 0x4395ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4395ACu;
    {
        const bool branch_taken_0x4395ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4395B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4395ACu;
        // 0x4395b0: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4395ac) {
            ctx->pc = 0x4395B8u;
            goto label_4395b8;
        }
    }
    ctx->pc = 0x4395B4u;
label_4395b4:
    // 0x4395b4: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x4395b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_4395b8:
    // 0x4395b8: 0x25ab6d90  addiu       $t3, $t5, 0x6D90
    ctx->pc = 0x4395b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 28048));
    // 0x4395bc: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x4395bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4395c0: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x4395c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4395c4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x4395c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4395c8: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x4395C8u;
    {
        const bool branch_taken_0x4395c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x4395c8) {
            ctx->pc = 0x4395CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4395C8u;
            // 0x4395cc: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439604u;
            goto label_439604;
        }
    }
    ctx->pc = 0x4395D0u;
    // 0x4395d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4395d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4395d4: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x4395d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x4395d8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4395d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4395dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4395dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4395e0: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x4395e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x4395e4: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x4395e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4395e8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4395e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4395ec: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x4395ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x4395f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4395f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4395f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4395f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4395f8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4395f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4395fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4395FCu;
    {
        const bool branch_taken_0x4395fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4395FCu;
        // 0x439600: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4395fc) {
            ctx->pc = 0x439648u;
            goto label_439648;
        }
    }
    ctx->pc = 0x439604u;
label_439604:
    // 0x439604: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x439604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x439608: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x439608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x43960c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x43960cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x439610: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x439610u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x439614: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x439614u;
    {
        const bool branch_taken_0x439614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x439614) {
            ctx->pc = 0x439618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x439614u;
            // 0x439618: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439648u;
            goto label_439648;
        }
    }
    ctx->pc = 0x43961Cu;
    // 0x43961c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x43961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x439620: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x439620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x439624: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x439624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_439628:
    // 0x439628: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x439628u;
    {
        const bool branch_taken_0x439628 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x439628) {
            ctx->pc = 0x43962Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x439628u;
            // 0x43962c: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439648u;
            goto label_439648;
        }
    }
    ctx->pc = 0x439630u;
    // 0x439630: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x439630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x439634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x439634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x439638: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x439638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x43963c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43963Cu;
    {
        const bool branch_taken_0x43963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43963c) {
            ctx->pc = 0x439640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43963Cu;
            // 0x439640: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439628;
        }
    }
    ctx->pc = 0x439644u;
    // 0x439644: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x439644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_439648:
    // 0x439648: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x439648u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x43964c: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x43964cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x439650: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x439650u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x439654: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x439654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
label_439658:
    // 0x439658: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x439658u;
    SET_GPR_U32(ctx, 31, 0x439660u);
    ctx->pc = 0x43965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439658u;
    // 0x43965c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x439658u, 0x439660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439660u;
label_439660:
    // 0x439660: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x439660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_439664:
    // 0x439664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x439668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x439668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43966c: 0x3e00008  jr          $ra
    ctx->pc = 0x43966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43966Cu;
        // 0x439670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43966Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439674u;
    // 0x439674: 0x0  nop
    ctx->pc = 0x439674u;
    // NOP
    ctx->pc = 0x439678u;
}
