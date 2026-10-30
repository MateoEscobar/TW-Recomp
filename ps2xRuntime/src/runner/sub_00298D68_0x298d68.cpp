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

// Function: sub_00298D68
// Address: 0x298d68 - 0x298ea0
void sub_00298D68_0x298d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298D68_0x298d68");
#endif

    switch (ctx->pc) {
        case 0x298d80u: goto label_298d80;
        case 0x298db0u: goto label_298db0;
        case 0x298df8u: goto label_298df8;
        case 0x298e24u: goto label_298e24;
        case 0x298e30u: goto label_298e30;
        case 0x298e54u: goto label_298e54;
        case 0x298e70u: goto label_298e70;
        case 0x298e7cu: goto label_298e7c;
        default: break;
    }

    ctx->pc = 0x298d68u;

    // 0x298d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298d70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x298d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x298d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298d78: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x298D78u;
    SET_GPR_U32(ctx, 31, 0x298D80u);
    ctx->pc = 0x298D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D78u;
    // 0x298d7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298D78u, 0x298D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D80u;
label_298d80:
    // 0x298d80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x298d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298d84: 0x9225000f  lbu         $a1, 0xF($s1)
    ctx->pc = 0x298d84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x298d88: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x298D88u;
    {
        const bool branch_taken_0x298d88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x298D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D88u;
        // 0x298d8c: 0x24700284  addiu       $s0, $v1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d88) {
            ctx->pc = 0x298E38u;
            goto label_298e38;
        }
    }
    ctx->pc = 0x298D90u;
    // 0x298d90: 0x9223000e  lbu         $v1, 0xE($s1)
    ctx->pc = 0x298d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x298d94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x298d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x298d98: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x298D98u;
    {
        const bool branch_taken_0x298d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298d98) {
            ctx->pc = 0x298D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D98u;
            // 0x298d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298E00u;
            goto label_298e00;
        }
    }
    ctx->pc = 0x298DA0u;
    // 0x298da0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x298da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x298da4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x298da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x298da8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x298DA8u;
    SET_GPR_U32(ctx, 31, 0x298DB0u);
    ctx->pc = 0x298DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DA8u;
    // 0x298dac: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x298DA8u, 0x298DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DB0u;
label_298db0:
    // 0x298db0: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x298db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x298db4: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x298db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x298db8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x298db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x298dbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298dc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298DC0u;
    {
        const bool branch_taken_0x298dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298dc0) {
            ctx->pc = 0x298DD4u;
            goto label_298dd4;
        }
    }
    ctx->pc = 0x298DC8u;
    // 0x298dc8: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x298dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x298dcc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x298dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x298dd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298dd4:
    // 0x298dd4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x298dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x298dd8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x298dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x298ddc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x298ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x298de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x298de8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x298de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x298dec: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x298decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x298df0: 0xc0a67e6  jal         func_299F98
    ctx->pc = 0x298DF0u;
    SET_GPR_U32(ctx, 31, 0x298DF8u);
    ctx->pc = 0x298DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DF0u;
    // 0x298df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F98u, 0x298DF0u, 0x298DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DF8u;
label_298df8:
    // 0x298df8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x298DF8u;
    {
        const bool branch_taken_0x298df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DF8u;
        // 0x298dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298df8) {
            ctx->pc = 0x298E28u;
            goto label_298e28;
        }
    }
    ctx->pc = 0x298E00u;
label_298e00:
    // 0x298e00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x298e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298e04: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x298e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x298e08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x298e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x298e0c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x298e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x298e10: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x298e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x298e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x298e18: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x298e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x298e1c: 0xc0a67e6  jal         func_299F98
    ctx->pc = 0x298E1Cu;
    SET_GPR_U32(ctx, 31, 0x298E24u);
    ctx->pc = 0x298E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E1Cu;
    // 0x298e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F98u, 0x298E1Cu, 0x298E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E24u;
label_298e24:
    // 0x298e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298e28:
    // 0x298e28: 0xc0a67bc  jal         func_299EF0
    ctx->pc = 0x298E28u;
    SET_GPR_U32(ctx, 31, 0x298E30u);
    ctx->pc = 0x298E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E28u;
    // 0x298e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x298E28u, 0x298E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E30u;
label_298e30:
    // 0x298e30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x298E30u;
    {
        const bool branch_taken_0x298e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E30u;
        // 0x298e34: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e30) {
            ctx->pc = 0x298E80u;
            goto label_298e80;
        }
    }
    ctx->pc = 0x298E38u;
label_298e38:
    // 0x298e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298e3c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298E3Cu;
    {
        const bool branch_taken_0x298e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x298E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E3Cu;
        // 0x298e40: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e3c) {
            ctx->pc = 0x298E5Cu;
            goto label_298e5c;
        }
    }
    ctx->pc = 0x298E44u;
    // 0x298e44: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x298E44u;
    {
        const bool branch_taken_0x298e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298e44) {
            ctx->pc = 0x298E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298E44u;
            // 0x298e48: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298E80u;
            goto label_298e80;
        }
    }
    ctx->pc = 0x298E4Cu;
    // 0x298e4c: 0xc0a5d78  jal         func_2975E0
    ctx->pc = 0x298E4Cu;
    SET_GPR_U32(ctx, 31, 0x298E54u);
    ctx->pc = 0x298E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E4Cu;
    // 0x298e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x298E4Cu, 0x298E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E54u;
label_298e54:
    // 0x298e54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x298E54u;
    {
        const bool branch_taken_0x298e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E54u;
        // 0x298e58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e54) {
            ctx->pc = 0x298E8Cu;
            goto label_298e8c;
        }
    }
    ctx->pc = 0x298E5Cu;
label_298e5c:
    // 0x298e5c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x298e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x298e60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e68: 0xc0a67aa  jal         func_299EA8
    ctx->pc = 0x298E68u;
    SET_GPR_U32(ctx, 31, 0x298E70u);
    ctx->pc = 0x298E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E68u;
    // 0x298e6c: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x298E68u, 0x298E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E70u;
label_298e70:
    // 0x298e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e74: 0xc0a67bc  jal         func_299EF0
    ctx->pc = 0x298E74u;
    SET_GPR_U32(ctx, 31, 0x298E7Cu);
    ctx->pc = 0x298E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E74u;
    // 0x298e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x298E74u, 0x298E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E7Cu;
label_298e7c:
    // 0x298e7c: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x298e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_298e80:
    // 0x298e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298e84: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x298e84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x298e88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x298e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298e8c:
    // 0x298e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298e94: 0x3e00008  jr          $ra
    ctx->pc = 0x298E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E94u;
        // 0x298e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298E9Cu;
    // 0x298e9c: 0x0  nop
    ctx->pc = 0x298e9cu;
    // NOP
    ctx->pc = 0x298ea0u;
}
