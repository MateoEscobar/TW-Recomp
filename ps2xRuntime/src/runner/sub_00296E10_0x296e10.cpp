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

// Function: sub_00296E10
// Address: 0x296e10 - 0x296e90
void sub_00296E10_0x296e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296E10_0x296e10");
#endif

    switch (ctx->pc) {
        case 0x296e34u: goto label_296e34;
        case 0x296e60u: goto label_296e60;
        default: break;
    }

    ctx->pc = 0x296e10u;

    // 0x296e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296e14: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x296e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x296e18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296e1c: 0x24061388  addiu       $a2, $zero, 0x1388
    ctx->pc = 0x296e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x296e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296e28: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x296e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x296e2c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x296E2Cu;
    SET_GPR_U32(ctx, 31, 0x296E34u);
    ctx->pc = 0x296E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E2Cu;
    // 0x296e30: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x296E2Cu, 0x296E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E34u;
label_296e34:
    // 0x296e34: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x296e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x296e38: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x296e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x296e3c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x296e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296e40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x296E40u;
    {
        const bool branch_taken_0x296e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e40) {
            ctx->pc = 0x296E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296E40u;
            // 0x296e44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x296E48u;
            goto label_296e48;
        }
    }
    ctx->pc = 0x296E48u;
label_296e48:
    // 0x296e48: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x296e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x296e4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x296e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296e50: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x296e50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x296e54: 0x1012  mflo        $v0
    ctx->pc = 0x296e54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x296e58: 0x21023  negu        $v0, $v0
    ctx->pc = 0x296e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x296e5c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x296e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_296e60:
    // 0x296e60: 0x8882ffff  lwl         $v0, -0x1($a0)
    ctx->pc = 0x296e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967295); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x296e64: 0x9882fffc  lwr         $v0, -0x4($a0)
    ctx->pc = 0x296e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967292); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x296e68: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x296e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x296e6c: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x296e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x296e70: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x296e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x296e74: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296E74u;
    {
        const bool branch_taken_0x296e74 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x296E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E74u;
        // 0x296e78: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e74) {
            ctx->pc = 0x296E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296e60;
        }
    }
    ctx->pc = 0x296E7Cu;
    // 0x296e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e84: 0x3e00008  jr          $ra
    ctx->pc = 0x296E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E84u;
        // 0x296e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E8Cu;
    // 0x296e8c: 0x0  nop
    ctx->pc = 0x296e8cu;
    // NOP
    ctx->pc = 0x296e90u;
}
