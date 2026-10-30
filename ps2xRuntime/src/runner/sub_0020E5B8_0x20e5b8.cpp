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

// Function: sub_0020E5B8
// Address: 0x20e5b8 - 0x20e6f8
void sub_0020E5B8_0x20e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E5B8_0x20e5b8");
#endif

    switch (ctx->pc) {
        case 0x20e618u: goto label_20e618;
        case 0x20e654u: goto label_20e654;
        case 0x20e668u: goto label_20e668;
        case 0x20e680u: goto label_20e680;
        case 0x20e6a8u: goto label_20e6a8;
        default: break;
    }

    ctx->pc = 0x20e5b8u;

    // 0x20e5b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20e5bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x20e5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x20e5c0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x20e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x20e5c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x20e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x20e5cc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x20e5d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20e5d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x20e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x20e5d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x20e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x20e5dc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x20e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x20e5e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e5e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20e5e8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x20E5E8u;
    {
        const bool branch_taken_0x20e5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5E8u;
        // 0x20e5ec: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5e8) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E5F0u;
    // 0x20e5f0: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x20e5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x20e5f4: 0x2455f240  addiu       $s5, $v0, -0xDC0
    ctx->pc = 0x20e5f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x20e5f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20e5fc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x20e5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e600: 0x26160048  addiu       $s6, $s0, 0x48
    ctx->pc = 0x20e600u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x20e604: 0x26370d00  addiu       $s7, $s1, 0xD00
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 3328));
    // 0x20e608: 0x24120d00  addiu       $s2, $zero, 0xD00
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
    // 0x20e60c: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x20e60cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x20e610: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20e610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e614: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_20e618:
    // 0x20e618: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x20e618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20e61c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x20e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20e620: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x20e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20e624: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x20e624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x20e628: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x20e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e62c: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x20e62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20e630: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20e634: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x20e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x20e638: 0x26730680  addiu       $s3, $s3, 0x680
    ctx->pc = 0x20e638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1664));
    // 0x20e63c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20e640: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x20e640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e644: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x20e644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20e648: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20e64c: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20E64Cu;
    SET_GPR_U32(ctx, 31, 0x20E654u);
    ctx->pc = 0x20E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E64Cu;
    // 0x20e650: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20E64Cu, 0x20E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E654u;
label_20e654:
    // 0x20e654: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x20e654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e658: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x20e658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20e65c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20e660: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20E660u;
    SET_GPR_U32(ctx, 31, 0x20E668u);
    ctx->pc = 0x20E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E660u;
    // 0x20e664: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20E660u, 0x20E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E668u;
label_20e668:
    // 0x20e668: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x20e668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e66c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x20e66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20e670: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20e670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20e674: 0x24840290  addiu       $a0, $a0, 0x290
    ctx->pc = 0x20e674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x20e678: 0xc07088a  jal         func_1C2228
    ctx->pc = 0x20E678u;
    SET_GPR_U32(ctx, 31, 0x20E680u);
    ctx->pc = 0x20E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E678u;
    // 0x20e67c: 0x26310680  addiu       $s1, $s1, 0x680 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2228u, 0x20E678u, 0x20E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E680u;
label_20e680:
    // 0x20e680: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x20e680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x20e684: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x20E684u;
    {
        const bool branch_taken_0x20e684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e684) {
            ctx->pc = 0x20E688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E684u;
            // 0x20e688: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e618;
        }
    }
    ctx->pc = 0x20E68Cu;
    // 0x20e68c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x20e68cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x20e690: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20e690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e694: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x20e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x20e698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e69c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x20e69cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x20e6a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x20e6a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x20e6a4: 0x0  nop
    ctx->pc = 0x20e6a4u;
    // NOP
label_20e6a8:
    // 0x20e6a8: 0x8d02bd30  lw          $v0, -0x42D0($t0)
    ctx->pc = 0x20e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950192)));
    // 0x20e6ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20e6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20e6b0: 0x2ce30006  sltiu       $v1, $a3, 0x6
    ctx->pc = 0x20e6b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x20e6b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20e6b8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x20e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x20e6bc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20e6c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20E6C0u;
    {
        const bool branch_taken_0x20e6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6C0u;
        // 0x20e6c4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6c0) {
            ctx->pc = 0x20E6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e6a8;
        }
    }
    ctx->pc = 0x20E6C8u;
label_20e6c8:
    // 0x20e6c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x20e6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20e6cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x20e6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e6d0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x20e6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e6d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20e6d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e6d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20e6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e6dc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x20e6dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e6e0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x20e6e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e6e4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x20e6e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x20E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6ECu;
        // 0x20e6f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E6F4u;
    // 0x20e6f4: 0x0  nop
    ctx->pc = 0x20e6f4u;
    // NOP
    ctx->pc = 0x20e6f8u;
}
