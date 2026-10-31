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

// Function: sub_00387D50
// Address: 0x387d50 - 0x387ee0
void sub_00387D50_0x387d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387D50_0x387d50");
#endif

    switch (ctx->pc) {
        case 0x387d50u: goto label_387d50;
        case 0x387d54u: goto label_387d54;
        case 0x387d58u: goto label_387d58;
        case 0x387d5cu: goto label_387d5c;
        case 0x387d60u: goto label_387d60;
        case 0x387d64u: goto label_387d64;
        case 0x387d68u: goto label_387d68;
        case 0x387d6cu: goto label_387d6c;
        case 0x387d70u: goto label_387d70;
        case 0x387d74u: goto label_387d74;
        case 0x387d78u: goto label_387d78;
        case 0x387d7cu: goto label_387d7c;
        case 0x387d80u: goto label_387d80;
        case 0x387d84u: goto label_387d84;
        case 0x387d88u: goto label_387d88;
        case 0x387d8cu: goto label_387d8c;
        case 0x387d90u: goto label_387d90;
        case 0x387d94u: goto label_387d94;
        case 0x387d98u: goto label_387d98;
        case 0x387d9cu: goto label_387d9c;
        case 0x387da0u: goto label_387da0;
        case 0x387da4u: goto label_387da4;
        case 0x387da8u: goto label_387da8;
        case 0x387dacu: goto label_387dac;
        case 0x387db0u: goto label_387db0;
        case 0x387db4u: goto label_387db4;
        case 0x387db8u: goto label_387db8;
        case 0x387dbcu: goto label_387dbc;
        case 0x387dc0u: goto label_387dc0;
        case 0x387dc4u: goto label_387dc4;
        case 0x387dc8u: goto label_387dc8;
        case 0x387dccu: goto label_387dcc;
        case 0x387dd0u: goto label_387dd0;
        case 0x387dd4u: goto label_387dd4;
        case 0x387dd8u: goto label_387dd8;
        case 0x387ddcu: goto label_387ddc;
        case 0x387de0u: goto label_387de0;
        case 0x387de4u: goto label_387de4;
        case 0x387de8u: goto label_387de8;
        case 0x387decu: goto label_387dec;
        case 0x387df0u: goto label_387df0;
        case 0x387df4u: goto label_387df4;
        case 0x387df8u: goto label_387df8;
        case 0x387dfcu: goto label_387dfc;
        case 0x387e00u: goto label_387e00;
        case 0x387e04u: goto label_387e04;
        case 0x387e08u: goto label_387e08;
        case 0x387e0cu: goto label_387e0c;
        case 0x387e10u: goto label_387e10;
        case 0x387e14u: goto label_387e14;
        case 0x387e18u: goto label_387e18;
        case 0x387e1cu: goto label_387e1c;
        case 0x387e20u: goto label_387e20;
        case 0x387e24u: goto label_387e24;
        case 0x387e28u: goto label_387e28;
        case 0x387e2cu: goto label_387e2c;
        case 0x387e30u: goto label_387e30;
        case 0x387e34u: goto label_387e34;
        case 0x387e38u: goto label_387e38;
        case 0x387e3cu: goto label_387e3c;
        case 0x387e40u: goto label_387e40;
        case 0x387e44u: goto label_387e44;
        case 0x387e48u: goto label_387e48;
        case 0x387e4cu: goto label_387e4c;
        case 0x387e50u: goto label_387e50;
        case 0x387e54u: goto label_387e54;
        case 0x387e58u: goto label_387e58;
        case 0x387e5cu: goto label_387e5c;
        case 0x387e60u: goto label_387e60;
        case 0x387e64u: goto label_387e64;
        case 0x387e68u: goto label_387e68;
        case 0x387e6cu: goto label_387e6c;
        case 0x387e70u: goto label_387e70;
        case 0x387e74u: goto label_387e74;
        case 0x387e78u: goto label_387e78;
        case 0x387e7cu: goto label_387e7c;
        case 0x387e80u: goto label_387e80;
        case 0x387e84u: goto label_387e84;
        case 0x387e88u: goto label_387e88;
        case 0x387e8cu: goto label_387e8c;
        case 0x387e90u: goto label_387e90;
        case 0x387e94u: goto label_387e94;
        case 0x387e98u: goto label_387e98;
        case 0x387e9cu: goto label_387e9c;
        case 0x387ea0u: goto label_387ea0;
        case 0x387ea4u: goto label_387ea4;
        case 0x387ea8u: goto label_387ea8;
        case 0x387eacu: goto label_387eac;
        case 0x387eb0u: goto label_387eb0;
        case 0x387eb4u: goto label_387eb4;
        case 0x387eb8u: goto label_387eb8;
        case 0x387ebcu: goto label_387ebc;
        case 0x387ec0u: goto label_387ec0;
        case 0x387ec4u: goto label_387ec4;
        case 0x387ec8u: goto label_387ec8;
        case 0x387eccu: goto label_387ecc;
        case 0x387ed0u: goto label_387ed0;
        case 0x387ed4u: goto label_387ed4;
        case 0x387ed8u: goto label_387ed8;
        case 0x387edcu: goto label_387edc;
        default: break;
    }

    ctx->pc = 0x387d50u;

