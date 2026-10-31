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

// Function: sub_0046A4A0
// Address: 0x46a4a0 - 0x46a610
void sub_0046A4A0_0x46a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A4A0_0x46a4a0");
#endif

    switch (ctx->pc) {
        case 0x46a4bcu: goto label_46a4bc;
        case 0x46a504u: goto label_46a504;
        case 0x46a524u: goto label_46a524;
        case 0x46a538u: goto label_46a538;
        case 0x46a578u: goto label_46a578;
        case 0x46a588u: goto label_46a588;
        case 0x46a5f4u: goto label_46a5f4;
        default: break;
    }

    ctx->pc = 0x46a4a0u;

    // 0x46a4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46a4a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x46a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x46a4a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x46a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x46a4ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x46a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x46a4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a4b4: 0xc11a4b6  jal         func_4692D8
    ctx->pc = 0x46A4B4u;
    SET_GPR_U32(ctx, 31, 0x46A4BCu);
    ctx->pc = 0x46A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A4B4u;
    // 0x46a4b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4692D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4692D8u, 0x46A4B4u, 0x46A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A4BCu;
label_46a4bc:
    // 0x46a4bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46a4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a4c0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x46A4C0u;
    {
        const bool branch_taken_0x46a4c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46a4c0) {
            ctx->pc = 0x46A4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A4C0u;
            // 0x46a4c4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A4D0u;
            goto label_46a4d0;
        }
    }
    ctx->pc = 0x46A4C8u;
    // 0x46a4c8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x46A4C8u;
    {
        const bool branch_taken_0x46a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A4C8u;
        // 0x46a4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a4c8) {
            ctx->pc = 0x46A5F8u;
            goto label_46a5f8;
        }
    }
    ctx->pc = 0x46A4D0u;
label_46a4d0:
    // 0x46a4d0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x46a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x46a4d4: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x46a4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x46a4d8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x46a4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x46a4dc: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x46a4dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x46a4e0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x46a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x46a4e4: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x46a4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x46a4e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x46a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x46a4ec: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x46a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x46a4f0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x46a4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x46a4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46a4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a4f8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x46a4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x46a4fc: 0xc11a830  jal         func_46A0C0
    ctx->pc = 0x46A4FCu;
    SET_GPR_U32(ctx, 31, 0x46A504u);
    ctx->pc = 0x46A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A4FCu;
    // 0x46a500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x46A4FCu, 0x46A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A504u;
label_46a504:
    // 0x46a504: 0x8e320018  lw          $s2, 0x18($s1)
    ctx->pc = 0x46a504u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x46a508: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x46a50c: 0x1242001e  beq         $s2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x46A50Cu;
    {
        const bool branch_taken_0x46a50c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x46a50c) {
            ctx->pc = 0x46A588u;
            goto label_46a588;
        }
    }
    ctx->pc = 0x46A514u;
    // 0x46a514: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A514u;
    {
        const bool branch_taken_0x46a514 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a514) {
            ctx->pc = 0x46A518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A514u;
            // 0x46a518: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A528u;
            goto label_46a528;
        }
    }
    ctx->pc = 0x46A51Cu;
    // 0x46a51c: 0xc11b040  jal         func_46C100
    ctx->pc = 0x46A51Cu;
    SET_GPR_U32(ctx, 31, 0x46A524u);
    ctx->pc = 0x46A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A51Cu;
    // 0x46a520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C100u, 0x46A51Cu, 0x46A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A524u;
