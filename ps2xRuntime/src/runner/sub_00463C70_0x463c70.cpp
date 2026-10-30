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

// Function: sub_00463C70
// Address: 0x463c70 - 0x463da8
void sub_00463C70_0x463c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463C70_0x463c70");
#endif

    switch (ctx->pc) {
        case 0x463ca0u: goto label_463ca0;
        case 0x463d60u: goto label_463d60;
        case 0x463d6cu: goto label_463d6c;
        default: break;
    }

    ctx->pc = 0x463c70u;

    // 0x463c70: 0x8f82847c  lw          $v0, -0x7B84($gp)
    ctx->pc = 0x463c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
    // 0x463c74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x463c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x463c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x463c7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463c80: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x463c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x463c84: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x463C84u;
    {
        const bool branch_taken_0x463c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x463C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463C84u;
        // 0x463c88: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463c84) {
            ctx->pc = 0x463D4Cu;
            goto label_463d4c;
        }
    }
    ctx->pc = 0x463C8Cu;
    // 0x463c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x463c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463c90: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x463C90u;
    {
        const bool branch_taken_0x463c90 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x463C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463C90u;
        // 0x463c94: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463c90) {
            ctx->pc = 0x463CCCu;
            goto label_463ccc;
        }
    }
    ctx->pc = 0x463C98u;
    // 0x463c98: 0x240801b7  addiu       $t0, $zero, 0x1B7
    ctx->pc = 0x463c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x463c9c: 0x24879fd0  addiu       $a3, $a0, -0x6030
    ctx->pc = 0x463c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942672));
label_463ca0:
    // 0x463ca0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x463ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x463ca4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x463ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x463ca8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x463CA8u;
    {
        const bool branch_taken_0x463ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x463CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463CA8u;
        // 0x463cac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ca8) {
            ctx->pc = 0x463CC0u;
            goto label_463cc0;
        }
    }
    ctx->pc = 0x463CB0u;
    // 0x463cb0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x463cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x463cb4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x463CB4u;
    {
        const bool branch_taken_0x463cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463CB4u;
        // 0x463cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463cb4) {
            ctx->pc = 0x463D58u;
            goto label_463d58;
        }
    }
    ctx->pc = 0x463CBCu;
    // 0x463cbc: 0x0  nop
    ctx->pc = 0x463cbcu;
    // NOP
label_463cc0:
    // 0x463cc0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x463cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x463cc4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x463CC4u;
    {
        const bool branch_taken_0x463cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x463CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463CC4u;
        // 0x463cc8: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463cc4) {
            ctx->pc = 0x463CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_463ca0;
        }
    }
    ctx->pc = 0x463CCCu;
label_463ccc:
    // 0x463ccc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x463cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x463cd0: 0x24849fd0  addiu       $a0, $a0, -0x6030
    ctx->pc = 0x463cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942672));
    // 0x463cd4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x463cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x463cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x463cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x463cdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x463cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x463ce0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x463ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x463ce4: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x463ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x463ce8: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x463ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x463cec: 0x6926000f  ldl         $a2, 0xF($t1)
    ctx->pc = 0x463cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x463cf0: 0x6d260008  ldr         $a2, 0x8($t1)
    ctx->pc = 0x463cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x463cf4: 0x69270017  ldl         $a3, 0x17($t1)
    ctx->pc = 0x463cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x463cf8: 0x6d270010  ldr         $a3, 0x10($t1)
    ctx->pc = 0x463cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x463cfc: 0x6928001f  ldl         $t0, 0x1F($t1)
    ctx->pc = 0x463cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x463d00: 0x6d280018  ldr         $t0, 0x18($t1)
    ctx->pc = 0x463d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x463d04: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x463d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d08: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x463d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d0c: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x463d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d10: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x463d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d14: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x463d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d18: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x463d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d1c: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x463d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d20: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x463d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d24: 0x69240027  ldl         $a0, 0x27($t1)
    ctx->pc = 0x463d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x463d28: 0x6d240020  ldr         $a0, 0x20($t1)
    ctx->pc = 0x463d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x463d2c: 0x6926002f  ldl         $a2, 0x2F($t1)
    ctx->pc = 0x463d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x463d30: 0x6d260028  ldr         $a2, 0x28($t1)
    ctx->pc = 0x463d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x463d34: 0xb0640027  sdl         $a0, 0x27($v1)
    ctx->pc = 0x463d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d38: 0xb4640020  sdr         $a0, 0x20($v1)
    ctx->pc = 0x463d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d3c: 0xb066002f  sdl         $a2, 0x2F($v1)
    ctx->pc = 0x463d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d40: 0xb4660028  sdr         $a2, 0x28($v1)
    ctx->pc = 0x463d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463d44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x463D44u;
    {
        const bool branch_taken_0x463d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463D44u;
        // 0x463d48: 0xaf85847c  sw          $a1, -0x7B84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463d44) {
            ctx->pc = 0x463D70u;
            goto label_463d70;
        }
    }
    ctx->pc = 0x463D4Cu;
label_463d4c:
    // 0x463d4c: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x463d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x463d50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x463d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x463d54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x463d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_463d58:
    // 0x463d58: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x463D58u;
    SET_GPR_U32(ctx, 31, 0x463D60u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x463D58u, 0x463D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463D60u;
label_463d60:
    // 0x463d60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x463d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463d64: 0xc11f024  jal         func_47C090
    ctx->pc = 0x463D64u;
    SET_GPR_U32(ctx, 31, 0x463D6Cu);
    ctx->pc = 0x463D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x463D64u;
    // 0x463d68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x463D64u, 0x463D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463D6Cu;
label_463d6c:
    // 0x463d6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x463d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463d70:
    // 0x463d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x463d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x463d74: 0x3e00008  jr          $ra
    ctx->pc = 0x463D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463D74u;
        // 0x463d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463D7Cu;
    // 0x463d7c: 0x0  nop
    ctx->pc = 0x463d7cu;
    // NOP
    // 0x463d80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x463d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x463d84: 0x0  nop
    ctx->pc = 0x463d84u;
    // NOP
    // 0x463d88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x463d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x463d8c: 0x0  nop
    ctx->pc = 0x463d8cu;
    // NOP
    // 0x463d90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x463d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x463d94: 0x0  nop
    ctx->pc = 0x463d94u;
    // NOP
    // 0x463d98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x463d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x463d9c: 0x0  nop
    ctx->pc = 0x463d9cu;
    // NOP
    // 0x463da0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x463da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463da4: 0x0  nop
    ctx->pc = 0x463da4u;
    // NOP
    ctx->pc = 0x463da8u;
}
