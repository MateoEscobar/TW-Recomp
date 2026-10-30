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

// Function: sub_003A9F28
// Address: 0x3a9f28 - 0x3aa0b0
void sub_003A9F28_0x3a9f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9F28_0x3a9f28");
#endif

    switch (ctx->pc) {
        case 0x3a9f28u: goto label_3a9f28;
        case 0x3a9f2cu: goto label_3a9f2c;
        case 0x3a9f30u: goto label_3a9f30;
        case 0x3a9f34u: goto label_3a9f34;
        case 0x3a9f38u: goto label_3a9f38;
        case 0x3a9f3cu: goto label_3a9f3c;
        case 0x3a9f40u: goto label_3a9f40;
        case 0x3a9f44u: goto label_3a9f44;
        case 0x3a9f48u: goto label_3a9f48;
        case 0x3a9f4cu: goto label_3a9f4c;
        case 0x3a9f50u: goto label_3a9f50;
        case 0x3a9f54u: goto label_3a9f54;
        case 0x3a9f58u: goto label_3a9f58;
        case 0x3a9f5cu: goto label_3a9f5c;
        case 0x3a9f60u: goto label_3a9f60;
        case 0x3a9f64u: goto label_3a9f64;
        case 0x3a9f68u: goto label_3a9f68;
        case 0x3a9f6cu: goto label_3a9f6c;
        case 0x3a9f70u: goto label_3a9f70;
        case 0x3a9f74u: goto label_3a9f74;
        case 0x3a9f78u: goto label_3a9f78;
        case 0x3a9f7cu: goto label_3a9f7c;
        case 0x3a9f80u: goto label_3a9f80;
        case 0x3a9f84u: goto label_3a9f84;
        case 0x3a9f88u: goto label_3a9f88;
        case 0x3a9f8cu: goto label_3a9f8c;
        case 0x3a9f90u: goto label_3a9f90;
        case 0x3a9f94u: goto label_3a9f94;
        case 0x3a9f98u: goto label_3a9f98;
        case 0x3a9f9cu: goto label_3a9f9c;
        case 0x3a9fa0u: goto label_3a9fa0;
        case 0x3a9fa4u: goto label_3a9fa4;
        case 0x3a9fa8u: goto label_3a9fa8;
        case 0x3a9facu: goto label_3a9fac;
        case 0x3a9fb0u: goto label_3a9fb0;
        case 0x3a9fb4u: goto label_3a9fb4;
        case 0x3a9fb8u: goto label_3a9fb8;
        case 0x3a9fbcu: goto label_3a9fbc;
        case 0x3a9fc0u: goto label_3a9fc0;
        case 0x3a9fc4u: goto label_3a9fc4;
        case 0x3a9fc8u: goto label_3a9fc8;
        case 0x3a9fccu: goto label_3a9fcc;
        case 0x3a9fd0u: goto label_3a9fd0;
        case 0x3a9fd4u: goto label_3a9fd4;
        case 0x3a9fd8u: goto label_3a9fd8;
        case 0x3a9fdcu: goto label_3a9fdc;
        case 0x3a9fe0u: goto label_3a9fe0;
        case 0x3a9fe4u: goto label_3a9fe4;
        case 0x3a9fe8u: goto label_3a9fe8;
        case 0x3a9fecu: goto label_3a9fec;
        case 0x3a9ff0u: goto label_3a9ff0;
        case 0x3a9ff4u: goto label_3a9ff4;
        case 0x3a9ff8u: goto label_3a9ff8;
        case 0x3a9ffcu: goto label_3a9ffc;
        case 0x3aa000u: goto label_3aa000;
        case 0x3aa004u: goto label_3aa004;
        case 0x3aa008u: goto label_3aa008;
        case 0x3aa00cu: goto label_3aa00c;
        case 0x3aa010u: goto label_3aa010;
        case 0x3aa014u: goto label_3aa014;
        case 0x3aa018u: goto label_3aa018;
        case 0x3aa01cu: goto label_3aa01c;
        case 0x3aa020u: goto label_3aa020;
        case 0x3aa024u: goto label_3aa024;
        case 0x3aa028u: goto label_3aa028;
        case 0x3aa02cu: goto label_3aa02c;
        case 0x3aa030u: goto label_3aa030;
        case 0x3aa034u: goto label_3aa034;
        case 0x3aa038u: goto label_3aa038;
        case 0x3aa03cu: goto label_3aa03c;
        case 0x3aa040u: goto label_3aa040;
        case 0x3aa044u: goto label_3aa044;
        case 0x3aa048u: goto label_3aa048;
        case 0x3aa04cu: goto label_3aa04c;
        case 0x3aa050u: goto label_3aa050;
        case 0x3aa054u: goto label_3aa054;
        case 0x3aa058u: goto label_3aa058;
        case 0x3aa05cu: goto label_3aa05c;
        case 0x3aa060u: goto label_3aa060;
        case 0x3aa064u: goto label_3aa064;
        case 0x3aa068u: goto label_3aa068;
        case 0x3aa06cu: goto label_3aa06c;
        case 0x3aa070u: goto label_3aa070;
        case 0x3aa074u: goto label_3aa074;
        case 0x3aa078u: goto label_3aa078;
        case 0x3aa07cu: goto label_3aa07c;
        case 0x3aa080u: goto label_3aa080;
        case 0x3aa084u: goto label_3aa084;
        case 0x3aa088u: goto label_3aa088;
        case 0x3aa08cu: goto label_3aa08c;
        case 0x3aa090u: goto label_3aa090;
        case 0x3aa094u: goto label_3aa094;
        case 0x3aa098u: goto label_3aa098;
        case 0x3aa09cu: goto label_3aa09c;
        case 0x3aa0a0u: goto label_3aa0a0;
        case 0x3aa0a4u: goto label_3aa0a4;
        case 0x3aa0a8u: goto label_3aa0a8;
        case 0x3aa0acu: goto label_3aa0ac;
        default: break;
    }

    ctx->pc = 0x3a9f28u;

