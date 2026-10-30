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

// Function: sub_00182DE0
// Address: 0x182de0 - 0x183038
void sub_00182DE0_0x182de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182DE0_0x182de0");
#endif

    switch (ctx->pc) {
        case 0x182e20u: goto label_182e20;
        case 0x182e40u: goto label_182e40;
        case 0x182e4cu: goto label_182e4c;
        case 0x182e70u: goto label_182e70;
        case 0x182e7cu: goto label_182e7c;
        case 0x182ec0u: goto label_182ec0;
        case 0x182eccu: goto label_182ecc;
        case 0x182f64u: goto label_182f64;
        case 0x182f70u: goto label_182f70;
        case 0x182fa4u: goto label_182fa4;
        case 0x182fb0u: goto label_182fb0;
        case 0x182fe4u: goto label_182fe4;
        case 0x182ff0u: goto label_182ff0;
        default: break;
    }

    ctx->pc = 0x182de0u;

    // 0x182de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182de4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x182de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x182de8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x182de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x182dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182df0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x182df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x182df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182df8: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x182df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x182dfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182DFCu;
    {
        const bool branch_taken_0x182dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DFCu;
        // 0x182e00: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dfc) {
            ctx->pc = 0x182E10u;
            goto label_182e10;
        }
    }
    ctx->pc = 0x182E04u;
    // 0x182e04: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x182e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182e08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182E08u;
    {
        const bool branch_taken_0x182e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182e08) {
            ctx->pc = 0x182E18u;
            goto label_182e18;
        }
    }
    ctx->pc = 0x182E10u;
label_182e10:
    // 0x182e10: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x182E10u;
    {
        const bool branch_taken_0x182e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E10u;
        // 0x182e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e10) {
            ctx->pc = 0x18301Cu;
            goto label_18301c;
        }
    }
    ctx->pc = 0x182E18u;
label_182e18:
    // 0x182e18: 0xc060ac8  jal         func_182B20
    ctx->pc = 0x182E18u;
    SET_GPR_U32(ctx, 31, 0x182E20u);
    ctx->pc = 0x182E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E18u;
    // 0x182e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x182E18u, 0x182E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E20u;
label_182e20:
    // 0x182e20: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x182e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x182e24: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x182e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182e28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182E28u;
    {
        const bool branch_taken_0x182e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E28u;
        // 0x182e2c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e28) {
            ctx->pc = 0x182E38u;
            goto label_182e38;
        }
    }
    ctx->pc = 0x182E30u;
    // 0x182e30: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x182E30u;
    {
        const bool branch_taken_0x182e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E30u;
        // 0x182e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e30) {
            ctx->pc = 0x183018u;
            goto label_183018;
        }
    }
    ctx->pc = 0x182E38u;
label_182e38:
    // 0x182e38: 0xc060b64  jal         func_182D90
    ctx->pc = 0x182E38u;
    SET_GPR_U32(ctx, 31, 0x182E40u);
    ctx->pc = 0x182E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E38u;
    // 0x182e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D90u, 0x182E38u, 0x182E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E40u;
label_182e40:
    // 0x182e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e44: 0xc060b66  jal         func_182D98
    ctx->pc = 0x182E44u;
    SET_GPR_U32(ctx, 31, 0x182E4Cu);
    ctx->pc = 0x182E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E44u;
    // 0x182e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D98u, 0x182E44u, 0x182E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E4Cu;
label_182e4c:
    // 0x182e4c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x182e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x182e50: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x182e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x182e54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x182e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x182e58: 0x8a420077  lwl         $v0, 0x77($s2)
    ctx->pc = 0x182e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 119); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x182e5c: 0x9a420074  lwr         $v0, 0x74($s2)
    ctx->pc = 0x182e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 116); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x182e60: 0xaa020003  swl         $v0, 0x3($s0)
    ctx->pc = 0x182e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x182e64: 0xba020000  swr         $v0, 0x0($s0)
    ctx->pc = 0x182e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x182e68: 0xc060b68  jal         func_182DA0
    ctx->pc = 0x182E68u;
    SET_GPR_U32(ctx, 31, 0x182E70u);
    ctx->pc = 0x182E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E68u;
    // 0x182e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DA0u, 0x182E68u, 0x182E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E70u;
label_182e70:
    // 0x182e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e74: 0xc060b6a  jal         func_182DA8
    ctx->pc = 0x182E74u;
    SET_GPR_U32(ctx, 31, 0x182E7Cu);
    ctx->pc = 0x182E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E74u;
    // 0x182e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DA8u, 0x182E74u, 0x182E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E7Cu;
