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

// Function: sub_001CB190
// Address: 0x1cb190 - 0x1cb260
void sub_001CB190_0x1cb190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB190_0x1cb190");
#endif

    switch (ctx->pc) {
        case 0x1cb1fcu: goto label_1cb1fc;
        case 0x1cb214u: goto label_1cb214;
        default: break;
    }

    ctx->pc = 0x1cb190u;

    // 0x1cb190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb194: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1cb198: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cb198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cb19c: 0x8c62ea74  lw          $v0, -0x158C($v1)
    ctx->pc = 0x1cb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50EA74u));
    // 0x1cb1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1a4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CB1A4u;
    {
        const bool branch_taken_0x1cb1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1A4u;
        // 0x1cb1a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1a4) {
            ctx->pc = 0x1CB240u;
            goto label_1cb240;
        }
    }
    ctx->pc = 0x1CB1ACu;
    // 0x1cb1ac: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cb1b0: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CB1B0u;
    {
        const bool branch_taken_0x1cb1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1b0) {
            ctx->pc = 0x1CB1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB1B0u;
            // 0x1cb1b4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB244u;
            goto label_1cb244;
        }
    }
    ctx->pc = 0x1CB1B8u;
    // 0x1cb1b8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cb1bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1cb1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cb1c0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CB1C0u;
    {
        const bool branch_taken_0x1cb1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1c0) {
            ctx->pc = 0x1CB1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB1C0u;
            // 0x1cb1c4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB244u;
            goto label_1cb244;
        }
    }
    ctx->pc = 0x1CB1C8u;
    // 0x1cb1c8: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x1cb1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1cb1cc: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x1cb1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1cb1d0: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1cb1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1cb1d4: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1cb1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1cb1d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb1dc: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1cb1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cb1e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB1E0u;
    {
        const bool branch_taken_0x1cb1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1E0u;
        // 0x1cb1e4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1e0) {
            ctx->pc = 0x1CB1F4u;
            goto label_1cb1f4;
        }
    }
    ctx->pc = 0x1CB1E8u;
    // 0x1cb1e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb1ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1cb1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1cb1f0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1cb1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb1f4:
    // 0x1cb1f4: 0xc072c04  jal         func_1CB010
    ctx->pc = 0x1CB1F4u;
    SET_GPR_U32(ctx, 31, 0x1CB1FCu);
    ctx->pc = 0x1CB1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1F4u;
    // 0x1cb1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x1CB1F4u, 0x1CB1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1FCu;
label_1cb1fc:
    // 0x1cb1fc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1cb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cb200: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb208: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1cb208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1cb20c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CB20Cu;
    SET_GPR_U32(ctx, 31, 0x1CB214u);
    ctx->pc = 0x1CB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB20Cu;
    // 0x1cb210: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CB20Cu, 0x1CB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB214u;
label_1cb214:
    // 0x1cb214: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cb218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb21c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cb220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb224: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB224u;
    {
        const bool branch_taken_0x1cb224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB224u;
        // 0x1cb228: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb224) {
            ctx->pc = 0x1CB238u;
            goto label_1cb238;
        }
    }
    ctx->pc = 0x1CB22Cu;
    // 0x1cb22c: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x1cb22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1cb230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb234: 0xa2020048  sb          $v0, 0x48($s0)
    ctx->pc = 0x1cb234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
label_1cb238:
    // 0x1cb238: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB238u;
    {
        const bool branch_taken_0x1cb238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB238u;
        // 0x1cb23c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb238) {
            ctx->pc = 0x1CB248u;
            goto label_1cb248;
        }
    }
    ctx->pc = 0x1CB240u;
label_1cb240:
    // 0x1cb240: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cb240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1cb244:
    // 0x1cb244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb248:
    // 0x1cb248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cb248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb24c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb250: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB250u;
        // 0x1cb254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB258u;
    // 0x1cb258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb25c: 0x0  nop
    ctx->pc = 0x1cb25cu;
    // NOP
    ctx->pc = 0x1cb260u;
}
