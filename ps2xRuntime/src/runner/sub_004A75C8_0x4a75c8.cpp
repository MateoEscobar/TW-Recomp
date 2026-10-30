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

// Function: sub_004A75C8
// Address: 0x4a75c8 - 0x4a7b20
void sub_004A75C8_0x4a75c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A75C8_0x4a75c8");
#endif

    switch (ctx->pc) {
        case 0x4a7618u: goto label_4a7618;
        case 0x4a7640u: goto label_4a7640;
        case 0x4a766cu: goto label_4a766c;
        case 0x4a7678u: goto label_4a7678;
        case 0x4a7698u: goto label_4a7698;
        case 0x4a76c4u: goto label_4a76c4;
        case 0x4a76d0u: goto label_4a76d0;
        case 0x4a7708u: goto label_4a7708;
        case 0x4a7714u: goto label_4a7714;
        case 0x4a7728u: goto label_4a7728;
        case 0x4a7780u: goto label_4a7780;
        case 0x4a77e8u: goto label_4a77e8;
        case 0x4a7810u: goto label_4a7810;
        case 0x4a7844u: goto label_4a7844;
        case 0x4a7890u: goto label_4a7890;
        case 0x4a794cu: goto label_4a794c;
        case 0x4a7958u: goto label_4a7958;
        case 0x4a797cu: goto label_4a797c;
        case 0x4a79c8u: goto label_4a79c8;
        case 0x4a7a10u: goto label_4a7a10;
        case 0x4a7a2cu: goto label_4a7a2c;
        case 0x4a7aacu: goto label_4a7aac;
        case 0x4a7ab8u: goto label_4a7ab8;
        default: break;
    }

    ctx->pc = 0x4a75c8u;

    // 0x4a75c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4a75c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4a75cc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a75d0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4a75d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4a75d4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4a75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4a75d8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4a75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4a75dc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4a75dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4a75e0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4a75e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4a75e4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4a75e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4a75e8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4a75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4a75ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a75ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4a75f0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4a75f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x4a75f4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4a75f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x4a75f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a75f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a75fc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4a75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a7600: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4a7600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4a7604: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a7604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a7608: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x4a7608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4a760c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x4a760cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a7610: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x4a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x4a7614: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x4a7614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a7618:
    // 0x4a7618: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a761c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a761cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7620: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x4a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4a7624: 0x24970020  addiu       $s7, $a0, 0x20
    ctx->pc = 0x4a7624u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4a7628: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4A7628u;
    {
        const bool branch_taken_0x4a7628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7628u;
        // 0x4a762c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7628) {
            ctx->pc = 0x4A7700u;
            goto label_4a7700;
        }
    }
    ctx->pc = 0x4A7630u;
    // 0x4a7630: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x4a7630u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a7634: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4a7634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a7638: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x4a7638u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a763c: 0x22b1018  mult        $v0, $s1, $t3
    ctx->pc = 0x4a763cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a7640:
    // 0x4a7640: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x4a7640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4a7644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a7648: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4a7648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a764c: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4A764Cu;
    {
        const bool branch_taken_0x4a764c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a764c) {
            ctx->pc = 0x4A7650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A764Cu;
            // 0x4a7650: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7680u;
            goto label_4a7680;
        }
    }
    ctx->pc = 0x4A7654u;
    // 0x4a7654: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x4a7654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x4a7658: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a7658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a765c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x4a765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4a7660: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a7660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a7664: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A7664u;
    SET_GPR_U32(ctx, 31, 0x4A766Cu);
    ctx->pc = 0x4A7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7664u;
    // 0x4a7668: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A7664u, 0x4A766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A766Cu;
label_4a766c:
    // 0x4a766c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7670: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A7670u;
    SET_GPR_U32(ctx, 31, 0x4A7678u);
    ctx->pc = 0x4A7674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7670u;
    // 0x4a7674: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A7670u, 0x4A7678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7678u;
label_4a7678:
    // 0x4a7678: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x4A7678u;
    {
        const bool branch_taken_0x4a7678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7678u;
        // 0x4a767c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7678) {
            ctx->pc = 0x4A7AECu;
            goto label_4a7aec;
        }
    }
    ctx->pc = 0x4A7680u;
