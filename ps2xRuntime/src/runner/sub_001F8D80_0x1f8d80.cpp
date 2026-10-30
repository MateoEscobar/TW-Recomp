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

// Function: sub_001F8D80
// Address: 0x1f8d80 - 0x1f8ef8
void sub_001F8D80_0x1f8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8D80_0x1f8d80");
#endif

    switch (ctx->pc) {
        case 0x1f8d80u: goto label_1f8d80;
        case 0x1f8d84u: goto label_1f8d84;
        case 0x1f8d88u: goto label_1f8d88;
        case 0x1f8d8cu: goto label_1f8d8c;
        case 0x1f8d90u: goto label_1f8d90;
        case 0x1f8d94u: goto label_1f8d94;
        case 0x1f8d98u: goto label_1f8d98;
        case 0x1f8d9cu: goto label_1f8d9c;
        case 0x1f8da0u: goto label_1f8da0;
        case 0x1f8da4u: goto label_1f8da4;
        case 0x1f8da8u: goto label_1f8da8;
        case 0x1f8dacu: goto label_1f8dac;
        case 0x1f8db0u: goto label_1f8db0;
        case 0x1f8db4u: goto label_1f8db4;
        case 0x1f8db8u: goto label_1f8db8;
        case 0x1f8dbcu: goto label_1f8dbc;
        case 0x1f8dc0u: goto label_1f8dc0;
        case 0x1f8dc4u: goto label_1f8dc4;
        case 0x1f8dc8u: goto label_1f8dc8;
        case 0x1f8dccu: goto label_1f8dcc;
        case 0x1f8dd0u: goto label_1f8dd0;
        case 0x1f8dd4u: goto label_1f8dd4;
        case 0x1f8dd8u: goto label_1f8dd8;
        case 0x1f8ddcu: goto label_1f8ddc;
        case 0x1f8de0u: goto label_1f8de0;
        case 0x1f8de4u: goto label_1f8de4;
        case 0x1f8de8u: goto label_1f8de8;
        case 0x1f8decu: goto label_1f8dec;
        case 0x1f8df0u: goto label_1f8df0;
        case 0x1f8df4u: goto label_1f8df4;
        case 0x1f8df8u: goto label_1f8df8;
        case 0x1f8dfcu: goto label_1f8dfc;
        case 0x1f8e00u: goto label_1f8e00;
        case 0x1f8e04u: goto label_1f8e04;
        case 0x1f8e08u: goto label_1f8e08;
        case 0x1f8e0cu: goto label_1f8e0c;
        case 0x1f8e10u: goto label_1f8e10;
        case 0x1f8e14u: goto label_1f8e14;
        case 0x1f8e18u: goto label_1f8e18;
        case 0x1f8e1cu: goto label_1f8e1c;
        case 0x1f8e20u: goto label_1f8e20;
        case 0x1f8e24u: goto label_1f8e24;
        case 0x1f8e28u: goto label_1f8e28;
        case 0x1f8e2cu: goto label_1f8e2c;
        case 0x1f8e30u: goto label_1f8e30;
        case 0x1f8e34u: goto label_1f8e34;
        case 0x1f8e38u: goto label_1f8e38;
        case 0x1f8e3cu: goto label_1f8e3c;
        case 0x1f8e40u: goto label_1f8e40;
        case 0x1f8e44u: goto label_1f8e44;
        case 0x1f8e48u: goto label_1f8e48;
        case 0x1f8e4cu: goto label_1f8e4c;
        case 0x1f8e50u: goto label_1f8e50;
        case 0x1f8e54u: goto label_1f8e54;
        case 0x1f8e58u: goto label_1f8e58;
        case 0x1f8e5cu: goto label_1f8e5c;
        case 0x1f8e60u: goto label_1f8e60;
        case 0x1f8e64u: goto label_1f8e64;
        case 0x1f8e68u: goto label_1f8e68;
        case 0x1f8e6cu: goto label_1f8e6c;
        case 0x1f8e70u: goto label_1f8e70;
        case 0x1f8e74u: goto label_1f8e74;
        case 0x1f8e78u: goto label_1f8e78;
        case 0x1f8e7cu: goto label_1f8e7c;
        case 0x1f8e80u: goto label_1f8e80;
        case 0x1f8e84u: goto label_1f8e84;
        case 0x1f8e88u: goto label_1f8e88;
        case 0x1f8e8cu: goto label_1f8e8c;
        case 0x1f8e90u: goto label_1f8e90;
        case 0x1f8e94u: goto label_1f8e94;
        case 0x1f8e98u: goto label_1f8e98;
        case 0x1f8e9cu: goto label_1f8e9c;
        case 0x1f8ea0u: goto label_1f8ea0;
        case 0x1f8ea4u: goto label_1f8ea4;
        case 0x1f8ea8u: goto label_1f8ea8;
        case 0x1f8eacu: goto label_1f8eac;
        case 0x1f8eb0u: goto label_1f8eb0;
        case 0x1f8eb4u: goto label_1f8eb4;
        case 0x1f8eb8u: goto label_1f8eb8;
        case 0x1f8ebcu: goto label_1f8ebc;
        case 0x1f8ec0u: goto label_1f8ec0;
        case 0x1f8ec4u: goto label_1f8ec4;
        case 0x1f8ec8u: goto label_1f8ec8;
        case 0x1f8eccu: goto label_1f8ecc;
        case 0x1f8ed0u: goto label_1f8ed0;
        case 0x1f8ed4u: goto label_1f8ed4;
        case 0x1f8ed8u: goto label_1f8ed8;
        case 0x1f8edcu: goto label_1f8edc;
        case 0x1f8ee0u: goto label_1f8ee0;
        case 0x1f8ee4u: goto label_1f8ee4;
        case 0x1f8ee8u: goto label_1f8ee8;
        case 0x1f8eecu: goto label_1f8eec;
        case 0x1f8ef0u: goto label_1f8ef0;
        case 0x1f8ef4u: goto label_1f8ef4;
        default: break;
    }

    ctx->pc = 0x1f8d80u;

