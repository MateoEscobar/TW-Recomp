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

// Function: sub_00178D48
// Address: 0x178d48 - 0x178ee8
void sub_00178D48_0x178d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178D48_0x178d48");
#endif

    switch (ctx->pc) {
        case 0x178d88u: goto label_178d88;
        case 0x178dd0u: goto label_178dd0;
        case 0x178decu: goto label_178dec;
        case 0x178e14u: goto label_178e14;
        case 0x178e30u: goto label_178e30;
        case 0x178e44u: goto label_178e44;
        case 0x178e64u: goto label_178e64;
        case 0x178e98u: goto label_178e98;
        default: break;
    }

    ctx->pc = 0x178d48u;

    // 0x178d48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178d4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x178d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x178d54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178d58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x178d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x178d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x178d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178d68: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x178d68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x178d6c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x178d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x178d70: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x178D70u;
    {
        const bool branch_taken_0x178d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D70u;
        // 0x178d74: 0x8e2800a8  lw          $t0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d70) {
            ctx->pc = 0x178ECCu;
            goto label_178ecc;
        }
    }
    ctx->pc = 0x178D78u;
    // 0x178d78: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178D78u;
    {
        const bool branch_taken_0x178d78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D78u;
        // 0x178d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d78) {
            ctx->pc = 0x178DBCu;
            goto label_178dbc;
        }
    }
    ctx->pc = 0x178D80u;
    // 0x178d80: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x178d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178d88:
    // 0x178d88: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x178d8c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x178d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x178d90: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x178d90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x178d94: 0x14890006  bne         $a0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178D94u;
    {
        const bool branch_taken_0x178d94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x178D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D94u;
        // 0x178d98: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d94) {
            ctx->pc = 0x178DB0u;
            goto label_178db0;
        }
    }
    ctx->pc = 0x178D9Cu;
    // 0x178d9c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x178d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x178da0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178DA0u;
    {
        const bool branch_taken_0x178da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x178da0) {
            ctx->pc = 0x178DB0u;
            goto label_178db0;
        }
    }
    ctx->pc = 0x178DA8u;
    // 0x178da8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178dac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x178dacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_178db0:
    // 0x178db0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x178db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x178db4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x178DB4u;
    {
        const bool branch_taken_0x178db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DB4u;
        // 0x178db8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178db4) {
            ctx->pc = 0x178D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178d88;
        }
    }
    ctx->pc = 0x178DBCu;
label_178dbc:
    // 0x178dbc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178dc0: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x178DC0u;
    {
        const bool branch_taken_0x178dc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x178dc0) {
            ctx->pc = 0x178E80u;
            goto label_178e80;
        }
    }
    ctx->pc = 0x178DC8u;
    // 0x178dc8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x178DC8u;
    {
        const bool branch_taken_0x178dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DC8u;
        // 0x178dcc: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178dc8) {
            ctx->pc = 0x178ECCu;
            goto label_178ecc;
        }
    }
    ctx->pc = 0x178DD0u;
label_178dd0:
    // 0x178dd0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x178dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x178dd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x178dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x178dd8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x178dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x178ddc: 0x24c61f90  addiu       $a2, $a2, 0x1F90
    ctx->pc = 0x178ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8080));
    // 0x178de0: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x178de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x178de4: 0xc10ca04  jal         func_432810
    ctx->pc = 0x178DE4u;
    SET_GPR_U32(ctx, 31, 0x178DECu);
    ctx->pc = 0x178DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DE4u;
    // 0x178de8: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x178DE4u, 0x178DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DECu;
label_178dec:
    // 0x178dec: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x178decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x178df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178df4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x178df8: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x178df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x178dfc: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x178dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x178e00: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x178e04: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x178e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x178e08: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x178e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x178e0c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x178E0Cu;
    {
        const bool branch_taken_0x178e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E0Cu;
        // 0x178e10: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e0c) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178E14u;
label_178e14:
    // 0x178e14: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x178e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x178e18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x178e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x178e1c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x178e20: 0x24c61f90  addiu       $a2, $a2, 0x1F90
    ctx->pc = 0x178e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8080));
    // 0x178e24: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x178e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x178e28: 0xc10ca04  jal         func_432810
    ctx->pc = 0x178E28u;
    SET_GPR_U32(ctx, 31, 0x178E30u);
    ctx->pc = 0x178E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E28u;
    // 0x178e2c: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x178E28u, 0x178E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E30u;
label_178e30:
    // 0x178e30: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x178e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178e38: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x178e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x178e3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x178E3Cu;
    {
        const bool branch_taken_0x178e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E3Cu;
        // 0x178e40: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e3c) {
            ctx->pc = 0x178E74u;
            goto label_178e74;
        }
    }
    ctx->pc = 0x178E44u;
label_178e44:
    // 0x178e44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x178e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178e48: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x178e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x178e4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x178e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x178e50: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x178e54: 0x24c61f90  addiu       $a2, $a2, 0x1F90
    ctx->pc = 0x178e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8080));
    // 0x178e58: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x178e5c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x178E5Cu;
    SET_GPR_U32(ctx, 31, 0x178E64u);
    ctx->pc = 0x178E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E5Cu;
    // 0x178e60: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x178E5Cu, 0x178E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E64u;
label_178e64:
    // 0x178e64: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x178e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x178e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178e6c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x178e70: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x178e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_178e74:
    // 0x178e74: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x178e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x178e78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x178E78u;
    {
        const bool branch_taken_0x178e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E78u;
        // 0x178e7c: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e78) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178E80u;
label_178e80:
    // 0x178e80: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x178E80u;
    {
        const bool branch_taken_0x178e80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E80u;
        // 0x178e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e80) {
            ctx->pc = 0x178ECCu;
            goto label_178ecc;
        }
    }
    ctx->pc = 0x178E88u;
    // 0x178e88: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x178e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x178e8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x178e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x178e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e94: 0x0  nop
    ctx->pc = 0x178e94u;
    // NOP
label_178e98:
    // 0x178e98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x178e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x178e9c: 0x1046ffcc  beq         $v0, $a2, . + 4 + (-0x34 << 2)
    ctx->pc = 0x178E9Cu;
    {
        const bool branch_taken_0x178e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x178EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E9Cu;
        // 0x178ea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e9c) {
            ctx->pc = 0x178DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178dd0;
        }
    }
    ctx->pc = 0x178EA4u;
    // 0x178ea4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x178ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x178ea8: 0x1045ffda  beq         $v0, $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x178EA8u;
    {
        const bool branch_taken_0x178ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x178EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EA8u;
        // 0x178eac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ea8) {
            ctx->pc = 0x178E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e14;
        }
    }
    ctx->pc = 0x178EB0u;
    // 0x178eb0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x178eb4: 0x1045ffe3  beq         $v0, $a1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x178EB4u;
    {
        const bool branch_taken_0x178eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x178EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EB4u;
        // 0x178eb8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178eb4) {
            ctx->pc = 0x178E44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e44;
        }
    }
    ctx->pc = 0x178EBCu;
    // 0x178ebc: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x178ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x178ec0: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x178ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x178ec4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x178EC4u;
    {
        const bool branch_taken_0x178ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EC4u;
        // 0x178ec8: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ec4) {
            ctx->pc = 0x178E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e98;
        }
    }
    ctx->pc = 0x178ECCu;
label_178ecc:
    // 0x178ecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178ed0:
    // 0x178ed0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x178ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178ed4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178ed8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x178ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x178EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EE0u;
        // 0x178ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178EE8u;
}