label_46a524:
    // 0x46a524: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x46a524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46a528:
    // 0x46a528: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46A528u;
    {
        const bool branch_taken_0x46a528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a528) {
            ctx->pc = 0x46A538u;
            goto label_46a538;
        }
    }
    ctx->pc = 0x46A530u;
    // 0x46a530: 0xc11b010  jal         func_46C040
    ctx->pc = 0x46A530u;
    SET_GPR_U32(ctx, 31, 0x46A538u);
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x46A530u, 0x46A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A538u;
label_46a538:
    // 0x46a538: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x46A538u;
    {
        const bool branch_taken_0x46a538 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A538u;
        // 0x46a53c: 0xae120018  sw          $s2, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a538) {
            ctx->pc = 0x46A564u;
            goto label_46a564;
        }
    }
    ctx->pc = 0x46A540u;
    // 0x46a540: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x46a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x46a544: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x46a544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x46a548: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x46a548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x46a54c: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x46a54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x46a550: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x46a550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x46a554: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x46a554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a558: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x46a558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a55c: 0xb204002b  sdl         $a0, 0x2B($s0)
    ctx->pc = 0x46a55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a560: 0xb6040024  sdr         $a0, 0x24($s0)
    ctx->pc = 0x46a560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_46a564:
    // 0x46a564: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x46a564u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x46a568: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x46A568u;
    {
        const bool branch_taken_0x46a568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a568) {
            ctx->pc = 0x46A588u;
            goto label_46a588;
        }
    }
    ctx->pc = 0x46A570u;
    // 0x46a570: 0xc11cb72  jal         func_472DC8
    ctx->pc = 0x46A570u;
    SET_GPR_U32(ctx, 31, 0x46A578u);
    ctx->pc = 0x46A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A570u;
    // 0x46a574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472DC8u, 0x46A570u, 0x46A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A578u;
label_46a578:
    // 0x46a578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46A578u;
    {
        const bool branch_taken_0x46a578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a578) {
            ctx->pc = 0x46A588u;
            goto label_46a588;
        }
    }
    ctx->pc = 0x46A580u;
    // 0x46a580: 0xc12105a  jal         func_484168
    ctx->pc = 0x46A580u;
    SET_GPR_U32(ctx, 31, 0x46A588u);
    ctx->pc = 0x46A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A580u;
    // 0x46a584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x46A580u, 0x46A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A588u;
label_46a588:
    // 0x46a588: 0x6a270023  ldl         $a3, 0x23($s1)
    ctx->pc = 0x46a588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x46a58c: 0x6e27001c  ldr         $a3, 0x1C($s1)
    ctx->pc = 0x46a58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x46a590: 0x6a28002b  ldl         $t0, 0x2B($s1)
    ctx->pc = 0x46a590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x46a594: 0x6e280024  ldr         $t0, 0x24($s1)
    ctx->pc = 0x46a594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x46a598: 0xb2070023  sdl         $a3, 0x23($s0)
    ctx->pc = 0x46a598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a59c: 0xb607001c  sdr         $a3, 0x1C($s0)
    ctx->pc = 0x46a59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a5a0: 0xb208002b  sdl         $t0, 0x2B($s0)
    ctx->pc = 0x46a5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a5a4: 0xb6080024  sdr         $t0, 0x24($s0)
    ctx->pc = 0x46a5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a5a8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x46a5ac: 0x2484e6b0  addiu       $a0, $a0, -0x1950
    ctx->pc = 0x46a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    // 0x46a5b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46a5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a5b4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x46a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x46a5b8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x46a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x46a5bc: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x46a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x46a5c0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x46a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x46a5c4: 0x6a270053  ldl         $a3, 0x53($s1)
    ctx->pc = 0x46a5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x46a5c8: 0x6e27004c  ldr         $a3, 0x4C($s1)
    ctx->pc = 0x46a5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x46a5cc: 0x6a28005b  ldl         $t0, 0x5B($s1)
    ctx->pc = 0x46a5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x46a5d0: 0x6e280054  ldr         $t0, 0x54($s1)
    ctx->pc = 0x46a5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x46a5d4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x46a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x46a5d8: 0xb2070053  sdl         $a3, 0x53($s0)
    ctx->pc = 0x46a5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a5dc: 0xb607004c  sdr         $a3, 0x4C($s0)
    ctx->pc = 0x46a5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a5e0: 0xb208005b  sdl         $t0, 0x5B($s0)
    ctx->pc = 0x46a5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a5e4: 0xb6080054  sdr         $t0, 0x54($s0)
    ctx->pc = 0x46a5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46a5e8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x46a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x46a5ec: 0xc11ffcc  jal         func_47FF30
    ctx->pc = 0x46A5ECu;
    SET_GPR_U32(ctx, 31, 0x46A5F4u);
    ctx->pc = 0x46A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A5ECu;
    // 0x46a5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FF30u, 0x46A5ECu, 0x46A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A5F4u;
label_46a5f4:
    // 0x46a5f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46a5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46a5f8:
    // 0x46a5f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x46a5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a5fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x46a5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a600: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x46a600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a608: 0x3e00008  jr          $ra
    ctx->pc = 0x46A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A608u;
        // 0x46a60c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A610u;
}