label_387d50:
    // 0x387d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_387d54:
    // 0x387d54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x387d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_387d58:
    // 0x387d58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x387d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_387d5c:
    // 0x387d5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x387d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387d60:
    // 0x387d60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x387d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_387d64:
    // 0x387d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_387d68:
    // 0x387d68: 0x8e42130c  lw          $v0, 0x130C($s2)
    ctx->pc = 0x387d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
label_387d6c:
    // 0x387d6c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_387d70:
    if (ctx->pc == 0x387D70u) {
        ctx->pc = 0x387D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D6Cu;
        // 0x387d70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D74u;
        goto label_387d74;
    }
    ctx->pc = 0x387D6Cu;
    {
        const bool branch_taken_0x387d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D6Cu;
        // 0x387d70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d6c) {
            ctx->pc = 0x387EC8u;
            goto label_387ec8;
        }
    }
    ctx->pc = 0x387D74u;
label_387d74:
    // 0x387d74: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x387d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_387d78:
    // 0x387d78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x387d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387d7c:
    // 0x387d7c: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x387d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_387d80:
    // 0x387d80: 0xc0cf3da  jal         func_33CF68
label_387d84:
    if (ctx->pc == 0x387D84u) {
        ctx->pc = 0x387D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D80u;
        // 0x387d84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D88u;
        goto label_387d88;
    }
    ctx->pc = 0x387D80u;
    SET_GPR_U32(ctx, 31, 0x387D88u);
    ctx->pc = 0x387D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D80u;
    // 0x387d84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF68u, 0x387D80u, 0x387D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D88u;
label_387d88:
    // 0x387d88: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_387d8c:
    if (ctx->pc == 0x387D8Cu) {
        ctx->pc = 0x387D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D88u;
        // 0x387d8c: 0xae42130c  sw          $v0, 0x130C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D90u;
        goto label_387d90;
    }
    ctx->pc = 0x387D88u;
    {
        const bool branch_taken_0x387d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D88u;
        // 0x387d8c: 0xae42130c  sw          $v0, 0x130C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d88) {
            ctx->pc = 0x387EC4u;
            goto label_387ec4;
        }
    }
    ctx->pc = 0x387D90u;
label_387d90:
    // 0x387d90: 0xc0cf48c  jal         func_33D230
label_387d94:
    if (ctx->pc == 0x387D94u) {
        ctx->pc = 0x387D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D90u;
        // 0x387d94: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D98u;
        goto label_387d98;
    }
    ctx->pc = 0x387D90u;
    SET_GPR_U32(ctx, 31, 0x387D98u);
    ctx->pc = 0x387D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D90u;
    // 0x387d94: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D230u, 0x387D90u, 0x387D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D98u;
label_387d98:
    // 0x387d98: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x387d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_387d9c:
    // 0x387d9c: 0xc0cf48c  jal         func_33D230
label_387da0:
    if (ctx->pc == 0x387DA0u) {
        ctx->pc = 0x387DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D9Cu;
        // 0x387da0: 0xae4211e4  sw          $v0, 0x11E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387DA4u;
        goto label_387da4;
    }
    ctx->pc = 0x387D9Cu;
    SET_GPR_U32(ctx, 31, 0x387DA4u);
    ctx->pc = 0x387DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D9Cu;
    // 0x387da0: 0xae4211e4  sw          $v0, 0x11E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D230u, 0x387D9Cu, 0x387DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387DA4u;
label_387da4:
    // 0x387da4: 0x8e4511e4  lw          $a1, 0x11E4($s2)
    ctx->pc = 0x387da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_387da8:
    // 0x387da8: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
