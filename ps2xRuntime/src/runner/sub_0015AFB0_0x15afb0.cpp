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

// Function: sub_0015AFB0
// Address: 0x15afb0 - 0x15b040
void sub_0015AFB0_0x15afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AFB0_0x15afb0");
#endif

    switch (ctx->pc) {
        case 0x15afc4u: goto label_15afc4;
        case 0x15afd0u: goto label_15afd0;
        case 0x15afdcu: goto label_15afdc;
        case 0x15b028u: goto label_15b028;
        default: break;
    }

    ctx->pc = 0x15afb0u;

    // 0x15afb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15afb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15afb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15afb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15afbc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AFBCu;
    SET_GPR_U32(ctx, 31, 0x15AFC4u);
    ctx->pc = 0x15AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFBCu;
    // 0x15afc0: 0x240400ad  addiu       $a0, $zero, 0xAD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AFBCu, 0x15AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFC4u;
label_15afc4:
    // 0x15afc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15afc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afc8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AFC8u;
    SET_GPR_U32(ctx, 31, 0x15AFD0u);
    ctx->pc = 0x15AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFC8u;
    // 0x15afcc: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AFC8u, 0x15AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFD0u;
label_15afd0:
    // 0x15afd0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x15afd4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15AFD4u;
    SET_GPR_U32(ctx, 31, 0x15AFDCu);
    ctx->pc = 0x15AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFD4u;
    // 0x15afd8: 0x240400bb  addiu       $a0, $zero, 0xBB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AFD4u, 0x15AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFDCu;
label_15afdc:
    // 0x15afdc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15afe0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15afe4: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15afe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15afe8: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15afe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15afec: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15afecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aff0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15aff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15aff4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15aff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15aff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15affc: 0x2443f1b8  addiu       $v1, $v0, -0xE48
    ctx->pc = 0x15affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963640));
    // 0x15b000: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15b000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x15b004: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15b004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x15b008: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15b008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b00c: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15b00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b010: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15b014: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b018: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15b018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b01c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15b01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b020: 0xc071c4a  jal         func_1C7128
    ctx->pc = 0x15B020u;
    SET_GPR_U32(ctx, 31, 0x15B028u);
    ctx->pc = 0x15B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B020u;
    // 0x15b024: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15B020u, 0x15B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B028u;
label_15b028:
    // 0x15b028: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15b02c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15b02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b034: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15b034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C734u, _value); } while (0);
    // 0x15b038: 0x3e00008  jr          $ra
    ctx->pc = 0x15B038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B038u;
        // 0x15b03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B040u;
}
