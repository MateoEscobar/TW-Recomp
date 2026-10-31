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

// Function: sub_001E8EE0
// Address: 0x1e8ee0 - 0x1e9088
void sub_001E8EE0_0x1e8ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8EE0_0x1e8ee0");
#endif

    switch (ctx->pc) {
        case 0x1e8ee0u: goto label_1e8ee0;
        case 0x1e8ee4u: goto label_1e8ee4;
        case 0x1e8ee8u: goto label_1e8ee8;
        case 0x1e8eecu: goto label_1e8eec;
        case 0x1e8ef0u: goto label_1e8ef0;
        case 0x1e8ef4u: goto label_1e8ef4;
        case 0x1e8ef8u: goto label_1e8ef8;
        case 0x1e8efcu: goto label_1e8efc;
        case 0x1e8f00u: goto label_1e8f00;
        case 0x1e8f04u: goto label_1e8f04;
        case 0x1e8f08u: goto label_1e8f08;
        case 0x1e8f0cu: goto label_1e8f0c;
        case 0x1e8f10u: goto label_1e8f10;
        case 0x1e8f14u: goto label_1e8f14;
        case 0x1e8f18u: goto label_1e8f18;
        case 0x1e8f1cu: goto label_1e8f1c;
        case 0x1e8f20u: goto label_1e8f20;
        case 0x1e8f24u: goto label_1e8f24;
        case 0x1e8f28u: goto label_1e8f28;
        case 0x1e8f2cu: goto label_1e8f2c;
        case 0x1e8f30u: goto label_1e8f30;
        case 0x1e8f34u: goto label_1e8f34;
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f3cu: goto label_1e8f3c;
        case 0x1e8f40u: goto label_1e8f40;
        case 0x1e8f44u: goto label_1e8f44;
        case 0x1e8f48u: goto label_1e8f48;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8f50u: goto label_1e8f50;
        case 0x1e8f54u: goto label_1e8f54;
        case 0x1e8f58u: goto label_1e8f58;
        case 0x1e8f5cu: goto label_1e8f5c;
        case 0x1e8f60u: goto label_1e8f60;
        case 0x1e8f64u: goto label_1e8f64;
        case 0x1e8f68u: goto label_1e8f68;
        case 0x1e8f6cu: goto label_1e8f6c;
        case 0x1e8f70u: goto label_1e8f70;
        case 0x1e8f74u: goto label_1e8f74;
        case 0x1e8f78u: goto label_1e8f78;
        case 0x1e8f7cu: goto label_1e8f7c;
        case 0x1e8f80u: goto label_1e8f80;
        case 0x1e8f84u: goto label_1e8f84;
        case 0x1e8f88u: goto label_1e8f88;
        case 0x1e8f8cu: goto label_1e8f8c;
        case 0x1e8f90u: goto label_1e8f90;
        case 0x1e8f94u: goto label_1e8f94;
        case 0x1e8f98u: goto label_1e8f98;
        case 0x1e8f9cu: goto label_1e8f9c;
        case 0x1e8fa0u: goto label_1e8fa0;
        case 0x1e8fa4u: goto label_1e8fa4;
        case 0x1e8fa8u: goto label_1e8fa8;
        case 0x1e8facu: goto label_1e8fac;
        case 0x1e8fb0u: goto label_1e8fb0;
        case 0x1e8fb4u: goto label_1e8fb4;
        case 0x1e8fb8u: goto label_1e8fb8;
        case 0x1e8fbcu: goto label_1e8fbc;
        case 0x1e8fc0u: goto label_1e8fc0;
        case 0x1e8fc4u: goto label_1e8fc4;
        case 0x1e8fc8u: goto label_1e8fc8;
        case 0x1e8fccu: goto label_1e8fcc;
        case 0x1e8fd0u: goto label_1e8fd0;
        case 0x1e8fd4u: goto label_1e8fd4;
        case 0x1e8fd8u: goto label_1e8fd8;
        case 0x1e8fdcu: goto label_1e8fdc;
        case 0x1e8fe0u: goto label_1e8fe0;
        case 0x1e8fe4u: goto label_1e8fe4;
        case 0x1e8fe8u: goto label_1e8fe8;
        case 0x1e8fecu: goto label_1e8fec;
        case 0x1e8ff0u: goto label_1e8ff0;
        case 0x1e8ff4u: goto label_1e8ff4;
        case 0x1e8ff8u: goto label_1e8ff8;
        case 0x1e8ffcu: goto label_1e8ffc;
        case 0x1e9000u: goto label_1e9000;
        case 0x1e9004u: goto label_1e9004;
        case 0x1e9008u: goto label_1e9008;
        case 0x1e900cu: goto label_1e900c;
        case 0x1e9010u: goto label_1e9010;
        case 0x1e9014u: goto label_1e9014;
        case 0x1e9018u: goto label_1e9018;
        case 0x1e901cu: goto label_1e901c;
        case 0x1e9020u: goto label_1e9020;
        case 0x1e9024u: goto label_1e9024;
        case 0x1e9028u: goto label_1e9028;
        case 0x1e902cu: goto label_1e902c;
        case 0x1e9030u: goto label_1e9030;
        case 0x1e9034u: goto label_1e9034;
        case 0x1e9038u: goto label_1e9038;
        case 0x1e903cu: goto label_1e903c;
        case 0x1e9040u: goto label_1e9040;
        case 0x1e9044u: goto label_1e9044;
        case 0x1e9048u: goto label_1e9048;
        case 0x1e904cu: goto label_1e904c;
        case 0x1e9050u: goto label_1e9050;
        case 0x1e9054u: goto label_1e9054;
        case 0x1e9058u: goto label_1e9058;
        case 0x1e905cu: goto label_1e905c;
        case 0x1e9060u: goto label_1e9060;
        case 0x1e9064u: goto label_1e9064;
        case 0x1e9068u: goto label_1e9068;
        case 0x1e906cu: goto label_1e906c;
        case 0x1e9070u: goto label_1e9070;
        case 0x1e9074u: goto label_1e9074;
        case 0x1e9078u: goto label_1e9078;
        case 0x1e907cu: goto label_1e907c;
        case 0x1e9080u: goto label_1e9080;
        case 0x1e9084u: goto label_1e9084;
        default: break;
    }

    ctx->pc = 0x1e8ee0u;

