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

// Function: sub_00255CF8
// Address: 0x255cf8 - 0x255f08
void sub_00255CF8_0x255cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255CF8_0x255cf8");
#endif

    switch (ctx->pc) {
        case 0x255cf8u: goto label_255cf8;
        case 0x255cfcu: goto label_255cfc;
        case 0x255d00u: goto label_255d00;
        case 0x255d04u: goto label_255d04;
        case 0x255d08u: goto label_255d08;
        case 0x255d0cu: goto label_255d0c;
        case 0x255d10u: goto label_255d10;
        case 0x255d14u: goto label_255d14;
        case 0x255d18u: goto label_255d18;
        case 0x255d1cu: goto label_255d1c;
        case 0x255d20u: goto label_255d20;
        case 0x255d24u: goto label_255d24;
        case 0x255d28u: goto label_255d28;
        case 0x255d2cu: goto label_255d2c;
        case 0x255d30u: goto label_255d30;
        case 0x255d34u: goto label_255d34;
        case 0x255d38u: goto label_255d38;
        case 0x255d3cu: goto label_255d3c;
        case 0x255d40u: goto label_255d40;
        case 0x255d44u: goto label_255d44;
        case 0x255d48u: goto label_255d48;
        case 0x255d4cu: goto label_255d4c;
        case 0x255d50u: goto label_255d50;
        case 0x255d54u: goto label_255d54;
        case 0x255d58u: goto label_255d58;
        case 0x255d5cu: goto label_255d5c;
        case 0x255d60u: goto label_255d60;
        case 0x255d64u: goto label_255d64;
        case 0x255d68u: goto label_255d68;
        case 0x255d6cu: goto label_255d6c;
        case 0x255d70u: goto label_255d70;
        case 0x255d74u: goto label_255d74;
        case 0x255d78u: goto label_255d78;
        case 0x255d7cu: goto label_255d7c;
        case 0x255d80u: goto label_255d80;
        case 0x255d84u: goto label_255d84;
        case 0x255d88u: goto label_255d88;
        case 0x255d8cu: goto label_255d8c;
        case 0x255d90u: goto label_255d90;
        case 0x255d94u: goto label_255d94;
        case 0x255d98u: goto label_255d98;
        case 0x255d9cu: goto label_255d9c;
        case 0x255da0u: goto label_255da0;
        case 0x255da4u: goto label_255da4;
        case 0x255da8u: goto label_255da8;
        case 0x255dacu: goto label_255dac;
        case 0x255db0u: goto label_255db0;
        case 0x255db4u: goto label_255db4;
        case 0x255db8u: goto label_255db8;
        case 0x255dbcu: goto label_255dbc;
        case 0x255dc0u: goto label_255dc0;
        case 0x255dc4u: goto label_255dc4;
        case 0x255dc8u: goto label_255dc8;
        case 0x255dccu: goto label_255dcc;
        case 0x255dd0u: goto label_255dd0;
        case 0x255dd4u: goto label_255dd4;
        case 0x255dd8u: goto label_255dd8;
        case 0x255ddcu: goto label_255ddc;
        case 0x255de0u: goto label_255de0;
        case 0x255de4u: goto label_255de4;
        case 0x255de8u: goto label_255de8;
        case 0x255decu: goto label_255dec;
        case 0x255df0u: goto label_255df0;
        case 0x255df4u: goto label_255df4;
        case 0x255df8u: goto label_255df8;
        case 0x255dfcu: goto label_255dfc;
        case 0x255e00u: goto label_255e00;
        case 0x255e04u: goto label_255e04;
        case 0x255e08u: goto label_255e08;
        case 0x255e0cu: goto label_255e0c;
        case 0x255e10u: goto label_255e10;
        case 0x255e14u: goto label_255e14;
        case 0x255e18u: goto label_255e18;
        case 0x255e1cu: goto label_255e1c;
        case 0x255e20u: goto label_255e20;
        case 0x255e24u: goto label_255e24;
        case 0x255e28u: goto label_255e28;
        case 0x255e2cu: goto label_255e2c;
        case 0x255e30u: goto label_255e30;
        case 0x255e34u: goto label_255e34;
        case 0x255e38u: goto label_255e38;
        case 0x255e3cu: goto label_255e3c;
        case 0x255e40u: goto label_255e40;
        case 0x255e44u: goto label_255e44;
        case 0x255e48u: goto label_255e48;
        case 0x255e4cu: goto label_255e4c;
        case 0x255e50u: goto label_255e50;
        case 0x255e54u: goto label_255e54;
        case 0x255e58u: goto label_255e58;
        case 0x255e5cu: goto label_255e5c;
        case 0x255e60u: goto label_255e60;
        case 0x255e64u: goto label_255e64;
        case 0x255e68u: goto label_255e68;
        case 0x255e6cu: goto label_255e6c;
        case 0x255e70u: goto label_255e70;
        case 0x255e74u: goto label_255e74;
        case 0x255e78u: goto label_255e78;
        case 0x255e7cu: goto label_255e7c;
        case 0x255e80u: goto label_255e80;
        case 0x255e84u: goto label_255e84;
        case 0x255e88u: goto label_255e88;
        case 0x255e8cu: goto label_255e8c;
        case 0x255e90u: goto label_255e90;
        case 0x255e94u: goto label_255e94;
        case 0x255e98u: goto label_255e98;
        case 0x255e9cu: goto label_255e9c;
        case 0x255ea0u: goto label_255ea0;
        case 0x255ea4u: goto label_255ea4;
        case 0x255ea8u: goto label_255ea8;
        case 0x255eacu: goto label_255eac;
        case 0x255eb0u: goto label_255eb0;
        case 0x255eb4u: goto label_255eb4;
        case 0x255eb8u: goto label_255eb8;
        case 0x255ebcu: goto label_255ebc;
        case 0x255ec0u: goto label_255ec0;
        case 0x255ec4u: goto label_255ec4;
        case 0x255ec8u: goto label_255ec8;
        case 0x255eccu: goto label_255ecc;
        case 0x255ed0u: goto label_255ed0;
        case 0x255ed4u: goto label_255ed4;
        case 0x255ed8u: goto label_255ed8;
        case 0x255edcu: goto label_255edc;
        case 0x255ee0u: goto label_255ee0;
        case 0x255ee4u: goto label_255ee4;
        case 0x255ee8u: goto label_255ee8;
        case 0x255eecu: goto label_255eec;
        case 0x255ef0u: goto label_255ef0;
        case 0x255ef4u: goto label_255ef4;
        case 0x255ef8u: goto label_255ef8;
        case 0x255efcu: goto label_255efc;
        case 0x255f00u: goto label_255f00;
        case 0x255f04u: goto label_255f04;
        default: break;
    }

    ctx->pc = 0x255cf8u;

