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

// Function: sub_002D8DB0
// Address: 0x2d8db0 - 0x2d8ee0
void sub_002D8DB0_0x2d8db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8DB0_0x2d8db0");
#endif

    switch (ctx->pc) {
        case 0x2d8db0u: goto label_2d8db0;
        case 0x2d8db4u: goto label_2d8db4;
        case 0x2d8db8u: goto label_2d8db8;
        case 0x2d8dbcu: goto label_2d8dbc;
        case 0x2d8dc0u: goto label_2d8dc0;
        case 0x2d8dc4u: goto label_2d8dc4;
        case 0x2d8dc8u: goto label_2d8dc8;
        case 0x2d8dccu: goto label_2d8dcc;
        case 0x2d8dd0u: goto label_2d8dd0;
        case 0x2d8dd4u: goto label_2d8dd4;
        case 0x2d8dd8u: goto label_2d8dd8;
        case 0x2d8ddcu: goto label_2d8ddc;
        case 0x2d8de0u: goto label_2d8de0;
        case 0x2d8de4u: goto label_2d8de4;
        case 0x2d8de8u: goto label_2d8de8;
        case 0x2d8decu: goto label_2d8dec;
        case 0x2d8df0u: goto label_2d8df0;
        case 0x2d8df4u: goto label_2d8df4;
        case 0x2d8df8u: goto label_2d8df8;
        case 0x2d8dfcu: goto label_2d8dfc;
        case 0x2d8e00u: goto label_2d8e00;
        case 0x2d8e04u: goto label_2d8e04;
        case 0x2d8e08u: goto label_2d8e08;
        case 0x2d8e0cu: goto label_2d8e0c;
        case 0x2d8e10u: goto label_2d8e10;
        case 0x2d8e14u: goto label_2d8e14;
        case 0x2d8e18u: goto label_2d8e18;
        case 0x2d8e1cu: goto label_2d8e1c;
        case 0x2d8e20u: goto label_2d8e20;
        case 0x2d8e24u: goto label_2d8e24;
        case 0x2d8e28u: goto label_2d8e28;
        case 0x2d8e2cu: goto label_2d8e2c;
        case 0x2d8e30u: goto label_2d8e30;
        case 0x2d8e34u: goto label_2d8e34;
        case 0x2d8e38u: goto label_2d8e38;
        case 0x2d8e3cu: goto label_2d8e3c;
        case 0x2d8e40u: goto label_2d8e40;
        case 0x2d8e44u: goto label_2d8e44;
        case 0x2d8e48u: goto label_2d8e48;
        case 0x2d8e4cu: goto label_2d8e4c;
        case 0x2d8e50u: goto label_2d8e50;
        case 0x2d8e54u: goto label_2d8e54;
        case 0x2d8e58u: goto label_2d8e58;
        case 0x2d8e5cu: goto label_2d8e5c;
        case 0x2d8e60u: goto label_2d8e60;
        case 0x2d8e64u: goto label_2d8e64;
        case 0x2d8e68u: goto label_2d8e68;
        case 0x2d8e6cu: goto label_2d8e6c;
        case 0x2d8e70u: goto label_2d8e70;
        case 0x2d8e74u: goto label_2d8e74;
        case 0x2d8e78u: goto label_2d8e78;
        case 0x2d8e7cu: goto label_2d8e7c;
        case 0x2d8e80u: goto label_2d8e80;
        case 0x2d8e84u: goto label_2d8e84;
        case 0x2d8e88u: goto label_2d8e88;
        case 0x2d8e8cu: goto label_2d8e8c;
        case 0x2d8e90u: goto label_2d8e90;
        case 0x2d8e94u: goto label_2d8e94;
        case 0x2d8e98u: goto label_2d8e98;
        case 0x2d8e9cu: goto label_2d8e9c;
        case 0x2d8ea0u: goto label_2d8ea0;
        case 0x2d8ea4u: goto label_2d8ea4;
        case 0x2d8ea8u: goto label_2d8ea8;
        case 0x2d8eacu: goto label_2d8eac;
        case 0x2d8eb0u: goto label_2d8eb0;
        case 0x2d8eb4u: goto label_2d8eb4;
        case 0x2d8eb8u: goto label_2d8eb8;
        case 0x2d8ebcu: goto label_2d8ebc;
        case 0x2d8ec0u: goto label_2d8ec0;
        case 0x2d8ec4u: goto label_2d8ec4;
        case 0x2d8ec8u: goto label_2d8ec8;
        case 0x2d8eccu: goto label_2d8ecc;
        case 0x2d8ed0u: goto label_2d8ed0;
        case 0x2d8ed4u: goto label_2d8ed4;
        case 0x2d8ed8u: goto label_2d8ed8;
        case 0x2d8edcu: goto label_2d8edc;
        default: break;
    }

    ctx->pc = 0x2d8db0u;

