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

// Function: sub_00149DA0
// Address: 0x149da0 - 0x149e58
void sub_00149DA0_0x149da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149DA0_0x149da0");
#endif

    switch (ctx->pc) {
        case 0x149dccu: goto label_149dcc;
        case 0x149e34u: goto label_149e34;
        case 0x149e44u: goto label_149e44;
        default: break;
    }

    ctx->pc = 0x149da0u;

    // 0x149da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149da4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x149da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x149da8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x149da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x149dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149db8: 0x2451e388  addiu       $s1, $v0, -0x1C78
    ctx->pc = 0x149db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960008));
    // 0x149dbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x149dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149dc0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149dc4: 0xc11348c  jal         func_44D230
    ctx->pc = 0x149DC4u;
    SET_GPR_U32(ctx, 31, 0x149DCCu);
    ctx->pc = 0x149DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149DC4u;
    // 0x149dc8: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D230u, 0x149DC4u, 0x149DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DCCu;
label_149dcc:
    // 0x149dcc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x149DCCu;
    {
        const bool branch_taken_0x149dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149DCCu;
        // 0x149dd0: 0x26060122  addiu       $a2, $s0, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149dcc) {
            ctx->pc = 0x149E3Cu;
            goto label_149e3c;
        }
    }
    ctx->pc = 0x149DD4u;
    // 0x149dd4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x149dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x149dd8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x149dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x149ddc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x149ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x149de0: 0x431027  nor         $v0, $v0, $v1
    ctx->pc = 0x149de0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 3)));
    // 0x149de4: 0xa6020114  sh          $v0, 0x114($s0)
    ctx->pc = 0x149de4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x149de8: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x149de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x149dec: 0xa2030110  sb          $v1, 0x110($s0)
    ctx->pc = 0x149decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 3));
    // 0x149df0: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x149df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x149df4: 0xa2020111  sb          $v0, 0x111($s0)
    ctx->pc = 0x149df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 273), (uint8_t)GPR_U32(ctx, 2));
    // 0x149df8: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x149df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149dfc: 0xa2030112  sb          $v1, 0x112($s0)
    ctx->pc = 0x149dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 274), (uint8_t)GPR_U32(ctx, 3));
    // 0x149e00: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x149e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x149e04: 0xa2020113  sb          $v0, 0x113($s0)
    ctx->pc = 0x149e04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 275), (uint8_t)GPR_U32(ctx, 2));
    // 0x149e08: 0x6a22000f  ldl         $v0, 0xF($s1)
    ctx->pc = 0x149e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x149e0c: 0x6e220008  ldr         $v0, 0x8($s1)
    ctx->pc = 0x149e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x149e10: 0x8a230013  lwl         $v1, 0x13($s1)
    ctx->pc = 0x149e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x149e14: 0x9a230010  lwr         $v1, 0x10($s1)
    ctx->pc = 0x149e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x149e18: 0xb202011d  sdl         $v0, 0x11D($s0)
    ctx->pc = 0x149e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x149e1c: 0xb6020116  sdr         $v0, 0x116($s0)
    ctx->pc = 0x149e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 278); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x149e20: 0xaa030121  swl         $v1, 0x121($s0)
    ctx->pc = 0x149e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 289); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x149e24: 0xba03011e  swr         $v1, 0x11E($s0)
    ctx->pc = 0x149e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 286); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x149e28: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149e2c: 0xc1135f4  jal         func_44D7D0
    ctx->pc = 0x149E2Cu;
    SET_GPR_U32(ctx, 31, 0x149E34u);
    ctx->pc = 0x149E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E2Cu;
    // 0x149e30: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7D0u, 0x149E2Cu, 0x149E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E34u;
label_149e34:
    // 0x149e34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149E34u;
    {
        const bool branch_taken_0x149e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E34u;
        // 0x149e38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e34) {
            ctx->pc = 0x149E48u;
            goto label_149e48;
        }
    }
    ctx->pc = 0x149E3Cu;
label_149e3c:
    // 0x149e3c: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149E3Cu;
    SET_GPR_U32(ctx, 31, 0x149E44u);
    ctx->pc = 0x149E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E3Cu;
    // 0x149e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149E3Cu, 0x149E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E44u;
label_149e44:
    // 0x149e44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_149e48:
    // 0x149e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149e50: 0x3e00008  jr          $ra
    ctx->pc = 0x149E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E50u;
        // 0x149e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149E58u;
}