label_1e8ee0:
    // 0x1e8ee0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e8ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e8ee4:
    // 0x1e8ee4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e8ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1e8ee8:
    // 0x1e8ee8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1e8ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1e8eec:
    // 0x1e8eec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ef0:
    // 0x1e8ef0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e8ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e8ef4:
    // 0x1e8ef4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e8ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ef8:
    // 0x1e8ef8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1e8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1e8efc:
    // 0x1e8efc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e8efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f00:
    // 0x1e8f00: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e8f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1e8f04:
    // 0x1e8f04: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e8f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1e8f08:
    // 0x1e8f08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e8f0c:
    // 0x1e8f0c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1e8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1e8f10:
    // 0x1e8f10: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e8f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e8f14:
    // 0x1e8f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e8f18:
    // 0x1e8f18: 0xae200ba0  sw          $zero, 0xBA0($s1)
    ctx->pc = 0x1e8f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2976), GPR_U32(ctx, 0));
label_1e8f1c:
    // 0x1e8f1c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1e8f1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1e8f20:
    // 0x1e8f20: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1e8f24:
    if (ctx->pc == 0x1E8F24u) {
        ctx->pc = 0x1E8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F20u;
        // 0x1e8f24: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F28u;
        goto label_1e8f28;
    }
    ctx->pc = 0x1E8F20u;
    {
        const bool branch_taken_0x1e8f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F20u;
        // 0x1e8f24: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f20) {
            ctx->pc = 0x1E8FE4u;
            goto label_1e8fe4;
        }
    }
    ctx->pc = 0x1E8F28u;
label_1e8f28:
    // 0x1e8f28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e8f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f2c:
    // 0x1e8f2c: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x1e8f2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_1e8f30:
    // 0x1e8f30: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x1e8f30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f34:
    // 0x1e8f34: 0x26350370  addiu       $s5, $s1, 0x370
    ctx->pc = 0x1e8f34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
label_1e8f38:
    // 0x1e8f38: 0x26300790  addiu       $s0, $s1, 0x790
    ctx->pc = 0x1e8f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
