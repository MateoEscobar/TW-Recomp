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

// Function: sub_00238DB0
// Address: 0x238db0 - 0x238f10
void sub_00238DB0_0x238db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238DB0_0x238db0");
#endif

    switch (ctx->pc) {
        case 0x238db0u: goto label_238db0;
        case 0x238db4u: goto label_238db4;
        case 0x238db8u: goto label_238db8;
        case 0x238dbcu: goto label_238dbc;
        case 0x238dc0u: goto label_238dc0;
        case 0x238dc4u: goto label_238dc4;
        case 0x238dc8u: goto label_238dc8;
        case 0x238dccu: goto label_238dcc;
        case 0x238dd0u: goto label_238dd0;
        case 0x238dd4u: goto label_238dd4;
        case 0x238dd8u: goto label_238dd8;
        case 0x238ddcu: goto label_238ddc;
        case 0x238de0u: goto label_238de0;
        case 0x238de4u: goto label_238de4;
        case 0x238de8u: goto label_238de8;
        case 0x238decu: goto label_238dec;
        case 0x238df0u: goto label_238df0;
        case 0x238df4u: goto label_238df4;
        case 0x238df8u: goto label_238df8;
        case 0x238dfcu: goto label_238dfc;
        case 0x238e00u: goto label_238e00;
        case 0x238e04u: goto label_238e04;
        case 0x238e08u: goto label_238e08;
        case 0x238e0cu: goto label_238e0c;
        case 0x238e10u: goto label_238e10;
        case 0x238e14u: goto label_238e14;
        case 0x238e18u: goto label_238e18;
        case 0x238e1cu: goto label_238e1c;
        case 0x238e20u: goto label_238e20;
        case 0x238e24u: goto label_238e24;
        case 0x238e28u: goto label_238e28;
        case 0x238e2cu: goto label_238e2c;
        case 0x238e30u: goto label_238e30;
        case 0x238e34u: goto label_238e34;
        case 0x238e38u: goto label_238e38;
        case 0x238e3cu: goto label_238e3c;
        case 0x238e40u: goto label_238e40;
        case 0x238e44u: goto label_238e44;
        case 0x238e48u: goto label_238e48;
        case 0x238e4cu: goto label_238e4c;
        case 0x238e50u: goto label_238e50;
        case 0x238e54u: goto label_238e54;
        case 0x238e58u: goto label_238e58;
        case 0x238e5cu: goto label_238e5c;
        case 0x238e60u: goto label_238e60;
        case 0x238e64u: goto label_238e64;
        case 0x238e68u: goto label_238e68;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e70u: goto label_238e70;
        case 0x238e74u: goto label_238e74;
        case 0x238e78u: goto label_238e78;
        case 0x238e7cu: goto label_238e7c;
        case 0x238e80u: goto label_238e80;
        case 0x238e84u: goto label_238e84;
        case 0x238e88u: goto label_238e88;
        case 0x238e8cu: goto label_238e8c;
        case 0x238e90u: goto label_238e90;
        case 0x238e94u: goto label_238e94;
        case 0x238e98u: goto label_238e98;
        case 0x238e9cu: goto label_238e9c;
        case 0x238ea0u: goto label_238ea0;
        case 0x238ea4u: goto label_238ea4;
        case 0x238ea8u: goto label_238ea8;
        case 0x238eacu: goto label_238eac;
        case 0x238eb0u: goto label_238eb0;
        case 0x238eb4u: goto label_238eb4;
        case 0x238eb8u: goto label_238eb8;
        case 0x238ebcu: goto label_238ebc;
        case 0x238ec0u: goto label_238ec0;
        case 0x238ec4u: goto label_238ec4;
        case 0x238ec8u: goto label_238ec8;
        case 0x238eccu: goto label_238ecc;
        case 0x238ed0u: goto label_238ed0;
        case 0x238ed4u: goto label_238ed4;
        case 0x238ed8u: goto label_238ed8;
        case 0x238edcu: goto label_238edc;
        case 0x238ee0u: goto label_238ee0;
        case 0x238ee4u: goto label_238ee4;
        case 0x238ee8u: goto label_238ee8;
        case 0x238eecu: goto label_238eec;
        case 0x238ef0u: goto label_238ef0;
        case 0x238ef4u: goto label_238ef4;
        case 0x238ef8u: goto label_238ef8;
        case 0x238efcu: goto label_238efc;
        case 0x238f00u: goto label_238f00;
        case 0x238f04u: goto label_238f04;
        case 0x238f08u: goto label_238f08;
        case 0x238f0cu: goto label_238f0c;
        default: break;
    }

    ctx->pc = 0x238db0u;