label_1f8d80:
    // 0x1f8d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f8d84:
    // 0x1f8d84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f8d88:
    // 0x1f8d88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f8d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f8d8c:
    // 0x1f8d8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f8d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f8d90:
    // 0x1f8d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8d94:
    // 0x1f8d94: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f8d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f8d98:
    // 0x1f8d98: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
label_1f8d9c:
    if (ctx->pc == 0x1F8D9Cu) {
        ctx->pc = 0x1F8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D98u;
        // 0x1f8d9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8DA0u;
        goto label_1f8da0;
    }
    ctx->pc = 0x1F8D98u;
    {
        const bool branch_taken_0x1f8d98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D98u;
        // 0x1f8d9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d98) {
            ctx->pc = 0x1F8DDCu;
            goto label_1f8ddc;
        }
    }
    ctx->pc = 0x1F8DA0u;
label_1f8da0:
    // 0x1f8da0: 0xc07f86a  jal         func_1FE1A8
label_1f8da4:
    if (ctx->pc == 0x1F8DA4u) {
        ctx->pc = 0x1F8DA8u;
        goto label_1f8da8;
    }
    ctx->pc = 0x1F8DA0u;
    SET_GPR_U32(ctx, 31, 0x1F8DA8u);
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1F8DA0u, 0x1F8DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DA8u;
label_1f8da8:
    // 0x1f8da8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f8dac:
    if (ctx->pc == 0x1F8DACu) {
        ctx->pc = 0x1F8DB0u;
        goto label_1f8db0;
    }
    ctx->pc = 0x1F8DA8u;
    {
        const bool branch_taken_0x1f8da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8da8) {
            ctx->pc = 0x1F8DC0u;
            goto label_1f8dc0;
        }
    }
    ctx->pc = 0x1F8DB0u;
label_1f8db0:
    // 0x1f8db0: 0xc07f87e  jal         func_1FE1F8