label_1e8f3c:
    // 0x1e8f3c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1e8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_1e8f40:
    // 0x1e8f40: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1e8f44:
    if (ctx->pc == 0x1E8F44u) {
        ctx->pc = 0x1E8F48u;
        goto label_1e8f48;
    }
    ctx->pc = 0x1E8F40u;
    {
        const bool branch_taken_0x1e8f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8f40) {
            ctx->pc = 0x1E8F9Cu;
            goto label_1e8f9c;
        }
    }
    ctx->pc = 0x1E8F48u;
label_1e8f48:
    // 0x1e8f48: 0x12570012  beq         $s2, $s7, . + 4 + (0x12 << 2)
label_1e8f4c:
    if (ctx->pc == 0x1E8F4Cu) {
        ctx->pc = 0x1E8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F48u;
        // 0x1e8f4c: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F50u;
        goto label_1e8f50;
    }
    ctx->pc = 0x1E8F48u;
    {
        const bool branch_taken_0x1e8f48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x1E8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F48u;
        // 0x1e8f4c: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f48) {
            ctx->pc = 0x1E8F94u;
            goto label_1e8f94;
        }
    }
    ctx->pc = 0x1E8F50u;
label_1e8f50:
    // 0x1e8f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f54:
    // 0x1e8f54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e8f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f58:
    // 0x1e8f58: 0x9062033a  lbu         $v0, 0x33A($v1)
    ctx->pc = 0x1e8f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 826)));
label_1e8f5c:
    // 0x1e8f5c: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1e8f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e8f60:
    // 0x1e8f60: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1e8f64:
    // 0x1e8f64: 0xc073478  jal         func_1CD1E0
label_1e8f68:
    if (ctx->pc == 0x1E8F68u) {
        ctx->pc = 0x1E8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F64u;
        // 0x1e8f68: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F6Cu;
        goto label_1e8f6c;
    }
    ctx->pc = 0x1E8F64u;
    SET_GPR_U32(ctx, 31, 0x1E8F6Cu);
    ctx->pc = 0x1E8F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F64u;
    // 0x1e8f68: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E8F64u, 0x1E8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F6Cu;
label_1e8f6c:
    // 0x1e8f6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8f70:
    // 0x1e8f70: 0x27c5d310  addiu       $a1, $fp, -0x2CF0
    ctx->pc = 0x1e8f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955792));
label_1e8f74:
    // 0x1e8f74: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1e8f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1e8f78:
    // 0x1e8f78: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1e8f7c:
    // 0x1e8f7c: 0x60f809  jalr        $v1
label_1e8f80:
    if (ctx->pc == 0x1E8F80u) {
        ctx->pc = 0x1E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F7Cu;
        // 0x1e8f80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F84u;
        goto label_1e8f84;
    }
    ctx->pc = 0x1E8F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E8F84u);
        ctx->pc = 0x1E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F7Cu;
        // 0x1e8f80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F7Cu, 0x1E8F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8F84u;
label_1e8f84:
    // 0x1e8f84: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1e8f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1e8f88:
    // 0x1e8f88: 0x8e220ba0  lw          $v0, 0xBA0($s1)
    ctx->pc = 0x1e8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2976)));
label_1e8f8c:
    // 0x1e8f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e8f90:
    // 0x1e8f90: 0xae220ba0  sw          $v0, 0xBA0($s1)
    ctx->pc = 0x1e8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2976), GPR_U32(ctx, 2));
label_1e8f94:
    // 0x1e8f94: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e8f98:
    if (ctx->pc == 0x1E8F98u) {
        ctx->pc = 0x1E8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F94u;
        // 0x1e8f98: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F9Cu;
        goto label_1e8f9c;
    }
    ctx->pc = 0x1E8F94u;
    {
        const bool branch_taken_0x1e8f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F94u;
        // 0x1e8f98: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f94) {
            ctx->pc = 0x1E8FD4u;
            goto label_1e8fd4;
        }
    }
    ctx->pc = 0x1E8F9Cu;
label_1e8f9c:
    // 0x1e8f9c: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