label_3a9f28:
    // 0x3a9f28: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x3a9f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_3a9f2c:
    // 0x3a9f2c: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x3a9f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_3a9f30:
    // 0x3a9f30: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x3a9f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_3a9f34:
    // 0x3a9f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a9f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9f38:
    // 0x3a9f38: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x3a9f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
label_3a9f3c:
    // 0x3a9f3c: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x3a9f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_3a9f40:
    // 0x3a9f40: 0xffbf0860  sd          $ra, 0x860($sp)
    ctx->pc = 0x3a9f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 31));
label_3a9f44:
    // 0x3a9f44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9f48:
    // 0x3a9f48: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a9f4c:
    // 0x3a9f4c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a9f50:
    // 0x3a9f50: 0x40f809  jalr        $v0
label_3a9f54:
    if (ctx->pc == 0x3A9F54u) {
        ctx->pc = 0x3A9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F50u;
        // 0x3a9f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F58u;
        goto label_3a9f58;
    }
    ctx->pc = 0x3A9F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9F58u);
        ctx->pc = 0x3A9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F50u;
        // 0x3a9f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9F50u, 0x3A9F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9F58u;
label_3a9f58:
    // 0x3a9f58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a9f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9f5c:
    // 0x3a9f5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a9f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9f60:
    // 0x3a9f60: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3a9f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3a9f64:
    // 0x3a9f64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a9f68:
    // 0x3a9f68: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3a9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3a9f6c:
    // 0x3a9f6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a9f70:
    // 0x3a9f70: 0x0  nop
    ctx->pc = 0x3a9f70u;
    // NOP
label_3a9f74:
    // 0x3a9f74: 0x0  nop
    ctx->pc = 0x3a9f74u;
    // NOP
label_3a9f78:
    // 0x3a9f78: 0x0  nop
    ctx->pc = 0x3a9f78u;
    // NOP
label_3a9f7c:
    // 0x3a9f7c: 0x0  nop
    ctx->pc = 0x3a9f7cu;
    // NOP
label_3a9f80:
    // 0x3a9f80: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3a9f84:
    if (ctx->pc == 0x3A9F84u) {
        ctx->pc = 0x3A9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F80u;
        // 0x3a9f84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F88u;
        goto label_3a9f88;
    }
    ctx->pc = 0x3A9F80u;
    {
        const bool branch_taken_0x3a9f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F80u;
        // 0x3a9f84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f80) {
            ctx->pc = 0x3A9F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9f70;
        }
    }
    ctx->pc = 0x3A9F88u;
