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

// Function: sub_00116D48
// Address: 0x116d48 - 0x116ec0
void sub_00116D48_0x116d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116D48_0x116d48");
#endif

    switch (ctx->pc) {
        case 0x116dc0u: goto label_116dc0;
        case 0x116e08u: goto label_116e08;
        case 0x116e28u: goto label_116e28;
        case 0x116e4cu: goto label_116e4c;
        case 0x116e70u: goto label_116e70;
        default: break;
    }

    ctx->pc = 0x116d48u;

    // 0x116d48: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x116d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x116d4c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x116d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x116d50: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x116d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x116d54: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x116d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x116d58: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x116d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x116d5c: 0x34423dac  ori         $v0, $v0, 0x3DAC
    ctx->pc = 0x116d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15788);
    // 0x116d60: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x116d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x116d64: 0x34633db0  ori         $v1, $v1, 0x3DB0
    ctx->pc = 0x116d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15792);
    // 0x116d68: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x116d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x116d6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x116d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d70: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x116d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x116d74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x116d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d78: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x116d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x116d7c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x116d7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x116d80: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x116d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x116d84: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x116d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x116d88: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x116d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x116d8c: 0x82b821  addu        $s7, $a0, $v0
    ctx->pc = 0x116d8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116d90: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x116d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x116d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x116d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x116d9c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x116d9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116da0: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x116da0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116da4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x116da4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116da8: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x116da8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
    // 0x116dac: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x116dacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
    // 0x116db0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x116db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116db4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x116db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x116db8: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
    // 0x116dbc: 0x0  nop
    ctx->pc = 0x116dbcu;
    // NOP
label_116dc0:
    // 0x116dc0: 0x8e22fff4  lw          $v0, -0xC($s1)
    ctx->pc = 0x116dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967284)));
    // 0x116dc4: 0x8e23fff8  lw          $v1, -0x8($s1)
    ctx->pc = 0x116dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
    // 0x116dc8: 0x1642002b  bne         $s2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x116DC8u;
    {
        const bool branch_taken_0x116dc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x116DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DC8u;
        // 0x116dcc: 0x92240004  lbu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dc8) {
            ctx->pc = 0x116E78u;
            goto label_116e78;
        }
    }
    ctx->pc = 0x116DD0u;
    // 0x116dd0: 0x5663002a  bnel        $s3, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x116DD0u;
    {
        const bool branch_taken_0x116dd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x116dd0) {
            ctx->pc = 0x116DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DD0u;
            // 0x116dd4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E7Cu;
            goto label_116e7c;
        }
    }
    ctx->pc = 0x116DD8u;
    // 0x116dd8: 0x54e40028  bnel        $a3, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x116DD8u;
    {
        const bool branch_taken_0x116dd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x116dd8) {
            ctx->pc = 0x116DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DD8u;
            // 0x116ddc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E7Cu;
            goto label_116e7c;
        }
    }
    ctx->pc = 0x116DE0u;
    // 0x116de0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x116DE0u;
    {
        const bool branch_taken_0x116de0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x116DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DE0u;
        // 0x116de4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116de0) {
            ctx->pc = 0x116DF0u;
            goto label_116df0;
        }
    }
    ctx->pc = 0x116DE8u;
    // 0x116de8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116DE8u;
    {
        const bool branch_taken_0x116de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DE8u;
        // 0x116dec: 0x252581f0  addiu       $a1, $t1, -0x7E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116de8) {
            ctx->pc = 0x116DFCu;
            goto label_116dfc;
        }
    }
    ctx->pc = 0x116DF0u;
label_116df0:
    // 0x116df0: 0x14f60007  bne         $a3, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x116DF0u;
    {
        const bool branch_taken_0x116df0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x116df0) {
            ctx->pc = 0x116E10u;
            goto label_116e10;
        }
    }
    ctx->pc = 0x116DF8u;
    // 0x116df8: 0x254581f8  addiu       $a1, $t2, -0x7E08
    ctx->pc = 0x116df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935032));
label_116dfc:
    // 0x116dfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e00: 0xc10c4de  jal         func_431378
    ctx->pc = 0x116E00u;
    SET_GPR_U32(ctx, 31, 0x116E08u);
    ctx->pc = 0x116E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E00u;
    // 0x116e04: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x116E00u, 0x116E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E08u;
label_116e08:
    // 0x116e08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116E08u;
    {
        const bool branch_taken_0x116e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E08u;
        // 0x116e0c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e08) {
            ctx->pc = 0x116E2Cu;
            goto label_116e2c;
        }
    }
    ctx->pc = 0x116E10u;
label_116e10:
    // 0x116e10: 0x14e80006  bne         $a3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116E10u;
    {
        const bool branch_taken_0x116e10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x116E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E10u;
        // 0x116e14: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e10) {
            ctx->pc = 0x116E2Cu;
            goto label_116e2c;
        }
    }
    ctx->pc = 0x116E18u;
    // 0x116e18: 0x24a58200  addiu       $a1, $a1, -0x7E00
    ctx->pc = 0x116e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935040));
    // 0x116e1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e20: 0xc10c4de  jal         func_431378
    ctx->pc = 0x116E20u;
    SET_GPR_U32(ctx, 31, 0x116E28u);
    ctx->pc = 0x116E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E20u;
    // 0x116e24: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x116E20u, 0x116E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E28u;
label_116e28:
    // 0x116e28: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x116e28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116e2c:
    // 0x116e2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x116e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e30: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x116e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x116e34: 0x27c68208  addiu       $a2, $fp, -0x7DF8
    ctx->pc = 0x116e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935048));
    // 0x116e38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x116e38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e3c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x116e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e40: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x116e40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e44: 0xc10ca04  jal         func_432810
    ctx->pc = 0x116E44u;
    SET_GPR_U32(ctx, 31, 0x116E4Cu);
    ctx->pc = 0x116E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E44u;
    // 0x116e48: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x116E44u, 0x116E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E4Cu;
label_116e4c:
    // 0x116e4c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x116e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x116e50: 0x2f51821  addu        $v1, $s7, $s5
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x116e54: 0x244491e0  addiu       $a0, $v0, -0x6E20
    ctx->pc = 0x116e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
    // 0x116e58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x116e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116e60: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x116e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x116e64: 0x2c2800b  movn        $s0, $s6, $v0
    ctx->pc = 0x116e64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
    // 0x116e68: 0xc050fda  jal         func_143F68
    ctx->pc = 0x116E68u;
    SET_GPR_U32(ctx, 31, 0x116E70u);
    ctx->pc = 0x116E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E68u;
    // 0x116e6c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x116E68u, 0x116E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E70u;
label_116e70:
    // 0x116e70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116E70u;
    {
        const bool branch_taken_0x116e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E70u;
        // 0x116e74: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e70) {
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x116E78u;
label_116e78:
    // 0x116e78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x116e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_116e7c:
    // 0x116e7c: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x116e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x116e80: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x116e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x116e84: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x116E84u;
    {
        const bool branch_taken_0x116e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E84u;
        // 0x116e88: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e84) {
            ctx->pc = 0x116DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116dc0;
        }
    }
    ctx->pc = 0x116E8Cu;
    // 0x116e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e90: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x116e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_116e94:
    // 0x116e94: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x116e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x116e98: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x116e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x116e9c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x116e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x116ea0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x116ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x116ea4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x116ea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x116ea8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x116ea8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x116eac: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x116eacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116eb0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x116eb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116eb4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x116eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x116EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EB8u;
        // 0x116ebc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116EC0u;
}
