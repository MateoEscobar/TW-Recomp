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

// Function: sub_0042E7C0
// Address: 0x42e7c0 - 0x42eb34
void sub_0042E7C0_0x42e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E7C0_0x42e7c0");
#endif

    switch (ctx->pc) {
        case 0x42e8d0u: goto label_42e8d0;
        case 0x42e8dcu: goto label_42e8dc;
        case 0x42e920u: goto label_42e920;
        case 0x42e940u: goto label_42e940;
        case 0x42e94cu: goto label_42e94c;
        case 0x42e988u: goto label_42e988;
        case 0x42e994u: goto label_42e994;
        case 0x42e9b8u: goto label_42e9b8;
        case 0x42e9d4u: goto label_42e9d4;
        case 0x42e9ecu: goto label_42e9ec;
        case 0x42e9f8u: goto label_42e9f8;
        case 0x42ea5cu: goto label_42ea5c;
        case 0x42eaacu: goto label_42eaac;
        case 0x42ead0u: goto label_42ead0;
        case 0x42eb24u: goto label_42eb24;
        default: break;
    }

    ctx->pc = 0x42e7c0u;

    // 0x42e7c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x42e7c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x42e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x42e7c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x42e7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x42e7cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x42e7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e7d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x42e7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x42e7d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42e7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e7d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42e7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x42e7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42e7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e7e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x42e7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e7e4: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x42e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x42e7e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42E7E8u;
    {
        const bool branch_taken_0x42e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E7E8u;
        // 0x42e7ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e7e8) {
            ctx->pc = 0x42E804u;
            goto label_42e804;
        }
    }
    ctx->pc = 0x42E7F0u;
    // 0x42e7f0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x42e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x42e7f4: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x42e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x42e7f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x42e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x42e7fc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x42E7FCu;
    {
        const bool branch_taken_0x42e7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E7FCu;
        // 0x42e800: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e7fc) {
            ctx->pc = 0x42E89Cu;
            goto label_42e89c;
        }
    }
    ctx->pc = 0x42E804u;
label_42e804:
    // 0x42e804: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x42e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x42e808: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42E808u;
    {
        const bool branch_taken_0x42e808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E808u;
        // 0x42e80c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e808) {
            ctx->pc = 0x42E81Cu;
            goto label_42e81c;
        }
    }
    ctx->pc = 0x42E810u;
    // 0x42e810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e814: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x42E814u;
    {
        const bool branch_taken_0x42e814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E814u;
        // 0x42e818: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e814) {
            ctx->pc = 0x42E8D4u;
            goto label_42e8d4;
        }
    }
    ctx->pc = 0x42E81Cu;
label_42e81c:
    // 0x42e81c: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x42e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x42e820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42E820u;
    {
        const bool branch_taken_0x42e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E820u;
        // 0x42e824: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e820) {
            ctx->pc = 0x42E838u;
            goto label_42e838;
        }
    }
    ctx->pc = 0x42E828u;
    // 0x42e828: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x42e828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42e82c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x42e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x42e830: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x42E830u;
    {
        const bool branch_taken_0x42e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E830u;
        // 0x42e834: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e830) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E838u;
label_42e838:
    // 0x42e838: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x42e838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x42e83c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x42E83Cu;
    {
        const bool branch_taken_0x42e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E83Cu;
        // 0x42e840: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e83c) {
            ctx->pc = 0x42EB34u;
            return;
        }
    }
    ctx->pc = 0x42E844u;
    // 0x42e844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42e844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x42e848: 0x2442c1b0  addiu       $v0, $v0, -0x3E50
    ctx->pc = 0x42e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951344));
    // 0x42e84c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42e850: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42e854: 0x800008  jr          $a0
    ctx->pc = 0x42E854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42E85Cu: goto label_42e85c;
            case 0x42E870u: goto label_42e870;
            case 0x42E880u: goto label_42e880;
            case 0x42E8A8u: goto label_42e8a8;
            case 0x42E8C4u: goto label_42e8c4;
            case 0x42E914u: goto label_42e914;
            case 0x42E934u: goto label_42e934;
            case 0x42E97Cu: goto label_42e97c;
            case 0x42E9ACu: goto label_42e9ac;
            case 0x42E9C8u: goto label_42e9c8;
            case 0x42E9E4u: goto label_42e9e4;
            case 0x42EA4Cu: goto label_42ea4c;
            case 0x42EAB4u: goto label_42eab4;
            case 0x42EB18u: goto label_42eb18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E854u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42E85Cu;
