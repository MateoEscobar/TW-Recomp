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

// Function: sub_00149040
// Address: 0x149040 - 0x1490b8
void sub_00149040_0x149040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149040_0x149040");
#endif

    switch (ctx->pc) {
        case 0x149040u: goto label_149040;
        case 0x149044u: goto label_149044;
        case 0x149048u: goto label_149048;
        case 0x14904cu: goto label_14904c;
        case 0x149050u: goto label_149050;
        case 0x149054u: goto label_149054;
        case 0x149058u: goto label_149058;
        case 0x14905cu: goto label_14905c;
        case 0x149060u: goto label_149060;
        case 0x149064u: goto label_149064;
        case 0x149068u: goto label_149068;
        case 0x14906cu: goto label_14906c;
        case 0x149070u: goto label_149070;
        case 0x149074u: goto label_149074;
        case 0x149078u: goto label_149078;
        case 0x14907cu: goto label_14907c;
        case 0x149080u: goto label_149080;
        case 0x149084u: goto label_149084;
        case 0x149088u: goto label_149088;
        case 0x14908cu: goto label_14908c;
        case 0x149090u: goto label_149090;
        case 0x149094u: goto label_149094;
        case 0x149098u: goto label_149098;
        case 0x14909cu: goto label_14909c;
        case 0x1490a0u: goto label_1490a0;
        case 0x1490a4u: goto label_1490a4;
        case 0x1490a8u: goto label_1490a8;
        case 0x1490acu: goto label_1490ac;
        case 0x1490b0u: goto label_1490b0;
        case 0x1490b4u: goto label_1490b4;
        default: break;
    }

    ctx->pc = 0x149040u;

label_149040:
    // 0x149040: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x149040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_149044:
    // 0x149044: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_149048:
    // 0x149048: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x149048u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_14904c:
    // 0x14904c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14904cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_149050:
    // 0x149050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_149054:
    // 0x149054: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_149058:
    // 0x149058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14905c:
    // 0x14905c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14905cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149060:
    // 0x149060: 0x24a5a5e0  addiu       $a1, $a1, -0x5A20
    ctx->pc = 0x149060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944224));
label_149064:
    // 0x149064: 0x2508a5f0  addiu       $t0, $t0, -0x5A10
    ctx->pc = 0x149064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944240));
label_149068:
    // 0x149068: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x149068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_14906c:
    // 0x14906c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x14906cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_149070:
    // 0x149070: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x149070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_149074:
    // 0x149074: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x149074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_149078:
    // 0x149078: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x149078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_14907c:
    // 0x14907c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14907cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149080:
    // 0x149080: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x149080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_149084:
    // 0x149084: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x149084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_149088:
    // 0x149088: 0x40f809  jalr        $v0
label_14908c:
    if (ctx->pc == 0x14908Cu) {
        ctx->pc = 0x14908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149088u;
        // 0x14908c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149090u;
        goto label_149090;
    }
    ctx->pc = 0x149088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149090u);
        ctx->pc = 0x14908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149088u;
        // 0x14908c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149088u, 0x149090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x149090u;
label_149090:
    // 0x149090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_149094:
    if (ctx->pc == 0x149094u) {
        ctx->pc = 0x149094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149090u;
        // 0x149094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149098u;
        goto label_149098;
    }
    ctx->pc = 0x149090u;
    {
        const bool branch_taken_0x149090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149090u;
        // 0x149094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149090) {
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x149098u;
label_149098:
    // 0x149098: 0xc052458  jal         func_149160
label_14909c:
    if (ctx->pc == 0x14909Cu) {
        ctx->pc = 0x14909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149098u;
        // 0x14909c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1490A0u;
        goto label_1490a0;
    }
    ctx->pc = 0x149098u;
    SET_GPR_U32(ctx, 31, 0x1490A0u);
    ctx->pc = 0x14909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149098u;
    // 0x14909c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149160u, 0x149098u, 0x1490A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490A0u;
label_1490a0:
    // 0x1490a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1490a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1490a4:
    // 0x1490a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1490a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1490a8:
    // 0x1490a8: 0x3e00008  jr          $ra
label_1490ac:
    if (ctx->pc == 0x1490ACu) {
        ctx->pc = 0x1490ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490A8u;
        // 0x1490ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1490B0u;
        goto label_1490b0;
    }
    ctx->pc = 0x1490A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490A8u;
        // 0x1490ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1490A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1490B0u;
label_1490b0:
    // 0x1490b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1490b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1490b4:
    // 0x1490b4: 0x0  nop
    ctx->pc = 0x1490b4u;
    // NOP
    ctx->pc = 0x1490b8u;
}