label_4a7680:
    // 0x4a7680: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x4a7680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a7684: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a7684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a7688: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A7688u;
    {
        const bool branch_taken_0x4a7688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7688u;
        // 0x4a768c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7688) {
            ctx->pc = 0x4A76E8u;
            goto label_4a76e8;
        }
    }
    ctx->pc = 0x4A7690u;
    // 0x4a7690: 0x20a2018  mult        $a0, $s0, $t2
    ctx->pc = 0x4a7690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a7694: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a7694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a7698:
    // 0x4a7698: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x4a7698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x4a769c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a76a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a76a4: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4A76A4u;
    {
        const bool branch_taken_0x4a76a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a76a4) {
            ctx->pc = 0x4A76A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A76A4u;
            // 0x4a76a8: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A76D8u;
            goto label_4a76d8;
        }
    }
    ctx->pc = 0x4A76ACu;
    // 0x4a76ac: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4a76acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4a76b0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x4a76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4a76b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a76b8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4a76b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a76bc: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A76BCu;
    SET_GPR_U32(ctx, 31, 0x4A76C4u);
    ctx->pc = 0x4A76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76BCu;
    // 0x4a76c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A76BCu, 0x4A76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76C4u;
label_4a76c4:
    // 0x4a76c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a76c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a76c8: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A76C8u;
    SET_GPR_U32(ctx, 31, 0x4A76D0u);
    ctx->pc = 0x4A76CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76C8u;
    // 0x4a76cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A76C8u, 0x4A76D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76D0u;
label_4a76d0:
    // 0x4a76d0: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x4A76D0u;
    {
        const bool branch_taken_0x4a76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76D0u;
        // 0x4a76d4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a76d0) {
            ctx->pc = 0x4A7AECu;
            goto label_4a7aec;
        }
    }
    ctx->pc = 0x4A76D8u;
label_4a76d8:
    // 0x4a76d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a76d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a76dc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a76dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a76e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A76E0u;
    {
        const bool branch_taken_0x4a76e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76E0u;
        // 0x4a76e4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a76e0) {
            ctx->pc = 0x4A7698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7698;
        }
    }
    ctx->pc = 0x4A76E8u;
label_4a76e8:
    // 0x4a76e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a76e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a76ec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4a76ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a76f0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x4a76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4a76f4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a76f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a76f8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x4A76F8u;
    {
        const bool branch_taken_0x4a76f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76F8u;
        // 0x4a76fc: 0x22b1018  mult        $v0, $s1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a76f8) {
            ctx->pc = 0x4A7640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7640;
        }
    }
    ctx->pc = 0x4A7700u;
label_4a7700:
    // 0x4a7700: 0xc129be2  jal         func_4A6F88
    ctx->pc = 0x4A7700u;
    SET_GPR_U32(ctx, 31, 0x4A7708u);
    ctx->pc = 0x4A7704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7700u;
    // 0x4a7704: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6F88u, 0x4A7700u, 0x4A7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7708u;
label_4a7708:
    // 0x4a7708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a7708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a770c: 0xc129c0e  jal         func_4A7038
    ctx->pc = 0x4A770Cu;
    SET_GPR_U32(ctx, 31, 0x4A7714u);
    ctx->pc = 0x4A7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A770Cu;
    // 0x4a7710: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7038u, 0x4A770Cu, 0x4A7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7714u;
label_4a7714:
    // 0x4a7714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a7714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7718: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A7718u;
    {
        const bool branch_taken_0x4a7718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7718u;
        // 0x4a771c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7718) {
            ctx->pc = 0x4A7748u;
            goto label_4a7748;
        }
    }
    ctx->pc = 0x4A7720u;
    // 0x4a7720: 0xc129c0e  jal         func_4A7038
    ctx->pc = 0x4A7720u;
    SET_GPR_U32(ctx, 31, 0x4A7728u);
    ctx->pc = 0x4A7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7720u;
    // 0x4a7724: 0x2242018  mult        $a0, $s1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7038u, 0x4A7720u, 0x4A7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7728u;
