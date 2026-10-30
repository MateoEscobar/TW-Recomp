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

// Function: sub_004E3BE8
// Address: 0x4e3be8 - 0x4e3c88
void sub_004E3BE8_0x4e3be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3BE8_0x4e3be8");
#endif

    switch (ctx->pc) {
        case 0x4e3bfcu: goto label_4e3bfc;
        case 0x4e3c50u: goto label_4e3c50;
        default: break;
    }

    ctx->pc = 0x4e3be8u;

    // 0x4e3be8: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x4e3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x4e3bec: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x4e3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4e3bf0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4e3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4e3bf4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4E3BF4u;
    {
        const bool branch_taken_0x4e3bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3BF4u;
        // 0x4e3bf8: 0x24a20060  addiu       $v0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3bf4) {
            ctx->pc = 0x4E3C50u;
            goto label_4e3c50;
        }
    }
    ctx->pc = 0x4E3BFCu;
label_4e3bfc:
    // 0x4e3bfc: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x4e3bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4e3c00: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x4e3c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4e3c04: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x4e3c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4e3c08: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x4e3c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4e3c0c: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x4e3c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4e3c10: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x4e3c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4e3c14: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x4e3c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4e3c18: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x4e3c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4e3c1c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x4e3c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c20: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x4e3c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c24: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x4e3c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c28: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x4e3c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c2c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x4e3c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c30: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x4e3c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c34: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x4e3c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c38: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x4e3c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4e3c3c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4e3c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x4e3c40: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4E3C40u;
    {
        const bool branch_taken_0x4e3c40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3C40u;
        // 0x4e3c44: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3c40) {
            ctx->pc = 0x4E3BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e3bfc;
        }
    }
    ctx->pc = 0x4E3C48u;
    // 0x4e3c48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4E3C48u;
    {
        const bool branch_taken_0x4e3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3c48) {
            ctx->pc = 0x4E3C7Cu;
            goto label_4e3c7c;
        }
    }
    ctx->pc = 0x4E3C50u;
label_4e3c50:
    // 0x4e3c50: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x4e3c50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e3c54: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x4e3c54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e3c58: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x4e3c58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4e3c5c: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x4e3c5cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4e3c60: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x4e3c60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x4e3c64: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x4e3c64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x4e3c68: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x4e3c68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x4e3c6c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x4e3c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x4e3c70: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4e3c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x4e3c74: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4E3C74u;
    {
        const bool branch_taken_0x4e3c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3C74u;
        // 0x4e3c78: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3c74) {
            ctx->pc = 0x4E3C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e3c50;
        }
    }
    ctx->pc = 0x4E3C7Cu;
label_4e3c7c:
    // 0x4e3c7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e3c80: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3C80u;
        // 0x4e3c84: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3C88u;
}
