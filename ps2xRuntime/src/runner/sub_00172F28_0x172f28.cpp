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

// Function: sub_00172F28
// Address: 0x172f28 - 0x172ff0
void sub_00172F28_0x172f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172F28_0x172f28");
#endif

    switch (ctx->pc) {
        case 0x172f6cu: goto label_172f6c;
        case 0x172f88u: goto label_172f88;
        default: break;
    }

    ctx->pc = 0x172f28u;

    // 0x172f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172f2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x172f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x172f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f38: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x172f3c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x172f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x172f40: 0xac83d030  sw          $v1, -0x2FD0($a0)
    ctx->pc = 0x172f40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FD030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FD030u, _value); } while (0);
    // 0x172f44: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x172f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x172f48: 0x24422d60  addiu       $v0, $v0, 0x2D60
    ctx->pc = 0x172f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11616));
    // 0x172f4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172F4Cu;
    {
        const bool branch_taken_0x172f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F4Cu;
        // 0x172f50: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f4c) {
            ctx->pc = 0x172F60u;
            goto label_172f60;
        }
    }
    ctx->pc = 0x172F54u;
    // 0x172f54: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x172f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x172f58: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x172f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
    // 0x172f5c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x172f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_172f60:
    // 0x172f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f64: 0xc109b1e  jal         func_426C78
    ctx->pc = 0x172F64u;
    SET_GPR_U32(ctx, 31, 0x172F6Cu);
    ctx->pc = 0x172F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F64u;
    // 0x172f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C78u, 0x172F64u, 0x172F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F6Cu;
label_172f6c:
    // 0x172f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f70: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x172f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x172f74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x172f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x172f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172F78u;
    {
        const bool branch_taken_0x172f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f78) {
            ctx->pc = 0x172F88u;
            goto label_172f88;
        }
    }
    ctx->pc = 0x172F80u;
    // 0x172f80: 0xc11a402  jal         func_469008
    ctx->pc = 0x172F80u;
    SET_GPR_U32(ctx, 31, 0x172F88u);
    ctx->pc = 0x172F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F80u;
    // 0x172f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469008u, 0x172F80u, 0x172F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F88u;
label_172f88:
    // 0x172f88: 0x6a020023  ldl         $v0, 0x23($s0)
    ctx->pc = 0x172f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x172f8c: 0x6e02001c  ldr         $v0, 0x1C($s0)
    ctx->pc = 0x172f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x172f90: 0x6a03002b  ldl         $v1, 0x2B($s0)
    ctx->pc = 0x172f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x172f94: 0x6e030024  ldr         $v1, 0x24($s0)
    ctx->pc = 0x172f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x172f98: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x172f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172f9c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x172f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172fa0: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x172fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172fa4: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x172fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172fb0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x172fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172fb4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172fb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172fb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172fbc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x172fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x172fc0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x172fc4: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x172fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x172fc8: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x172fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x172fcc: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x172fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x172fd0: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x172fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x172fd4: 0xb2060023  sdl         $a2, 0x23($s0)
    ctx->pc = 0x172fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172fd8: 0xb606001c  sdr         $a2, 0x1C($s0)
    ctx->pc = 0x172fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172fdc: 0xb203002b  sdl         $v1, 0x2B($s0)
    ctx->pc = 0x172fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172fe0: 0xb6030024  sdr         $v1, 0x24($s0)
    ctx->pc = 0x172fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x172fe4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x172fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x172FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FE8u;
        // 0x172fec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172FF0u;
}
