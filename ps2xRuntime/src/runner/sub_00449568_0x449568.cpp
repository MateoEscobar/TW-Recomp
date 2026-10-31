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

// Function: sub_00449568
// Address: 0x449568 - 0x449990
void sub_00449568_0x449568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449568_0x449568");
#endif

    switch (ctx->pc) {
        case 0x4495b8u: goto label_4495b8;
        case 0x4495dcu: goto label_4495dc;
        case 0x449654u: goto label_449654;
        case 0x4496ecu: goto label_4496ec;
        case 0x449710u: goto label_449710;
        case 0x44977cu: goto label_44977c;
        case 0x4497a0u: goto label_4497a0;
        case 0x449814u: goto label_449814;
        case 0x4498d8u: goto label_4498d8;
        case 0x4498fcu: goto label_4498fc;
        default: break;
    }

    ctx->pc = 0x449568u;

    // 0x449568: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x449568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x44956c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x449570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x449570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449574: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x449574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x449578: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x449578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x44957c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x44957cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449580: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x449580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x449584: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x449584u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449588: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x449588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44958c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x44958cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449590: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x449590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x449594: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x449594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449598: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x449598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44959c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x44959cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4495a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4495a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4495a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4495a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4495a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4495a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4495ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4495acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4495b0: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x4495B0u;
    SET_GPR_U32(ctx, 31, 0x4495B8u);
    ctx->pc = 0x4495B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4495B0u;
    // 0x4495b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x4495B0u, 0x4495B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4495B8u;
label_4495b8:
    // 0x4495b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4495b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4495bc: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x4495bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x4495c0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4495c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4495c4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x4495c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x4495c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4495c8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4495cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4495ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4495d0: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x4495d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x4495d4: 0xc1128da  jal         func_44A368
    ctx->pc = 0x4495D4u;
    SET_GPR_U32(ctx, 31, 0x4495DCu);
    ctx->pc = 0x4495D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4495D4u;
    // 0x4495d8: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x4495D4u, 0x4495DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4495DCu;
label_4495dc:
    // 0x4495dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4495dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4495e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4495e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4495e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4495e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4495e8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x4495e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x4495ec: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x4495ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x4495f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4495f0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10000000
    // 0x4495f4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x4495f4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x4495f8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4495f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4495fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4495fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x449600: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449600u;
    {
        const bool branch_taken_0x449600 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x449604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449600u;
        // 0x449604: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449600) {
            ctx->pc = 0x449618u;
            goto label_449618;
        }
    }
    ctx->pc = 0x449608u;
    // 0x449608: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x449608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x44960c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x44960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x449610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x449610u;
    {
        const bool branch_taken_0x449610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449610u;
        // 0x449614: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449610) {
            ctx->pc = 0x44961Cu;
            goto label_44961c;
        }
    }
    ctx->pc = 0x449618u;
label_449618:
    // 0x449618: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x449618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44961c:
    // 0x44961c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x44961cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x449620: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x449620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x449624: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x449624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x449628: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x449628u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x44962c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x44962cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x449630: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x449630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x449634: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x449634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x449638: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x449638u;
    {
        const bool branch_taken_0x449638 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449638u;
        // 0x44963c: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449638) {
            ctx->pc = 0x44965Cu;
            goto label_44965c;
        }
    }
    ctx->pc = 0x449640u;
    // 0x449640: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x449640u;
    {
        const bool branch_taken_0x449640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449640u;
        // 0x449644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449640) {
            ctx->pc = 0x449660u;
            goto label_449660;
        }
    }
    ctx->pc = 0x449648u;
    // 0x449648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x449648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44964c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44964Cu;
    SET_GPR_U32(ctx, 31, 0x449654u);
    ctx->pc = 0x449650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44964Cu;
    // 0x449650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44964Cu, 0x449654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449654u;
label_449654:
    // 0x449654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x449654u;
    {
        const bool branch_taken_0x449654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449654u;
        // 0x449658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449654) {
            ctx->pc = 0x449660u;
            goto label_449660;
        }
    }
    ctx->pc = 0x44965Cu;
