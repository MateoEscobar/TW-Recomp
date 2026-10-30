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

// Function: sub_00236D28
// Address: 0x236d28 - 0x236ec8
void sub_00236D28_0x236d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236D28_0x236d28");
#endif

    switch (ctx->pc) {
        case 0x236d28u: goto label_236d28;
        case 0x236d2cu: goto label_236d2c;
        case 0x236d30u: goto label_236d30;
        case 0x236d34u: goto label_236d34;
        case 0x236d38u: goto label_236d38;
        case 0x236d3cu: goto label_236d3c;
        case 0x236d40u: goto label_236d40;
        case 0x236d44u: goto label_236d44;
        case 0x236d48u: goto label_236d48;
        case 0x236d4cu: goto label_236d4c;
        case 0x236d50u: goto label_236d50;
        case 0x236d54u: goto label_236d54;
        case 0x236d58u: goto label_236d58;
        case 0x236d5cu: goto label_236d5c;
        case 0x236d60u: goto label_236d60;
        case 0x236d64u: goto label_236d64;
        case 0x236d68u: goto label_236d68;
        case 0x236d6cu: goto label_236d6c;
        case 0x236d70u: goto label_236d70;
        case 0x236d74u: goto label_236d74;
        case 0x236d78u: goto label_236d78;
        case 0x236d7cu: goto label_236d7c;
        case 0x236d80u: goto label_236d80;
        case 0x236d84u: goto label_236d84;
        case 0x236d88u: goto label_236d88;
        case 0x236d8cu: goto label_236d8c;
        case 0x236d90u: goto label_236d90;
        case 0x236d94u: goto label_236d94;
        case 0x236d98u: goto label_236d98;
        case 0x236d9cu: goto label_236d9c;
        case 0x236da0u: goto label_236da0;
        case 0x236da4u: goto label_236da4;
        case 0x236da8u: goto label_236da8;
        case 0x236dacu: goto label_236dac;
        case 0x236db0u: goto label_236db0;
        case 0x236db4u: goto label_236db4;
        case 0x236db8u: goto label_236db8;
        case 0x236dbcu: goto label_236dbc;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dc4u: goto label_236dc4;
        case 0x236dc8u: goto label_236dc8;
        case 0x236dccu: goto label_236dcc;
        case 0x236dd0u: goto label_236dd0;
        case 0x236dd4u: goto label_236dd4;
        case 0x236dd8u: goto label_236dd8;
        case 0x236ddcu: goto label_236ddc;
        case 0x236de0u: goto label_236de0;
        case 0x236de4u: goto label_236de4;
        case 0x236de8u: goto label_236de8;
        case 0x236decu: goto label_236dec;
        case 0x236df0u: goto label_236df0;
        case 0x236df4u: goto label_236df4;
        case 0x236df8u: goto label_236df8;
        case 0x236dfcu: goto label_236dfc;
        case 0x236e00u: goto label_236e00;
        case 0x236e04u: goto label_236e04;
        case 0x236e08u: goto label_236e08;
        case 0x236e0cu: goto label_236e0c;
        case 0x236e10u: goto label_236e10;
        case 0x236e14u: goto label_236e14;
        case 0x236e18u: goto label_236e18;
        case 0x236e1cu: goto label_236e1c;
        case 0x236e20u: goto label_236e20;
        case 0x236e24u: goto label_236e24;
        case 0x236e28u: goto label_236e28;
        case 0x236e2cu: goto label_236e2c;
        case 0x236e30u: goto label_236e30;
        case 0x236e34u: goto label_236e34;
        case 0x236e38u: goto label_236e38;
        case 0x236e3cu: goto label_236e3c;
        case 0x236e40u: goto label_236e40;
        case 0x236e44u: goto label_236e44;
        case 0x236e48u: goto label_236e48;
        case 0x236e4cu: goto label_236e4c;
        case 0x236e50u: goto label_236e50;
        case 0x236e54u: goto label_236e54;
        case 0x236e58u: goto label_236e58;
        case 0x236e5cu: goto label_236e5c;
        case 0x236e60u: goto label_236e60;
        case 0x236e64u: goto label_236e64;
        case 0x236e68u: goto label_236e68;
        case 0x236e6cu: goto label_236e6c;
        case 0x236e70u: goto label_236e70;
        case 0x236e74u: goto label_236e74;
        case 0x236e78u: goto label_236e78;
        case 0x236e7cu: goto label_236e7c;
        case 0x236e80u: goto label_236e80;
        case 0x236e84u: goto label_236e84;
        case 0x236e88u: goto label_236e88;
        case 0x236e8cu: goto label_236e8c;
        case 0x236e90u: goto label_236e90;
        case 0x236e94u: goto label_236e94;
        case 0x236e98u: goto label_236e98;
        case 0x236e9cu: goto label_236e9c;
        case 0x236ea0u: goto label_236ea0;
        case 0x236ea4u: goto label_236ea4;
        case 0x236ea8u: goto label_236ea8;
        case 0x236eacu: goto label_236eac;
        case 0x236eb0u: goto label_236eb0;
        case 0x236eb4u: goto label_236eb4;
        case 0x236eb8u: goto label_236eb8;
        case 0x236ebcu: goto label_236ebc;
        case 0x236ec0u: goto label_236ec0;
        case 0x236ec4u: goto label_236ec4;
        default: break;
    }

    ctx->pc = 0x236d28u;

