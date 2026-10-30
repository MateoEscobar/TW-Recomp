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

// Function: sub_0046CED8
// Address: 0x46ced8 - 0x46cf90
void sub_0046CED8_0x46ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CED8_0x46ced8");
#endif

    switch (ctx->pc) {
        case 0x46ced8u: goto label_46ced8;
        case 0x46cedcu: goto label_46cedc;
        case 0x46cee0u: goto label_46cee0;
        case 0x46cee4u: goto label_46cee4;
        case 0x46cee8u: goto label_46cee8;
        case 0x46ceecu: goto label_46ceec;
        case 0x46cef0u: goto label_46cef0;
        case 0x46cef4u: goto label_46cef4;
        case 0x46cef8u: goto label_46cef8;
        case 0x46cefcu: goto label_46cefc;
        case 0x46cf00u: goto label_46cf00;
        case 0x46cf04u: goto label_46cf04;
        case 0x46cf08u: goto label_46cf08;
        case 0x46cf0cu: goto label_46cf0c;
        case 0x46cf10u: goto label_46cf10;
        case 0x46cf14u: goto label_46cf14;
        case 0x46cf18u: goto label_46cf18;
        case 0x46cf1cu: goto label_46cf1c;
        case 0x46cf20u: goto label_46cf20;
        case 0x46cf24u: goto label_46cf24;
        case 0x46cf28u: goto label_46cf28;
        case 0x46cf2cu: goto label_46cf2c;
        case 0x46cf30u: goto label_46cf30;
        case 0x46cf34u: goto label_46cf34;
        case 0x46cf38u: goto label_46cf38;
        case 0x46cf3cu: goto label_46cf3c;
        case 0x46cf40u: goto label_46cf40;
        case 0x46cf44u: goto label_46cf44;
        case 0x46cf48u: goto label_46cf48;
        case 0x46cf4cu: goto label_46cf4c;
        case 0x46cf50u: goto label_46cf50;
        case 0x46cf54u: goto label_46cf54;
        case 0x46cf58u: goto label_46cf58;
        case 0x46cf5cu: goto label_46cf5c;
        case 0x46cf60u: goto label_46cf60;
        case 0x46cf64u: goto label_46cf64;
        case 0x46cf68u: goto label_46cf68;
        case 0x46cf6cu: goto label_46cf6c;
        case 0x46cf70u: goto label_46cf70;
        case 0x46cf74u: goto label_46cf74;
        case 0x46cf78u: goto label_46cf78;
        case 0x46cf7cu: goto label_46cf7c;
        case 0x46cf80u: goto label_46cf80;
        case 0x46cf84u: goto label_46cf84;
        case 0x46cf88u: goto label_46cf88;
        case 0x46cf8cu: goto label_46cf8c;
        default: break;
    }

    ctx->pc = 0x46ced8u;

label_46ced8:
    // 0x46ced8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46ced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_46cedc:
    // 0x46cedc: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x46cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
label_46cee0:
    // 0x46cee0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46cee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_46cee4:
    // 0x46cee4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x46cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_46cee8:
    // 0x46cee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46ceec:
    // 0x46ceec: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x46ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_46cef0:
    // 0x46cef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46cef4:
    // 0x46cef4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46cef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46cef8:
    // 0x46cef8: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x46cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_46cefc:
    // 0x46cefc: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x46cefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
label_46cf00:
    // 0x46cf00: 0x40f809  jalr        $v0
label_46cf04:
    if (ctx->pc == 0x46CF04u) {
        ctx->pc = 0x46CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF00u;
        // 0x46cf04: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CF08u;
        goto label_46cf08;
    }
    ctx->pc = 0x46CF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46CF08u);
        ctx->pc = 0x46CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF00u;
        // 0x46cf04: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CF00u, 0x46CF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46CF08u;
label_46cf08:
    // 0x46cf08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46cf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46cf0c:
    // 0x46cf0c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_46cf10:
    if (ctx->pc == 0x46CF10u) {
        ctx->pc = 0x46CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF0Cu;
        // 0x46cf10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CF14u;
        goto label_46cf14;
    }
    ctx->pc = 0x46CF0Cu;
    {
        const bool branch_taken_0x46cf0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF0Cu;
        // 0x46cf10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cf0c) {
            ctx->pc = 0x46CF7Cu;
            goto label_46cf7c;
        }
    }
    ctx->pc = 0x46CF14u;
label_46cf14:
    // 0x46cf14: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x46cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_46cf18:
    // 0x46cf18: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x46cf18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_46cf1c:
    // 0x46cf1c: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x46cf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_46cf20:
    // 0x46cf20: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x46cf20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_46cf24:
    // 0x46cf24: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46cf28:
    // 0x46cf28: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x46cf28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_46cf2c:
    // 0x46cf2c: 0x2484e710  addiu       $a0, $a0, -0x18F0
    ctx->pc = 0x46cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
label_46cf30:
    // 0x46cf30: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x46cf30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_46cf34:
    // 0x46cf34: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x46cf34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_46cf38:
    // 0x46cf38: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x46cf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_46cf3c:
    // 0x46cf3c: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x46cf3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_46cf40:
    // 0x46cf40: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x46cf40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_46cf44:
    // 0x46cf44: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x46cf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_46cf48:
    // 0x46cf48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46cf4c:
    // 0x46cf4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x46cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_46cf50:
    // 0x46cf50: 0x24c8e728  addiu       $t0, $a2, -0x18D8
    ctx->pc = 0x46cf50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
label_46cf54:
    // 0x46cf54: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x46cf54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_46cf58:
    // 0x46cf58: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x46cf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_46cf5c:
    // 0x46cf5c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x46cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_46cf60:
    // 0x46cf60: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x46cf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_46cf64:
    // 0x46cf64: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x46cf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_46cf68:
    // 0x46cf68: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x46cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_46cf6c:
    // 0x46cf6c: 0xc11ff8e  jal         func_47FE38
label_46cf70:
    if (ctx->pc == 0x46CF70u) {
        ctx->pc = 0x46CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF6Cu;
        // 0x46cf70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CF74u;
        goto label_46cf74;
    }
    ctx->pc = 0x46CF6Cu;
    SET_GPR_U32(ctx, 31, 0x46CF74u);
    ctx->pc = 0x46CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CF6Cu;
    // 0x46cf70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x46CF6Cu, 0x46CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CF74u;
label_46cf74:
    // 0x46cf74: 0x10000002  b           . + 4 + (0x2 << 2)
label_46cf78:
    if (ctx->pc == 0x46CF78u) {
        ctx->pc = 0x46CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF74u;
        // 0x46cf78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CF7Cu;
        goto label_46cf7c;
    }
    ctx->pc = 0x46CF74u;
    {
        const bool branch_taken_0x46cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF74u;
        // 0x46cf78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cf74) {
            ctx->pc = 0x46CF80u;
            goto label_46cf80;
        }
    }
    ctx->pc = 0x46CF7Cu;
label_46cf7c:
    // 0x46cf7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46cf7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46cf80:
    // 0x46cf80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46cf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46cf84:
    // 0x46cf84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46cf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46cf88:
    // 0x46cf88: 0x3e00008  jr          $ra
label_46cf8c:
    if (ctx->pc == 0x46CF8Cu) {
        ctx->pc = 0x46CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF88u;
        // 0x46cf8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CF90u;
        goto label_fallthrough_0x46cf88;
    }
    ctx->pc = 0x46CF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CF88u;
        // 0x46cf8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46cf88:
    ctx->pc = 0x46CF90u;
}