label_1f8db4:
    if (ctx->pc == 0x1F8DB4u) {
        ctx->pc = 0x1F8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DB0u;
        // 0x1f8db4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8DB8u;
        goto label_1f8db8;
    }
    ctx->pc = 0x1F8DB0u;
    SET_GPR_U32(ctx, 31, 0x1F8DB8u);
    ctx->pc = 0x1F8DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8DB0u;
    // 0x1f8db4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1F8u, 0x1F8DB0u, 0x1F8DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DB8u;
label_1f8db8:
    // 0x1f8db8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f8dbc:
    if (ctx->pc == 0x1F8DBCu) {
        ctx->pc = 0x1F8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DB8u;
        // 0x1f8dbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8DC0u;
        goto label_1f8dc0;
    }
    ctx->pc = 0x1F8DB8u;
    {
        const bool branch_taken_0x1f8db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DB8u;
        // 0x1f8dbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8db8) {
            ctx->pc = 0x1F8DD0u;
            goto label_1f8dd0;
        }
    }
    ctx->pc = 0x1F8DC0u;
label_1f8dc0:
    // 0x1f8dc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f8dc4:
    // 0x1f8dc4: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1f8dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1f8dc8:
    // 0x1f8dc8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f8dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1f8dcc:
    // 0x1f8dcc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f8dd0:
    // 0x1f8dd0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1f8dd4:
    // 0x1f8dd4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1f8dd8:
    if (ctx->pc == 0x1F8DD8u) {
        ctx->pc = 0x1F8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DD4u;
        // 0x1f8dd8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8DDCu;
        goto label_1f8ddc;
    }
    ctx->pc = 0x1F8DD4u;
    {
        const bool branch_taken_0x1f8dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DD4u;
        // 0x1f8dd8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dd4) {
            ctx->pc = 0x1F8ED4u;
            goto label_1f8ed4;
        }
    }
    ctx->pc = 0x1F8DDCu;
label_1f8ddc:
    // 0x1f8ddc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f8de0:
    // 0x1f8de0: 0x14a2003f  bne         $a1, $v0, . + 4 + (0x3F << 2)
label_1f8de4:
    if (ctx->pc == 0x1F8DE4u) {
        ctx->pc = 0x1F8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DE0u;
        // 0x1f8de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8DE8u;
        goto label_1f8de8;
    }
    ctx->pc = 0x1F8DE0u;
    {
        const bool branch_taken_0x1f8de0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DE0u;
        // 0x1f8de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8de0) {
            ctx->pc = 0x1F8EE0u;
            goto label_1f8ee0;
        }
    }
    ctx->pc = 0x1F8DE8u;
label_1f8de8:
    // 0x1f8de8: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1f8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_1f8dec:
    // 0x1f8dec: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1f8decu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1f8df0:
    // 0x1f8df0: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f8df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f8df4:
    // 0x1f8df4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8df8:
    // 0x1f8df8: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x1f8df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_1f8dfc:
    // 0x1f8dfc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1f8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1f8e00:
    // 0x1f8e00: 0x40f809  jalr        $v0
label_1f8e04:
    if (ctx->pc == 0x1F8E04u) {
        ctx->pc = 0x1F8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E00u;
        // 0x1f8e04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E08u;
        goto label_1f8e08;
    }
    ctx->pc = 0x1F8E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8E08u);
        ctx->pc = 0x1F8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E00u;
        // 0x1f8e04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8E00u, 0x1F8E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8E08u;
label_1f8e08:
    // 0x1f8e08: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1f8e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1f8e0c:
    // 0x1f8e0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f8e10:
    // 0x1f8e10: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1f8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1f8e14:
    // 0x1f8e14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1f8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f8e18:
    // 0x1f8e18: 0x2491eec0  addiu       $s1, $a0, -0x1140
    ctx->pc = 0x1f8e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962880));
