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

// Function: sub_00183B88
// Address: 0x183b88 - 0x183c40
void sub_00183B88_0x183b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183B88_0x183b88");
#endif

    switch (ctx->pc) {
        case 0x183bb0u: goto label_183bb0;
        case 0x183be4u: goto label_183be4;
        case 0x183c38u: goto label_183c38;
        default: break;
    }

    ctx->pc = 0x183b88u;

    // 0x183b88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183b8c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x183b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x183b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x183b94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x183b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x183b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x183b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ba0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183ba4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ba8: 0xc060d90  jal         func_183640
    ctx->pc = 0x183BA8u;
    SET_GPR_U32(ctx, 31, 0x183BB0u);
    ctx->pc = 0x183BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BA8u;
    // 0x183bac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183640u, 0x183BA8u, 0x183BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BB0u;
label_183bb0:
    // 0x183bb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bb4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x183bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x183bb8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x183BB8u;
    {
        const bool branch_taken_0x183bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BB8u;
        // 0x183bbc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bb8) {
            ctx->pc = 0x183C40u;
            return;
        }
    }
    ctx->pc = 0x183BC0u;
    // 0x183bc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x183bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x183bc4: 0x24422950  addiu       $v0, $v0, 0x2950
    ctx->pc = 0x183bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10576));
    // 0x183bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x183bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183bcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x183bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183bd0: 0x800008  jr          $a0
    ctx->pc = 0x183BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183BD8u: goto label_183bd8;
            case 0x183BECu: goto label_183bec;
            case 0x183C04u: goto label_183c04;
            case 0x183C1Cu: goto label_183c1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x183BD8u;
label_183bd8:
    // 0x183bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bdc: 0xc060dd8  jal         func_183760
    ctx->pc = 0x183BDCu;
    SET_GPR_U32(ctx, 31, 0x183BE4u);
    ctx->pc = 0x183BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BDCu;
    // 0x183be0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183760u, 0x183BDCu, 0x183BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BE4u;
label_183be4:
    // 0x183be4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x183BE4u;
    {
        const bool branch_taken_0x183be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BE4u;
        // 0x183be8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183be4) {
            ctx->pc = 0x183C48u;
            return;
        }
    }
    ctx->pc = 0x183BECu;
label_183bec:
    // 0x183bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x183bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183bfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x183BFCu;
    {
        const bool branch_taken_0x183bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BFCu;
        // 0x183c00: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bfc) {
            ctx->pc = 0x183C30u;
            goto label_183c30;
        }
    }
    ctx->pc = 0x183C04u;
label_183c04:
    // 0x183c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x183c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183c10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x183C14u;
    {
        const bool branch_taken_0x183c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C14u;
        // 0x183c18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c14) {
            ctx->pc = 0x183C30u;
            goto label_183c30;
        }
    }
    ctx->pc = 0x183C1Cu;
label_183c1c:
    // 0x183c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183c28: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x183c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183c2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x183c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183c30:
    // 0x183c30: 0xc060e0e  jal         func_183838
    ctx->pc = 0x183C30u;
    SET_GPR_U32(ctx, 31, 0x183C38u);
    ctx->pc = 0x183C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C30u;
    // 0x183c34: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183838u, 0x183C30u, 0x183C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C38u;
label_183c38:
    // 0x183c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183C38u;
    {
        const bool branch_taken_0x183c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C38u;
        // 0x183c3c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c38) {
            ctx->pc = 0x183C48u;
            return;
        }
    }
    ctx->pc = 0x183C40u;
}