label_4a7728:
    // 0x4a7728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7728u;
    {
        const bool branch_taken_0x4a7728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7728u;
        // 0x4a772c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7728) {
            ctx->pc = 0x4A7748u;
            goto label_4a7748;
        }
    }
    ctx->pc = 0x4A7730u;
    // 0x4a7730: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x4a7730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x4a7734: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4a7734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7738: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4a7738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4a773c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x4a773cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x4a7740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A7740u;
    {
        const bool branch_taken_0x4a7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7740u;
        // 0x4a7744: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7740) {
            ctx->pc = 0x4A774Cu;
            goto label_4a774c;
        }
    }
    ctx->pc = 0x4A7748u;
label_4a7748:
    // 0x4a7748: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a7748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a774c:
    // 0x4a774c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4a774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a7750: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7750u;
    {
        const bool branch_taken_0x4a7750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7750u;
        // 0x4a7754: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7750) {
            ctx->pc = 0x4A7768u;
            goto label_4a7768;
        }
    }
    ctx->pc = 0x4A7758u;
    // 0x4a7758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a7758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a775c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4a775cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4a7760: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x4A7760u;
    {
        const bool branch_taken_0x4a7760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7760u;
        // 0x4a7764: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7760) {
            ctx->pc = 0x4A7AA4u;
            goto label_4a7aa4;
        }
    }
    ctx->pc = 0x4A7768u;
label_4a7768:
    // 0x4a7768: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a7768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a776c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a776cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7770: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x4A7770u;
    {
        const bool branch_taken_0x4a7770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7770u;
        // 0x4a7774: 0x8ee80000  lw          $t0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7770) {
            ctx->pc = 0x4A79B4u;
            goto label_4a79b4;
        }
    }
    ctx->pc = 0x4A7778u;
    // 0x4a7778: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a777c: 0x0  nop
    ctx->pc = 0x4a777cu;
    // NOP
label_4a7780:
    // 0x4a7780: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4a7780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4a7784: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a7784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7788: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a7788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a778c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a778cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7790: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a7790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7794: 0x10640082  beq         $v1, $a0, . + 4 + (0x82 << 2)
    ctx->pc = 0x4A7794u;
    {
        const bool branch_taken_0x4a7794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7794u;
        // 0x4a7798: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7794) {
            ctx->pc = 0x4A79A0u;
            goto label_4a79a0;
        }
    }
    ctx->pc = 0x4A779Cu;
    // 0x4a779c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a77a0: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x4a77a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a77a4: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4a77a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a77a8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4a77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a77ac: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x4a77acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a77b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a77b4: 0xe5a021  addu        $s4, $a3, $a1
    ctx->pc = 0x4a77b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4a77b8: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x4a77b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4a77bc: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x4a77bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x4a77c0: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x4a77c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a77c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a77c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a77cc: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x4A77CCu;
    {
        const bool branch_taken_0x4a77cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77CCu;
        // 0x4a77d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a77cc) {
            ctx->pc = 0x4A79A0u;
            goto label_4a79a0;
        }
    }
    ctx->pc = 0x4A77D4u;
    // 0x4a77d4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a77d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a77d8: 0x240b0024  addiu       $t3, $zero, 0x24
    ctx->pc = 0x4a77d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a77dc: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x4a77dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4a77e0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4a77e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a77e4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4a77e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a77e8:
    // 0x4a77e8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x4a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x4a77ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a77ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a77f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a77f4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4a77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a77f8: 0x9e3021  addu        $a2, $a0, $fp
    ctx->pc = 0x4a77f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x4a77fc: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A77FCu;
    {
        const bool branch_taken_0x4a77fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77FCu;
        // 0x4a7800: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a77fc) {
            ctx->pc = 0x4A782Cu;
            goto label_4a782c;
        }
    }
    ctx->pc = 0x4A7804u;
    // 0x4a7804: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x4a7804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x4a7808: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4a7808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a780c: 0x0  nop
    ctx->pc = 0x4a780cu;
    // NOP