label_1e8fa0:
    if (ctx->pc == 0x1E8FA0u) {
        ctx->pc = 0x1E8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F9Cu;
        // 0x1e8fa0: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FA4u;
        goto label_1e8fa4;
    }
    ctx->pc = 0x1E8F9Cu;
    {
        const bool branch_taken_0x1e8f9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F9Cu;
        // 0x1e8fa0: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f9c) {
            ctx->pc = 0x1E8FCCu;
            goto label_1e8fcc;
        }
    }
    ctx->pc = 0x1E8FA4u;
label_1e8fa4:
    // 0x1e8fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8fa8:
    // 0x1e8fa8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1e8fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e8fac:
    // 0x1e8fac: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1e8facu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e8fb0:
    // 0x1e8fb0: 0xc073478  jal         func_1CD1E0
label_1e8fb4:
    if (ctx->pc == 0x1E8FB4u) {
        ctx->pc = 0x1E8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FB0u;
        // 0x1e8fb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FB8u;
        goto label_1e8fb8;
    }
    ctx->pc = 0x1E8FB0u;
    SET_GPR_U32(ctx, 31, 0x1E8FB8u);
    ctx->pc = 0x1E8FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FB0u;
    // 0x1e8fb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E8FB0u, 0x1E8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FB8u;
label_1e8fb8:
    // 0x1e8fb8: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1e8fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1e8fbc:
    // 0x1e8fbc: 0x8e220ba0  lw          $v0, 0xBA0($s1)
    ctx->pc = 0x1e8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2976)));
label_1e8fc0:
    // 0x1e8fc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e8fc4:
    // 0x1e8fc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8fc8:
    if (ctx->pc == 0x1E8FC8u) {
        ctx->pc = 0x1E8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC4u;
        // 0x1e8fc8: 0xae220ba0  sw          $v0, 0xBA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FCCu;
        goto label_1e8fcc;
    }
    ctx->pc = 0x1E8FC4u;
    {
        const bool branch_taken_0x1e8fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC4u;
        // 0x1e8fc8: 0xae220ba0  sw          $v0, 0xBA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fc4) {
            ctx->pc = 0x1E8FD4u;
            goto label_1e8fd4;
        }
    }
    ctx->pc = 0x1E8FCCu;
label_1e8fcc:
    // 0x1e8fcc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e8fccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e8fd0:
    // 0x1e8fd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e8fd4:
    // 0x1e8fd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e8fd8:
    // 0x1e8fd8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1e8fd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1e8fdc:
    // 0x1e8fdc: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_1e8fe0:
    if (ctx->pc == 0x1E8FE0u) {
        ctx->pc = 0x1E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FDCu;
        // 0x1e8fe0: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FE4u;
        goto label_1e8fe4;
    }
    ctx->pc = 0x1E8FDCu;
    {
        const bool branch_taken_0x1e8fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FDCu;
        // 0x1e8fe0: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fdc) {
            ctx->pc = 0x1E8F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8f40;
        }
    }
    ctx->pc = 0x1E8FE4u;
label_1e8fe4:
    // 0x1e8fe4: 0x26250370  addiu       $a1, $s1, 0x370
    ctx->pc = 0x1e8fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
label_1e8fe8:
    // 0x1e8fe8: 0x26240a00  addiu       $a0, $s1, 0xA00
    ctx->pc = 0x1e8fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
label_1e8fec:
    // 0x1e8fec: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x1e8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1e8ff0:
    // 0x1e8ff0: 0xc073478  jal         func_1CD1E0
label_1e8ff4:
    if (ctx->pc == 0x1E8FF4u) {
        ctx->pc = 0x1E8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FF0u;
        // 0x1e8ff4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FF8u;
        goto label_1e8ff8;
    }
    ctx->pc = 0x1E8FF0u;
    SET_GPR_U32(ctx, 31, 0x1E8FF8u);
    ctx->pc = 0x1E8FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FF0u;
    // 0x1e8ff4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E8FF0u, 0x1E8FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FF8u;
label_1e8ff8:
    // 0x1e8ff8: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x1e8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1e8ffc:
    // 0x1e8ffc: 0x8e240ba0  lw          $a0, 0xBA0($s1)
    ctx->pc = 0x1e8ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2976)));
