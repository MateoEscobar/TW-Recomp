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

// Function: sub_00154D50
// Address: 0x154d50 - 0x154ee8
void sub_00154D50_0x154d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154D50_0x154d50");
#endif

    switch (ctx->pc) {
        case 0x154dacu: goto label_154dac;
        case 0x154dfcu: goto label_154dfc;
        case 0x154e54u: goto label_154e54;
        case 0x154ec0u: goto label_154ec0;
        case 0x154eccu: goto label_154ecc;
        default: break;
    }

    ctx->pc = 0x154d50u;

    // 0x154d50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x154d54: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x154d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x154d58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x154d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x154d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d60: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x154d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x154d64: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x154d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x154d68: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154D68u;
    {
        const bool branch_taken_0x154d68 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x154D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D68u;
        // 0x154d6c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d68) {
            ctx->pc = 0x154D84u;
            goto label_154d84;
        }
    }
    ctx->pc = 0x154D70u;
    // 0x154d70: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x154d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x154d74: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x154d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x154d78: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x154D78u;
    {
        const bool branch_taken_0x154d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d78) {
            ctx->pc = 0x154D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154D78u;
            // 0x154d7c: 0xafa7004c  sw          $a3, 0x4C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154D88u;
            goto label_154d88;
        }
    }
    ctx->pc = 0x154D80u;
    // 0x154d80: 0xac110000  sw          $s1, 0x0($zero)
    ctx->pc = 0x154d80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_154d84:
    // 0x154d84: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x154d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
label_154d88:
    // 0x154d88: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x154d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x154d8c: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x154D8Cu;
    {
        const bool branch_taken_0x154d8c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D8Cu;
        // 0x154d90: 0xa3a00004  sb          $zero, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d8c) {
            ctx->pc = 0x154D98u;
            goto label_154d98;
        }
    }
    ctx->pc = 0x154D94u;
    // 0x154d94: 0x8e09003c  lw          $t1, 0x3C($s0)
    ctx->pc = 0x154d94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_154d98:
    // 0x154d98: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x154d9c: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x154d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x154da0: 0xa3a00043  sb          $zero, 0x43($sp)
    ctx->pc = 0x154da0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x154da4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x154DA4u;
    SET_GPR_U32(ctx, 31, 0x154DACu);
    ctx->pc = 0x154DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DA4u;
    // 0x154da8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x154DA4u, 0x154DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DACu;
label_154dac:
    // 0x154dac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x154dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x154db0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x154db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154db4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x154db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x154db8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x154db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x154dbc: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x154DBCu;
    {
        const bool branch_taken_0x154dbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x154DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DBCu;
        // 0x154dc0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dbc) {
            ctx->pc = 0x154DC8u;
            goto label_154dc8;
        }
    }
    ctx->pc = 0x154DC4u;
    // 0x154dc4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x154dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_154dc8:
    // 0x154dc8: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x154dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x154dcc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x154dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x154dd0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x154dd4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x154dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x154dd8: 0x2442ffac  addiu       $v0, $v0, -0x54
    ctx->pc = 0x154dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
    // 0x154ddc: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x154DDCu;
    {
        const bool branch_taken_0x154ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x154ddc) {
            ctx->pc = 0x154EB8u;
            goto label_154eb8;
        }
    }
    ctx->pc = 0x154DE4u;
    // 0x154de4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x154DE4u;
    {
        const bool branch_taken_0x154de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DE4u;
        // 0x154de8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154de4) {
            ctx->pc = 0x154EA8u;
            goto label_154ea8;
        }
    }
    ctx->pc = 0x154DECu;
    // 0x154dec: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x154decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x154df0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x154DF0u;
    {
        const bool branch_taken_0x154df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DF0u;
        // 0x154df4: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154df0) {
            ctx->pc = 0x154E50u;
            goto label_154e50;
        }
    }
    ctx->pc = 0x154DF8u;
    // 0x154df8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x154df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_154dfc:
    // 0x154dfc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x154dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x154e00: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x154e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x154e04: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x154e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x154e08: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x154e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x154e0c: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x154e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x154e10: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x154e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x154e14: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x154e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x154e18: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x154e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x154e1c: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x154e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e20: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x154e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e24: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x154e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e28: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x154e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e2c: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x154e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e30: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x154e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e34: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x154e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e38: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x154e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e3c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x154e40: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x154E40u;
    {
        const bool branch_taken_0x154e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E40u;
        // 0x154e44: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e40) {
            ctx->pc = 0x154DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154dfc;
        }
    }
    ctx->pc = 0x154E48u;
    // 0x154e48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x154E48u;
    {
        const bool branch_taken_0x154e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e48) {
            ctx->pc = 0x154E80u;
            goto label_154e80;
        }
    }
    ctx->pc = 0x154E50u;
label_154e50:
    // 0x154e50: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_154e54:
    // 0x154e54: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x154e54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154e58: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x154e58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x154e5c: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x154e5cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x154e60: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x154e60u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x154e64: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x154e64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x154e68: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x154e68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x154e6c: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x154e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x154e70: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x154e70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x154e74: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x154e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x154e78: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x154E78u;
    {
        const bool branch_taken_0x154e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E78u;
        // 0x154e7c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e78) {
            ctx->pc = 0x154E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154e54;
        }
    }
    ctx->pc = 0x154E80u;
label_154e80:
    // 0x154e80: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x154e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x154e84: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x154e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x154e88: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x154e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x154e8c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x154e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x154e90: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x154e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x154e94: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x154e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e98: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x154e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154e9c: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x154e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154ea0: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x154ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x154ea4: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x154ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
label_154ea8:
    // 0x154ea8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x154ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x154eac: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x154eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x154eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154EB0u;
    {
        const bool branch_taken_0x154eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EB0u;
        // 0x154eb4: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154eb0) {
            ctx->pc = 0x154EC0u;
            goto label_154ec0;
        }
    }
    ctx->pc = 0x154EB8u;
label_154eb8:
    // 0x154eb8: 0xc1375c6  jal         func_4DD718
    ctx->pc = 0x154EB8u;
    SET_GPR_U32(ctx, 31, 0x154EC0u);
    ctx->pc = 0x154EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EB8u;
    // 0x154ebc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD718u, 0x154EB8u, 0x154EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EC0u;
label_154ec0:
    // 0x154ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ec4: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x154EC4u;
    SET_GPR_U32(ctx, 31, 0x154ECCu);
    ctx->pc = 0x154EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EC4u;
    // 0x154ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x154EC4u, 0x154ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154ECCu;
label_154ecc:
    // 0x154ecc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x154eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154ed0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x154ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x154ed4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x154ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x154ed8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x154ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154edc: 0x3e00008  jr          $ra
    ctx->pc = 0x154EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EDCu;
        // 0x154ee0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154EE4u;
    // 0x154ee4: 0x0  nop
    ctx->pc = 0x154ee4u;
    // NOP
    ctx->pc = 0x154ee8u;
}