label_1f8e1c:
    // 0x1f8e1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f8e20:
    // 0x1f8e20: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1f8e20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8e24:
    // 0x1f8e24: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1f8e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1f8e28:
    // 0x1f8e28: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1f8e28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_1f8e2c:
    // 0x1f8e2c: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x1f8e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_1f8e30:
    // 0x1f8e30: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x1f8e30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
label_1f8e34:
    // 0x1f8e34: 0xc07f7dc  jal         func_1FDF70
label_1f8e38:
    if (ctx->pc == 0x1F8E38u) {
        ctx->pc = 0x1F8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E34u;
        // 0x1f8e38: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E3Cu;
        goto label_1f8e3c;
    }
    ctx->pc = 0x1F8E34u;
    SET_GPR_U32(ctx, 31, 0x1F8E3Cu);
    ctx->pc = 0x1F8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E34u;
    // 0x1f8e38: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF70u, 0x1F8E34u, 0x1F8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E3Cu;
label_1f8e3c:
    // 0x1f8e3c: 0xc07f7e4  jal         func_1FDF90
label_1f8e40:
    if (ctx->pc == 0x1F8E40u) {
        ctx->pc = 0x1F8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E3Cu;
        // 0x1f8e40: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E44u;
        goto label_1f8e44;
    }
    ctx->pc = 0x1F8E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E44u);
    ctx->pc = 0x1F8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E3Cu;
    // 0x1f8e40: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF90u, 0x1F8E3Cu, 0x1F8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E44u;
label_1f8e44:
    // 0x1f8e44: 0xc07f7ec  jal         func_1FDFB0
label_1f8e48:
    if (ctx->pc == 0x1F8E48u) {
        ctx->pc = 0x1F8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E44u;
        // 0x1f8e48: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E4Cu;
        goto label_1f8e4c;
    }
    ctx->pc = 0x1F8E44u;
    SET_GPR_U32(ctx, 31, 0x1F8E4Cu);
    ctx->pc = 0x1F8E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E44u;
    // 0x1f8e48: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFB0u, 0x1F8E44u, 0x1F8E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E4Cu;
label_1f8e4c:
    // 0x1f8e4c: 0xc07f7d4  jal         func_1FDF50
label_1f8e50:
    if (ctx->pc == 0x1F8E50u) {
        ctx->pc = 0x1F8E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E4Cu;
        // 0x1f8e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E54u;
        goto label_1f8e54;
    }
    ctx->pc = 0x1F8E4Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E54u);
    ctx->pc = 0x1F8E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E4Cu;
    // 0x1f8e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF50u, 0x1F8E4Cu, 0x1F8E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E54u;
label_1f8e54:
    // 0x1f8e54: 0xc07f850  jal         func_1FE140
label_1f8e58:
    if (ctx->pc == 0x1F8E58u) {
        ctx->pc = 0x1F8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E54u;
        // 0x1f8e58: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E5Cu;
        goto label_1f8e5c;
    }
    ctx->pc = 0x1F8E54u;
    SET_GPR_U32(ctx, 31, 0x1F8E5Cu);
    ctx->pc = 0x1F8E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E54u;
    // 0x1f8e58: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE140u, 0x1F8E54u, 0x1F8E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E5Cu;
label_1f8e5c:
    // 0x1f8e5c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1f8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1f8e60:
    // 0x1f8e60: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1f8e64:
    if (ctx->pc == 0x1F8E64u) {
        ctx->pc = 0x1F8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E60u;
        // 0x1f8e64: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E68u;
        goto label_1f8e68;
    }
    ctx->pc = 0x1F8E60u;
    {
        const bool branch_taken_0x1f8e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E60u;
        // 0x1f8e64: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e60) {
            ctx->pc = 0x1F8ED0u;
            goto label_1f8ed0;
        }
    }
    ctx->pc = 0x1F8E68u;
label_1f8e68:
    // 0x1f8e68: 0xc07f7d4  jal         func_1FDF50
