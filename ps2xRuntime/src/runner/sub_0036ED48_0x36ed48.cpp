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

// Function: sub_0036ED48
// Address: 0x36ed48 - 0x36ee08
void sub_0036ED48_0x36ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ED48_0x36ed48");
#endif

    switch (ctx->pc) {
        case 0x36ed70u: goto label_36ed70;
        case 0x36ed80u: goto label_36ed80;
        case 0x36ed98u: goto label_36ed98;
        case 0x36edb4u: goto label_36edb4;
        case 0x36edc0u: goto label_36edc0;
        case 0x36eddcu: goto label_36eddc;
        default: break;
    }

    ctx->pc = 0x36ed48u;

    // 0x36ed48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x36ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x36ed4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ed50: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x36ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x36ed54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ed54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed58: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x36ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x36ed5c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x36ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x36ed60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x36ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x36ed64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36ed68: 0xc102488  jal         func_409220
    ctx->pc = 0x36ED68u;
    SET_GPR_U32(ctx, 31, 0x36ED70u);
    ctx->pc = 0x36ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED68u;
    // 0x36ed6c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36ED68u, 0x36ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED70u;
label_36ed70:
    // 0x36ed70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36ed70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ed74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed78: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36ed78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed7c: 0x0  nop
    ctx->pc = 0x36ed7cu;
    // NOP
label_36ed80:
    // 0x36ed80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ed84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ed8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ed8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed90: 0xc10250e  jal         func_409438
    ctx->pc = 0x36ED90u;
    SET_GPR_U32(ctx, 31, 0x36ED98u);
    ctx->pc = 0x36ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED90u;
    // 0x36ed94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409438u, 0x36ED90u, 0x36ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED98u;
label_36ed98:
    // 0x36ed98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36ed9c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x36ed9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x36eda0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36EDA0u;
    {
        const bool branch_taken_0x36eda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDA0u;
        // 0x36eda4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eda0) {
            ctx->pc = 0x36ED80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ed80;
        }
    }
    ctx->pc = 0x36EDA8u;
    // 0x36eda8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edac: 0xc06d7e2  jal         func_1B5F88
    ctx->pc = 0x36EDACu;
    SET_GPR_U32(ctx, 31, 0x36EDB4u);
    ctx->pc = 0x36EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EDACu;
    // 0x36edb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5F88u, 0x36EDACu, 0x36EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDB4u;
label_36edb4:
    // 0x36edb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36edb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edb8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36edbc: 0x0  nop
    ctx->pc = 0x36edbcu;
    // NOP
label_36edc0:
    // 0x36edc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36edc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edc4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36edc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36edc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36edcc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x36edccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36edd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36edd4: 0xc102592  jal         func_409648
    ctx->pc = 0x36EDD4u;
    SET_GPR_U32(ctx, 31, 0x36EDDCu);
    ctx->pc = 0x36EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EDD4u;
    // 0x36edd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409648u, 0x36EDD4u, 0x36EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDDCu;
label_36eddc:
    // 0x36eddc: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x36eddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x36ede0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36EDE0u;
    {
        const bool branch_taken_0x36ede0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDE0u;
        // 0x36ede4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ede0) {
            ctx->pc = 0x36EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36edc0;
        }
    }
    ctx->pc = 0x36EDE8u;
    // 0x36ede8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x36ede8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36edec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36edecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edf0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x36edf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36edf4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x36edf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36edf8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x36edf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36edfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36edfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE00u;
        // 0x36ee04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE08u;
}
