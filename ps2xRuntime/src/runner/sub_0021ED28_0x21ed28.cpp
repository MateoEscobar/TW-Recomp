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

// Function: sub_0021ED28
// Address: 0x21ed28 - 0x21ede0
void sub_0021ED28_0x21ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ED28_0x21ed28");
#endif

    switch (ctx->pc) {
        case 0x21ed64u: goto label_21ed64;
        case 0x21ed70u: goto label_21ed70;
        case 0x21ed88u: goto label_21ed88;
        case 0x21edb4u: goto label_21edb4;
        default: break;
    }

    ctx->pc = 0x21ed28u;

    // 0x21ed28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ed2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21ed30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21ed34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21ed34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ed38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21ed3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ed3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed40: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21ed40u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x21ed44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21ed44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ed48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21ed4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21ed4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ed50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ed54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ed54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21ed58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ed5c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x21ED5Cu;
    SET_GPR_U32(ctx, 31, 0x21ED64u);
    ctx->pc = 0x21ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED5Cu;
    // 0x21ed60: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x21ED5Cu, 0x21ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED64u;
label_21ed64:
    // 0x21ed64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21ed64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21ed68: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21ED68u;
    SET_GPR_U32(ctx, 31, 0x21ED70u);
    ctx->pc = 0x21ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED68u;
    // 0x21ed6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21ED68u, 0x21ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED70u;
label_21ed70:
    // 0x21ed70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21ED70u;
    {
        const bool branch_taken_0x21ed70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED70u;
        // 0x21ed74: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed70) {
            ctx->pc = 0x21EDBCu;
            goto label_21edbc;
        }
    }
    ctx->pc = 0x21ED78u;
    // 0x21ed78: 0xa2000195  sb          $zero, 0x195($s0)
    ctx->pc = 0x21ed78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ed7c: 0x24a5aa48  addiu       $a1, $a1, -0x55B8
    ctx->pc = 0x21ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945352));
    // 0x21ed80: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x21ED80u;
    SET_GPR_U32(ctx, 31, 0x21ED88u);
    ctx->pc = 0x21ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED80u;
    // 0x21ed84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21ED80u, 0x21ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED88u;
label_21ed88:
    // 0x21ed88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ED88u;
    {
        const bool branch_taken_0x21ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED88u;
        // 0x21ed8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed88) {
            ctx->pc = 0x21EDA0u;
            goto label_21eda0;
        }
    }
    ctx->pc = 0x21ED90u;
    // 0x21ed90: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x21ed94: 0x9064032a  lbu         $a0, 0x32A($v1)
    ctx->pc = 0x21ed94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 810)));
    // 0x21ed98: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ED98u;
    {
        const bool branch_taken_0x21ed98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED98u;
        // 0x21ed9c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed98) {
            ctx->pc = 0x21EDA8u;
            goto label_21eda8;
        }
    }
    ctx->pc = 0x21EDA0u;
label_21eda0:
    // 0x21eda0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21EDA0u;
    {
        const bool branch_taken_0x21eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDA0u;
        // 0x21eda4: 0xae000184  sw          $zero, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eda0) {
            ctx->pc = 0x21EDC8u;
            goto label_21edc8;
        }
    }
    ctx->pc = 0x21EDA8u;
label_21eda8:
    // 0x21eda8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21eda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21edac: 0xc050fda  jal         func_143F68
    ctx->pc = 0x21EDACu;
    SET_GPR_U32(ctx, 31, 0x21EDB4u);
    ctx->pc = 0x21EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDACu;
    // 0x21edb0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x21EDACu, 0x21EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDB4u;
label_21edb4:
    // 0x21edb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21EDB4u;
    {
        const bool branch_taken_0x21edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDB4u;
        // 0x21edb8: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edb4) {
            ctx->pc = 0x21EDC8u;
            goto label_21edc8;
        }
    }
    ctx->pc = 0x21EDBCu;
label_21edbc:
    // 0x21edbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21edc0: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x21edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x21edc4: 0xa2020195  sb          $v0, 0x195($s0)
    ctx->pc = 0x21edc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
label_21edc8:
    // 0x21edc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21edc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21edcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21edccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21edd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21edd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21edd4: 0x3e00008  jr          $ra
    ctx->pc = 0x21EDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDD4u;
        // 0x21edd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EDDCu;
    // 0x21eddc: 0x0  nop
    ctx->pc = 0x21eddcu;
    // NOP
    ctx->pc = 0x21ede0u;
}
