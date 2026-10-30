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

// Function: sub_0028C1A8
// Address: 0x28c1a8 - 0x28c360
void sub_0028C1A8_0x28c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C1A8_0x28c1a8");
#endif

    switch (ctx->pc) {
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c248u: goto label_28c248;
        case 0x28c250u: goto label_28c250;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c324u: goto label_28c324;
        case 0x28c330u: goto label_28c330;
        case 0x28c344u: goto label_28c344;
        case 0x28c34cu: goto label_28c34c;
        default: break;
    }

    ctx->pc = 0x28c1a8u;

    // 0x28c1a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28c1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28c1ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28c1b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c1b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28c1bc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x28C1BCu;
    SET_GPR_U32(ctx, 31, 0x28C1C4u);
    ctx->pc = 0x28C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1BCu;
    // 0x28c1c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28C1BCu, 0x28C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1C4u;
label_28c1c4:
    // 0x28c1c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c1cc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x28c1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x28c1d0: 0x5446002e  bnel        $v0, $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x28C1D0u;
    {
        const bool branch_taken_0x28c1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x28c1d0) {
            ctx->pc = 0x28C1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C1D0u;
            // 0x28c1d4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C28Cu;
            goto label_28c28c;
        }
    }
    ctx->pc = 0x28C1D8u;
    // 0x28c1d8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x28c1dc: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x28c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
    // 0x28c1e0: 0x2447fe28  addiu       $a3, $v0, -0x1D8
    ctx->pc = 0x28c1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966824));
    // 0x28c1e4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x28c1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28c1e8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x28c1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28c1ec: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x28c1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c1f0: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x28c1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c1f4: 0x2485fea0  addiu       $a1, $a0, -0x160
    ctx->pc = 0x28c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966944));
    // 0x28c1f8: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x28c1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x28c1fc: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x28c1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28c200: 0xb2080023  sdl         $t0, 0x23($s0)
    ctx->pc = 0x28c200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c204: 0xb608001c  sdr         $t0, 0x1C($s0)
    ctx->pc = 0x28c204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c208: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x28c208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x28c20c: 0x2469fea8  addiu       $t1, $v1, -0x158
    ctx->pc = 0x28c20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966952));
    // 0x28c210: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x28c210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28c214: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x28c214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28c218: 0xb206002b  sdl         $a2, 0x2B($s0)
    ctx->pc = 0x28c218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c21c: 0xb6060024  sdr         $a2, 0x24($s0)
    ctx->pc = 0x28c21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c220: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c224: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x28C224u;
    {
        const bool branch_taken_0x28c224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c224) {
            ctx->pc = 0x28C228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C224u;
            // 0x28c228: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C254u;
            goto label_28c254;
        }
    }
    ctx->pc = 0x28C22Cu;
    // 0x28c22c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x28c230: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x28c230u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x28c234: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x28c234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x28c238: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x28c238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x28c23c: 0xa220001b  sb          $zero, 0x1B($s1)
    ctx->pc = 0x28c23cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x28c240: 0xc08cade  jal         func_232B78
    ctx->pc = 0x28C240u;
    SET_GPR_U32(ctx, 31, 0x28C248u);
    ctx->pc = 0x28C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C240u;
    // 0x28c244: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x28C240u, 0x28C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C248u;
label_28c248:
    // 0x28c248: 0xc089f12  jal         func_227C48
    ctx->pc = 0x28C248u;
    SET_GPR_U32(ctx, 31, 0x28C250u);
    ctx->pc = 0x28C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C248u;
    // 0x28c24c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x28C248u, 0x28C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C250u;
label_28c250:
    // 0x28c250: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c254:
    // 0x28c254: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x28c254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x28c258: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x28c258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x28c25c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C25Cu;
    {
        const bool branch_taken_0x28c25c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C25Cu;
        // 0x28c260: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c25c) {
            ctx->pc = 0x28C274u;
            goto label_28c274;
        }
    }
    ctx->pc = 0x28C264u;
    // 0x28c264: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C264u;
    {
        const bool branch_taken_0x28c264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0x240200bc  addiu       $v0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c264) {
            ctx->pc = 0x28C274u;
            goto label_28c274;
        }
    }
    ctx->pc = 0x28C26Cu;
    // 0x28c26c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C26Cu;
    {
        const bool branch_taken_0x28c26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c26c) {
            ctx->pc = 0x28C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C26Cu;
            // 0x28c270: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C280u;
            goto label_28c280;
        }
    }
    ctx->pc = 0x28C274u;
label_28c274:
    // 0x28c274: 0xc0a4822  jal         func_292088
    ctx->pc = 0x28C274u;
    SET_GPR_U32(ctx, 31, 0x28C27Cu);
    ctx->pc = 0x28C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C274u;
    // 0x28c278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292088u, 0x28C274u, 0x28C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C27Cu;
