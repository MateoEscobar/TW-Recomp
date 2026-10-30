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

// Function: sub_0015AF20
// Address: 0x15af20 - 0x15afb0
void sub_0015AF20_0x15af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AF20_0x15af20");
#endif

    switch (ctx->pc) {
        case 0x15af34u: goto label_15af34;
        case 0x15af40u: goto label_15af40;
        case 0x15af4cu: goto label_15af4c;
        case 0x15af98u: goto label_15af98;
        default: break;
    }

    ctx->pc = 0x15af20u;

    // 0x15af20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15af24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15af24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15af28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15af2c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AF2Cu;
    SET_GPR_U32(ctx, 31, 0x15AF34u);
    ctx->pc = 0x15AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF2Cu;
    // 0x15af30: 0x240400ac  addiu       $a0, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AF2Cu, 0x15AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF34u;
label_15af34:
    // 0x15af34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15af34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af38: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AF38u;
    SET_GPR_U32(ctx, 31, 0x15AF40u);
    ctx->pc = 0x15AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF38u;
    // 0x15af3c: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AF38u, 0x15AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF40u;
label_15af40:
    // 0x15af40: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15af40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x15af44: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AF44u;
    SET_GPR_U32(ctx, 31, 0x15AF4Cu);
    ctx->pc = 0x15AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF44u;
    // 0x15af48: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AF44u, 0x15AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF4Cu;
label_15af4c:
    // 0x15af4c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15af50: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15af54: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15af54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15af58: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15af58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15af5c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15af5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15af60: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15af60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15af64: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15af68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15af68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af6c: 0x2443f1b0  addiu       $v1, $v0, -0xE50
    ctx->pc = 0x15af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
    // 0x15af70: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15af70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x15af74: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15af74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x15af78: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15af78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15af7c: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15af7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15af80: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15af80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15af84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15af84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15af88: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15af88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15af8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15af90: 0xc071c4a  jal         func_1C7128
    ctx->pc = 0x15AF90u;
    SET_GPR_U32(ctx, 31, 0x15AF98u);
    ctx->pc = 0x15AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF90u;
    // 0x15af94: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15AF90u, 0x15AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF98u;
label_15af98:
    // 0x15af98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15af9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15af9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15afa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15afa4: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15afa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C734u, _value); } while (0);
    // 0x15afa8: 0x3e00008  jr          $ra
    ctx->pc = 0x15AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA8u;
        // 0x15afac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AFB0u;
}