label_4a7810:
    // 0x4a7810: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7814: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7814u;
    {
        const bool branch_taken_0x4a7814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4A7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7814u;
        // 0x4a7818: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7814) {
            ctx->pc = 0x4A7834u;
            goto label_4a7834;
        }
    }
    ctx->pc = 0x4A781Cu;
    // 0x4a781c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a7820: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4a7820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4a7824: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A7824u;
    {
        const bool branch_taken_0x4a7824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7824u;
        // 0x4a7828: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7824) {
            ctx->pc = 0x4A7810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7810;
        }
    }
    ctx->pc = 0x4A782Cu;
label_4a782c:
    // 0x4a782c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a782cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7830: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a7834:
    // 0x4a7834: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7834u;
    {
        const bool branch_taken_0x4a7834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x4a7834) {
            ctx->pc = 0x4A7838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7834u;
            // 0x4a7838: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A784Cu;
            goto label_4a784c;
        }
    }
    ctx->pc = 0x4A783Cu;
    // 0x4a783c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A783Cu;
    {
        const bool branch_taken_0x4a783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A783Cu;
        // 0x4a7840: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a783c) {
            ctx->pc = 0x4A7858u;
            goto label_4a7858;
        }
    }
    ctx->pc = 0x4A7844u;
label_4a7844:
    // 0x4a7844: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4A7844u;
    {
        const bool branch_taken_0x4a7844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7844u;
        // 0x4a7848: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7844) {
            ctx->pc = 0x4A78ACu;
            goto label_4a78ac;
        }
    }
    ctx->pc = 0x4A784Cu;
label_4a784c:
    // 0x4a784c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a784cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a7850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a7854: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a7854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a7858:
    // 0x4a7858: 0x5480002d  bnel        $a0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A7858u;
    {
        const bool branch_taken_0x4a7858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7858) {
            ctx->pc = 0x4A785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7858u;
            // 0x4a785c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7910u;
            goto label_4a7910;
        }
    }
    ctx->pc = 0x4A7860u;
    // 0x4a7860: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4a7860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a7864: 0x8cc90020  lw          $t1, 0x20($a2)
    ctx->pc = 0x4a7864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4a7868: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4a7868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a786c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4a786cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7870: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a7870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a7874: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x4a7874u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7878: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4A7878u;
    {
        const bool branch_taken_0x4a7878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7878u;
        // 0x4a787c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7878) {
            ctx->pc = 0x4A78A8u;
            goto label_4a78a8;
        }
    }
    ctx->pc = 0x4A7880u;
    // 0x4a7880: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x4a7880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a7884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a7884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7888: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7888u;
    {
        const bool branch_taken_0x4a7888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7888u;
        // 0x4a788c: 0x8ce4000c  lw          $a0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7888) {
            ctx->pc = 0x4A78A8u;
            goto label_4a78a8;
        }
    }
    ctx->pc = 0x4A7890u;
label_4a7890:
    // 0x4a7890: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7894: 0x1048ffeb  beq         $v0, $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4A7894u;
    {
        const bool branch_taken_0x4a7894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x4A7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7894u;
        // 0x4a7898: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7894) {
            ctx->pc = 0x4A7844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7844;
        }
    }
    ctx->pc = 0x4A789Cu;
    // 0x4a789c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x4a789cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a78a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A78A0u;
    {
        const bool branch_taken_0x4a78a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78A0u;
        // 0x4a78a4: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a78a0) {
            ctx->pc = 0x4A7890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7890;
        }
    }
    ctx->pc = 0x4A78A8u;
label_4a78a8:
    // 0x4a78a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a78a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a78ac:
    // 0x4a78ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A78ACu;
    {
        const bool branch_taken_0x4a78ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a78ac) {
            ctx->pc = 0x4A78B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A78ACu;
            // 0x4a78b0: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A78C8u;
            goto label_4a78c8;
        }
    }
    ctx->pc = 0x4A78B4u;
    // 0x4a78b4: 0x14d60012  bne         $a2, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A78B4u;
    {
        const bool branch_taken_0x4a78b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 22));
        if (branch_taken_0x4a78b4) {
            ctx->pc = 0x4A7900u;
            goto label_4a7900;
        }
    }
    ctx->pc = 0x4A78BCu;
    // 0x4a78bc: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x4a78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x4a78c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4A78C0u;
    {
        const bool branch_taken_0x4a78c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78C0u;
        // 0x4a78c4: 0xac560004  sw          $s6, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a78c0) {
            ctx->pc = 0x4A7900u;
            goto label_4a7900;
        }
    }
    ctx->pc = 0x4A78C8u;