label_3a9f88:
    // 0x3a9f88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a9f8c:
    // 0x3a9f8c: 0xc138ddc  jal         func_4E3770
label_3a9f90:
    if (ctx->pc == 0x3A9F90u) {
        ctx->pc = 0x3A9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F8Cu;
        // 0x3a9f90: 0x2452b8b8  addiu       $s2, $v0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F94u;
        goto label_3a9f94;
    }
    ctx->pc = 0x3A9F8Cu;
    SET_GPR_U32(ctx, 31, 0x3A9F94u);
    ctx->pc = 0x3A9F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F8Cu;
    // 0x3a9f90: 0x2452b8b8  addiu       $s2, $v0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3A9F8Cu, 0x3A9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F94u;
label_3a9f94:
    // 0x3a9f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a9f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9f98:
    // 0x3a9f98: 0xc0e90ca  jal         func_3A4328
label_3a9f9c:
    if (ctx->pc == 0x3A9F9Cu) {
        ctx->pc = 0x3A9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F98u;
        // 0x3a9f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FA0u;
        goto label_3a9fa0;
    }
    ctx->pc = 0x3A9F98u;
    SET_GPR_U32(ctx, 31, 0x3A9FA0u);
    ctx->pc = 0x3A9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F98u;
    // 0x3a9f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A9F98u, 0x3A9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FA0u;
label_3a9fa0:
    // 0x3a9fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9fa4:
    // 0x3a9fa4: 0xc0cd4ee  jal         func_3353B8
label_3a9fa8:
    if (ctx->pc == 0x3A9FA8u) {
        ctx->pc = 0x3A9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FA4u;
        // 0x3a9fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FACu;
        goto label_3a9fac;
    }
    ctx->pc = 0x3A9FA4u;
    SET_GPR_U32(ctx, 31, 0x3A9FACu);
    ctx->pc = 0x3A9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FA4u;
    // 0x3a9fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A9FA4u, 0x3A9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FACu;
label_3a9fac:
    // 0x3a9fac: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_3a9fb0:
    if (ctx->pc == 0x3A9FB0u) {
        ctx->pc = 0x3A9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FACu;
        // 0x3a9fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FB4u;
        goto label_3a9fb4;
    }
    ctx->pc = 0x3A9FACu;
    {
        const bool branch_taken_0x3a9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FACu;
        // 0x3a9fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fac) {
            ctx->pc = 0x3AA090u;
            goto label_3aa090;
        }
    }
    ctx->pc = 0x3A9FB4u;
label_3a9fb4:
    // 0x3a9fb4: 0xc0e9694  jal         func_3A5A50
label_3a9fb8:
    if (ctx->pc == 0x3A9FB8u) {
        ctx->pc = 0x3A9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FB4u;
        // 0x3a9fb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FBCu;
        goto label_3a9fbc;
    }
    ctx->pc = 0x3A9FB4u;
    SET_GPR_U32(ctx, 31, 0x3A9FBCu);
    ctx->pc = 0x3A9FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FB4u;
    // 0x3a9fb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A9FB4u, 0x3A9FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FBCu;
label_3a9fbc:
    // 0x3a9fbc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_3a9fc0:
    if (ctx->pc == 0x3A9FC0u) {
        ctx->pc = 0x3A9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FBCu;
        // 0x3a9fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FC4u;
        goto label_3a9fc4;
    }
    ctx->pc = 0x3A9FBCu;
    {
        const bool branch_taken_0x3a9fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FBCu;
        // 0x3a9fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fbc) {
            ctx->pc = 0x3AA090u;
            goto label_3aa090;
        }
    }
    ctx->pc = 0x3A9FC4u;
label_3a9fc4:
    // 0x3a9fc4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3a9fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3a9fc8:
    // 0x3a9fc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a9fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a9fcc:
    // 0x3a9fcc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3a9fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3a9fd0:
    // 0x3a9fd0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a9fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a9fd4:
    // 0x3a9fd4: 0xc0e9f56  jal         func_3A7D58