label_236d28:
    // 0x236d28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x236d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_236d2c:
    // 0x236d2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_236d30:
    // 0x236d30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x236d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_236d34:
    // 0x236d34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x236d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_236d38:
    // 0x236d38: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x236d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_236d3c:
    // 0x236d3c: 0x24636830  addiu       $v1, $v1, 0x6830
    ctx->pc = 0x236d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26672));
label_236d40:
    // 0x236d40: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x236d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_236d44:
    // 0x236d44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236d48:
    // 0x236d48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x236d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_236d4c:
    // 0x236d4c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x236d4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236d50:
    // 0x236d50: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x236d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_236d54:
    // 0x236d54: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x236d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_236d58:
    // 0x236d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236d5c:
    // 0x236d5c: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x236d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_236d60:
    // 0x236d60: 0x8ca20268  lw          $v0, 0x268($a1)
    ctx->pc = 0x236d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 616)));
label_236d64:
    // 0x236d64: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_236d68:
    if (ctx->pc == 0x236D68u) {
        ctx->pc = 0x236D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D64u;
        // 0x236d68: 0x28540001  slti        $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D6Cu;
        goto label_236d6c;
    }
    ctx->pc = 0x236D64u;
    {
        const bool branch_taken_0x236d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D64u;
        // 0x236d68: 0x28540001  slti        $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d64) {
            ctx->pc = 0x236E04u;
            goto label_236e04;
        }
    }
    ctx->pc = 0x236D6Cu;
label_236d6c:
    // 0x236d6c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x236d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_236d70:
    // 0x236d70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x236d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_236d74:
    // 0x236d74: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x236d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236d78:
    // 0x236d78: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x236d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236d7c:
    // 0x236d7c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x236d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_236d80:
    // 0x236d80: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x236d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_236d84:
    // 0x236d84: 0x40f809  jalr        $v0
label_236d88:
    if (ctx->pc == 0x236D88u) {
        ctx->pc = 0x236D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D84u;
        // 0x236d88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D8Cu;
        goto label_236d8c;
    }
    ctx->pc = 0x236D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236D8Cu);
        ctx->pc = 0x236D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D84u;
        // 0x236d88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D84u, 0x236D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236D8Cu;
label_236d8c:
    // 0x236d8c: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x236d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236d90:
    // 0x236d90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x236d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_236d94:
    // 0x236d94: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x236d94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236d98:
    // 0x236d98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_236d9c:
    // 0x236d9c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x236d9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_236da0:
    // 0x236da0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_236da4:
    // 0x236da4: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x236da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_236da8:
    // 0x236da8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x236da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_236dac:
    // 0x236dac: 0x40f809  jalr        $v0
label_236db0:
    if (ctx->pc == 0x236DB0u) {
        ctx->pc = 0x236DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DACu;
        // 0x236db0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DB4u;
        goto label_236db4;
    }
    ctx->pc = 0x236DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236DB4u);
        ctx->pc = 0x236DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DACu;
        // 0x236db0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236DACu, 0x236DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236DB4u;