label_1e9000:
    // 0x1e9000: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1e9004:
    if (ctx->pc == 0x1E9004u) {
        ctx->pc = 0x1E9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9000u;
        // 0x1e9004: 0x245014d4  addiu       $s0, $v0, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9008u;
        goto label_1e9008;
    }
    ctx->pc = 0x1E9000u;
    {
        const bool branch_taken_0x1e9000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9000u;
        // 0x1e9004: 0x245014d4  addiu       $s0, $v0, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9000) {
            ctx->pc = 0x1E9038u;
            goto label_1e9038;
        }
    }
    ctx->pc = 0x1E9008u;
label_1e9008:
    // 0x1e9008: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1e9008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1e900c:
    // 0x1e900c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1e900cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1e9010:
    // 0x1e9010: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e9014:
    // 0x1e9014: 0x24a5d328  addiu       $a1, $a1, -0x2CD8
    ctx->pc = 0x1e9014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955816));
label_1e9018:
    // 0x1e9018: 0x8c460390  lw          $a2, 0x390($v0)
    ctx->pc = 0x1e9018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 912)));
label_1e901c:
    // 0x1e901c: 0x24840390  addiu       $a0, $a0, 0x390
    ctx->pc = 0x1e901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
label_1e9020:
    // 0x1e9020: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1e9020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1e9024:
    // 0x1e9024: 0x84c20020  lh          $v0, 0x20($a2)
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
label_1e9028:
    // 0x1e9028: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1e902c:
    // 0x1e902c: 0x60f809  jalr        $v1
label_1e9030:
    if (ctx->pc == 0x1E9030u) {
        ctx->pc = 0x1E9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E902Cu;
        // 0x1e9030: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9034u;
        goto label_1e9034;
    }
    ctx->pc = 0x1E902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E9034u);
        ctx->pc = 0x1E9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E902Cu;
        // 0x1e9030: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E902Cu, 0x1E9034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9034u;
label_1e9034:
    // 0x1e9034: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x1e9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1e9038:
    // 0x1e9038: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1e903c:
    // 0x1e903c: 0x26240ad0  addiu       $a0, $s1, 0xAD0
    ctx->pc = 0x1e903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2768));
label_1e9040:
    // 0x1e9040: 0x944556dc  lhu         $a1, 0x56DC($v0)
    ctx->pc = 0x1e9040u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22236)));
label_1e9044:
    // 0x1e9044: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1e9044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e9048:
    // 0x1e9048: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1e9048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e904c:
    // 0x1e904c: 0xc073478  jal         func_1CD1E0
label_1e9050:
    if (ctx->pc == 0x1E9050u) {
        ctx->pc = 0x1E9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E904Cu;
        // 0x1e9050: 0x24a50049  addiu       $a1, $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9054u;
        goto label_1e9054;
    }
    ctx->pc = 0x1E904Cu;
    SET_GPR_U32(ctx, 31, 0x1E9054u);
    ctx->pc = 0x1E9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E904Cu;
    // 0x1e9050: 0x24a50049  addiu       $a1, $a1, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E904Cu, 0x1E9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9054u;
label_1e9054:
    // 0x1e9054: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e9054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e9058:
    // 0x1e9058: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e9058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e905c:
    // 0x1e905c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e905cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e9060:
    // 0x1e9060: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1e9060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e9064:
    // 0x1e9064: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e9064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e9068:
    // 0x1e9068: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e9068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e906c:
    // 0x1e906c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1e906cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9070:
    // 0x1e9070: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1e9070u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9074:
    // 0x1e9074: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e9074u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9078:
    // 0x1e9078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e907c:
    // 0x1e907c: 0x3e00008  jr          $ra
label_1e9080:
    if (ctx->pc == 0x1E9080u) {
        ctx->pc = 0x1E9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E907Cu;
        // 0x1e9080: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9084u;
        goto label_1e9084;
    }
    ctx->pc = 0x1E907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E907Cu;
        // 0x1e9080: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9084u;
label_1e9084:
    // 0x1e9084: 0x0  nop
    ctx->pc = 0x1e9084u;
    // NOP
    ctx->pc = 0x1e9088u;
}