label_255cf8:
    // 0x255cf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x255cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_255cfc:
    // 0x255cfc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x255cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_255d00:
    // 0x255d00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x255d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_255d04:
    // 0x255d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x255d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_255d08:
    // 0x255d08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x255d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_255d0c:
    // 0x255d0c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x255d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_255d10:
    // 0x255d10: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x255d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_255d14:
    // 0x255d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_255d18:
    // 0x255d18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x255d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_255d1c:
    // 0x255d1c: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x255d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_255d20:
    // 0x255d20: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_255d24:
    if (ctx->pc == 0x255D24u) {
        ctx->pc = 0x255D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D20u;
        // 0x255d24: 0x8e3500d4  lw          $s5, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D28u;
        goto label_255d28;
    }
    ctx->pc = 0x255D20u;
    {
        const bool branch_taken_0x255d20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D20u;
        // 0x255d24: 0x8e3500d4  lw          $s5, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d20) {
            ctx->pc = 0x255D30u;
            goto label_255d30;
        }
    }
    ctx->pc = 0x255D28u;
label_255d28:
    // 0x255d28: 0x56a00003  bnel        $s5, $zero, . + 4 + (0x3 << 2)
label_255d2c:
    if (ctx->pc == 0x255D2Cu) {
        ctx->pc = 0x255D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D28u;
        // 0x255d2c: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D30u;
        goto label_255d30;
    }
    ctx->pc = 0x255D28u;
    {
        const bool branch_taken_0x255d28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x255d28) {
            ctx->pc = 0x255D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255D28u;
            // 0x255d2c: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D38u;
            goto label_255d38;
        }
    }
    ctx->pc = 0x255D30u;