label_2d8db0:
    // 0x2d8db0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d8db4:
    // 0x2d8db4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d8db8:
    // 0x2d8db8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2d8dbc:
    // 0x2d8dbc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d8dc0:
    // 0x2d8dc0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2d8dc4:
    // 0x2d8dc4: 0x24a5c508  addiu       $a1, $a1, -0x3AF8
    ctx->pc = 0x2d8dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952200));
label_2d8dc8:
    // 0x2d8dc8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2d8dcc:
    // 0x2d8dcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d8dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8dd0:
    // 0x2d8dd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d8dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2d8dd4:
    // 0x2d8dd4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d8dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2d8dd8:
    // 0x2d8dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d8ddc:
    // 0x2d8ddc: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2d8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d8de0:
    // 0x2d8de0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d8de4:
    // 0x2d8de4: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x2d8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_2d8de8:
    // 0x2d8de8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2d8de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2d8dec:
    // 0x2d8dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d8df0:
    // 0x2d8df0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d8df0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d8df4:
    // 0x2d8df4: 0xc0a731e  jal         func_29CC78
label_2d8df8:
    if (ctx->pc == 0x2D8DF8u) {
        ctx->pc = 0x2D8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DF4u;
        // 0x2d8df8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8DFCu;
        goto label_2d8dfc;
    }
    ctx->pc = 0x2D8DF4u;
    SET_GPR_U32(ctx, 31, 0x2D8DFCu);
    ctx->pc = 0x2D8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DF4u;
    // 0x2d8df8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC78u, 0x2D8DF4u, 0x2D8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DFCu;
label_2d8dfc:
    // 0x2d8dfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e00:
    // 0x2d8e00: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_2d8e04:
    if (ctx->pc == 0x2D8E04u) {
        ctx->pc = 0x2D8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E00u;
        // 0x2d8e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E08u;
        goto label_2d8e08;
    }
    ctx->pc = 0x2D8E00u;
    {
        const bool branch_taken_0x2d8e00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E00u;
        // 0x2d8e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e00) {
            ctx->pc = 0x2D8EC0u;
            goto label_2d8ec0;
        }
    }
    ctx->pc = 0x2D8E08u;
label_2d8e08:
    // 0x2d8e08: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2d8e08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_2d8e0c:
    // 0x2d8e0c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d8e0cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2d8e10:
    // 0x2d8e10: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2d8e14:
    if (ctx->pc == 0x2D8E14u) {
        ctx->pc = 0x2D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E10u;
        // 0x2d8e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E18u;
        goto label_2d8e18;
    }
    ctx->pc = 0x2D8E10u;
    {
        const bool branch_taken_0x2d8e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E10u;
        // 0x2d8e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e10) {
            ctx->pc = 0x2D8EC0u;
            goto label_2d8ec0;
        }
    }
    ctx->pc = 0x2D8E18u;
label_2d8e18:
    // 0x2d8e18: 0xc087502  jal         func_21D408
