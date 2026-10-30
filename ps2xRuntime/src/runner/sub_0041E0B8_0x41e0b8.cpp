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

// Function: sub_0041E0B8
// Address: 0x41e0b8 - 0x41e168
void sub_0041E0B8_0x41e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E0B8_0x41e0b8");
#endif

    switch (ctx->pc) {
        case 0x41e0d0u: goto label_41e0d0;
        case 0x41e124u: goto label_41e124;
        default: break;
    }

    ctx->pc = 0x41e0b8u;

    // 0x41e0b8: 0x248507ec  addiu       $a1, $a0, 0x7EC
    ctx->pc = 0x41e0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2028));
    // 0x41e0bc: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x41e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x41e0c0: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x41e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x41e0c4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x41e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x41e0c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x41E0C8u;
    {
        const bool branch_taken_0x41e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E0C8u;
        // 0x41e0cc: 0x248407e4  addiu       $a0, $a0, 0x7E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e0c8) {
            ctx->pc = 0x41E124u;
            goto label_41e124;
        }
    }
    ctx->pc = 0x41E0D0u;
label_41e0d0:
    // 0x41e0d0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x41e0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x41e0d4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x41e0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x41e0d8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x41e0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x41e0dc: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x41e0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x41e0e0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x41e0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x41e0e4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x41e0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x41e0e8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x41e0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x41e0ec: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x41e0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x41e0f0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x41e0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e0f4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x41e0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e0f8: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x41e0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e0fc: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x41e0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e100: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x41e100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e104: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x41e104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e108: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x41e108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e10c: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x41e10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e110: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x41e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x41e114: 0x1464ffee  bne         $v1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x41E114u;
    {
        const bool branch_taken_0x41e114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x41E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E114u;
        // 0x41e118: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e114) {
            ctx->pc = 0x41E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e0d0;
        }
    }
    ctx->pc = 0x41E11Cu;
    // 0x41e11c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x41E11Cu;
    {
        const bool branch_taken_0x41e11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e11c) {
            ctx->pc = 0x41E150u;
            goto label_41e150;
        }
    }
    ctx->pc = 0x41E124u;
label_41e124:
    // 0x41e124: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x41e124u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41e128: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x41e128u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x41e12c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x41e12cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x41e130: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x41e130u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x41e134: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x41e134u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x41e138: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x41e138u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x41e13c: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x41e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x41e140: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x41e140u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x41e144: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x41e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x41e148: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x41E148u;
    {
        const bool branch_taken_0x41e148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x41E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E148u;
        // 0x41e14c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e148) {
            ctx->pc = 0x41E124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e124;
        }
    }
    ctx->pc = 0x41E150u;
label_41e150:
    // 0x41e150: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x41e150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x41e154: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x41e154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x41e158: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x41e158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41e15c: 0x3e00008  jr          $ra
    ctx->pc = 0x41E15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E15Cu;
        // 0x41e160: 0xb4a20000  sdr         $v0, 0x0($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E164u;
    // 0x41e164: 0x0  nop
    ctx->pc = 0x41e164u;
    // NOP
    ctx->pc = 0x41e168u;
}