label_238db0:
    // 0x238db0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x238db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_238db4:
    // 0x238db4: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x238db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_238db8:
    // 0x238db8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x238db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_238dbc:
    // 0x238dbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_238dc0:
    // 0x238dc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x238dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_238dc4:
    // 0x238dc4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x238dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_238dc8:
    // 0x238dc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_238dcc:
    // 0x238dcc: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x238dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_238dd0:
    // 0x238dd0: 0xc0e4060  jal         func_390180
label_238dd4:
    if (ctx->pc == 0x238DD4u) {
        ctx->pc = 0x238DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DD0u;
        // 0x238dd4: 0xafa60038  sw          $a2, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DD8u;
        goto label_238dd8;
    }
    ctx->pc = 0x238DD0u;
    SET_GPR_U32(ctx, 31, 0x238DD8u);
    ctx->pc = 0x238DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DD0u;
    // 0x238dd4: 0xafa60038  sw          $a2, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238DD0u, 0x238DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DD8u;
label_238dd8:
    // 0x238dd8: 0xc08a61a  jal         func_229868
label_238ddc:
    if (ctx->pc == 0x238DDCu) {
        ctx->pc = 0x238DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DD8u;
        // 0x238ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DE0u;
        goto label_238de0;
    }
    ctx->pc = 0x238DD8u;
    SET_GPR_U32(ctx, 31, 0x238DE0u);
    ctx->pc = 0x238DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DD8u;
    // 0x238ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238DD8u, 0x238DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DE0u;
label_238de0:
    // 0x238de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238de4:
    // 0x238de4: 0x52000045  beql        $s0, $zero, . + 4 + (0x45 << 2)
label_238de8:
    if (ctx->pc == 0x238DE8u) {
        ctx->pc = 0x238DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DE4u;
        // 0x238de8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DECu;
        goto label_238dec;
    }
    ctx->pc = 0x238DE4u;
    {
        const bool branch_taken_0x238de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238de4) {
            ctx->pc = 0x238DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DE4u;
            // 0x238de8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238DECu;
label_238dec:
    // 0x238dec: 0xc0e4060  jal         func_390180
label_238df0:
    if (ctx->pc == 0x238DF0u) {
        ctx->pc = 0x238DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DECu;
        // 0x238df0: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DF4u;
        goto label_238df4;
    }
    ctx->pc = 0x238DECu;
    SET_GPR_U32(ctx, 31, 0x238DF4u);
    ctx->pc = 0x238DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DECu;
    // 0x238df0: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238DECu, 0x238DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DF4u;
label_238df4:
    // 0x238df4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238df8:
    // 0x238df8: 0x52400040  beql        $s2, $zero, . + 4 + (0x40 << 2)
label_238dfc:
    if (ctx->pc == 0x238DFCu) {
        ctx->pc = 0x238DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DF8u;
        // 0x238dfc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E00u;
        goto label_238e00;
    }
    ctx->pc = 0x238DF8u;
    {
        const bool branch_taken_0x238df8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x238df8) {
            ctx->pc = 0x238DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DF8u;
            // 0x238dfc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238E00u;
label_238e00:
    // 0x238e00: 0xc0e40a2  jal         func_390288
label_238e04:
    if (ctx->pc == 0x238E04u) {
        ctx->pc = 0x238E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E00u;
        // 0x238e04: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E08u;
        goto label_238e08;
    }
    ctx->pc = 0x238E00u;
    SET_GPR_U32(ctx, 31, 0x238E08u);
    ctx->pc = 0x238E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E00u;
    // 0x238e04: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x238E00u, 0x238E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E08u;
label_238e08:
    // 0x238e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238e0c:
    // 0x238e0c: 0x5220003b  beql        $s1, $zero, . + 4 + (0x3B << 2)
label_238e10:
    if (ctx->pc == 0x238E10u) {
        ctx->pc = 0x238E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E0Cu;
        // 0x238e10: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E14u;
        goto label_238e14;
    }
    ctx->pc = 0x238E0Cu;
    {
        const bool branch_taken_0x238e0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x238e0c) {
            ctx->pc = 0x238E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238E0Cu;
            // 0x238e10: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238E14u;
label_238e14:
    // 0x238e14: 0xa20003ba  sb          $zero, 0x3BA($s0)
    ctx->pc = 0x238e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 954), (uint8_t)GPR_U32(ctx, 0));
label_238e18:
    // 0x238e18: 0xc0874fa  jal         func_21D3E8
label_238e1c:
    if (ctx->pc == 0x238E1Cu) {
        ctx->pc = 0x238E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E18u;
        // 0x238e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E20u;
        goto label_238e20;
    }
    ctx->pc = 0x238E18u;
    SET_GPR_U32(ctx, 31, 0x238E20u);
    ctx->pc = 0x238E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E18u;
    // 0x238e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x238E18u, 0x238E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E20u;
label_238e20:
    // 0x238e20: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x238e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_238e24:
    // 0x238e24: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_238e28:
    if (ctx->pc == 0x238E28u) {
        ctx->pc = 0x238E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E24u;
        // 0x238e28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E2Cu;
        goto label_238e2c;
    }
    ctx->pc = 0x238E24u;
    {
        const bool branch_taken_0x238e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E24u;
        // 0x238e28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e24) {
            ctx->pc = 0x238EA4u;
            goto label_238ea4;
        }
    }
    ctx->pc = 0x238E2Cu;
