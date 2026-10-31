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

// Function: sub_0047E110
// Address: 0x47e110 - 0x47e210
void sub_0047E110_0x47e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E110_0x47e110");
#endif

    switch (ctx->pc) {
        case 0x47e154u: goto label_47e154;
        default: break;
    }

    ctx->pc = 0x47e110u;

    // 0x47e110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47e114: 0x27838930  addiu       $v1, $gp, -0x76D0
    ctx->pc = 0x47e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936880));
    // 0x47e118: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47e11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47e120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47e120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e124: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x47e124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x47e128: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x47e128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x47e12c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47e130: 0xaf838934  sw          $v1, -0x76CC($gp)
    ctx->pc = 0x47e130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 3));
    // 0x47e134: 0x2508ac78  addiu       $t0, $t0, -0x5388
    ctx->pc = 0x47e134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945912));
    // 0x47e138: 0xaf8285d8  sw          $v0, -0x7A28($gp)
    ctx->pc = 0x47e138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 2));
    // 0x47e13c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x47e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x47e140: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x47e140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
    // 0x47e144: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x47e144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x47e148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47e148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e14c: 0xc11f8b6  jal         func_47E2D8
    ctx->pc = 0x47E14Cu;
    SET_GPR_U32(ctx, 31, 0x47E154u);
    ctx->pc = 0x47E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E14Cu;
    // 0x47e150: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E2D8u, 0x47E14Cu, 0x47E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E154u;
label_47e154:
    // 0x47e154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47e154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e158: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x47E158u;
    {
        const bool branch_taken_0x47e158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E158u;
        // 0x47e15c: 0xaf8585dc  sw          $a1, -0x7A24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e158) {
            ctx->pc = 0x47E16Cu;
            goto label_47e16c;
        }
    }
    ctx->pc = 0x47E160u;
    // 0x47e160: 0xaf8085d8  sw          $zero, -0x7A28($gp)
    ctx->pc = 0x47e160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
    // 0x47e164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x47E164u;
    {
        const bool branch_taken_0x47e164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E164u;
        // 0x47e168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e164) {
            ctx->pc = 0x47E188u;
            goto label_47e188;
        }
    }
    ctx->pc = 0x47E16Cu;
label_47e16c:
    // 0x47e16c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x47e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x47e170: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47e170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47e174: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x47e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x47e178: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x47e178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x47e17c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x47e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x47e180: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x47e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x47e184: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x47e184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_47e188:
    // 0x47e188: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x47E188u;
    {
        const bool branch_taken_0x47e188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E188u;
        // 0x47e18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e188) {
            ctx->pc = 0x47E200u;
            goto label_47e200;
        }
    }
    ctx->pc = 0x47E190u;
    // 0x47e190: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x47E190u;
    {
        const bool branch_taken_0x47e190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E190u;
        // 0x47e194: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e190) {
            ctx->pc = 0x47E1C4u;
            goto label_47e1c4;
        }
    }
    ctx->pc = 0x47E198u;
    // 0x47e198: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47e19c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x47e19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x47e1a0: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x47e1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x47e1a4: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x47e1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x47e1a8: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x47e1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x47e1ac: 0xb043010f  sdl         $v1, 0x10F($v0)
    ctx->pc = 0x47e1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47e1b0: 0xb4430108  sdr         $v1, 0x108($v0)
    ctx->pc = 0x47e1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47e1b4: 0xb0440117  sdl         $a0, 0x117($v0)
    ctx->pc = 0x47e1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47e1b8: 0xb4440110  sdr         $a0, 0x110($v0)
    ctx->pc = 0x47e1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47e1bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x47E1BCu;
    {
        const bool branch_taken_0x47e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E1BCu;
        // 0x47e1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e1bc) {
            ctx->pc = 0x47E200u;
            goto label_47e200;
        }
    }
    ctx->pc = 0x47E1C4u;
label_47e1c4:
    // 0x47e1c4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x47e1c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x47e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x47e1cc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x47e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x47e1d0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x47e1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x47e1d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x47e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x47e1d8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x47e1dc: 0x2484e488  addiu       $a0, $a0, -0x1B78
    ctx->pc = 0x47e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960264));
    // 0x47e1e0: 0x24a53bb0  addiu       $a1, $a1, 0x3BB0
    ctx->pc = 0x47e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15280));
    // 0x47e1e4: 0x24c6e4a8  addiu       $a2, $a2, -0x1B58
    ctx->pc = 0x47e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960296));
    // 0x47e1e8: 0x2442e4c8  addiu       $v0, $v0, -0x1B38
    ctx->pc = 0x47e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960328));
    // 0x47e1ec: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x47e1ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70AE2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE2Cu, _value); } while (0);
    // 0x47e1f0: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x47e1f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x70AE20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE20u, _value); } while (0);
    // 0x47e1f4: 0xac65010c  sw          $a1, 0x10C($v1)
    ctx->pc = 0x47e1f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x70AE24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE24u, _value); } while (0);
    // 0x47e1f8: 0xac660110  sw          $a2, 0x110($v1)
    ctx->pc = 0x47e1f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x70AE28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE28u, _value); } while (0);
    // 0x47e1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e200:
    // 0x47e200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47e200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47e204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e208: 0x3e00008  jr          $ra
    ctx->pc = 0x47E208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E208u;
        // 0x47e20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E210u;
}
