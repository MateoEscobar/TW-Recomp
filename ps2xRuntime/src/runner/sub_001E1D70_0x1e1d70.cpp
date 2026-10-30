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

// Function: sub_001E1D70
// Address: 0x1e1d70 - 0x1e1e48
void sub_001E1D70_0x1e1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1D70_0x1e1d70");
#endif

    switch (ctx->pc) {
        case 0x1e1d70u: goto label_1e1d70;
        case 0x1e1d74u: goto label_1e1d74;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d7cu: goto label_1e1d7c;
        case 0x1e1d80u: goto label_1e1d80;
        case 0x1e1d84u: goto label_1e1d84;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1d8cu: goto label_1e1d8c;
        case 0x1e1d90u: goto label_1e1d90;
        case 0x1e1d94u: goto label_1e1d94;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1d9cu: goto label_1e1d9c;
        case 0x1e1da0u: goto label_1e1da0;
        case 0x1e1da4u: goto label_1e1da4;
        case 0x1e1da8u: goto label_1e1da8;
        case 0x1e1dacu: goto label_1e1dac;
        case 0x1e1db0u: goto label_1e1db0;
        case 0x1e1db4u: goto label_1e1db4;
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dbcu: goto label_1e1dbc;
        case 0x1e1dc0u: goto label_1e1dc0;
        case 0x1e1dc4u: goto label_1e1dc4;
        case 0x1e1dc8u: goto label_1e1dc8;
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1dd4u: goto label_1e1dd4;
        case 0x1e1dd8u: goto label_1e1dd8;
        case 0x1e1ddcu: goto label_1e1ddc;
        case 0x1e1de0u: goto label_1e1de0;
        case 0x1e1de4u: goto label_1e1de4;
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1decu: goto label_1e1dec;
        case 0x1e1df0u: goto label_1e1df0;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1df8u: goto label_1e1df8;
        case 0x1e1dfcu: goto label_1e1dfc;
        case 0x1e1e00u: goto label_1e1e00;
        case 0x1e1e04u: goto label_1e1e04;
        case 0x1e1e08u: goto label_1e1e08;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e10u: goto label_1e1e10;
        case 0x1e1e14u: goto label_1e1e14;
        case 0x1e1e18u: goto label_1e1e18;
        case 0x1e1e1cu: goto label_1e1e1c;
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e28u: goto label_1e1e28;
        case 0x1e1e2cu: goto label_1e1e2c;
        case 0x1e1e30u: goto label_1e1e30;
        case 0x1e1e34u: goto label_1e1e34;
        case 0x1e1e38u: goto label_1e1e38;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e40u: goto label_1e1e40;
        case 0x1e1e44u: goto label_1e1e44;
        default: break;
    }

    ctx->pc = 0x1e1d70u;

label_1e1d70:
    // 0x1e1d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1d74:
    // 0x1e1d74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e1d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e1d78:
    // 0x1e1d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1d7c:
    // 0x1e1d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d80:
    // 0x1e1d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1d84:
    // 0x1e1d84: 0x26110094  addiu       $s1, $s0, 0x94
    ctx->pc = 0x1e1d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_1e1d88:
    // 0x1e1d88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e1d8c:
    // 0x1e1d8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e1d90:
    // 0x1e1d90: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1e1d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1e1d94:
    // 0x1e1d94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1d98:
    // 0x1e1d98: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e1d9c:
    // 0x1e1d9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e1da0:
    // 0x1e1da0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e1da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e1da4:
    // 0x1e1da4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e1da8:
    if (ctx->pc == 0x1E1DA8u) {
        ctx->pc = 0x1E1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DA4u;
        // 0x1e1da8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DACu;
        goto label_1e1dac;
    }
    ctx->pc = 0x1E1DA4u;
    {
        const bool branch_taken_0x1e1da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DA4u;
        // 0x1e1da8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1da4) {
            ctx->pc = 0x1E1E18u;
            goto label_1e1e18;
        }
    }
    ctx->pc = 0x1E1DACu;
label_1e1dac:
    // 0x1e1dac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1db0:
    // 0x1e1db0: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x1e1db0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_1e1db4:
    // 0x1e1db4: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x1e1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_1e1db8:
    // 0x1e1db8: 0x60f809  jalr        $v1
label_1e1dbc:
    if (ctx->pc == 0x1E1DBCu) {
        ctx->pc = 0x1E1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DB8u;
        // 0x1e1dbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DC0u;
        goto label_1e1dc0;
    }
    ctx->pc = 0x1E1DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1DC0u);
        ctx->pc = 0x1E1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DB8u;
        // 0x1e1dbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1DB8u, 0x1E1DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1DC0u;