label_387dac:
    if (ctx->pc == 0x387DACu) {
        ctx->pc = 0x387DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DA8u;
        // 0x387dac: 0xae4211e8  sw          $v0, 0x11E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387DB0u;
        goto label_387db0;
    }
    ctx->pc = 0x387DA8u;
    {
        const bool branch_taken_0x387da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DA8u;
        // 0x387dac: 0xae4211e8  sw          $v0, 0x11E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387da8) {
            ctx->pc = 0x387EB4u;
            goto label_387eb4;
        }
    }
    ctx->pc = 0x387DB0u;
label_387db0:
    // 0x387db0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_387db4:
    if (ctx->pc == 0x387DB4u) {
        ctx->pc = 0x387DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DB0u;
        // 0x387db4: 0x241105f0  addiu       $s1, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387DB8u;
        goto label_387db8;
    }
    ctx->pc = 0x387DB0u;
    {
        const bool branch_taken_0x387db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DB0u;
        // 0x387db4: 0x241105f0  addiu       $s1, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387db0) {
            ctx->pc = 0x387EB4u;
            goto label_387eb4;
        }
    }
    ctx->pc = 0x387DB8u;
label_387db8:
    // 0x387db8: 0x8e4411e0  lw          $a0, 0x11E0($s2)
    ctx->pc = 0x387db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_387dbc:
    // 0x387dbc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x387dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_387dc0:
    // 0x387dc0: 0x8e49130c  lw          $t1, 0x130C($s2)
    ctx->pc = 0x387dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
label_387dc4:
    // 0x387dc4: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x387dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_387dc8:
    // 0x387dc8: 0x2610e4c0  addiu       $s0, $s0, -0x1B40
    ctx->pc = 0x387dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960320));
label_387dcc:
    // 0x387dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x387dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387dd0:
    // 0x387dd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x387dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387dd4:
    // 0x387dd4: 0x2044021  addu        $t0, $s0, $a0
    ctx->pc = 0x387dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_387dd8:
    // 0x387dd8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x387dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_387ddc:
    // 0x387ddc: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x387ddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_387de0:
    // 0x387de0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x387de0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_387de4:
    // 0x387de4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x387de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_387de8:
    // 0x387de8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x387de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_387dec:
    // 0x387dec: 0x8d220074  lw          $v0, 0x74($t1)
    ctx->pc = 0x387decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
label_387df0:
    // 0x387df0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x387df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_387df4:
    // 0x387df4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x387df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_387df8:
    // 0x387df8: 0x60f809  jalr        $v1
label_387dfc:
    if (ctx->pc == 0x387DFCu) {
        ctx->pc = 0x387DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DF8u;
        // 0x387dfc: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387E00u;
        goto label_387e00;
    }
    ctx->pc = 0x387DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x387E00u);
        ctx->pc = 0x387DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DF8u;
        // 0x387dfc: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387DF8u, 0x387E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387E00u;
label_387e00:
    // 0x387e00: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x387e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_387e04:
    // 0x387e04: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x387e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_387e08:
    // 0x387e08: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x387e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_387e0c:
    // 0x387e0c: 0xc0d0b70  jal         func_342DC0
label_387e10:
    if (ctx->pc == 0x387E10u) {
        ctx->pc = 0x387E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E0Cu;
        // 0x387e10: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387E14u;
        goto label_387e14;
    }
    ctx->pc = 0x387E0Cu;
    SET_GPR_U32(ctx, 31, 0x387E14u);
    ctx->pc = 0x387E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E0Cu;
    // 0x387e10: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DC0u, 0x387E0Cu, 0x387E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E14u;
label_387e14:
    // 0x387e14: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x387e14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387e18:
    // 0x387e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x387e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387e1c:
    // 0x387e1c: 0x8e4411e4  lw          $a0, 0x11E4($s2)
    ctx->pc = 0x387e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_387e20:
    // 0x387e20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x387e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387e24:
    // 0x387e24: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x387e24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_387e28:
    // 0x387e28: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x387e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_387e2c:
    // 0x387e2c: 0x8e48130c  lw          $t0, 0x130C($s2)
    ctx->pc = 0x387e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
label_387e30:
    // 0x387e30: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x387e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_387e34:
    // 0x387e34: 0x8e4511e8  lw          $a1, 0x11E8($s2)
    ctx->pc = 0x387e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_387e38:
    // 0x387e38: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x387e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_387e3c:
    // 0x387e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387e40:
    // 0x387e40: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x387e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_387e44:
    // 0x387e44: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x387e44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_387e48:
    // 0x387e48: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x387e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_387e4c:
    // 0x387e4c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x387e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_387e50:
    // 0x387e50: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x387e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_387e54:
    // 0x387e54: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x387e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_387e58:
    // 0x387e58: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x387e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_387e5c:
    // 0x387e5c: 0x40f809  jalr        $v0
