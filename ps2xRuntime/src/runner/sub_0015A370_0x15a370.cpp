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

// Function: sub_0015A370
// Address: 0x15a370 - 0x15a410
void sub_0015A370_0x15a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A370_0x15a370");
#endif

    switch (ctx->pc) {
        case 0x15a390u: goto label_15a390;
        case 0x15a39cu: goto label_15a39c;
        case 0x15a3a8u: goto label_15a3a8;
        case 0x15a3f4u: goto label_15a3f4;
        default: break;
    }

    ctx->pc = 0x15a370u;

    // 0x15a370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a374: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a37c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a380: 0xac62c70c  sw          $v0, -0x38F4($v1)
    ctx->pc = 0x15a380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C70Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C70Cu, _value); } while (0);
    // 0x15a384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a388: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A388u;
    SET_GPR_U32(ctx, 31, 0x15A390u);
    ctx->pc = 0x15A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A388u;
    // 0x15a38c: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A388u, 0x15A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A390u;
label_15a390:
    // 0x15a390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a394: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A394u;
    SET_GPR_U32(ctx, 31, 0x15A39Cu);
    ctx->pc = 0x15A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A394u;
    // 0x15a398: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A394u, 0x15A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A39Cu;
label_15a39c:
    // 0x15a39c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x15a3a0: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A3A0u;
    SET_GPR_U32(ctx, 31, 0x15A3A8u);
    ctx->pc = 0x15A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3A0u;
    // 0x15a3a4: 0x240400bb  addiu       $a0, $zero, 0xBB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A3A0u, 0x15A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3A8u;
label_15a3a8:
    // 0x15a3a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15a3ac: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15a3b0: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15a3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15a3b4: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15a3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15a3b8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15a3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a3bc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15a3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a3c0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15a3c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3c8: 0x2443f170  addiu       $v1, $v0, -0xE90
    ctx->pc = 0x15a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x15a3cc: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15a3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x15a3d0: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15a3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x15a3d4: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15a3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a3d8: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15a3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a3dc: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15a3e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a3e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15a3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15a3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a3ec: 0xc071c4a  jal         func_1C7128
    ctx->pc = 0x15A3ECu;
    SET_GPR_U32(ctx, 31, 0x15A3F4u);
    ctx->pc = 0x15A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3ECu;
    // 0x15a3f0: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15A3ECu, 0x15A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3F4u;
label_15a3f4:
    // 0x15a3f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a3f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15a3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a3fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a400: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15a400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C734u, _value); } while (0);
    // 0x15a404: 0x3e00008  jr          $ra
    ctx->pc = 0x15A404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A404u;
        // 0x15a408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A40Cu;
    // 0x15a40c: 0x0  nop
    ctx->pc = 0x15a40cu;
    // NOP
    ctx->pc = 0x15a410u;
}
