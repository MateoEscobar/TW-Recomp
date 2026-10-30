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

// Function: sub_001725D8
// Address: 0x1725d8 - 0x1726f0
void sub_001725D8_0x1725d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001725D8_0x1725d8");
#endif

    switch (ctx->pc) {
        case 0x172610u: goto label_172610;
        case 0x172618u: goto label_172618;
        case 0x172628u: goto label_172628;
        case 0x17263cu: goto label_17263c;
        case 0x17264cu: goto label_17264c;
        default: break;
    }

    ctx->pc = 0x1725d8u;

    // 0x1725d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1725d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1725dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1725dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1725e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1725e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1725e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1725e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1725e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1725ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1725ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1725f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1725f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1725f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1725f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1725fc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1725fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x172600: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x172600u;
    {
        const bool branch_taken_0x172600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172600u;
        // 0x172604: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172600) {
            ctx->pc = 0x1726D4u;
            goto label_1726d4;
        }
    }
    ctx->pc = 0x172608u;
    // 0x172608: 0xc05fdec  jal         func_17F7B0
    ctx->pc = 0x172608u;
    SET_GPR_U32(ctx, 31, 0x172610u);
    ctx->pc = 0x17F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B0u, 0x172608u, 0x172610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172610u;
label_172610:
    // 0x172610: 0xc06610a  jal         func_198428
    ctx->pc = 0x172610u;
    SET_GPR_U32(ctx, 31, 0x172618u);
    ctx->pc = 0x172614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172610u;
    // 0x172614: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198428u, 0x172610u, 0x172618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172618u;
label_172618:
    // 0x172618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17261c: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x17261cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x172620: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x172620u;
    SET_GPR_U32(ctx, 31, 0x172628u);
    ctx->pc = 0x172624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172620u;
    // 0x172624: 0xafbd0040  sw          $sp, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x172620u, 0x172628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172628u;
label_172628:
    // 0x172628: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x172628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x17262c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172630: 0x24a524f8  addiu       $a1, $a1, 0x24F8
    ctx->pc = 0x172630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9464));
    // 0x172634: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x172634u;
    SET_GPR_U32(ctx, 31, 0x17263Cu);
    ctx->pc = 0x172638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172634u;
    // 0x172638: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x172634u, 0x17263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17263Cu;
label_17263c:
    // 0x17263c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x17263Cu;
    {
        const bool branch_taken_0x17263c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x172640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17263Cu;
        // 0x172640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17263c) {
            ctx->pc = 0x172654u;
            goto label_172654;
        }
    }
    ctx->pc = 0x172644u;
    // 0x172644: 0xc05c8a0  jal         func_172280
    ctx->pc = 0x172644u;
    SET_GPR_U32(ctx, 31, 0x17264Cu);
    ctx->pc = 0x172648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172644u;
    // 0x172648: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172280u, 0x172644u, 0x17264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17264Cu;
label_17264c:
    // 0x17264c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17264Cu;
    {
        const bool branch_taken_0x17264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17264Cu;
        // 0x172650: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17264c) {
            ctx->pc = 0x1726D8u;
            goto label_1726d8;
        }
    }
    ctx->pc = 0x172654u;
label_172654:
    // 0x172654: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x172654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x172658: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x172658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17265c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x17265cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x172660: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x172660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x172664: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x172664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x172668: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x172668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17266c: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x17266cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x172670: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x172670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x172674: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x172674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172678: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x172678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17267c: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x17267cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172680: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x172680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172684: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x172684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172688: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x172688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17268c: 0xb245001f  sdl         $a1, 0x1F($s2)
    ctx->pc = 0x17268cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172690: 0xb6450018  sdr         $a1, 0x18($s2)
    ctx->pc = 0x172690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172694: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x172694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x172698: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x172698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17269c: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x17269cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1726a0: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1726a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1726a4: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x1726a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1726a8: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x1726a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1726ac: 0x6ba5003f  ldl         $a1, 0x3F($sp)
    ctx->pc = 0x1726acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1726b0: 0x6fa50038  ldr         $a1, 0x38($sp)
    ctx->pc = 0x1726b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1726b4: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x1726b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1726b8: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x1726b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1726bc: 0xb243002f  sdl         $v1, 0x2F($s2)
    ctx->pc = 0x1726bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1726c0: 0xb6430028  sdr         $v1, 0x28($s2)
    ctx->pc = 0x1726c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1726c4: 0xb2440037  sdl         $a0, 0x37($s2)
    ctx->pc = 0x1726c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1726c8: 0xb6440030  sdr         $a0, 0x30($s2)
    ctx->pc = 0x1726c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1726cc: 0xb245003f  sdl         $a1, 0x3F($s2)
    ctx->pc = 0x1726ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1726d0: 0xb6450038  sdr         $a1, 0x38($s2)
    ctx->pc = 0x1726d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1726d4:
    // 0x1726d4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1726d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1726d8:
    // 0x1726d8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1726d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1726dc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1726dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1726e0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1726e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1726e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1726e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1726e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1726E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1726ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726E8u;
        // 0x1726ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1726E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1726F0u;
}