label_42e85c:
    // 0x42e85c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x42e85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x42e860: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x42e860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x42e864: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x42e864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x42e868: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x42E868u;
    {
        const bool branch_taken_0x42e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E868u;
        // 0x42e86c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e868) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E870u;
label_42e870:
    // 0x42e870: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x42e870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e874: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x42e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x42e878: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x42E878u;
    {
        const bool branch_taken_0x42e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E878u;
        // 0x42e87c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e878) {
            ctx->pc = 0x42E8B8u;
            goto label_42e8b8;
        }
    }
    ctx->pc = 0x42E880u;
label_42e880:
    // 0x42e880: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x42e880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x42e884: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x42e884u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e888: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x42e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x42e88c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x42e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x42e890: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x42e894: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x42e894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x42e898: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x42e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_42e89c:
    // 0x42e89c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42e8a0: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x42E8A0u;
    {
        const bool branch_taken_0x42e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E8A0u;
        // 0x42e8a4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e8a0) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E8A8u;
label_42e8a8:
    // 0x42e8a8: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x42e8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x42e8ac: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x42e8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x42e8b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x42e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x42e8b4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x42e8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_42e8b8:
    // 0x42e8b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42e8bc: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x42E8BCu;
    {
        const bool branch_taken_0x42e8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E8BCu;
        // 0x42e8c0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e8bc) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E8C4u;
label_42e8c4:
    // 0x42e8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e8c8: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E8C8u;
    SET_GPR_U32(ctx, 31, 0x42E8D0u);
    ctx->pc = 0x42E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E8C8u;
    // 0x42e8cc: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E8C8u, 0x42E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E8D0u;
label_42e8d0:
    // 0x42e8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42e8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42e8d4:
    // 0x42e8d4: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E8D4u;
    SET_GPR_U32(ctx, 31, 0x42E8DCu);
    ctx->pc = 0x42E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E8D4u;
    // 0x42e8d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E8D4u, 0x42E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E8DCu;
label_42e8dc:
    // 0x42e8dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x42e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42e8e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e8e4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x42e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x42e8e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42e8ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x42e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42e8f0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x42e8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x42e8f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x42e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x42e8f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x42e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42e8fc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x42e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x42e900: 0xa046029c  sb          $a2, 0x29C($v0)
    ctx->pc = 0x42e900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 668), (uint8_t)GPR_U32(ctx, 6));
    // 0x42e904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x42e904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x42e908: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x42e908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e90c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x42E90Cu;
    {
        const bool branch_taken_0x42e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E90Cu;
        // 0x42e910: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e90c) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E914u;
label_42e914:
    // 0x42e914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e918: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E918u;
    SET_GPR_U32(ctx, 31, 0x42E920u);
    ctx->pc = 0x42E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E918u;
    // 0x42e91c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E918u, 0x42E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E920u;
label_42e920:
    // 0x42e920: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x42e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42e924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e928: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x42e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x42e92c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x42E92Cu;
    {
        const bool branch_taken_0x42e92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E92Cu;
        // 0x42e930: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e92c) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E934u;
label_42e934:
    // 0x42e934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e938: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E938u;
    SET_GPR_U32(ctx, 31, 0x42E940u);
    ctx->pc = 0x42E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E938u;
    // 0x42e93c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E938u, 0x42E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E940u;
label_42e940:
    // 0x42e940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e944: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E944u;
    SET_GPR_U32(ctx, 31, 0x42E94Cu);
    ctx->pc = 0x42E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E944u;
    // 0x42e948: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E944u, 0x42E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E94Cu;
label_42e94c:
    // 0x42e94c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x42e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42e950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e954: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x42e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x42e958: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42e958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42e95c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x42e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x42e960: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x42e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x42e964: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42e964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42e968: 0xa085029c  sb          $a1, 0x29C($a0)
    ctx->pc = 0x42e968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 668), (uint8_t)GPR_U32(ctx, 5));
    // 0x42e96c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x42e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42e970: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x42e970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x42e974: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x42E974u;
    {
        const bool branch_taken_0x42e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E974u;
        // 0x42e978: 0xfc430018  sd          $v1, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e974) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E97Cu;
label_42e97c:
    // 0x42e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e980: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E980u;
    SET_GPR_U32(ctx, 31, 0x42E988u);
    ctx->pc = 0x42E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E980u;
    // 0x42e984: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E980u, 0x42E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E988u;
label_42e988:
    // 0x42e988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42e988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e98c: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E98Cu;
    SET_GPR_U32(ctx, 31, 0x42E994u);
    ctx->pc = 0x42E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E98Cu;
    // 0x42e990: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E98Cu, 0x42E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E994u;
label_42e994:
    // 0x42e994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e998: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x42e998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42e99c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x42e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42e9a0: 0xa6230298  sh          $v1, 0x298($s1)
    ctx->pc = 0x42e9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
    // 0x42e9a4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x42E9A4u;
    {
        const bool branch_taken_0x42e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E9A4u;
        // 0x42e9a8: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e9a4) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E9ACu;
label_42e9ac:
    // 0x42e9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e9b0: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E9B0u;
    SET_GPR_U32(ctx, 31, 0x42E9B8u);
    ctx->pc = 0x42E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E9B0u;
    // 0x42e9b4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E9B0u, 0x42E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E9B8u;
label_42e9b8:
    // 0x42e9b8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x42e9b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42e9bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e9c0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x42E9C0u;
    {
        const bool branch_taken_0x42e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E9C0u;
        // 0x42e9c4: 0xa6230298  sh          $v1, 0x298($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e9c0) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E9C8u;
label_42e9c8:
    // 0x42e9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e9cc: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E9CCu;
    SET_GPR_U32(ctx, 31, 0x42E9D4u);
    ctx->pc = 0x42E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E9CCu;
    // 0x42e9d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E9CCu, 0x42E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E9D4u;
label_42e9d4:
    // 0x42e9d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x42e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42e9d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e9dc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x42E9DCu;
    {
        const bool branch_taken_0x42e9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E9DCu;
        // 0x42e9e0: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e9dc) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42E9E4u;
label_42e9e4:
    // 0x42e9e4: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x42E9E4u;
    SET_GPR_U32(ctx, 31, 0x42E9ECu);
    ctx->pc = 0x42E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E9E4u;
    // 0x42e9e8: 0x240402f8  addiu       $a0, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x42E9E4u, 0x42E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E9ECu;
label_42e9ec:
    // 0x42e9ec: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x42e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x42e9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e9f4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x42e9f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42e9f8:
    // 0x42e9f8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x42e9f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42e9fc: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x42e9fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42ea00: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x42ea00u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x42ea04: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x42ea04u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x42ea08: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x42ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x42ea0c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x42ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x42ea10: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x42ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x42ea14: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x42ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x42ea18: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x42ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x42ea1c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x42ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x42ea20: 0x0  nop
    ctx->pc = 0x42ea20u;
    // NOP
    // 0x42ea24: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x42EA24u;
    {
        const bool branch_taken_0x42ea24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x42ea24) {
            ctx->pc = 0x42E9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e9f8;
        }
    }
    ctx->pc = 0x42EA2Cu;
    // 0x42ea2c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x42ea2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42ea30: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x42ea30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42ea34: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x42ea34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x42ea38: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x42ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x42ea3c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x42ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x42ea40: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x42ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x42ea44: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x42EA44u;
    {
        const bool branch_taken_0x42ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EA44u;
        // 0x42ea48: 0xae2202f0  sw          $v0, 0x2F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ea44) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42EA4Cu;
label_42ea4c:
    // 0x42ea4c: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x42ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x42ea50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42ea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ea54: 0x248202e0  addiu       $v0, $a0, 0x2E0
    ctx->pc = 0x42ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x42ea58: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x42ea58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42ea5c:
    // 0x42ea5c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x42ea5cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42ea60: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x42ea60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x42ea64: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x42ea64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x42ea68: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x42ea68u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x42ea6c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x42ea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x42ea70: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x42ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x42ea74: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x42ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x42ea78: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x42ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x42ea7c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x42ea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x42ea80: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x42ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x42ea84: 0x0  nop
    ctx->pc = 0x42ea84u;
    // NOP
    // 0x42ea88: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x42EA88u;
    {
        const bool branch_taken_0x42ea88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x42ea88) {
            ctx->pc = 0x42EA5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ea5c;
        }
    }
    ctx->pc = 0x42EA90u;
    // 0x42ea90: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x42ea90u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42ea94: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x42ea94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x42ea98: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x42ea98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x42ea9c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x42ea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x42eaa0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x42eaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x42eaa4: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x42EAA4u;
    SET_GPR_U32(ctx, 31, 0x42EAACu);
    ctx->pc = 0x42EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EAA4u;
    // 0x42eaa8: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x42EAA4u, 0x42EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EAACu;
label_42eaac:
    // 0x42eaac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x42EAACu;
    {
        const bool branch_taken_0x42eaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EAACu;
        // 0x42eab0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eaac) {
            ctx->pc = 0x42EB40u;
            return;
        }
    }
    ctx->pc = 0x42EAB4u;
label_42eab4:
    // 0x42eab4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x42eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42eab8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x42eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42eabc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x42eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x42eac0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x42eac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42eac4: 0x2629029c  addiu       $t1, $s1, 0x29C
    ctx->pc = 0x42eac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x42eac8: 0x26280018  addiu       $t0, $s1, 0x18
    ctx->pc = 0x42eac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x42eacc: 0x0  nop
    ctx->pc = 0x42eaccu;
    // NOP
label_42ead0:
    // 0x42ead0: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x42ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x42ead4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x42ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42ead8: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x42ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x42eadc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x42eae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42eae4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x42eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x42eae8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x42eae8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x42eaec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42eaf0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x42eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x42eaf4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x42eaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x42eaf8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x42eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x42eafc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x42eafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eb00: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x42eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x42eb04: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x42eb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x42eb08: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x42EB08u;
    {
        const bool branch_taken_0x42eb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EB08u;
        // 0x42eb0c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eb08) {
            ctx->pc = 0x42EAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ead0;
        }
    }
    ctx->pc = 0x42EB10u;
    // 0x42eb10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x42EB10u;
    {
        const bool branch_taken_0x42eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EB10u;
        // 0x42eb14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eb10) {
            ctx->pc = 0x42EB40u;
            return;
        }
    }
    ctx->pc = 0x42EB18u;
label_42eb18:
    // 0x42eb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eb1c: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42EB1Cu;
    SET_GPR_U32(ctx, 31, 0x42EB24u);
    ctx->pc = 0x42EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EB1Cu;
    // 0x42eb20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42EB1Cu, 0x42EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EB24u;
label_42eb24:
    // 0x42eb24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x42eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42eb28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42eb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eb2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42EB2Cu;
    {
        const bool branch_taken_0x42eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EB2Cu;
        // 0x42eb30: 0xfe230010  sd          $v1, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eb2c) {
            ctx->pc = 0x42EB3Cu;
            return;
        }
    }
    ctx->pc = 0x42EB34u;
}
