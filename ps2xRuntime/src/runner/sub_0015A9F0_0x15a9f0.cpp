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

// Function: sub_0015A9F0
// Address: 0x15a9f0 - 0x15aa80
void sub_0015A9F0_0x15a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A9F0_0x15a9f0");
#endif

    switch (ctx->pc) {
        case 0x15aa04u: goto label_15aa04;
        case 0x15aa10u: goto label_15aa10;
        case 0x15aa1cu: goto label_15aa1c;
        case 0x15aa68u: goto label_15aa68;
        default: break;
    }

    ctx->pc = 0x15a9f0u;

    // 0x15a9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a9f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a9f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a9fc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A9FCu;
    SET_GPR_U32(ctx, 31, 0x15AA04u);
    ctx->pc = 0x15AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9FCu;
    // 0x15aa00: 0x240400a3  addiu       $a0, $zero, 0xA3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A9FCu, 0x15AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA04u;
label_15aa04:
    // 0x15aa04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15aa04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa08: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AA08u;
    SET_GPR_U32(ctx, 31, 0x15AA10u);
    ctx->pc = 0x15AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA08u;
    // 0x15aa0c: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AA08u, 0x15AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA10u;
label_15aa10:
    // 0x15aa10: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x15aa14: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AA14u;
    SET_GPR_U32(ctx, 31, 0x15AA1Cu);
    ctx->pc = 0x15AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA14u;
    // 0x15aa18: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AA14u, 0x15AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA1Cu;
label_15aa1c:
    // 0x15aa1c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15aa20: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15aa24: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15aa24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15aa28: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15aa28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15aa2c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15aa2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aa30: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15aa30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aa34: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15aa38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15aa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa3c: 0x2443f1a0  addiu       $v1, $v0, -0xE60
    ctx->pc = 0x15aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
    // 0x15aa40: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15aa40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x15aa44: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15aa44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x15aa48: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15aa48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aa4c: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15aa4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aa50: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15aa54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15aa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15aa58: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15aa58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15aa5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa60: 0xc071c4a  jal         func_1C7128
    ctx->pc = 0x15AA60u;
    SET_GPR_U32(ctx, 31, 0x15AA68u);
    ctx->pc = 0x15AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA60u;
    // 0x15aa64: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15AA60u, 0x15AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA68u;
label_15aa68:
    // 0x15aa68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15aa6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15aa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15aa70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15aa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15aa74: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15aa74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C734u, _value); } while (0);
    // 0x15aa78: 0x3e00008  jr          $ra
    ctx->pc = 0x15AA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA78u;
        // 0x15aa7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AA80u;
}