label_255d30:
    // 0x255d30: 0x1000006b  b           . + 4 + (0x6B << 2)
label_255d34:
    if (ctx->pc == 0x255D34u) {
        ctx->pc = 0x255D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D30u;
        // 0x255d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D38u;
        goto label_255d38;
    }
    ctx->pc = 0x255D30u;
    {
        const bool branch_taken_0x255d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D30u;
        // 0x255d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d30) {
            ctx->pc = 0x255EE0u;
            goto label_255ee0;
        }
    }
    ctx->pc = 0x255D38u;
label_255d38:
    // 0x255d38: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x255d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_255d3c:
    // 0x255d3c: 0x54620058  bnel        $v1, $v0, . + 4 + (0x58 << 2)
label_255d40:
    if (ctx->pc == 0x255D40u) {
        ctx->pc = 0x255D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D3Cu;
        // 0x255d40: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D44u;
        goto label_255d44;
    }
    ctx->pc = 0x255D3Cu;
    {
        const bool branch_taken_0x255d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255d3c) {
            ctx->pc = 0x255D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255D3Cu;
            // 0x255d40: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255EA0u;
            goto label_255ea0;
        }
    }
    ctx->pc = 0x255D44u;
label_255d44:
    // 0x255d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255d48:
    // 0x255d48: 0xc08866e  jal         func_2219B8
label_255d4c:
    if (ctx->pc == 0x255D4Cu) {
        ctx->pc = 0x255D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D48u;
        // 0x255d4c: 0x240502a0  addiu       $a1, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D50u;
        goto label_255d50;
    }
    ctx->pc = 0x255D48u;
    SET_GPR_U32(ctx, 31, 0x255D50u);
    ctx->pc = 0x255D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D48u;
    // 0x255d4c: 0x240502a0  addiu       $a1, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x255D48u, 0x255D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D50u;
label_255d50:
    // 0x255d50: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
label_255d54:
    if (ctx->pc == 0x255D54u) {
        ctx->pc = 0x255D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D50u;
        // 0x255d54: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D58u;
        goto label_255d58;
    }
    ctx->pc = 0x255D50u;
    {
        const bool branch_taken_0x255d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255d50) {
            ctx->pc = 0x255D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255D50u;
            // 0x255d54: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255EA0u;
            goto label_255ea0;
        }
    }
    ctx->pc = 0x255D58u;
label_255d58:
    // 0x255d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255d5c:
    // 0x255d5c: 0xc08866e  jal         func_2219B8
label_255d60:
    if (ctx->pc == 0x255D60u) {
        ctx->pc = 0x255D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D5Cu;
        // 0x255d60: 0x2405029f  addiu       $a1, $zero, 0x29F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D64u;
        goto label_255d64;
    }
    ctx->pc = 0x255D5Cu;
    SET_GPR_U32(ctx, 31, 0x255D64u);
    ctx->pc = 0x255D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D5Cu;
    // 0x255d60: 0x2405029f  addiu       $a1, $zero, 0x29F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x255D5Cu, 0x255D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D64u;