label_238e2c:
    // 0x238e2c: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x238e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_238e30:
    // 0x238e30: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_238e34:
    // 0x238e34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x238e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238e38:
    // 0x238e38: 0xc107908  jal         func_41E420
label_238e3c:
    if (ctx->pc == 0x238E3Cu) {
        ctx->pc = 0x238E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E38u;
        // 0x238e3c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E40u;
        goto label_238e40;
    }
    ctx->pc = 0x238E38u;
    SET_GPR_U32(ctx, 31, 0x238E40u);
    ctx->pc = 0x238E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E38u;
    // 0x238e3c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x238E38u, 0x238E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E40u;
label_238e40:
    // 0x238e40: 0x1c400019  bgtz        $v0, . + 4 + (0x19 << 2)
label_238e44:
    if (ctx->pc == 0x238E44u) {
        ctx->pc = 0x238E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E40u;
        // 0x238e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E48u;
        goto label_238e48;
    }
    ctx->pc = 0x238E40u;
    {
        const bool branch_taken_0x238e40 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x238E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E40u;
        // 0x238e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e40) {
            ctx->pc = 0x238EA8u;
            goto label_238ea8;
        }
    }
    ctx->pc = 0x238E48u;
label_238e48:
    // 0x238e48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x238e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_238e4c:
    // 0x238e4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x238e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_238e50:
    // 0x238e50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x238e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_238e54:
    // 0x238e54: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x238e54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_238e58:
    // 0x238e58: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x238e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_238e5c:
    // 0x238e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238e60:
    // 0x238e60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x238e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238e64:
    // 0x238e64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x238e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238e68:
    // 0x238e68: 0xc088178  jal         func_2205E0
label_238e6c:
    if (ctx->pc == 0x238E6Cu) {
        ctx->pc = 0x238E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E68u;
        // 0x238e6c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E70u;
        goto label_238e70;
    }
    ctx->pc = 0x238E68u;
    SET_GPR_U32(ctx, 31, 0x238E70u);
    ctx->pc = 0x238E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E68u;
    // 0x238e6c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x238E68u, 0x238E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E70u;
label_238e70:
    // 0x238e70: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x238e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_238e74:
    // 0x238e74: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x238e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_238e78:
    // 0x238e78: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x238e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_238e7c:
    // 0x238e7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x238e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_238e80:
    // 0x238e80: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x238e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_238e84:
    // 0x238e84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x238e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_238e88:
    // 0x238e88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238e8c:
    // 0x238e8c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x238e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_238e90:
    // 0x238e90: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x238e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_238e94:
    // 0x238e94: 0x40f809  jalr        $v0
label_238e98:
    if (ctx->pc == 0x238E98u) {
        ctx->pc = 0x238E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E94u;
        // 0x238e98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E9Cu;
        goto label_238e9c;
    }
    ctx->pc = 0x238E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238E9Cu);
        ctx->pc = 0x238E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E94u;
        // 0x238e98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E94u, 0x238E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238E9Cu;
label_238e9c:
    // 0x238e9c: 0x10000017  b           . + 4 + (0x17 << 2)