label_3a9fd8:
    if (ctx->pc == 0x3A9FD8u) {
        ctx->pc = 0x3A9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FD4u;
        // 0x3a9fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FDCu;
        goto label_3a9fdc;
    }
    ctx->pc = 0x3A9FD4u;
    SET_GPR_U32(ctx, 31, 0x3A9FDCu);
    ctx->pc = 0x3A9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FD4u;
    // 0x3a9fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3A9FD4u, 0x3A9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FDCu;
label_3a9fdc:
    // 0x3a9fdc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_3a9fe0:
    if (ctx->pc == 0x3A9FE0u) {
        ctx->pc = 0x3A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FDCu;
        // 0x3a9fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FE4u;
        goto label_3a9fe4;
    }
    ctx->pc = 0x3A9FDCu;
    {
        const bool branch_taken_0x3a9fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FDCu;
        // 0x3a9fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fdc) {
            ctx->pc = 0x3AA090u;
            goto label_3aa090;
        }
    }
    ctx->pc = 0x3A9FE4u;
label_3a9fe4:
    // 0x3a9fe4: 0xc0e9694  jal         func_3A5A50
label_3a9fe8:
    if (ctx->pc == 0x3A9FE8u) {
        ctx->pc = 0x3A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FE4u;
        // 0x3a9fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FECu;
        goto label_3a9fec;
    }
    ctx->pc = 0x3A9FE4u;
    SET_GPR_U32(ctx, 31, 0x3A9FECu);
    ctx->pc = 0x3A9FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FE4u;
    // 0x3a9fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A9FE4u, 0x3A9FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FECu;
label_3a9fec:
    // 0x3a9fec: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3a9ff0:
    if (ctx->pc == 0x3A9FF0u) {
        ctx->pc = 0x3A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FECu;
        // 0x3a9ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FF4u;
        goto label_3a9ff4;
    }
    ctx->pc = 0x3A9FECu;
    {
        const bool branch_taken_0x3a9fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FECu;
        // 0x3a9ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fec) {
            ctx->pc = 0x3AA08Cu;
            goto label_3aa08c;
        }
    }
    ctx->pc = 0x3A9FF4u;
label_3a9ff4:
    // 0x3a9ff4: 0xc0cd4ee  jal         func_3353B8
label_3a9ff8:
    if (ctx->pc == 0x3A9FF8u) {
        ctx->pc = 0x3A9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FF4u;
        // 0x3a9ff8: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9FFCu;
        goto label_3a9ffc;
    }
    ctx->pc = 0x3A9FF4u;
    SET_GPR_U32(ctx, 31, 0x3A9FFCu);
    ctx->pc = 0x3A9FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FF4u;
    // 0x3a9ff8: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A9FF4u, 0x3A9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FFCu;
label_3a9ffc:
    // 0x3a9ffc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3aa000:
    if (ctx->pc == 0x3AA000u) {
        ctx->pc = 0x3AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FFCu;
        // 0x3aa000: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA004u;
        goto label_3aa004;
    }
    ctx->pc = 0x3A9FFCu;
    {
        const bool branch_taken_0x3a9ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FFCu;
        // 0x3aa000: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ffc) {
            ctx->pc = 0x3AA04Cu;
            goto label_3aa04c;
        }
    }
    ctx->pc = 0x3AA004u;
label_3aa004:
    // 0x3aa004: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3aa004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3aa008:
    // 0x3aa008: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3aa008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3aa00c:
    // 0x3aa00c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3aa00cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3aa010:
    // 0x3aa010: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3aa010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3aa014:
    // 0x3aa014: 0x26101ce0  addiu       $s0, $s0, 0x1CE0
    ctx->pc = 0x3aa014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7392));
label_3aa018:
    // 0x3aa018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa01c:
    // 0x3aa01c: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3aa01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3aa020:
    // 0x3aa020: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3aa020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3aa024:
    // 0x3aa024: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3aa024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3aa028:
    // 0x3aa028: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3aa028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3aa02c:
    // 0x3aa02c: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3aa02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3aa030:
    // 0x3aa030: 0xc0e9fa6  jal         func_3A7E98
label_3aa034:
    if (ctx->pc == 0x3AA034u) {
        ctx->pc = 0x3AA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA030u;
        // 0x3aa034: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA038u;
        goto label_3aa038;
    }
    ctx->pc = 0x3AA030u;
    SET_GPR_U32(ctx, 31, 0x3AA038u);
    ctx->pc = 0x3AA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA030u;
    // 0x3aa034: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AA030u, 0x3AA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA038u;