label_44965c:
    // 0x44965c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44965cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449660:
    // 0x449660: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x449660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449664: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x449664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x449668: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x449668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x44966c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x44966cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x449670: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x449670u;
    {
        const bool branch_taken_0x449670 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x449674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449670u;
        // 0x449674: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449670) {
            ctx->pc = 0x4496A4u;
            goto label_4496a4;
        }
    }
    ctx->pc = 0x449678u;
    // 0x449678: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x449678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x44967c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x44967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x449680: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x449680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x449684: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x449684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x449688: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x449688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44968c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x44968cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x449690: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x449690u;
    {
        const bool branch_taken_0x449690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x449694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449690u;
        // 0x449694: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449690) {
            ctx->pc = 0x4496D8u;
            goto label_4496d8;
        }
    }
    ctx->pc = 0x449698u;
    // 0x449698: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x449698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x44969c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x44969Cu;
    {
        const bool branch_taken_0x44969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4496A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44969Cu;
        // 0x4496a0: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44969c) {
            ctx->pc = 0x4496D4u;
            goto label_4496d4;
        }
    }
    ctx->pc = 0x4496A4u;
label_4496a4:
    // 0x4496a4: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4496A4u;
    {
        const bool branch_taken_0x4496a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4496A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496A4u;
        // 0x4496a8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4496a4) {
            ctx->pc = 0x4496D8u;
            goto label_4496d8;
        }
    }
    ctx->pc = 0x4496ACu;
    // 0x4496ac: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x4496acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x4496b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4496b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4496b4: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x4496b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x4496b8: 0x61823  negu        $v1, $a2
    ctx->pc = 0x4496b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4496bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4496bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4496c0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4496c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4496c4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x4496c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4496c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4496C8u;
    {
        const bool branch_taken_0x4496c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4496CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496C8u;
        // 0x4496cc: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4496c8) {
            ctx->pc = 0x4496D4u;
            goto label_4496d4;
        }
    }
    ctx->pc = 0x4496D0u;
    // 0x4496d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4496d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4496d4:
    // 0x4496d4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4496d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4496d8:
    // 0x4496d8: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x4496d8u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4496dc: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x4496DCu;
    {
        const bool branch_taken_0x4496dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4496E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4496DCu;
        // 0x4496e0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4496dc) {
            ctx->pc = 0x449774u;
            goto label_449774;
        }
    }
    ctx->pc = 0x4496E4u;
    // 0x4496e4: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x4496E4u;
    SET_GPR_U32(ctx, 31, 0x4496ECu);
    ctx->pc = 0x4496E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4496E4u;
    // 0x4496e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x4496E4u, 0x4496ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4496ECu;
label_4496ec:
    // 0x4496ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4496f0: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x4496f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x4496f4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4496f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4496f8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x4496f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x4496fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4496fcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x449700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x449700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449704: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x449704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x449708: 0xc1128da  jal         func_44A368
    ctx->pc = 0x449708u;
    SET_GPR_U32(ctx, 31, 0x449710u);
    ctx->pc = 0x44970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449708u;
    // 0x44970c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x449708u, 0x449710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449710u;
label_449710:
    // 0x449710: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x449710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449714: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x449714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x449718: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44971c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x44971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x449720: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x449720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x449724: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x449724u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10000000
    // 0x449728: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x449728u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x44972c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x44972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x449730: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x449730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x449734: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449734u;
    {
        const bool branch_taken_0x449734 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x449738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449734u;
        // 0x449738: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449734) {
            ctx->pc = 0x44974Cu;
            goto label_44974c;
        }
    }
    ctx->pc = 0x44973Cu;
    // 0x44973c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x44973cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x449740: 0x21023  negu        $v0, $v0
    ctx->pc = 0x449740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x449744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x449744u;
    {
        const bool branch_taken_0x449744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449744u;
        // 0x449748: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449744) {
            ctx->pc = 0x449750u;
            goto label_449750;
        }
    }
    ctx->pc = 0x44974Cu;