label_4a78c8:
    // 0x4a78c8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x4a78c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4a78cc: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x4a78ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a78d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a78d4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4a78d8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x4a78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a78dc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x4a78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x4a78e0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x4a78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x4a78e4: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x4a78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x4a78e8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x4a78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x4a78ec: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x4a78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x4a78f0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4a78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4a78f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4a78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4a78f8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4a78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x4a78fc: 0xac53001c  sw          $s3, 0x1C($v0)
    ctx->pc = 0x4a78fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 19));
label_4a7900:
    // 0x4a7900: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x4A7900u;
    {
        const bool branch_taken_0x4a7900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7900) {
            ctx->pc = 0x4A7904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7900u;
            // 0x4a7904: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7984u;
            goto label_4a7984;
        }
    }
    ctx->pc = 0x4A7908u;
    // 0x4a7908: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x4A7908u;
    {
        const bool branch_taken_0x4a7908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7908u;
        // 0x4a790c: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7908) {
            ctx->pc = 0x4A7AA0u;
            goto label_4a7aa0;
        }
    }
    ctx->pc = 0x4A7910u;
label_4a7910:
    // 0x4a7910: 0x54560013  bnel        $v0, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A7910u;
    {
        const bool branch_taken_0x4a7910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4a7910) {
            ctx->pc = 0x4A7914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7910u;
            // 0x4a7914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7960u;
            goto label_4a7960;
        }
    }
    ctx->pc = 0x4A7918u;
    // 0x4a7918: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A7918u;
    {
        const bool branch_taken_0x4a7918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7918u;
        // 0x4a791c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7918) {
            ctx->pc = 0x4A7980u;
            goto label_4a7980;
        }
    }
    ctx->pc = 0x4A7920u;
    // 0x4a7920: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a7920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a7924: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x4a7924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x4a7928: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x4a7928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4a792c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a7930: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a7930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7934: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7938: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4a7938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a793c: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4a793cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a7940: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x4a7940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7944: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A7944u;
    SET_GPR_U32(ctx, 31, 0x4A794Cu);
    ctx->pc = 0x4A7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7944u;
    // 0x4a7948: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A7944u, 0x4A794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A794Cu;
label_4a794c:
    // 0x4a794c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7950: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A7950u;
    SET_GPR_U32(ctx, 31, 0x4A7958u);
    ctx->pc = 0x4A7954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7950u;
    // 0x4a7954: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A7950u, 0x4A7958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7958u;
label_4a7958:
    // 0x4a7958: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x4A7958u;
    {
        const bool branch_taken_0x4a7958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7958u;
        // 0x4a795c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7958) {
            ctx->pc = 0x4A7AECu;
            goto label_4a7aec;
        }
    }
    ctx->pc = 0x4A7960u;
label_4a7960:
    // 0x4a7960: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A7960u;
    {
        const bool branch_taken_0x4a7960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a7960) {
            ctx->pc = 0x4A7964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7960u;
            // 0x4a7964: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7984u;
            goto label_4a7984;
        }
    }
    ctx->pc = 0x4A7968u;
    // 0x4a7968: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4a7968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a796c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a796cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7970: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4a7970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a7974: 0xc129cea  jal         func_4A73A8
    ctx->pc = 0x4A7974u;
    SET_GPR_U32(ctx, 31, 0x4A797Cu);
    ctx->pc = 0x4A7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7974u;
    // 0x4a7978: 0x7fab0020  sq          $t3, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A73A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A73A8u, 0x4A7974u, 0x4A797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A797Cu;
label_4a797c:
    // 0x4a797c: 0x7bab0020  lq          $t3, 0x20($sp)
    ctx->pc = 0x4a797cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a7980:
    // 0x4a7980: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x4a7980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4a7984:
    // 0x4a7984: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a7984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a7988: 0x27de0024  addiu       $fp, $fp, 0x24
    ctx->pc = 0x4a7988u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x4a798c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a7990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7994: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a7994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a7998: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x4A7998u;
    {
        const bool branch_taken_0x4a7998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7998u;
        // 0x4a799c: 0x8ee80000  lw          $t0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7998) {
            ctx->pc = 0x4A77E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a77e8;
        }
    }
    ctx->pc = 0x4A79A0u;