label_3aa038:
    // 0x3aa038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa03c:
    // 0x3aa03c: 0xc0f15bc  jal         func_3C56F0
label_3aa040:
    if (ctx->pc == 0x3AA040u) {
        ctx->pc = 0x3AA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA03Cu;
        // 0x3aa040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA044u;
        goto label_3aa044;
    }
    ctx->pc = 0x3AA03Cu;
    SET_GPR_U32(ctx, 31, 0x3AA044u);
    ctx->pc = 0x3AA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA03Cu;
    // 0x3aa040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AA03Cu, 0x3AA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA044u;
label_3aa044:
    // 0x3aa044: 0x10000012  b           . + 4 + (0x12 << 2)
label_3aa048:
    if (ctx->pc == 0x3AA048u) {
        ctx->pc = 0x3AA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA044u;
        // 0x3aa048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA04Cu;
        goto label_3aa04c;
    }
    ctx->pc = 0x3AA044u;
    {
        const bool branch_taken_0x3aa044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA044u;
        // 0x3aa048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa044) {
            ctx->pc = 0x3AA090u;
            goto label_3aa090;
        }
    }
    ctx->pc = 0x3AA04Cu;
label_3aa04c:
    // 0x3aa04c: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3aa04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3aa050:
    // 0x3aa050: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3aa050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3aa054:
    // 0x3aa054: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3aa054u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3aa058:
    // 0x3aa058: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3aa058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3aa05c:
    // 0x3aa05c: 0x26101cf0  addiu       $s0, $s0, 0x1CF0
    ctx->pc = 0x3aa05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7408));
label_3aa060:
    // 0x3aa060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa064:
    // 0x3aa064: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3aa064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3aa068:
    // 0x3aa068: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3aa068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3aa06c:
    // 0x3aa06c: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3aa06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3aa070:
    // 0x3aa070: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3aa070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3aa074:
    // 0x3aa074: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3aa074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3aa078:
    // 0x3aa078: 0xc0e9fa6  jal         func_3A7E98
label_3aa07c:
    if (ctx->pc == 0x3AA07Cu) {
        ctx->pc = 0x3AA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA078u;
        // 0x3aa07c: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA080u;
        goto label_3aa080;
    }
    ctx->pc = 0x3AA078u;
    SET_GPR_U32(ctx, 31, 0x3AA080u);
    ctx->pc = 0x3AA07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA078u;
    // 0x3aa07c: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AA078u, 0x3AA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA080u;
label_3aa080:
    // 0x3aa080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa084:
    // 0x3aa084: 0xc0f15bc  jal         func_3C56F0
label_3aa088:
    if (ctx->pc == 0x3AA088u) {
        ctx->pc = 0x3AA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA084u;
        // 0x3aa088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA08Cu;
        goto label_3aa08c;
    }
    ctx->pc = 0x3AA084u;
    SET_GPR_U32(ctx, 31, 0x3AA08Cu);
    ctx->pc = 0x3AA088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA084u;
    // 0x3aa088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AA084u, 0x3AA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA08Cu;
label_3aa08c:
    // 0x3aa08c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aa08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa090:
    // 0x3aa090: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x3aa090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3aa094:
    // 0x3aa094: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x3aa094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3aa098:
    // 0x3aa098: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x3aa098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3aa09c:
    // 0x3aa09c: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x3aa09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3aa0a0:
    // 0x3aa0a0: 0xdfbf0860  ld          $ra, 0x860($sp)
    ctx->pc = 0x3aa0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2144)));
label_3aa0a4:
    // 0x3aa0a4: 0x3e00008  jr          $ra
label_3aa0a8:
    if (ctx->pc == 0x3AA0A8u) {
        ctx->pc = 0x3AA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0A4u;
        // 0x3aa0a8: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA0ACu;
        goto label_3aa0ac;
    }
    ctx->pc = 0x3AA0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0A4u;
        // 0x3aa0a8: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA0ACu;
label_3aa0ac:
    // 0x3aa0ac: 0x0  nop
    ctx->pc = 0x3aa0acu;
    // NOP
    ctx->pc = 0x3aa0b0u;
}
