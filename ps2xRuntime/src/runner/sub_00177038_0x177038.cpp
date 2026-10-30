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

// Function: sub_00177038
// Address: 0x177038 - 0x1770b8
void sub_00177038_0x177038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177038_0x177038");
#endif

    switch (ctx->pc) {
        case 0x177038u: goto label_177038;
        case 0x17703cu: goto label_17703c;
        case 0x177040u: goto label_177040;
        case 0x177044u: goto label_177044;
        case 0x177048u: goto label_177048;
        case 0x17704cu: goto label_17704c;
        case 0x177050u: goto label_177050;
        case 0x177054u: goto label_177054;
        case 0x177058u: goto label_177058;
        case 0x17705cu: goto label_17705c;
        case 0x177060u: goto label_177060;
        case 0x177064u: goto label_177064;
        case 0x177068u: goto label_177068;
        case 0x17706cu: goto label_17706c;
        case 0x177070u: goto label_177070;
        case 0x177074u: goto label_177074;
        case 0x177078u: goto label_177078;
        case 0x17707cu: goto label_17707c;
        case 0x177080u: goto label_177080;
        case 0x177084u: goto label_177084;
        case 0x177088u: goto label_177088;
        case 0x17708cu: goto label_17708c;
        case 0x177090u: goto label_177090;
        case 0x177094u: goto label_177094;
        case 0x177098u: goto label_177098;
        case 0x17709cu: goto label_17709c;
        case 0x1770a0u: goto label_1770a0;
        case 0x1770a4u: goto label_1770a4;
        case 0x1770a8u: goto label_1770a8;
        case 0x1770acu: goto label_1770ac;
        case 0x1770b0u: goto label_1770b0;
        case 0x1770b4u: goto label_1770b4;
        default: break;
    }

    ctx->pc = 0x177038u;

label_177038:
    // 0x177038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17703c:
    // 0x17703c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_177040:
    // 0x177040: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x177040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_177044:
    // 0x177044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177048:
    // 0x177048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17704c:
    // 0x17704c: 0x263002bc  addiu       $s0, $s1, 0x2BC
    ctx->pc = 0x17704cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_177050:
    // 0x177050: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x177050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_177054:
    // 0x177054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x177054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177058:
    // 0x177058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17705c:
    // 0x17705c: 0x10000009  b           . + 4 + (0x9 << 2)
label_177060:
    if (ctx->pc == 0x177060u) {
        ctx->pc = 0x177060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17705Cu;
        // 0x177060: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177064u;
        goto label_177064;
    }
    ctx->pc = 0x17705Cu;
    {
        const bool branch_taken_0x17705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17705Cu;
        // 0x177060: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17705c) {
            ctx->pc = 0x177084u;
            goto label_177084;
        }
    }
    ctx->pc = 0x177064u;
label_177064:
    // 0x177064: 0x0  nop
    ctx->pc = 0x177064u;
    // NOP
label_177068:
    // 0x177068: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17706c:
    // 0x17706c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_177070:
    // 0x177070: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_177074:
    // 0x177074: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x177074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_177078:
    // 0x177078: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x177078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_17707c:
    // 0x17707c: 0x60f809  jalr        $v1
label_177080:
    if (ctx->pc == 0x177080u) {
        ctx->pc = 0x177080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17707Cu;
        // 0x177080: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177084u;
        goto label_177084;
    }
    ctx->pc = 0x17707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177084u);
        ctx->pc = 0x177080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17707Cu;
        // 0x177080: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17707Cu, 0x177084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177084u;
label_177084:
    // 0x177084: 0xc05d45e  jal         func_175178
label_177088:
    if (ctx->pc == 0x177088u) {
        ctx->pc = 0x177088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177084u;
        // 0x177088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17708Cu;
        goto label_17708c;
    }
    ctx->pc = 0x177084u;
    SET_GPR_U32(ctx, 31, 0x17708Cu);
    ctx->pc = 0x177088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177084u;
    // 0x177088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x177084u, 0x17708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17708Cu;
label_17708c:
    // 0x17708c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x17708cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_177090:
    // 0x177090: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177094:
    // 0x177094: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_177098:
    if (ctx->pc == 0x177098u) {
        ctx->pc = 0x177098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177094u;
        // 0x177098: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17709Cu;
        goto label_17709c;
    }
    ctx->pc = 0x177094u;
    {
        const bool branch_taken_0x177094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177094u;
        // 0x177098: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177094) {
            ctx->pc = 0x177068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177068;
        }
    }
    ctx->pc = 0x17709Cu;
label_17709c:
    // 0x17709c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17709cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1770a0:
    // 0x1770a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1770a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1770a4:
    // 0x1770a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1770a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1770a8:
    // 0x1770a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1770a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1770ac:
    // 0x1770ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1770acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1770b0:
    // 0x1770b0: 0x3e00008  jr          $ra
label_1770b4:
    if (ctx->pc == 0x1770B4u) {
        ctx->pc = 0x1770B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770B0u;
        // 0x1770b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1770B8u;
        goto label_fallthrough_0x1770b0;
    }
    ctx->pc = 0x1770B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1770B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770B0u;
        // 0x1770b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1770B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1770b0:
    ctx->pc = 0x1770B8u;
}