label_4a79a0:
    // 0x4a79a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a79a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a79a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a79a8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a79a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a79ac: 0x5440ff74  bnel        $v0, $zero, . + 4 + (-0x8C << 2)
    ctx->pc = 0x4A79ACu;
    {
        const bool branch_taken_0x4a79ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a79ac) {
            ctx->pc = 0x4A79B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A79ACu;
            // 0x4a79b0: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7780;
        }
    }
    ctx->pc = 0x4A79B4u;
label_4a79b4:
    // 0x4a79b4: 0x11000047  beqz        $t0, . + 4 + (0x47 << 2)
    ctx->pc = 0x4A79B4u;
    {
        const bool branch_taken_0x4a79b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79B4u;
        // 0x4a79b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79b4) {
            ctx->pc = 0x4A7AD4u;
            goto label_4a7ad4;
        }
    }
    ctx->pc = 0x4A79BCu;
    // 0x4a79bc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x4a79bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a79c0: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x4a79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x4a79c4: 0x0  nop
    ctx->pc = 0x4a79c4u;
    // NOP
label_4a79c8:
    // 0x4a79c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4a79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4a79cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a79d0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4a79d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a79d4: 0x1120003a  beqz        $t1, . + 4 + (0x3A << 2)
    ctx->pc = 0x4A79D4u;
    {
        const bool branch_taken_0x4a79d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79D4u;
        // 0x4a79d8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79d4) {
            ctx->pc = 0x4A7AC0u;
            goto label_4a7ac0;
        }
    }
    ctx->pc = 0x4A79DCu;
    // 0x4a79dc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4a79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a79e0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x4a79e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a79e4: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4a79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x4a79e8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x4a79e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a79ec: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x4a79ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a79f0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4a79f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a79f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a79f8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4A79F8u;
    {
        const bool branch_taken_0x4a79f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79F8u;
        // 0x4a79fc: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79f8) {
            ctx->pc = 0x4A7A28u;
            goto label_4a7a28;
        }
    }
    ctx->pc = 0x4A7A00u;
    // 0x4a7a00: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x4a7a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4a7a04: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A7A04u;
    {
        const bool branch_taken_0x4a7a04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A04u;
        // 0x4a7a08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a04) {
            ctx->pc = 0x4A7A28u;
            goto label_4a7a28;
        }
    }
    ctx->pc = 0x4A7A0Cu;
    // 0x4a7a0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4a7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a10:
    // 0x4a7a10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7a14: 0x1048000b  beq         $v0, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A7A14u;
    {
        const bool branch_taken_0x4a7a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x4A7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A14u;
        // 0x4a7a18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a14) {
            ctx->pc = 0x4A7A44u;
            goto label_4a7a44;
        }
    }
    ctx->pc = 0x4A7A1Cu;
    // 0x4a7a1c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4a7a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4a7a20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A7A20u;
    {
        const bool branch_taken_0x4a7a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A20u;
        // 0x4a7a24: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a20) {
            ctx->pc = 0x4A7A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7a10;
        }
    }
    ctx->pc = 0x4A7A28u;
label_4a7a28:
    // 0x4a7a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a2c:
    // 0x4a7a2c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7A2Cu;
    {
        const bool branch_taken_0x4a7a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7a2c) {
            ctx->pc = 0x4A7A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7A2Cu;
            // 0x4a7a30: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7A4Cu;
            goto label_4a7a4c;
        }
    }
    ctx->pc = 0x4A7A34u;
    // 0x4a7a34: 0x152b0016  bne         $t1, $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x4A7A34u;
    {
        const bool branch_taken_0x4a7a34 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        if (branch_taken_0x4a7a34) {
            ctx->pc = 0x4A7A90u;
            goto label_4a7a90;
        }
    }
    ctx->pc = 0x4A7A3Cu;
    // 0x4a7a3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A7A3Cu;
    {
        const bool branch_taken_0x4a7a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A3Cu;
        // 0x4a7a40: 0xac4b0004  sw          $t3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a3c) {
            ctx->pc = 0x4A7A8Cu;
            goto label_4a7a8c;
        }
    }
    ctx->pc = 0x4A7A44u;