label_28c27c:
    // 0x28c27c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c280:
    // 0x28c280: 0xac40029c  sw          $zero, 0x29C($v0)
    ctx->pc = 0x28c280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 668), GPR_U32(ctx, 0));
    // 0x28c284: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28C284u;
    {
        const bool branch_taken_0x28c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C284u;
        // 0x28c288: 0xac400298  sw          $zero, 0x298($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c284) {
            ctx->pc = 0x28C330u;
            goto label_28c330;
        }
    }
    ctx->pc = 0x28C28Cu;
label_28c28c:
    // 0x28c28c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x28c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x28c290: 0x24425530  addiu       $v0, $v0, 0x5530
    ctx->pc = 0x28c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21808));
    // 0x28c294: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x28c294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x28c298: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28c298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28c29c: 0x24845568  addiu       $a0, $a0, 0x5568
    ctx->pc = 0x28c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21864));
    // 0x28c2a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c2a4: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x28c2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x28c2a8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x28c2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28c2ac: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x28c2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28c2b0: 0xb202001b  sdl         $v0, 0x1B($s0)
    ctx->pc = 0x28c2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c2b4: 0xb6020014  sdr         $v0, 0x14($s0)
    ctx->pc = 0x28c2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c2b8: 0x24a555a0  addiu       $a1, $a1, 0x55A0
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
    // 0x28c2bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c2c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c2c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c2c8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x28c2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28c2cc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x28c2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28c2d0: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x28c2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c2d4: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x28c2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c2d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c2dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28c2e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28c2e4: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x28c2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x28c2e8: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x28c2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x28c2ec: 0xb209002b  sdl         $t1, 0x2B($s0)
    ctx->pc = 0x28c2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c2f0: 0xb6090024  sdr         $t1, 0x24($s0)
    ctx->pc = 0x28c2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28c2f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c2f8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x28C2F8u;
    {
        const bool branch_taken_0x28c2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c2f8) {
            ctx->pc = 0x28C2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2F8u;
            // 0x28c2fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C350u;
            goto label_28c350;
        }
    }
    ctx->pc = 0x28C300u;
    // 0x28c300: 0xa226001b  sb          $a2, 0x1B($s1)
    ctx->pc = 0x28c300u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 6));
    // 0x28c304: 0xc051816  jal         func_146058
    ctx->pc = 0x28C304u;
    SET_GPR_U32(ctx, 31, 0x28C30Cu);
    ctx->pc = 0x28C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C304u;
    // 0x28c308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146058u, 0x28C304u, 0x28C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C30Cu;
label_28c30c:
    // 0x28c30c: 0x82220019  lb          $v0, 0x19($s1)
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x28c310: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x28C310u;
    {
        const bool branch_taken_0x28c310 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c310) {
            ctx->pc = 0x28C314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C310u;
            // 0x28c314: 0xa220001b  sb          $zero, 0x1B($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C318u;
            goto label_28c318;
        }
    }
    ctx->pc = 0x28C318u;
label_28c318:
    // 0x28c318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28c31c: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x28C31Cu;
    SET_GPR_U32(ctx, 31, 0x28C324u);
    ctx->pc = 0x28C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C31Cu;
    // 0x28c320: 0x804401b0  lb          $a0, 0x1B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x28C31Cu, 0x28C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C324u;
label_28c324:
    // 0x28c324: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28c324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28c328: 0xc0926fe  jal         func_249BF8
    ctx->pc = 0x28C328u;
    SET_GPR_U32(ctx, 31, 0x28C330u);
    ctx->pc = 0x28C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C328u;
    // 0x28c32c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249BF8u, 0x28C328u, 0x28C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C330u;
label_28c330:
    // 0x28c330: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c334: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C334u;
    {
        const bool branch_taken_0x28c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c334) {
            ctx->pc = 0x28C338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C334u;
            // 0x28c338: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C350u;
            goto label_28c350;
        }
    }
    ctx->pc = 0x28C33Cu;
    // 0x28c33c: 0xc0a3bd2  jal         func_28EF48
    ctx->pc = 0x28C33Cu;
    SET_GPR_U32(ctx, 31, 0x28C344u);
    ctx->pc = 0x28C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C33Cu;
    // 0x28c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x28C33Cu, 0x28C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C344u;
label_28c344:
    // 0x28c344: 0xc13782a  jal         func_4DE0A8
    ctx->pc = 0x28C344u;
    SET_GPR_U32(ctx, 31, 0x28C34Cu);
    ctx->pc = 0x28C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C344u;
    // 0x28c348: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x28C344u, 0x28C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C34Cu;
label_28c34c:
    // 0x28c34c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28c34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c350:
    // 0x28c350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c358: 0x3e00008  jr          $ra
    ctx->pc = 0x28C358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C358u;
        // 0x28c35c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C360u;
}