label_44974c:
    // 0x44974c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x44974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_449750:
    // 0x449750: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x449750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x449754: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x449754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x449758: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x449758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x44975c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x44975cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x449760: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x449760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x449764: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x449764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x449768: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x449768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x44976c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x44976cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x449770: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x449770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_449774:
    // 0x449774: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x449774u;
    SET_GPR_U32(ctx, 31, 0x44977Cu);
    ctx->pc = 0x449778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449774u;
    // 0x449778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x449774u, 0x44977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44977Cu;
label_44977c:
    // 0x44977c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x449780: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x449780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x449784: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x449784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x449788: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x449788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x44978c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44978cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x449790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x449790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449794: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x449794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x449798: 0xc1128da  jal         func_44A368
    ctx->pc = 0x449798u;
    SET_GPR_U32(ctx, 31, 0x4497A0u);
    ctx->pc = 0x44979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449798u;
    // 0x44979c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x449798u, 0x4497A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4497A0u;
label_4497a0:
    // 0x4497a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4497a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4497a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4497a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4497a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4497a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4497ac: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x4497acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x4497b0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x4497b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x4497b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4497b4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10000000
    // 0x4497b8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x4497b8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x4497bc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4497bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4497c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4497c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4497c4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4497C4u;
    {
        const bool branch_taken_0x4497c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4497C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497C4u;
        // 0x4497c8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497c4) {
            ctx->pc = 0x4497DCu;
            goto label_4497dc;
        }
    }
    ctx->pc = 0x4497CCu;
    // 0x4497cc: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x4497ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x4497d0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4497d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4497D4u;
    {
        const bool branch_taken_0x4497d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4497D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497D4u;
        // 0x4497d8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497d4) {
            ctx->pc = 0x4497E0u;
            goto label_4497e0;
        }
    }
    ctx->pc = 0x4497DCu;
label_4497dc:
    // 0x4497dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4497e0:
    // 0x4497e0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x4497e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x4497e4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x4497e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4497e8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x4497e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4497ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4497ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4497f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4497f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4497f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4497f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4497f8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x4497f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x4497fc: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x4497FCu;
    {
        const bool branch_taken_0x4497fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x449800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497FCu;
        // 0x449800: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497fc) {
            ctx->pc = 0x44981Cu;
            goto label_44981c;
        }
    }
    ctx->pc = 0x449804u;
    // 0x449804: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449804u;
    {
        const bool branch_taken_0x449804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449804u;
        // 0x449808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449804) {
            ctx->pc = 0x44981Cu;
            goto label_44981c;
        }
    }
    ctx->pc = 0x44980Cu;
    // 0x44980c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44980Cu;
    SET_GPR_U32(ctx, 31, 0x449814u);
    ctx->pc = 0x449810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44980Cu;
    // 0x449810: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44980Cu, 0x449814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449814u;
label_449814:
    // 0x449814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x449814u;
    {
        const bool branch_taken_0x449814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449814u;
        // 0x449818: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449814) {
            ctx->pc = 0x449820u;
            goto label_449820;
        }
    }
    ctx->pc = 0x44981Cu;
label_44981c:
    // 0x44981c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44981cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449820:
    // 0x449820: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x449820u;
    {
        const bool branch_taken_0x449820 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x449820) {
            ctx->pc = 0x449824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449820u;
            // 0x449824: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449838u;
            goto label_449838;
        }
    }
    ctx->pc = 0x449828u;
    // 0x449828: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x449828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x44982c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x44982cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x449830: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x449830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x449834: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x449834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_449838:
    // 0x449838: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x449838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x44983c: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x44983cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x449840: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x449840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x449844: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x449844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x449848: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x449848u;
    {
        const bool branch_taken_0x449848 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x44984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449848u;
        // 0x44984c: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449848) {
            ctx->pc = 0x44987Cu;
            goto label_44987c;
        }
    }
    ctx->pc = 0x449850u;
    // 0x449850: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x449850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x449854: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x449854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x449858: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x449858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x44985c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x449860: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x449860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x449864: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x449864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x449868: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x449868u;
    {
        const bool branch_taken_0x449868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449868u;
        // 0x44986c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449868) {
            ctx->pc = 0x4498B0u;
            goto label_4498b0;
        }
    }
    ctx->pc = 0x449870u;
    // 0x449870: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x449870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x449874: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x449874u;
    {
        const bool branch_taken_0x449874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449874u;
        // 0x449878: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449874) {
            ctx->pc = 0x4498ACu;
            goto label_4498ac;
        }
    }
    ctx->pc = 0x44987Cu;