label_4a7a44:
    // 0x4a7a44: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A7A44u;
    {
        const bool branch_taken_0x4a7a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A44u;
        // 0x4a7a48: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a44) {
            ctx->pc = 0x4A7A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7a2c;
        }
    }
    ctx->pc = 0x4A7A4Cu;
label_4a7a4c:
    // 0x4a7a4c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x4a7a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a7a50: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x4a7a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4a7a54: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7a58: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x4a7a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a7a5c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a7a64: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a7a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4a7a68: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x4a7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a7a6c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x4a7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x4a7a70: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x4a7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x4a7a74: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x4a7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x4a7a78: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x4a7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x4a7a7c: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x4a7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x4a7a80: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4a7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4a7a84: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4a7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4a7a88: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4a7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_4a7a8c:
    // 0x4a7a8c: 0xac520020  sw          $s2, 0x20($v0)
    ctx->pc = 0x4a7a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
label_4a7a90:
    // 0x4a7a90: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4A7A90u;
    {
        const bool branch_taken_0x4a7a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7a90) {
            ctx->pc = 0x4A7A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7A90u;
            // 0x4a7a94: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7AC4u;
            goto label_4a7ac4;
        }
    }
    ctx->pc = 0x4A7A98u;
    // 0x4a7a98: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x4a7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x4a7a9c: 0x0  nop
    ctx->pc = 0x4a7a9cu;
    // NOP
label_4a7aa0:
    // 0x4a7aa0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4a7aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4a7aa4:
    // 0x4a7aa4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A7AA4u;
    SET_GPR_U32(ctx, 31, 0x4A7AACu);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A7AA4u, 0x4A7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7AACu;
label_4a7aac:
    // 0x4a7aac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a7aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7ab0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A7AB0u;
    SET_GPR_U32(ctx, 31, 0x4A7AB8u);
    ctx->pc = 0x4A7AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7AB0u;
    // 0x4a7ab4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A7AB0u, 0x4A7AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7AB8u;
label_4a7ab8:
    // 0x4a7ab8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A7AB8u;
    {
        const bool branch_taken_0x4a7ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7AB8u;
        // 0x4a7abc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7ab8) {
            ctx->pc = 0x4A7AECu;
            goto label_4a7aec;
        }
    }
    ctx->pc = 0x4A7AC0u;
label_4a7ac0:
    // 0x4a7ac0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4a7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4a7ac4:
    // 0x4a7ac4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a7ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a7ac8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a7ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a7acc: 0x5440ffbe  bnel        $v0, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x4A7ACCu;
    {
        const bool branch_taken_0x4a7acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7acc) {
            ctx->pc = 0x4A7AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7ACCu;
            // 0x4a7ad0: 0x8ee30008  lw          $v1, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A79C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a79c8;
        }
    }
    ctx->pc = 0x4A7AD4u;
label_4a7ad4:
    // 0x4a7ad4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4a7ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4a7ad8: 0x2652ffd8  addiu       $s2, $s2, -0x28
    ctx->pc = 0x4a7ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967256));
    // 0x4a7adc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a7ae0: 0x1460fecd  bnez        $v1, . + 4 + (-0x133 << 2)
    ctx->pc = 0x4A7AE0u;
    {
        const bool branch_taken_0x4a7ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7AE0u;
        // 0x4a7ae4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7ae0) {
            ctx->pc = 0x4A7618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7618;
        }
    }
    ctx->pc = 0x4A7AE8u;
    // 0x4a7ae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7aec:
    // 0x4a7aec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4a7aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a7af0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4a7af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a7af4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4a7af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a7af8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4a7af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a7afc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4a7afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a7b00: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4a7b00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a7b04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a7b04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a7b08: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4a7b08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a7b0c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x4a7b0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a7b10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a7b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a7b14: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B14u;
        // 0x4a7b18: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A7B1Cu;
    // 0x4a7b1c: 0x0  nop
    ctx->pc = 0x4a7b1cu;
    // NOP
    ctx->pc = 0x4a7b20u;
}