label_236db4:
    // 0x236db4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x236db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_236db8:
    // 0x236db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236dbc:
    // 0x236dbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x236dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_236dc0:
    // 0x236dc0: 0x40f809  jalr        $v0
label_236dc4:
    if (ctx->pc == 0x236DC4u) {
        ctx->pc = 0x236DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DC0u;
        // 0x236dc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DC8u;
        goto label_236dc8;
    }
    ctx->pc = 0x236DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236DC8u);
        ctx->pc = 0x236DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DC0u;
        // 0x236dc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236DC0u, 0x236DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236DC8u;
label_236dc8:
    // 0x236dc8: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236dcc:
    // 0x236dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x236dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_236dd0:
    // 0x236dd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x236dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236dd4:
    // 0x236dd4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x236dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_236dd8:
    // 0x236dd8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x236dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_236ddc:
    // 0x236ddc: 0x60f809  jalr        $v1
label_236de0:
    if (ctx->pc == 0x236DE0u) {
        ctx->pc = 0x236DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DDCu;
        // 0x236de0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DE4u;
        goto label_236de4;
    }
    ctx->pc = 0x236DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236DE4u);
        ctx->pc = 0x236DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DDCu;
        // 0x236de0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236DDCu, 0x236DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236DE4u;
label_236de4:
    // 0x236de4: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x236de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_236de8:
    // 0x236de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x236de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236dec:
    // 0x236dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236df0:
    // 0x236df0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x236df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_236df4:
    // 0x236df4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x236df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_236df8:
    // 0x236df8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x236df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_236dfc:
    // 0x236dfc: 0x60f809  jalr        $v1
label_236e00:
    if (ctx->pc == 0x236E00u) {
        ctx->pc = 0x236E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DFCu;
        // 0x236e00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E04u;
        goto label_236e04;
    }
    ctx->pc = 0x236DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236E04u);
        ctx->pc = 0x236E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DFCu;
        // 0x236e00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236DFCu, 0x236E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236E04u;
label_236e04:
    // 0x236e04: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x236e04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_236e08:
    // 0x236e08: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x236e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_236e0c:
    // 0x236e0c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x236e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_236e10:
    // 0x236e10: 0x826601b0  lb          $a2, 0x1B0($s3)
    ctx->pc = 0x236e10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_236e14:
    // 0x236e14: 0x8c85b734  lw          $a1, -0x48CC($a0)
    ctx->pc = 0x236e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_236e18:
    // 0x236e18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_236e1c:
    // 0x236e1c: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x236e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_236e20:
    // 0x236e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x236e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236e24:
    // 0x236e24: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x236e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_236e28:
    // 0x236e28: 0xae600648  sw          $zero, 0x648($s3)
    ctx->pc = 0x236e28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1608), GPR_U32(ctx, 0));
label_236e2c:
    // 0x236e2c: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
label_236e30:
    if (ctx->pc == 0x236E30u) {
        ctx->pc = 0x236E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E2Cu;
        // 0x236e30: 0xae62064c  sw          $v0, 0x64C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E34u;
        goto label_236e34;
    }
    ctx->pc = 0x236E2Cu;
    {
        const bool branch_taken_0x236e2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x236E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E2Cu;
        // 0x236e30: 0xae62064c  sw          $v0, 0x64C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e2c) {
            ctx->pc = 0x236E50u;
            goto label_236e50;
        }
    }
    ctx->pc = 0x236E34u;
label_236e34:
    // 0x236e34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236e38:
    // 0x236e38: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x236e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_236e3c:
    // 0x236e3c: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x236e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_236e40:
    // 0x236e40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x236e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236e44:
    // 0x236e44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x236e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_236e48:
    // 0x236e48: 0xc062df4  jal         func_18B7D0
label_236e4c:
    if (ctx->pc == 0x236E4Cu) {
        ctx->pc = 0x236E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E48u;
        // 0x236e4c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E50u;
        goto label_236e50;
    }
    ctx->pc = 0x236E48u;
    SET_GPR_U32(ctx, 31, 0x236E50u);
    ctx->pc = 0x236E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E48u;
    // 0x236e4c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B7D0u, 0x236E48u, 0x236E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E50u;
label_236e50:
    // 0x236e50: 0xc047e6c  jal         func_11F9B0
