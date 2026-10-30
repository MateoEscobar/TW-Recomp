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

// Function: sub_0032D280
// Address: 0x32d280 - 0x32d348
void sub_0032D280_0x32d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D280_0x32d280");
#endif

    switch (ctx->pc) {
        case 0x32d2b0u: goto label_32d2b0;
        case 0x32d2f8u: goto label_32d2f8;
        default: break;
    }

    ctx->pc = 0x32d280u;

    // 0x32d280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32d284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d290: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32d290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32d294: 0x8c900028  lw          $s0, 0x28($a0)
    ctx->pc = 0x32d294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32d298: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x32d298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32d29c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32D29Cu;
    {
        const bool branch_taken_0x32d29c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x32D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D29Cu;
        // 0x32d2a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d29c) {
            ctx->pc = 0x32D2E0u;
            goto label_32d2e0;
        }
    }
    ctx->pc = 0x32D2A4u;
    // 0x32d2a4: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x32d2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32d2a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32d2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2ac: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x32d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_32d2b0:
    // 0x32d2b0: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x32d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x32d2b4: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D2B4u;
    {
        const bool branch_taken_0x32d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x32d2b4) {
            ctx->pc = 0x32D2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D2B4u;
            // 0x32d2b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D2D4u;
            goto label_32d2d4;
        }
    }
    ctx->pc = 0x32D2BCu;
    // 0x32d2bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32d2c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32d2c4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D2C4u;
    {
        const bool branch_taken_0x32d2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d2c4) {
            ctx->pc = 0x32D2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D2C4u;
            // 0x32d2c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D2D4u;
            goto label_32d2d4;
        }
    }
    ctx->pc = 0x32D2CCu;
    // 0x32d2cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x32D2CCu;
    {
        const bool branch_taken_0x32d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D2CCu;
        // 0x32d2d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2cc) {
            ctx->pc = 0x32D334u;
            goto label_32d334;
        }
    }
    ctx->pc = 0x32D2D4u;
label_32d2d4:
    // 0x32d2d4: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x32d2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x32d2d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32D2D8u;
    {
        const bool branch_taken_0x32d2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D2D8u;
        // 0x32d2dc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2d8) {
            ctx->pc = 0x32D2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d2b0;
        }
    }
    ctx->pc = 0x32D2E0u;
label_32d2e0:
    // 0x32d2e0: 0x86050020  lh          $a1, 0x20($s0)
    ctx->pc = 0x32d2e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32d2e4: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x32d2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x32d2e8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x32d2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32d2ec: 0x24e75c80  addiu       $a3, $a3, 0x5C80
    ctx->pc = 0x32d2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23680));
    // 0x32d2f0: 0xc0ca88a  jal         func_32A228
    ctx->pc = 0x32D2F0u;
    SET_GPR_U32(ctx, 31, 0x32D2F8u);
    ctx->pc = 0x32D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D2F0u;
    // 0x32d2f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A228u, 0x32D2F0u, 0x32D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2F8u;
label_32d2f8:
    // 0x32d2f8: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x32d2f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32d2fc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x32d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32d300: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x32d300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x32d304: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x32d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x32d308: 0x6a250007  ldl         $a1, 0x7($s1)
    ctx->pc = 0x32d308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x32d30c: 0x6e250000  ldr         $a1, 0x0($s1)
    ctx->pc = 0x32d30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x32d310: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x32d310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32d314: 0xb0450033  sdl         $a1, 0x33($v0)
    ctx->pc = 0x32d314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32d318: 0xb445002c  sdr         $a1, 0x2C($v0)
    ctx->pc = 0x32d318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32d31c: 0xac460034  sw          $a2, 0x34($v0)
    ctx->pc = 0x32d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
    // 0x32d320: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x32d320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32d324: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x32d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32d328: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32d328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d32c: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x32d32cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x32d330: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x32d330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_32d334:
    // 0x32d334: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32d334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d340: 0x3e00008  jr          $ra
    ctx->pc = 0x32D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D340u;
        // 0x32d344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D348u;
}