label_255d64:
    // 0x255d64: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_255d68:
    if (ctx->pc == 0x255D68u) {
        ctx->pc = 0x255D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D64u;
        // 0x255d68: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D6Cu;
        goto label_255d6c;
    }
    ctx->pc = 0x255D64u;
    {
        const bool branch_taken_0x255d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255d64) {
            ctx->pc = 0x255D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255D64u;
            // 0x255d68: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255EA0u;
            goto label_255ea0;
        }
    }
    ctx->pc = 0x255D6Cu;
label_255d6c:
    // 0x255d6c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x255d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_255d70:
    // 0x255d70: 0x2610d8d0  addiu       $s0, $s0, -0x2730
    ctx->pc = 0x255d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957264));
label_255d74:
    // 0x255d74: 0xc041532  jal         func_1054C8
label_255d78:
    if (ctx->pc == 0x255D78u) {
        ctx->pc = 0x255D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D74u;
        // 0x255d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D7Cu;
        goto label_255d7c;
    }
    ctx->pc = 0x255D74u;
    SET_GPR_U32(ctx, 31, 0x255D7Cu);
    ctx->pc = 0x255D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D74u;
    // 0x255d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x255D74u, 0x255D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D7Cu;
label_255d7c:
    // 0x255d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255d80:
    // 0x255d80: 0xc041532  jal         func_1054C8
label_255d84:
    if (ctx->pc == 0x255D84u) {
        ctx->pc = 0x255D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D80u;
        // 0x255d84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D88u;
        goto label_255d88;
    }
    ctx->pc = 0x255D80u;
    SET_GPR_U32(ctx, 31, 0x255D88u);
    ctx->pc = 0x255D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D80u;
    // 0x255d84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x255D80u, 0x255D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D88u;
label_255d88:
    // 0x255d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255d8c:
    // 0x255d8c: 0xc041532  jal         func_1054C8
label_255d90:
    if (ctx->pc == 0x255D90u) {
        ctx->pc = 0x255D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D8Cu;
        // 0x255d90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255D94u;
        goto label_255d94;
    }
    ctx->pc = 0x255D8Cu;
    SET_GPR_U32(ctx, 31, 0x255D94u);
    ctx->pc = 0x255D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D8Cu;
    // 0x255d90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x255D8Cu, 0x255D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D94u;
label_255d94:
    // 0x255d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255d98:
    // 0x255d98: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_255d9c:
    if (ctx->pc == 0x255D9Cu) {
        ctx->pc = 0x255D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D98u;
        // 0x255d9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255DA0u;
        goto label_255da0;
    }
    ctx->pc = 0x255D98u;
    {
        const bool branch_taken_0x255d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D98u;
        // 0x255d9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d98) {
            ctx->pc = 0x255DC0u;
            goto label_255dc0;
        }
    }
    ctx->pc = 0x255DA0u;
label_255da0:
    // 0x255da0: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x255da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_255da4:
    // 0x255da4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x255da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_255da8:
    // 0x255da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255dac:
    // 0x255dac: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x255dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_255db0:
    // 0x255db0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x255db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_255db4:
    // 0x255db4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x255db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_255db8:
    // 0x255db8: 0xc041b20  jal         func_106C80
label_255dbc:
    if (ctx->pc == 0x255DBCu) {
        ctx->pc = 0x255DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DB8u;
        // 0x255dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255DC0u;
        goto label_255dc0;
    }
    ctx->pc = 0x255DB8u;
    SET_GPR_U32(ctx, 31, 0x255DC0u);
    ctx->pc = 0x255DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DB8u;
    // 0x255dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x255DB8u, 0x255DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DC0u;
label_255dc0:
    // 0x255dc0: 0xc05d484  jal         func_175210
label_255dc4:
    if (ctx->pc == 0x255DC4u) {
        ctx->pc = 0x255DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DC0u;
        // 0x255dc4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255DC8u;
        goto label_255dc8;
    }
    ctx->pc = 0x255DC0u;
    SET_GPR_U32(ctx, 31, 0x255DC8u);
    ctx->pc = 0x255DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DC0u;
    // 0x255dc4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255DC0u, 0x255DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DC8u;