label_44987c:
    // 0x44987c: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x44987Cu;
    {
        const bool branch_taken_0x44987c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x449880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44987Cu;
        // 0x449880: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44987c) {
            ctx->pc = 0x4498B0u;
            goto label_4498b0;
        }
    }
    ctx->pc = 0x449884u;
    // 0x449884: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x449884u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x449888: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x449888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x44988c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x44988cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x449890: 0x61823  negu        $v1, $a2
    ctx->pc = 0x449890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x449894: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x449894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x449898: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x449898u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44989c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x44989cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4498a0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4498A0u;
    {
        const bool branch_taken_0x4498a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4498A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498A0u;
        // 0x4498a4: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4498a0) {
            ctx->pc = 0x4498ACu;
            goto label_4498ac;
        }
    }
    ctx->pc = 0x4498A8u;
    // 0x4498a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4498a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4498ac:
    // 0x4498ac: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4498acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4498b0:
    // 0x4498b0: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x4498b0u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4498b4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x4498B4u;
    {
        const bool branch_taken_0x4498b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4498B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498B4u;
        // 0x4498b8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4498b4) {
            ctx->pc = 0x4498C8u;
            goto label_4498c8;
        }
    }
    ctx->pc = 0x4498BCu;
    // 0x4498bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4498bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4498c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4498c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4498c4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x4498c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_4498c8:
    // 0x4498c8: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x4498C8u;
    {
        const bool branch_taken_0x4498c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4498CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498C8u;
        // 0x4498cc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4498c8) {
            ctx->pc = 0x449964u;
            goto label_449964;
        }
    }
    ctx->pc = 0x4498D0u;
    // 0x4498d0: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x4498D0u;
    SET_GPR_U32(ctx, 31, 0x4498D8u);
    ctx->pc = 0x4498D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4498D0u;
    // 0x4498d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x4498D0u, 0x4498D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4498D8u;
label_4498d8:
    // 0x4498d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4498d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4498dc: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x4498dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x4498e0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4498e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4498e4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x4498e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x4498e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4498e8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4498ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4498ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4498f0: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x4498f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x4498f4: 0xc1128da  jal         func_44A368
    ctx->pc = 0x4498F4u;
    SET_GPR_U32(ctx, 31, 0x4498FCu);
    ctx->pc = 0x4498F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4498F4u;
    // 0x4498f8: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x4498F4u, 0x4498FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4498FCu;
label_4498fc:
    // 0x4498fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4498fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449900: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x449900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x449904: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x449908: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x449908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x44990c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x44990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x449910: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x449910u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10000000
    // 0x449914: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x449914u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x449918: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x449918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x44991c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x44991cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x449920: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449920u;
    {
        const bool branch_taken_0x449920 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x449924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449920u;
        // 0x449924: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449920) {
            ctx->pc = 0x449938u;
            goto label_449938;
        }
    }
    ctx->pc = 0x449928u;
    // 0x449928: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x449928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x44992c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x44992cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x449930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x449930u;
    {
        const bool branch_taken_0x449930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449930u;
        // 0x449934: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449930) {
            ctx->pc = 0x44993Cu;
            goto label_44993c;
        }
    }
    ctx->pc = 0x449938u;
label_449938:
    // 0x449938: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x449938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44993c:
    // 0x44993c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x44993cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x449940: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x449940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x449944: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x449944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x449948: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x449948u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x44994c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x44994cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x449950: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x449950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x449954: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x449954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x449958: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x449958u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x44995c: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x44995cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x449960: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x449960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_449964:
    // 0x449964: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x449964u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x449968: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x449968u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44996c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x44996cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x449970: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x449970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x449974: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x449974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x449978: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x449978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44997c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44997cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449980: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x449980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x449984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x449984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449988: 0x3e00008  jr          $ra
    ctx->pc = 0x449988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449988u;
        // 0x44998c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449990u;
}
