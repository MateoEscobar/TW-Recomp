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

// Function: sub_00225DC0
// Address: 0x225dc0 - 0x225f58
void sub_00225DC0_0x225dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225DC0_0x225dc0");
#endif

    switch (ctx->pc) {
        case 0x225dd8u: goto label_225dd8;
        case 0x225df8u: goto label_225df8;
        case 0x225e08u: goto label_225e08;
        case 0x225e14u: goto label_225e14;
        case 0x225e2cu: goto label_225e2c;
        case 0x225e44u: goto label_225e44;
        case 0x225e5cu: goto label_225e5c;
        case 0x225e8cu: goto label_225e8c;
        case 0x225e94u: goto label_225e94;
        case 0x225ea8u: goto label_225ea8;
        case 0x225ec8u: goto label_225ec8;
        case 0x225ee0u: goto label_225ee0;
        case 0x225ef4u: goto label_225ef4;
        case 0x225f28u: goto label_225f28;
        case 0x225f38u: goto label_225f38;
        default: break;
    }

    ctx->pc = 0x225dc0u;

    // 0x225dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225dc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225dd0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225DD0u;
    SET_GPR_U32(ctx, 31, 0x225DD8u);
    ctx->pc = 0x225DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DD0u;
    // 0x225dd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225DD0u, 0x225DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DD8u;
label_225dd8:
    // 0x225dd8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x225dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x225ddc: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x225DDCu;
    {
        const bool branch_taken_0x225ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DDCu;
        // 0x225de0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ddc) {
            ctx->pc = 0x225EBCu;
            goto label_225ebc;
        }
    }
    ctx->pc = 0x225DE4u;
    // 0x225de4: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x225de8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x225DE8u;
    {
        const bool branch_taken_0x225de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DE8u;
        // 0x225dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225de8) {
            ctx->pc = 0x225E54u;
            goto label_225e54;
        }
    }
    ctx->pc = 0x225DF0u;
    // 0x225df0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225DF0u;
    SET_GPR_U32(ctx, 31, 0x225DF8u);
    ctx->pc = 0x225DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DF0u;
    // 0x225df4: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225DF0u, 0x225DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DF8u;
