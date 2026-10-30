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

// Function: sub_001D64B0
// Address: 0x1d64b0 - 0x1d6570
void sub_001D64B0_0x1d64b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D64B0_0x1d64b0");
#endif

    switch (ctx->pc) {
        case 0x1d64dcu: goto label_1d64dc;
        case 0x1d6538u: goto label_1d6538;
        case 0x1d6544u: goto label_1d6544;
        default: break;
    }

    ctx->pc = 0x1d64b0u;

    // 0x1d64b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d64b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d64b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d64b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1d64b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d64b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64bc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d64bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1d64c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d64c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d64c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d64c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d64c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d64c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d64cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d64ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d64d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d64d4: 0xc05e602  jal         func_179808
    ctx->pc = 0x1D64D4u;
    SET_GPR_U32(ctx, 31, 0x1D64DCu);
    ctx->pc = 0x1D64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64D4u;
    // 0x1d64d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D64D4u, 0x1D64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64DCu;
label_1d64dc:
    // 0x1d64dc: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1d64dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d64e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d64e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d64e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d64e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d64ec: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1d64ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1d64f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d64f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d64f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d64f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d64f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d64fc: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1d64fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d6500: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1d6500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d6504: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1d6504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d6508: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1d6508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d650c: 0xb2020047  sdl         $v0, 0x47($s0)
    ctx->pc = 0x1d650cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d6510: 0xb6020040  sdr         $v0, 0x40($s0)
    ctx->pc = 0x1d6510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d6514: 0xb203004f  sdl         $v1, 0x4F($s0)
    ctx->pc = 0x1d6514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d6518: 0xb6030048  sdr         $v1, 0x48($s0)
    ctx->pc = 0x1d6518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d651c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d651cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6520: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1d6520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6524: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d6524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d6528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d652c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d652cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d6530: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1D6530u;
    SET_GPR_U32(ctx, 31, 0x1D6538u);
    ctx->pc = 0x1D6534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6530u;
    // 0x1d6534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1D6530u, 0x1D6538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6538u;
label_1d6538:
    // 0x1d6538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d6538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d653c: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D653Cu;
    SET_GPR_U32(ctx, 31, 0x1D6544u);
    ctx->pc = 0x1D6540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D653Cu;
    // 0x1d6540: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D653Cu, 0x1D6544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6544u;
label_1d6544:
    // 0x1d6544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6548: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1d6548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1d654c: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x1d654cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
    // 0x1d6550: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d6550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d6554: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d6554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6558: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d6558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d655c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d655cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d6560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6564: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6564u;
        // 0x1d6568: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D656Cu;
    // 0x1d656c: 0x0  nop
    ctx->pc = 0x1d656cu;
    // NOP
    ctx->pc = 0x1d6570u;
}