label_182e7c:
    // 0x182e7c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x182e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x182e80: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x182e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x182e84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x182e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x182e88: 0x6a42006b  ldl         $v0, 0x6B($s2)
    ctx->pc = 0x182e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x182e8c: 0x6e420064  ldr         $v0, 0x64($s2)
    ctx->pc = 0x182e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x182e90: 0x6a430073  ldl         $v1, 0x73($s2)
    ctx->pc = 0x182e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x182e94: 0x6e43006c  ldr         $v1, 0x6C($s2)
    ctx->pc = 0x182e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x182e98: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x182e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182e9c: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x182e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182ea0: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x182ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182ea4: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x182ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182ea8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x182ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x182eac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x182eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x182eb0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x182EB0u;
    {
        const bool branch_taken_0x182eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182eb0) {
            ctx->pc = 0x182F5Cu;
            goto label_182f5c;
        }
    }
    ctx->pc = 0x182EB8u;
    // 0x182eb8: 0xc060b74  jal         func_182DD0
    ctx->pc = 0x182EB8u;
    SET_GPR_U32(ctx, 31, 0x182EC0u);
    ctx->pc = 0x182EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EB8u;
    // 0x182ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD0u, 0x182EB8u, 0x182EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182EC0u;
label_182ec0:
    // 0x182ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ec4: 0xc060b76  jal         func_182DD8
    ctx->pc = 0x182EC4u;
    SET_GPR_U32(ctx, 31, 0x182ECCu);
    ctx->pc = 0x182EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EC4u;
    // 0x182ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD8u, 0x182EC4u, 0x182ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182ECCu;
label_182ecc:
    // 0x182ecc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x182eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x182ed0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x182ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x182ed4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x182ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x182ed8: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x182ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x182edc: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x182edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x182ee0: 0x6a42000f  ldl         $v0, 0xF($s2)
    ctx->pc = 0x182ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x182ee4: 0x6e420008  ldr         $v0, 0x8($s2)
    ctx->pc = 0x182ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x182ee8: 0x6a430017  ldl         $v1, 0x17($s2)
    ctx->pc = 0x182ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x182eec: 0x6e430010  ldr         $v1, 0x10($s2)
    ctx->pc = 0x182eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x182ef0: 0x6a44001f  ldl         $a0, 0x1F($s2)
    ctx->pc = 0x182ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x182ef4: 0x6e440018  ldr         $a0, 0x18($s2)
    ctx->pc = 0x182ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x182ef8: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x182ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182efc: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x182efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f00: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x182f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f04: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x182f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f08: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x182f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f0c: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x182f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f10: 0xb204001f  sdl         $a0, 0x1F($s0)
    ctx->pc = 0x182f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f14: 0xb6040018  sdr         $a0, 0x18($s0)
    ctx->pc = 0x182f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f18: 0x6a460027  ldl         $a2, 0x27($s2)
    ctx->pc = 0x182f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x182f1c: 0x6e460020  ldr         $a2, 0x20($s2)
    ctx->pc = 0x182f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x182f20: 0x6a42002f  ldl         $v0, 0x2F($s2)
    ctx->pc = 0x182f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x182f24: 0x6e420028  ldr         $v0, 0x28($s2)
    ctx->pc = 0x182f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x182f28: 0x6a430037  ldl         $v1, 0x37($s2)
    ctx->pc = 0x182f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x182f2c: 0x6e430030  ldr         $v1, 0x30($s2)
    ctx->pc = 0x182f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x182f30: 0x6a44003f  ldl         $a0, 0x3F($s2)
    ctx->pc = 0x182f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x182f34: 0x6e440038  ldr         $a0, 0x38($s2)
    ctx->pc = 0x182f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x182f38: 0xb2060027  sdl         $a2, 0x27($s0)
    ctx->pc = 0x182f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f3c: 0xb6060020  sdr         $a2, 0x20($s0)
    ctx->pc = 0x182f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f40: 0xb202002f  sdl         $v0, 0x2F($s0)
    ctx->pc = 0x182f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f44: 0xb6020028  sdr         $v0, 0x28($s0)
    ctx->pc = 0x182f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f48: 0xb2030037  sdl         $v1, 0x37($s0)
    ctx->pc = 0x182f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f4c: 0xb6030030  sdr         $v1, 0x30($s0)
    ctx->pc = 0x182f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f50: 0xb204003f  sdl         $a0, 0x3F($s0)
    ctx->pc = 0x182f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f54: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x182F54u;
    {
        const bool branch_taken_0x182f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F54u;
        // 0x182f58: 0xb6040038  sdr         $a0, 0x38($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f54) {
            ctx->pc = 0x18300Cu;
            goto label_18300c;
        }
    }
    ctx->pc = 0x182F5Cu;