label_1f8e6c:
    if (ctx->pc == 0x1F8E6Cu) {
        ctx->pc = 0x1F8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E68u;
        // 0x1f8e6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E70u;
        goto label_1f8e70;
    }
    ctx->pc = 0x1F8E68u;
    SET_GPR_U32(ctx, 31, 0x1F8E70u);
    ctx->pc = 0x1F8E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E68u;
    // 0x1f8e6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF50u, 0x1F8E68u, 0x1F8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E70u;
label_1f8e70:
    // 0x1f8e70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f8e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f8e74:
    // 0x1f8e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8e78:
    // 0x1f8e78: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x1f8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_1f8e7c:
    // 0x1f8e7c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1f8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f8e80:
    // 0x1f8e80: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1f8e84:
    // 0x1f8e84: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x1f8e84u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_1f8e88:
    // 0x1f8e88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f8e8c:
    // 0x1f8e8c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f8e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f8e90:
    // 0x1f8e90: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x1f8e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f8e94:
    // 0x1f8e94: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1f8e98:
    if (ctx->pc == 0x1F8E98u) {
        ctx->pc = 0x1F8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E94u;
        // 0x1f8e98: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E9Cu;
        goto label_1f8e9c;
    }
    ctx->pc = 0x1F8E94u;
    {
        const bool branch_taken_0x1f8e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E94u;
        // 0x1f8e98: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e94) {
            ctx->pc = 0x1F8E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8e78;
        }
    }
    ctx->pc = 0x1F8E9Cu;
label_1f8e9c:
    // 0x1f8e9c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f8ea0:
    // 0x1f8ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8ea4:
    // 0x1f8ea4: 0x2446eec0  addiu       $a2, $v0, -0x1140
    ctx->pc = 0x1f8ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
label_1f8ea8:
    // 0x1f8ea8: 0x24a3000e  addiu       $v1, $a1, 0xE
    ctx->pc = 0x1f8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1f8eac:
    // 0x1f8eac: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1f8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f8eb0:
    // 0x1f8eb0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1f8eb4:
    // 0x1f8eb4: 0x96040022  lhu         $a0, 0x22($s0)
    ctx->pc = 0x1f8eb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_1f8eb8:
    // 0x1f8eb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f8ebc:
    // 0x1f8ebc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f8ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f8ec0:
    // 0x1f8ec0: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x1f8ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f8ec4:
    // 0x1f8ec4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1f8ec8:
    if (ctx->pc == 0x1F8EC8u) {
        ctx->pc = 0x1F8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EC4u;
        // 0x1f8ec8: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8ECCu;
        goto label_1f8ecc;
    }
    ctx->pc = 0x1F8EC4u;
    {
        const bool branch_taken_0x1f8ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EC4u;
        // 0x1f8ec8: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ec4) {
            ctx->pc = 0x1F8EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8ea8;
        }
    }
    ctx->pc = 0x1F8ECCu;
label_1f8ecc:
    // 0x1f8ecc: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x1f8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_1f8ed0:
    // 0x1f8ed0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f8ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f8ed4:
    // 0x1f8ed4: 0xc043f0c  jal         func_10FC30
label_1f8ed8:
    if (ctx->pc == 0x1F8ED8u) {
        ctx->pc = 0x1F8EDCu;
        goto label_1f8edc;
    }
    ctx->pc = 0x1F8ED4u;
    SET_GPR_U32(ctx, 31, 0x1F8EDCu);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F8ED4u, 0x1F8EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EDCu;
label_1f8edc:
    // 0x1f8edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8ee0:
    // 0x1f8ee0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f8ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f8ee4:
    // 0x1f8ee4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f8ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f8ee8:
    // 0x1f8ee8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f8ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8eec:
    // 0x1f8eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8ef0:
    // 0x1f8ef0: 0x3e00008  jr          $ra
label_1f8ef4:
    if (ctx->pc == 0x1F8EF4u) {
        ctx->pc = 0x1F8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EF0u;
        // 0x1f8ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8EF8u;
        goto label_fallthrough_0x1f8ef0;
    }
    ctx->pc = 0x1F8EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EF0u;
        // 0x1f8ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8ef0:
    ctx->pc = 0x1F8EF8u;
}