label_255dc8:
    // 0x255dc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255dcc:
    // 0x255dcc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x255dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_255dd0:
    // 0x255dd0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x255dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_255dd4:
    // 0x255dd4: 0xa0f809  jalr        $a1
label_255dd8:
    if (ctx->pc == 0x255DD8u) {
        ctx->pc = 0x255DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DD4u;
        // 0x255dd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255DDCu;
        goto label_255ddc;
    }
    ctx->pc = 0x255DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255DDCu);
        ctx->pc = 0x255DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DD4u;
        // 0x255dd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255DD4u, 0x255DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255DDCu;
label_255ddc:
    // 0x255ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255de0:
    // 0x255de0: 0xc087016  jal         func_21C058
label_255de4:
    if (ctx->pc == 0x255DE4u) {
        ctx->pc = 0x255DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DE0u;
        // 0x255de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255DE8u;
        goto label_255de8;
    }
    ctx->pc = 0x255DE0u;
    SET_GPR_U32(ctx, 31, 0x255DE8u);
    ctx->pc = 0x255DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DE0u;
    // 0x255de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x255DE0u, 0x255DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DE8u;
label_255de8:
    // 0x255de8: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
label_255dec:
    if (ctx->pc == 0x255DECu) {
        ctx->pc = 0x255DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DE8u;
        // 0x255dec: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255DF0u;
        goto label_255df0;
    }
    ctx->pc = 0x255DE8u;
    {
        const bool branch_taken_0x255de8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x255de8) {
            ctx->pc = 0x255DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255DE8u;
            // 0x255dec: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255E24u;
            goto label_255e24;
        }
    }
    ctx->pc = 0x255DF0u;
label_255df0:
    // 0x255df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x255df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_255df4:
    // 0x255df4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x255df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_255df8:
    // 0x255df8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x255df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_255dfc:
    // 0x255dfc: 0x40f809  jalr        $v0
label_255e00:
    if (ctx->pc == 0x255E00u) {
        ctx->pc = 0x255E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DFCu;
        // 0x255e00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E04u;
        goto label_255e04;
    }
    ctx->pc = 0x255DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255E04u);
        ctx->pc = 0x255E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DFCu;
        // 0x255e00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255DFCu, 0x255E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255E04u;
label_255e04:
    // 0x255e04: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x255e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_255e08:
    // 0x255e08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x255e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255e0c:
    // 0x255e0c: 0x25084a68  addiu       $t0, $t0, 0x4A68
    ctx->pc = 0x255e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19048));
label_255e10:
    // 0x255e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255e14:
    // 0x255e14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x255e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_255e18:
    // 0x255e18: 0xc04159e  jal         func_105678
label_255e1c:
    if (ctx->pc == 0x255E1Cu) {
        ctx->pc = 0x255E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E18u;
        // 0x255e1c: 0x2406029f  addiu       $a2, $zero, 0x29F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E20u;
        goto label_255e20;
    }
    ctx->pc = 0x255E18u;
    SET_GPR_U32(ctx, 31, 0x255E20u);
    ctx->pc = 0x255E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E18u;
    // 0x255e1c: 0x2406029f  addiu       $a2, $zero, 0x29F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x255E18u, 0x255E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E20u;
label_255e20:
    // 0x255e20: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x255e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_255e24:
    // 0x255e24: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_255e28:
    if (ctx->pc == 0x255E28u) {
        ctx->pc = 0x255E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E24u;
        // 0x255e28: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E2Cu;
        goto label_255e2c;
    }
    ctx->pc = 0x255E24u;
    {
        const bool branch_taken_0x255e24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E24u;
        // 0x255e28: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e24) {
            ctx->pc = 0x255E64u;
            goto label_255e64;
        }
    }
    ctx->pc = 0x255E2Cu;
label_255e2c:
    // 0x255e2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x255e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_255e30:
    // 0x255e30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x255e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_255e34:
    // 0x255e34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x255e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_255e38:
    // 0x255e38: 0x40f809  jalr        $v0