label_182f5c:
    // 0x182f5c: 0xc060b60  jal         func_182D80
    ctx->pc = 0x182F5Cu;
    SET_GPR_U32(ctx, 31, 0x182F64u);
    ctx->pc = 0x182F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F5Cu;
    // 0x182f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D80u, 0x182F5Cu, 0x182F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F64u;
label_182f64:
    // 0x182f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f68: 0xc060b62  jal         func_182D88
    ctx->pc = 0x182F68u;
    SET_GPR_U32(ctx, 31, 0x182F70u);
    ctx->pc = 0x182F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F68u;
    // 0x182f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D88u, 0x182F68u, 0x182F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F70u;
label_182f70:
    // 0x182f70: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x182f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x182f74: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x182f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x182f78: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x182f7c: 0x6a450047  ldl         $a1, 0x47($s2)
    ctx->pc = 0x182f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x182f80: 0x6e450040  ldr         $a1, 0x40($s2)
    ctx->pc = 0x182f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x182f84: 0x6a46004f  ldl         $a2, 0x4F($s2)
    ctx->pc = 0x182f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x182f88: 0x6e460048  ldr         $a2, 0x48($s2)
    ctx->pc = 0x182f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x182f8c: 0xb2050007  sdl         $a1, 0x7($s0)
    ctx->pc = 0x182f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f90: 0xb6050000  sdr         $a1, 0x0($s0)
    ctx->pc = 0x182f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f94: 0xb206000f  sdl         $a2, 0xF($s0)
    ctx->pc = 0x182f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f98: 0xb6060008  sdr         $a2, 0x8($s0)
    ctx->pc = 0x182f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182f9c: 0xc060b6c  jal         func_182DB0
    ctx->pc = 0x182F9Cu;
    SET_GPR_U32(ctx, 31, 0x182FA4u);
    ctx->pc = 0x182FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F9Cu;
    // 0x182fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DB0u, 0x182F9Cu, 0x182FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FA4u;
label_182fa4:
    // 0x182fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fa8: 0xc060b6e  jal         func_182DB8
    ctx->pc = 0x182FA8u;
    SET_GPR_U32(ctx, 31, 0x182FB0u);
    ctx->pc = 0x182FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FA8u;
    // 0x182fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DB8u, 0x182FA8u, 0x182FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FB0u;
label_182fb0:
    // 0x182fb0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x182fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x182fb4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x182fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x182fb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x182fbc: 0x6a440057  ldl         $a0, 0x57($s2)
    ctx->pc = 0x182fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x182fc0: 0x6e440050  ldr         $a0, 0x50($s2)
    ctx->pc = 0x182fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x182fc4: 0xb2040007  sdl         $a0, 0x7($s0)
    ctx->pc = 0x182fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182fc8: 0xb6040000  sdr         $a0, 0x0($s0)
    ctx->pc = 0x182fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182fcc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x182fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x182fd0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x182fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x182fd4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x182FD4u;
    {
        const bool branch_taken_0x182fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182fd4) {
            ctx->pc = 0x182FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182FD4u;
            // 0x182fd8: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183010u;
            goto label_183010;
        }
    }
    ctx->pc = 0x182FDCu;
    // 0x182fdc: 0xc060b70  jal         func_182DC0
    ctx->pc = 0x182FDCu;
    SET_GPR_U32(ctx, 31, 0x182FE4u);
    ctx->pc = 0x182FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FDCu;
    // 0x182fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DC0u, 0x182FDCu, 0x182FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FE4u;
label_182fe4:
    // 0x182fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fe8: 0xc060b72  jal         func_182DC8
    ctx->pc = 0x182FE8u;
    SET_GPR_U32(ctx, 31, 0x182FF0u);
    ctx->pc = 0x182FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FE8u;
    // 0x182fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DC8u, 0x182FE8u, 0x182FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FF0u;
label_182ff0:
    // 0x182ff0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x182ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x182ff4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x182ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x182ff8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x182ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x182ffc: 0x8a430063  lwl         $v1, 0x63($s2)
    ctx->pc = 0x182ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x183000: 0x9a430060  lwr         $v1, 0x60($s2)
    ctx->pc = 0x183000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x183004: 0xaa030003  swl         $v1, 0x3($s0)
    ctx->pc = 0x183004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x183008: 0xba030000  swr         $v1, 0x0($s0)
    ctx->pc = 0x183008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18300c:
    // 0x18300c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x18300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_183010:
    // 0x183010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x183014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_183018:
    // 0x183018: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x183018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_18301c:
    // 0x18301c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18301cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183020: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x183020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183024: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x183024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18302c: 0x3e00008  jr          $ra
    ctx->pc = 0x18302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18302Cu;
        // 0x183030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18302Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183034u;
    // 0x183034: 0x0  nop
    ctx->pc = 0x183034u;
    // NOP
    ctx->pc = 0x183038u;
}