label_1e1dc0:
    // 0x1e1dc0: 0x8e0600ac  lw          $a2, 0xAC($s0)
    ctx->pc = 0x1e1dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1e1dc4:
    // 0x1e1dc4: 0x8e0700a4  lw          $a3, 0xA4($s0)
    ctx->pc = 0x1e1dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1e1dc8:
    // 0x1e1dc8: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x1e1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_1e1dcc:
    // 0x1e1dcc: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x1e1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1e1dd0:
    // 0x1e1dd0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1e1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1e1dd4:
    // 0x1e1dd4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e1dd8:
    // 0x1e1dd8: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1e1dd8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1e1ddc:
    // 0x1e1ddc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1e1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1e1de0:
    // 0x1e1de0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1e1de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1de4:
    // 0x1e1de4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1e1de8:
    if (ctx->pc == 0x1E1DE8u) {
        ctx->pc = 0x1E1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DE4u;
        // 0x1e1de8: 0xe61821  addu        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DECu;
        goto label_1e1dec;
    }
    ctx->pc = 0x1E1DE4u;
    {
        const bool branch_taken_0x1e1de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DE4u;
        // 0x1e1de8: 0xe61821  addu        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1de4) {
            ctx->pc = 0x1E1E30u;
            goto label_1e1e30;
        }
    }
    ctx->pc = 0x1E1DECu;
label_1e1dec:
    // 0x1e1dec: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e1decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e1df0:
    // 0x1e1df0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e1df4:
    // 0x1e1df4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e1df8:
    // 0x1e1df8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e1dfc:
    // 0x1e1dfc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1e1dfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e1e00:
    // 0x1e1e00: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e1e04:
    if (ctx->pc == 0x1E1E04u) {
        ctx->pc = 0x1E1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E00u;
        // 0x1e1e04: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E08u;
        goto label_1e1e08;
    }
    ctx->pc = 0x1E1E00u;
    {
        const bool branch_taken_0x1e1e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E00u;
        // 0x1e1e04: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e00) {
            ctx->pc = 0x1E1E30u;
            goto label_1e1e30;
        }
    }
    ctx->pc = 0x1E1E08u;
label_1e1e08:
    // 0x1e1e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1e0c:
    // 0x1e1e0c: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1e1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_1e1e10:
    // 0x1e1e10: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e1e14:
    if (ctx->pc == 0x1E1E14u) {
        ctx->pc = 0x1E1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E10u;
        // 0x1e1e14: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E18u;
        goto label_1e1e18;
    }
    ctx->pc = 0x1E1E10u;
    {
        const bool branch_taken_0x1e1e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E10u;
        // 0x1e1e14: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e10) {
            ctx->pc = 0x1E1E30u;
            goto label_1e1e30;
        }
    }
    ctx->pc = 0x1E1E18u;
label_1e1e18:
    // 0x1e1e18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e1e1c:
    // 0x1e1e1c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1e1e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e1e20:
    // 0x1e1e20: 0xc043f0c  jal         func_10FC30
label_1e1e24:
    if (ctx->pc == 0x1E1E24u) {
        ctx->pc = 0x1E1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E20u;
        // 0x1e1e24: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E28u;
        goto label_1e1e28;
    }
    ctx->pc = 0x1E1E20u;
    SET_GPR_U32(ctx, 31, 0x1E1E28u);
    ctx->pc = 0x1E1E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E20u;
    // 0x1e1e24: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1E1E20u, 0x1E1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E28u;
label_1e1e28:
    // 0x1e1e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e2c:
    // 0x1e1e2c: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x1e1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
label_1e1e30:
    // 0x1e1e30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e1e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1e34:
    // 0x1e1e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1e38:
    // 0x1e1e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1e3c:
    // 0x1e1e3c: 0x3e00008  jr          $ra
label_1e1e40:
    if (ctx->pc == 0x1E1E40u) {
        ctx->pc = 0x1E1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E3Cu;
        // 0x1e1e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E44u;
        goto label_1e1e44;
    }
    ctx->pc = 0x1E1E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E3Cu;
        // 0x1e1e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1E44u;
label_1e1e44:
    // 0x1e1e44: 0x0  nop
    ctx->pc = 0x1e1e44u;
    // NOP
    ctx->pc = 0x1e1e48u;
}