label_255e3c:
    if (ctx->pc == 0x255E3Cu) {
        ctx->pc = 0x255E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E38u;
        // 0x255e3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E40u;
        goto label_255e40;
    }
    ctx->pc = 0x255E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255E40u);
        ctx->pc = 0x255E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E38u;
        // 0x255e3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255E38u, 0x255E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255E40u;
label_255e40:
    // 0x255e40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x255e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_255e44:
    // 0x255e44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x255e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255e48:
    // 0x255e48: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x255e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255e4c:
    // 0x255e4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x255e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_255e50:
    // 0x255e50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x255e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_255e54:
    // 0x255e54: 0x240602a0  addiu       $a2, $zero, 0x2A0
    ctx->pc = 0x255e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
label_255e58:
    // 0x255e58: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x255e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_255e5c:
    // 0x255e5c: 0xc041664  jal         func_105990
label_255e60:
    if (ctx->pc == 0x255E60u) {
        ctx->pc = 0x255E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E5Cu;
        // 0x255e60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E64u;
        goto label_255e64;
    }
    ctx->pc = 0x255E5Cu;
    SET_GPR_U32(ctx, 31, 0x255E64u);
    ctx->pc = 0x255E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E5Cu;
    // 0x255e60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x255E5Cu, 0x255E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E64u;
label_255e64:
    // 0x255e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255e68:
    // 0x255e68: 0xc089990  jal         func_226640
label_255e6c:
    if (ctx->pc == 0x255E6Cu) {
        ctx->pc = 0x255E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E68u;
        // 0x255e6c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E70u;
        goto label_255e70;
    }
    ctx->pc = 0x255E68u;
    SET_GPR_U32(ctx, 31, 0x255E70u);
    ctx->pc = 0x255E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E68u;
    // 0x255e6c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x255E68u, 0x255E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E70u;
label_255e70:
    // 0x255e70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x255e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_255e74:
    // 0x255e74: 0xc05d53a  jal         func_1754E8
label_255e78:
    if (ctx->pc == 0x255E78u) {
        ctx->pc = 0x255E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E74u;
        // 0x255e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E7Cu;
        goto label_255e7c;
    }
    ctx->pc = 0x255E74u;
    SET_GPR_U32(ctx, 31, 0x255E7Cu);
    ctx->pc = 0x255E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E74u;
    // 0x255e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x255E74u, 0x255E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E7Cu;
label_255e7c:
    // 0x255e7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x255e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_255e80:
    // 0x255e80: 0xc05d4f6  jal         func_1753D8
label_255e84:
    if (ctx->pc == 0x255E84u) {
        ctx->pc = 0x255E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E80u;
        // 0x255e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E88u;
        goto label_255e88;
    }
    ctx->pc = 0x255E80u;
    SET_GPR_U32(ctx, 31, 0x255E88u);
    ctx->pc = 0x255E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E80u;
    // 0x255e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x255E80u, 0x255E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E88u;
label_255e88:
    // 0x255e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255e8c:
    // 0x255e8c: 0xc0899aa  jal         func_2266A8
label_255e90:
    if (ctx->pc == 0x255E90u) {
        ctx->pc = 0x255E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E8Cu;
        // 0x255e90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E94u;
        goto label_255e94;
    }
    ctx->pc = 0x255E8Cu;
    SET_GPR_U32(ctx, 31, 0x255E94u);
    ctx->pc = 0x255E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E8Cu;
    // 0x255e90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x255E8Cu, 0x255E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E94u;
label_255e94:
    // 0x255e94: 0xc08b4b6  jal         func_22D2D8
label_255e98:
    if (ctx->pc == 0x255E98u) {
        ctx->pc = 0x255E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E94u;
        // 0x255e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255E9Cu;
        goto label_255e9c;
    }
    ctx->pc = 0x255E94u;
    SET_GPR_U32(ctx, 31, 0x255E9Cu);
    ctx->pc = 0x255E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E94u;
    // 0x255e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D2D8u, 0x255E94u, 0x255E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E9Cu;