label_387e60:
    if (ctx->pc == 0x387E60u) {
        ctx->pc = 0x387E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E5Cu;
        // 0x387e60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387E64u;
        goto label_387e64;
    }
    ctx->pc = 0x387E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387E64u);
        ctx->pc = 0x387E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E5Cu;
        // 0x387e60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387E5Cu, 0x387E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387E64u;
label_387e64:
    // 0x387e64: 0x8e4411e8  lw          $a0, 0x11E8($s2)
    ctx->pc = 0x387e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_387e68:
    // 0x387e68: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x387e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_387e6c:
    // 0x387e6c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x387e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_387e70:
    // 0x387e70: 0xc0d0b70  jal         func_342DC0
label_387e74:
    if (ctx->pc == 0x387E74u) {
        ctx->pc = 0x387E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E70u;
        // 0x387e74: 0xc7ae0008  lwc1        $f14, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x387E78u;
        goto label_387e78;
    }
    ctx->pc = 0x387E70u;
    SET_GPR_U32(ctx, 31, 0x387E78u);
    ctx->pc = 0x387E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E70u;
    // 0x387e74: 0xc7ae0008  lwc1        $f14, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DC0u, 0x387E70u, 0x387E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E78u;
label_387e78:
    // 0x387e78: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x387e78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387e7c:
    // 0x387e7c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x387e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_387e80:
    // 0x387e80: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x387e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_387e84:
    // 0x387e84: 0x3484fdff  ori         $a0, $a0, 0xFDFF
    ctx->pc = 0x387e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65023);
label_387e88:
    // 0x387e88: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x387e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_387e8c:
    // 0x387e8c: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x387e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_387e90:
    // 0x387e90: 0x34a5211a  ori         $a1, $a1, 0x211A
    ctx->pc = 0x387e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8474);
label_387e94:
    // 0x387e94: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x387e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_387e98:
    // 0x387e98: 0x8e46130c  lw          $a2, 0x130C($s2)
    ctx->pc = 0x387e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
label_387e9c:
    // 0x387e9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x387e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_387ea0:
    // 0x387ea0: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x387ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_387ea4:
    // 0x387ea4: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x387ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_387ea8:
    // 0x387ea8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x387ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_387eac:
    // 0x387eac: 0x10000005  b           . + 4 + (0x5 << 2)
label_387eb0:
    if (ctx->pc == 0x387EB0u) {
        ctx->pc = 0x387EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EACu;
        // 0x387eb0: 0xacc20040  sw          $v0, 0x40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387EB4u;
        goto label_387eb4;
    }
    ctx->pc = 0x387EACu;
    {
        const bool branch_taken_0x387eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EACu;
        // 0x387eb0: 0xacc20040  sw          $v0, 0x40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387eac) {
            ctx->pc = 0x387EC4u;
            goto label_387ec4;
        }
    }
    ctx->pc = 0x387EB4u;
label_387eb4:
    // 0x387eb4: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x387eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_387eb8:
    // 0x387eb8: 0xc0cf3fe  jal         func_33CFF8
label_387ebc:
    if (ctx->pc == 0x387EBCu) {
        ctx->pc = 0x387EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EB8u;
        // 0x387ebc: 0x8e45130c  lw          $a1, 0x130C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387EC0u;
        goto label_387ec0;
    }
    ctx->pc = 0x387EB8u;
    SET_GPR_U32(ctx, 31, 0x387EC0u);
    ctx->pc = 0x387EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EB8u;
    // 0x387ebc: 0x8e45130c  lw          $a1, 0x130C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFF8u, 0x387EB8u, 0x387EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EC0u;
label_387ec0:
    // 0x387ec0: 0xae40130c  sw          $zero, 0x130C($s2)
    ctx->pc = 0x387ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4876), GPR_U32(ctx, 0));
label_387ec4:
    // 0x387ec4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x387ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_387ec8:
    // 0x387ec8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x387ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_387ecc:
    // 0x387ecc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_387ed0:
    // 0x387ed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_387ed4:
    // 0x387ed4: 0x3e00008  jr          $ra
label_387ed8:
    if (ctx->pc == 0x387ED8u) {
        ctx->pc = 0x387ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387ED4u;
        // 0x387ed8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387EDCu;
        goto label_387edc;
    }
    ctx->pc = 0x387ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387ED4u;
        // 0x387ed8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387EDCu;
label_387edc:
    // 0x387edc: 0x0  nop
    ctx->pc = 0x387edcu;
    // NOP
    ctx->pc = 0x387ee0u;
}