label_238ea0:
    if (ctx->pc == 0x238EA0u) {
        ctx->pc = 0x238EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E9Cu;
        // 0x238ea0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EA4u;
        goto label_238ea4;
    }
    ctx->pc = 0x238E9Cu;
    {
        const bool branch_taken_0x238e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E9Cu;
        // 0x238ea0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e9c) {
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238EA4u;
label_238ea4:
    // 0x238ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238ea8:
    // 0x238ea8: 0xc089c20  jal         func_227080
label_238eac:
    if (ctx->pc == 0x238EACu) {
        ctx->pc = 0x238EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EA8u;
        // 0x238eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EB0u;
        goto label_238eb0;
    }
    ctx->pc = 0x238EA8u;
    SET_GPR_U32(ctx, 31, 0x238EB0u);
    ctx->pc = 0x238EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EA8u;
    // 0x238eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x238EA8u, 0x238EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EB0u;
label_238eb0:
    // 0x238eb0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_238eb4:
    // 0x238eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238eb8:
    // 0x238eb8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x238eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_238ebc:
    // 0x238ebc: 0xc0899aa  jal         func_2266A8
label_238ec0:
    if (ctx->pc == 0x238EC0u) {
        ctx->pc = 0x238EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EBCu;
        // 0x238ec0: 0xae02036c  sw          $v0, 0x36C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EC4u;
        goto label_238ec4;
    }
    ctx->pc = 0x238EBCu;
    SET_GPR_U32(ctx, 31, 0x238EC4u);
    ctx->pc = 0x238EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EBCu;
    // 0x238ec0: 0xae02036c  sw          $v0, 0x36C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x238EBCu, 0x238EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EC4u;
label_238ec4:
    // 0x238ec4: 0xc0874fa  jal         func_21D3E8
label_238ec8:
    if (ctx->pc == 0x238EC8u) {
        ctx->pc = 0x238EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EC4u;
        // 0x238ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238ECCu;
        goto label_238ecc;
    }
    ctx->pc = 0x238EC4u;
    SET_GPR_U32(ctx, 31, 0x238ECCu);
    ctx->pc = 0x238EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EC4u;
    // 0x238ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x238EC4u, 0x238ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238ECCu;
label_238ecc:
    // 0x238ecc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x238eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_238ed0:
    // 0x238ed0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_238ed4:
    if (ctx->pc == 0x238ED4u) {
        ctx->pc = 0x238ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238ED0u;
        // 0x238ed4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238ED8u;
        goto label_238ed8;
    }
    ctx->pc = 0x238ED0u;
    {
        const bool branch_taken_0x238ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238ed0) {
            ctx->pc = 0x238ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238ED0u;
            // 0x238ed4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238ED8u;
label_238ed8:
    // 0x238ed8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238edc:
    // 0x238edc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x238edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_238ee0:
    // 0x238ee0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x238ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_238ee4:
    // 0x238ee4: 0x40f809  jalr        $v0
label_238ee8:
    if (ctx->pc == 0x238EE8u) {
        ctx->pc = 0x238EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE4u;
        // 0x238ee8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EECu;
        goto label_238eec;
    }
    ctx->pc = 0x238EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238EECu);
        ctx->pc = 0x238EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE4u;
        // 0x238ee8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238EE4u, 0x238EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238EECu;
label_238eec:
    // 0x238eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238ef0:
    // 0x238ef0: 0xc10586c  jal         func_4161B0
label_238ef4:
    if (ctx->pc == 0x238EF4u) {
        ctx->pc = 0x238EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EF0u;
        // 0x238ef4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EF8u;
        goto label_238ef8;
    }
    ctx->pc = 0x238EF0u;
    SET_GPR_U32(ctx, 31, 0x238EF8u);
    ctx->pc = 0x238EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EF0u;
    // 0x238ef4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B0u, 0x238EF0u, 0x238EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EF8u;
label_238ef8:
    // 0x238ef8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x238ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_238efc:
    // 0x238efc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x238efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_238f00:
    // 0x238f00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x238f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_238f04:
    // 0x238f04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x238f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_238f08:
    // 0x238f08: 0x3e00008  jr          $ra
label_238f0c:
    if (ctx->pc == 0x238F0Cu) {
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F10u;
        goto label_fallthrough_0x238f08;
    }
    ctx->pc = 0x238F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x238f08:
    ctx->pc = 0x238F10u;
}