label_255e9c:
    // 0x255e9c: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x255e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_255ea0:
    // 0x255ea0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x255ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_255ea4:
    // 0x255ea4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_255ea8:
    if (ctx->pc == 0x255EA8u) {
        ctx->pc = 0x255EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EA4u;
        // 0x255ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255EACu;
        goto label_255eac;
    }
    ctx->pc = 0x255EA4u;
    {
        const bool branch_taken_0x255ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x255EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EA4u;
        // 0x255ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ea4) {
            ctx->pc = 0x255EE0u;
            goto label_255ee0;
        }
    }
    ctx->pc = 0x255EACu;
label_255eac:
    // 0x255eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255eb0:
    // 0x255eb0: 0xc08866e  jal         func_2219B8
label_255eb4:
    if (ctx->pc == 0x255EB4u) {
        ctx->pc = 0x255EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EB0u;
        // 0x255eb4: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255EB8u;
        goto label_255eb8;
    }
    ctx->pc = 0x255EB0u;
    SET_GPR_U32(ctx, 31, 0x255EB8u);
    ctx->pc = 0x255EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255EB0u;
    // 0x255eb4: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x255EB0u, 0x255EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EB8u;
label_255eb8:
    // 0x255eb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_255ebc:
    if (ctx->pc == 0x255EBCu) {
        ctx->pc = 0x255EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EB8u;
        // 0x255ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255EC0u;
        goto label_255ec0;
    }
    ctx->pc = 0x255EB8u;
    {
        const bool branch_taken_0x255eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EB8u;
        // 0x255ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255eb8) {
            ctx->pc = 0x255EE0u;
            goto label_255ee0;
        }
    }
    ctx->pc = 0x255EC0u;
label_255ec0:
    // 0x255ec0: 0xc08b4c4  jal         func_22D310
label_255ec4:
    if (ctx->pc == 0x255EC4u) {
        ctx->pc = 0x255EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EC0u;
        // 0x255ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255EC8u;
        goto label_255ec8;
    }
    ctx->pc = 0x255EC0u;
    SET_GPR_U32(ctx, 31, 0x255EC8u);
    ctx->pc = 0x255EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255EC0u;
    // 0x255ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D310u, 0x255EC0u, 0x255EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EC8u;
label_255ec8:
    // 0x255ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255ecc:
    // 0x255ecc: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x255eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_255ed0:
    // 0x255ed0: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x255ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_255ed4:
    // 0x255ed4: 0xc096a30  jal         func_25A8C0
label_255ed8:
    if (ctx->pc == 0x255ED8u) {
        ctx->pc = 0x255ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255ED4u;
        // 0x255ed8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255EDCu;
        goto label_255edc;
    }
    ctx->pc = 0x255ED4u;
    SET_GPR_U32(ctx, 31, 0x255EDCu);
    ctx->pc = 0x255ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255ED4u;
    // 0x255ed8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x255ED4u, 0x255EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EDCu;
label_255edc:
    // 0x255edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255ee0:
    // 0x255ee0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x255ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_255ee4:
    // 0x255ee4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x255ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_255ee8:
    // 0x255ee8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x255ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_255eec:
    // 0x255eec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_255ef0:
    // 0x255ef0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x255ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_255ef4:
    // 0x255ef4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x255ef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255ef8:
    // 0x255ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_255efc:
    // 0x255efc: 0x3e00008  jr          $ra
label_255f00:
    if (ctx->pc == 0x255F00u) {
        ctx->pc = 0x255F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EFCu;
        // 0x255f00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255F04u;
        goto label_255f04;
    }
    ctx->pc = 0x255EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EFCu;
        // 0x255f00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255F04u;
label_255f04:
    // 0x255f04: 0x0  nop
    ctx->pc = 0x255f04u;
    // NOP
    ctx->pc = 0x255f08u;
}