label_2d8e1c:
    if (ctx->pc == 0x2D8E1Cu) {
        ctx->pc = 0x2D8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E18u;
        // 0x2d8e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E20u;
        goto label_2d8e20;
    }
    ctx->pc = 0x2D8E18u;
    SET_GPR_U32(ctx, 31, 0x2D8E20u);
    ctx->pc = 0x2D8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E18u;
    // 0x2d8e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D8E18u, 0x2D8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E20u;
label_2d8e20:
    // 0x2d8e20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d8e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e24:
    // 0x2d8e24: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x2d8e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2d8e28:
    // 0x2d8e28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2d8e2c:
    if (ctx->pc == 0x2D8E2Cu) {
        ctx->pc = 0x2D8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E28u;
        // 0x2d8e2c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E30u;
        goto label_2d8e30;
    }
    ctx->pc = 0x2D8E28u;
    {
        const bool branch_taken_0x2d8e28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E28u;
        // 0x2d8e2c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e28) {
            ctx->pc = 0x2D8E3Cu;
            goto label_2d8e3c;
        }
    }
    ctx->pc = 0x2D8E30u;
label_2d8e30:
    // 0x2d8e30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2d8e34:
    // 0x2d8e34: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d8e38:
    if (ctx->pc == 0x2D8E38u) {
        ctx->pc = 0x2D8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E34u;
        // 0x2d8e38: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E3Cu;
        goto label_2d8e3c;
    }
    ctx->pc = 0x2D8E34u;
    {
        const bool branch_taken_0x2d8e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E34u;
        // 0x2d8e38: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e34) {
            ctx->pc = 0x2D8E40u;
            goto label_2d8e40;
        }
    }
    ctx->pc = 0x2D8E3Cu;
label_2d8e3c:
    // 0x2d8e3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d8e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e40:
    // 0x2d8e40: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2d8e44:
    if (ctx->pc == 0x2D8E44u) {
        ctx->pc = 0x2D8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E40u;
        // 0x2d8e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E48u;
        goto label_2d8e48;
    }
    ctx->pc = 0x2D8E40u;
    {
        const bool branch_taken_0x2d8e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E40u;
        // 0x2d8e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e40) {
            ctx->pc = 0x2D8EC0u;
            goto label_2d8ec0;
        }
    }
    ctx->pc = 0x2D8E48u;
label_2d8e48:
    // 0x2d8e48: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d8e4c:
    // 0x2d8e4c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2d8e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2d8e50:
    // 0x2d8e50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d8e54:
    // 0x2d8e54: 0x40f809  jalr        $v0
label_2d8e58:
    if (ctx->pc == 0x2D8E58u) {
        ctx->pc = 0x2D8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E54u;
        // 0x2d8e58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E5Cu;
        goto label_2d8e5c;
    }
    ctx->pc = 0x2D8E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8E5Cu);
        ctx->pc = 0x2D8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E54u;
        // 0x2d8e58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E54u, 0x2D8E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8E5Cu;
label_2d8e5c:
    // 0x2d8e5c: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x2d8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2d8e60:
    // 0x2d8e60: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_2d8e64:
    if (ctx->pc == 0x2D8E64u) {
        ctx->pc = 0x2D8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E60u;
        // 0x2d8e64: 0xc64c012c  lwc1        $f12, 0x12C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E68u;
        goto label_2d8e68;
    }
    ctx->pc = 0x2D8E60u;
    {
        const bool branch_taken_0x2d8e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e60) {
            ctx->pc = 0x2D8E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8E60u;
            // 0x2d8e64: 0xc64c012c  lwc1        $f12, 0x12C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8E8Cu;
            goto label_2d8e8c;
        }
    }
    ctx->pc = 0x2D8E68u;
label_2d8e68:
    // 0x2d8e68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d8e6c:
    // 0x2d8e6c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2d8e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2d8e70:
    // 0x2d8e70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d8e74:
    // 0x2d8e74: 0x40f809  jalr        $v0