label_225df8:
    // 0x225df8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x225DF8u;
    {
        const bool branch_taken_0x225df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DF8u;
        // 0x225dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225df8) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225E00u;
    // 0x225e00: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225E00u;
    SET_GPR_U32(ctx, 31, 0x225E08u);
    ctx->pc = 0x225E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E00u;
    // 0x225e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225E00u, 0x225E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E08u;
label_225e08:
    // 0x225e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e0c: 0xc051fc6  jal         func_147F18
    ctx->pc = 0x225E0Cu;
    SET_GPR_U32(ctx, 31, 0x225E14u);
    ctx->pc = 0x225E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E0Cu;
    // 0x225e10: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F18u, 0x225E0Cu, 0x225E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E14u;
label_225e14:
    // 0x225e14: 0x2c420065  sltiu       $v0, $v0, 0x65
    ctx->pc = 0x225e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x225e18: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x225E18u;
    {
        const bool branch_taken_0x225e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E18u;
        // 0x225e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e18) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225E20u;
    // 0x225e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e24: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225E24u;
    SET_GPR_U32(ctx, 31, 0x225E2Cu);
    ctx->pc = 0x225E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E24u;
    // 0x225e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225E24u, 0x225E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E2Cu;
label_225e2c:
    // 0x225e2c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x225E2Cu;
    {
        const bool branch_taken_0x225e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E2Cu;
        // 0x225e30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e2c) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225E34u;
    // 0x225e34: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x225e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x225e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e3c: 0xc089998  jal         func_226660
    ctx->pc = 0x225E3Cu;
    SET_GPR_U32(ctx, 31, 0x225E44u);
    ctx->pc = 0x225E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E3Cu;
    // 0x225e40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225E3Cu, 0x225E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E44u;
label_225e44:
    // 0x225e44: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x225E44u;
    {
        const bool branch_taken_0x225e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E44u;
        // 0x225e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e44) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225E4Cu;
    // 0x225e4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x225E4Cu;
    {
        const bool branch_taken_0x225e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E4Cu;
        // 0x225e50: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e4c) {
            ctx->pc = 0x225F00u;
            goto label_225f00;
        }
    }
    ctx->pc = 0x225E54u;
label_225e54:
    // 0x225e54: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225E54u;
    SET_GPR_U32(ctx, 31, 0x225E5Cu);
    ctx->pc = 0x225E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E54u;
    // 0x225e58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225E54u, 0x225E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E5Cu;
label_225e5c:
    // 0x225e5c: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x225e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x225e60: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x225e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x225e64: 0xc48102e8  lwc1        $f1, 0x2E8($a0)
    ctx->pc = 0x225e64u;
    { uint32_t bits = FAST_READ32(0x5102E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225e70: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x225e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225e78: 0x0  nop
    ctx->pc = 0x225e78u;
    // NOP
    // 0x225e7c: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x225E7Cu;
    {
        const bool branch_taken_0x225e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E7Cu;
        // 0x225e80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e7c) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225E84u;
    // 0x225e84: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225E84u;
    SET_GPR_U32(ctx, 31, 0x225E8Cu);
    ctx->pc = 0x225E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E84u;
    // 0x225e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225E84u, 0x225E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E8Cu;
label_225e8c:
    // 0x225e8c: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x225E8Cu;
    SET_GPR_U32(ctx, 31, 0x225E94u);
    ctx->pc = 0x225E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E8Cu;
    // 0x225e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x225E8Cu, 0x225E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E94u;
label_225e94:
    // 0x225e94: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x225e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x225e98: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x225E98u;
    {
        const bool branch_taken_0x225e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E98u;
        // 0x225e9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e98) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225EA0u;
    // 0x225ea0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225EA0u;
    SET_GPR_U32(ctx, 31, 0x225EA8u);
    ctx->pc = 0x225EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EA0u;
    // 0x225ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225EA0u, 0x225EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EA8u;
label_225ea8:
    // 0x225ea8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x225EA8u;
    {
        const bool branch_taken_0x225ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EA8u;
        // 0x225eac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ea8) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225EB0u;
    // 0x225eb0: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x225eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x225eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225EB4u;
    {
        const bool branch_taken_0x225eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EB4u;
        // 0x225eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225eb4) {
            ctx->pc = 0x225ED8u;
            goto label_225ed8;
        }
    }
    ctx->pc = 0x225EBCu;
label_225ebc:
    // 0x225ebc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ec0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225EC0u;
    SET_GPR_U32(ctx, 31, 0x225EC8u);
    ctx->pc = 0x225EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EC0u;
    // 0x225ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225EC0u, 0x225EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EC8u;
label_225ec8:
    // 0x225ec8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x225EC8u;
    {
        const bool branch_taken_0x225ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EC8u;
        // 0x225ecc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ec8) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225ED0u;
    // 0x225ed0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x225ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x225ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225ed8:
    // 0x225ed8: 0xc089998  jal         func_226660
    ctx->pc = 0x225ED8u;
    SET_GPR_U32(ctx, 31, 0x225EE0u);
    ctx->pc = 0x225EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225ED8u;
    // 0x225edc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225ED8u, 0x225EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EE0u;
label_225ee0:
    // 0x225ee0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x225EE0u;
    {
        const bool branch_taken_0x225ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EE0u;
        // 0x225ee4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ee0) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225EE8u;
    // 0x225ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225eec: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225EECu;
    SET_GPR_U32(ctx, 31, 0x225EF4u);
    ctx->pc = 0x225EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EECu;
    // 0x225ef0: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225EECu, 0x225EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EF4u;
label_225ef4:
    // 0x225ef4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x225EF4u;
    {
        const bool branch_taken_0x225ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EF4u;
        // 0x225ef8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ef4) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225EFCu;
    // 0x225efc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x225efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_225f00:
    // 0x225f00: 0x8443014a  lh          $v1, 0x14A($v0)
    ctx->pc = 0x225f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 330)));
    // 0x225f04: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x225F04u;
    {
        const bool branch_taken_0x225f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F04u;
        // 0x225f08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f04) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225F0Cu;
    // 0x225f0c: 0x3405e007  ori         $a1, $zero, 0xE007
    ctx->pc = 0x225f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57351);
    // 0x225f10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225f14: 0x34a5c33c  ori         $a1, $a1, 0xC33C
    ctx->pc = 0x225f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49980);
    // 0x225f18: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x225f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x225f1c: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x225f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x225f20: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225F20u;
    SET_GPR_U32(ctx, 31, 0x225F28u);
    ctx->pc = 0x225F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F20u;
    // 0x225f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225F20u, 0x225F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F28u;
label_225f28:
    // 0x225f28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225F28u;
    {
        const bool branch_taken_0x225f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F28u;
        // 0x225f2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f28) {
            ctx->pc = 0x225F40u;
            goto label_225f40;
        }
    }
    ctx->pc = 0x225F30u;
    // 0x225f30: 0xc089000  jal         func_224000
    ctx->pc = 0x225F30u;
    SET_GPR_U32(ctx, 31, 0x225F38u);
    ctx->pc = 0x225F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F30u;
    // 0x225f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x225F30u, 0x225F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F38u;
label_225f38:
    // 0x225f38: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225f38u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x225f3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225f40:
    // 0x225f40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x225F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F4Cu;
        // 0x225f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F54u;
    // 0x225f54: 0x0  nop
    ctx->pc = 0x225f54u;
    // NOP
    ctx->pc = 0x225f58u;
}
