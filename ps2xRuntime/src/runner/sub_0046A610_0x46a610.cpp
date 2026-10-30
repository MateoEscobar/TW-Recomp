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

// Function: sub_0046A610
// Address: 0x46a610 - 0x46a6d8
void sub_0046A610_0x46a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A610_0x46a610");
#endif

    switch (ctx->pc) {
        case 0x46a648u: goto label_46a648;
        case 0x46a65cu: goto label_46a65c;
        case 0x46a6a8u: goto label_46a6a8;
        case 0x46a6b8u: goto label_46a6b8;
        default: break;
    }

    ctx->pc = 0x46a610u;

    // 0x46a610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46a614: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x46a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x46a618: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x46a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x46a61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a620: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x46a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x46a624: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x46a624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a62c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x46a630: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x46A630u;
    {
        const bool branch_taken_0x46a630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x46A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A630u;
        // 0x46a634: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a630) {
            ctx->pc = 0x46A6B8u;
            goto label_46a6b8;
        }
    }
    ctx->pc = 0x46A638u;
    // 0x46a638: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A638u;
    {
        const bool branch_taken_0x46a638 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a638) {
            ctx->pc = 0x46A63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A638u;
            // 0x46a63c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A64Cu;
            goto label_46a64c;
        }
    }
    ctx->pc = 0x46A640u;
    // 0x46a640: 0xc11b040  jal         func_46C100
    ctx->pc = 0x46A640u;
    SET_GPR_U32(ctx, 31, 0x46A648u);
    ctx->pc = 0x46A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A640u;
    // 0x46a644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C100u, 0x46A640u, 0x46A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A648u;
label_46a648:
    // 0x46a648: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x46a648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46a64c:
    // 0x46a64c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A64Cu;
    {
        const bool branch_taken_0x46a64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A64Cu;
        // 0x46a650: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a64c) {
            ctx->pc = 0x46A660u;
            goto label_46a660;
        }
    }
    ctx->pc = 0x46A654u;
    // 0x46a654: 0xc11b010  jal         func_46C040
    ctx->pc = 0x46A654u;
    SET_GPR_U32(ctx, 31, 0x46A65Cu);
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x46A654u, 0x46A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A65Cu;
label_46a65c:
    // 0x46a65c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x46a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_46a660:
    // 0x46a660: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x46A660u;
    {
        const bool branch_taken_0x46a660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A660u;
        // 0x46a664: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a660) {
            ctx->pc = 0x46A6B8u;
            goto label_46a6b8;
        }
    }
    ctx->pc = 0x46A668u;
    // 0x46a668: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x46A668u;
    {
        const bool branch_taken_0x46a668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a668) {
            ctx->pc = 0x46A66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A668u;
            // 0x46a66c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A698u;
            goto label_46a698;
        }
    }
    ctx->pc = 0x46A670u;
    // 0x46a670: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x46a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x46a674: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x46a674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x46a678: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x46a678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x46a67c: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x46a67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x46a680: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x46a680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x46a684: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x46a684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a688: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x46a688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a68c: 0xb204002b  sdl         $a0, 0x2B($s0)
    ctx->pc = 0x46a68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a690: 0xb6040024  sdr         $a0, 0x24($s0)
    ctx->pc = 0x46a690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a694: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x46a694u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46a698:
    // 0x46a698: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x46A698u;
    {
        const bool branch_taken_0x46a698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A698u;
        // 0x46a69c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a698) {
            ctx->pc = 0x46A6BCu;
            goto label_46a6bc;
        }
    }
    ctx->pc = 0x46A6A0u;
    // 0x46a6a0: 0xc11cb72  jal         func_472DC8
    ctx->pc = 0x46A6A0u;
    SET_GPR_U32(ctx, 31, 0x46A6A8u);
    ctx->pc = 0x46A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A6A0u;
    // 0x46a6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472DC8u, 0x46A6A0u, 0x46A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A6A8u;
label_46a6a8:
    // 0x46a6a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A6A8u;
    {
        const bool branch_taken_0x46a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A6A8u;
        // 0x46a6ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a6a8) {
            ctx->pc = 0x46A6BCu;
            goto label_46a6bc;
        }
    }
    ctx->pc = 0x46A6B0u;
    // 0x46a6b0: 0xc12105a  jal         func_484168
    ctx->pc = 0x46A6B0u;
    SET_GPR_U32(ctx, 31, 0x46A6B8u);
    ctx->pc = 0x46A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A6B0u;
    // 0x46a6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x46A6B0u, 0x46A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A6B8u;
label_46a6b8:
    // 0x46a6b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46a6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46a6bc:
    // 0x46a6bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x46a6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a6c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x46a6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a6c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x46a6c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x46A6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A6CCu;
        // 0x46a6d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A6D4u;
    // 0x46a6d4: 0x0  nop
    ctx->pc = 0x46a6d4u;
    // NOP
    ctx->pc = 0x46a6d8u;
}