label_236e54:
    if (ctx->pc == 0x236E54u) {
        ctx->pc = 0x236E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E50u;
        // 0x236e54: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E58u;
        goto label_236e58;
    }
    ctx->pc = 0x236E50u;
    SET_GPR_U32(ctx, 31, 0x236E58u);
    ctx->pc = 0x236E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E50u;
    // 0x236e54: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x236E50u, 0x236E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E58u;
label_236e58:
    // 0x236e58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x236e58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236e5c:
    // 0x236e5c: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
label_236e60:
    if (ctx->pc == 0x236E60u) {
        ctx->pc = 0x236E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E5Cu;
        // 0x236e60: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E64u;
        goto label_236e64;
    }
    ctx->pc = 0x236E5Cu;
    {
        const bool branch_taken_0x236e5c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x236e5c) {
            ctx->pc = 0x236E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E5Cu;
            // 0x236e60: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E80u;
            goto label_236e80;
        }
    }
    ctx->pc = 0x236E64u;
label_236e64:
    // 0x236e64: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x236e64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_236e68:
    // 0x236e68: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_236e6c:
    if (ctx->pc == 0x236E6Cu) {
        ctx->pc = 0x236E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E68u;
        // 0x236e6c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E70u;
        goto label_236e70;
    }
    ctx->pc = 0x236E68u;
    {
        const bool branch_taken_0x236e68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x236e68) {
            ctx->pc = 0x236E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E68u;
            // 0x236e6c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E80u;
            goto label_236e80;
        }
    }
    ctx->pc = 0x236E70u;
label_236e70:
    // 0x236e70: 0xc047e6c  jal         func_11F9B0
label_236e74:
    if (ctx->pc == 0x236E74u) {
        ctx->pc = 0x236E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E70u;
        // 0x236e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E78u;
        goto label_236e78;
    }
    ctx->pc = 0x236E70u;
    SET_GPR_U32(ctx, 31, 0x236E78u);
    ctx->pc = 0x236E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E70u;
    // 0x236e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x236E70u, 0x236E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E78u;
label_236e78:
    // 0x236e78: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x236e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236e7c:
    // 0x236e7c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x236e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_236e80:
    // 0x236e80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x236e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236e84:
    // 0x236e84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x236e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236e88:
    // 0x236e88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x236e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236e8c:
    // 0x236e8c: 0x84440158  lh          $a0, 0x158($v0)
    ctx->pc = 0x236e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 344)));
label_236e90:
    // 0x236e90: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_236e94:
    // 0x236e94: 0x60f809  jalr        $v1
label_236e98:
    if (ctx->pc == 0x236E98u) {
        ctx->pc = 0x236E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E94u;
        // 0x236e98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E9Cu;
        goto label_236e9c;
    }
    ctx->pc = 0x236E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236E9Cu);
        ctx->pc = 0x236E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E94u;
        // 0x236e98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E94u, 0x236E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236E9Cu;
label_236e9c:
    // 0x236e9c: 0xc1065c6  jal         func_419718
label_236ea0:
    if (ctx->pc == 0x236EA0u) {
        ctx->pc = 0x236EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E9Cu;
        // 0x236ea0: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EA4u;
        goto label_236ea4;
    }
    ctx->pc = 0x236E9Cu;
    SET_GPR_U32(ctx, 31, 0x236EA4u);
    ctx->pc = 0x236EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E9Cu;
    // 0x236ea0: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419718u, 0x236E9Cu, 0x236EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EA4u;
label_236ea4:
    // 0x236ea4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x236ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_236ea8:
    // 0x236ea8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x236ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_236eac:
    // 0x236eac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x236eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_236eb0:
    // 0x236eb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x236eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_236eb4:
    // 0x236eb4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x236eb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_236eb8:
    // 0x236eb8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x236eb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236ebc:
    // 0x236ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236ec0:
    // 0x236ec0: 0x3e00008  jr          $ra
label_236ec4:
    if (ctx->pc == 0x236EC4u) {
        ctx->pc = 0x236EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EC0u;
        // 0x236ec4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EC8u;
        goto label_fallthrough_0x236ec0;
    }
    ctx->pc = 0x236EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EC0u;
        // 0x236ec4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236ec0:
    ctx->pc = 0x236EC8u;
}