label_2d8e78:
    if (ctx->pc == 0x2D8E78u) {
        ctx->pc = 0x2D8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E74u;
        // 0x2d8e78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E7Cu;
        goto label_2d8e7c;
    }
    ctx->pc = 0x2D8E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8E7Cu);
        ctx->pc = 0x2D8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E74u;
        // 0x2d8e78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E74u, 0x2D8E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8E7Cu;
label_2d8e7c:
    // 0x2d8e7c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d8e80:
    // 0x2d8e80: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_2d8e84:
    if (ctx->pc == 0x2D8E84u) {
        ctx->pc = 0x2D8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E80u;
        // 0x2d8e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E88u;
        goto label_2d8e88;
    }
    ctx->pc = 0x2D8E80u;
    {
        const bool branch_taken_0x2d8e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E80u;
        // 0x2d8e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e80) {
            ctx->pc = 0x2D8EC0u;
            goto label_2d8ec0;
        }
    }
    ctx->pc = 0x2D8E88u;
label_2d8e88:
    // 0x2d8e88: 0xc64c012c  lwc1        $f12, 0x12C($s2)
    ctx->pc = 0x2d8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d8e8c:
    // 0x2d8e8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d8e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e90:
    // 0x2d8e90: 0xc0889b8  jal         func_2226E0
label_2d8e94:
    if (ctx->pc == 0x2D8E94u) {
        ctx->pc = 0x2D8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E90u;
        // 0x2d8e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8E98u;
        goto label_2d8e98;
    }
    ctx->pc = 0x2D8E90u;
    SET_GPR_U32(ctx, 31, 0x2D8E98u);
    ctx->pc = 0x2D8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E90u;
    // 0x2d8e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x2D8E90u, 0x2D8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E98u;
label_2d8e98:
    // 0x2d8e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8e9c:
    // 0x2d8e9c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_2d8ea0:
    if (ctx->pc == 0x2D8EA0u) {
        ctx->pc = 0x2D8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E9Cu;
        // 0x2d8ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8EA4u;
        goto label_2d8ea4;
    }
    ctx->pc = 0x2D8E9Cu;
    {
        const bool branch_taken_0x2d8e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e9c) {
            ctx->pc = 0x2D8EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8E9Cu;
            // 0x2d8ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8EC0u;
            goto label_2d8ec0;
        }
    }
    ctx->pc = 0x2D8EA4u;
label_2d8ea4:
    // 0x2d8ea4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8ea8:
    // 0x2d8ea8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d8ea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d8eac:
    // 0x2d8eac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d8eb0:
    // 0x2d8eb0: 0x40f809  jalr        $v0
label_2d8eb4:
    if (ctx->pc == 0x2D8EB4u) {
        ctx->pc = 0x2D8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EB0u;
        // 0x2d8eb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8EB8u;
        goto label_2d8eb8;
    }
    ctx->pc = 0x2D8EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8EB8u);
        ctx->pc = 0x2D8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EB0u;
        // 0x2d8eb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8EB0u, 0x2D8EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8EB8u;
label_2d8eb8:
    // 0x2d8eb8: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x2d8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_2d8ebc:
    // 0x2d8ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8ec0:
    // 0x2d8ec0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d8ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d8ec4:
    // 0x2d8ec4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d8ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8ec8:
    // 0x2d8ec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d8ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d8ecc:
    // 0x2d8ecc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d8eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8ed0:
    // 0x2d8ed0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d8ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8ed4:
    // 0x2d8ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8ed8:
    // 0x2d8ed8: 0x3e00008  jr          $ra
label_2d8edc:
    if (ctx->pc == 0x2D8EDCu) {
        ctx->pc = 0x2D8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8ED8u;
        // 0x2d8edc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8EE0u;
        goto label_fallthrough_0x2d8ed8;
    }
    ctx->pc = 0x2D8ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8ED8u;
        // 0x2d8edc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d8ed8:
    ctx->pc = 0x2D8EE0u;
}
