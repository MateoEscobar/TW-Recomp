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

// Function: sub_004F2EB0
// Address: 0x4f2eb0 - 0x4f2f10
void sub_004F2EB0_0x4f2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2EB0_0x4f2eb0");
#endif

    switch (ctx->pc) {
        case 0x4f2eb0u: goto label_4f2eb0;
        case 0x4f2eb4u: goto label_4f2eb4;
        case 0x4f2eb8u: goto label_4f2eb8;
        case 0x4f2ebcu: goto label_4f2ebc;
        case 0x4f2ec0u: goto label_4f2ec0;
        case 0x4f2ec4u: goto label_4f2ec4;
        case 0x4f2ec8u: goto label_4f2ec8;
        case 0x4f2eccu: goto label_4f2ecc;
        case 0x4f2ed0u: goto label_4f2ed0;
        case 0x4f2ed4u: goto label_4f2ed4;
        case 0x4f2ed8u: goto label_4f2ed8;
        case 0x4f2edcu: goto label_4f2edc;
        case 0x4f2ee0u: goto label_4f2ee0;
        case 0x4f2ee4u: goto label_4f2ee4;
        case 0x4f2ee8u: goto label_4f2ee8;
        case 0x4f2eecu: goto label_4f2eec;
        case 0x4f2ef0u: goto label_4f2ef0;
        case 0x4f2ef4u: goto label_4f2ef4;
        case 0x4f2ef8u: goto label_4f2ef8;
        case 0x4f2efcu: goto label_4f2efc;
        case 0x4f2f00u: goto label_4f2f00;
        case 0x4f2f04u: goto label_4f2f04;
        case 0x4f2f08u: goto label_4f2f08;
        case 0x4f2f0cu: goto label_4f2f0c;
        default: break;
    }

    ctx->pc = 0x4f2eb0u;

label_4f2eb0:
    // 0x4f2eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f2eb4:
    // 0x4f2eb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f2eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f2eb8:
    // 0x4f2eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f2ebc:
    // 0x4f2ebc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f2ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f2ec0:
    // 0x4f2ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2ec4:
    // 0x4f2ec4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f2ec8:
    if (ctx->pc == 0x4F2EC8u) {
        ctx->pc = 0x4F2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EC4u;
        // 0x4f2ec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2ECCu;
        goto label_4f2ecc;
    }
    ctx->pc = 0x4F2EC4u;
    {
        const bool branch_taken_0x4f2ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EC4u;
        // 0x4f2ec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2ec4) {
            ctx->pc = 0x4F2EFCu;
            goto label_4f2efc;
        }
    }
    ctx->pc = 0x4F2ECCu;
label_4f2ecc:
    // 0x4f2ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f2ed0:
    // 0x4f2ed0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f2ed4:
    // 0x4f2ed4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f2ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f2ed8:
    // 0x4f2ed8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f2edc:
    // 0x4f2edc: 0x60f809  jalr        $v1
label_4f2ee0:
    if (ctx->pc == 0x4F2EE0u) {
        ctx->pc = 0x4F2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EDCu;
        // 0x4f2ee0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2EE4u;
        goto label_4f2ee4;
    }
    ctx->pc = 0x4F2EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F2EE4u);
        ctx->pc = 0x4F2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EDCu;
        // 0x4f2ee0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2EDCu, 0x4F2EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2EE4u;
label_4f2ee4:
    // 0x4f2ee4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f2ee8:
    // 0x4f2ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f2ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2eec:
    // 0x4f2eec: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x4f2eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_4f2ef0:
    // 0x4f2ef0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4f2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4f2ef4:
    // 0x4f2ef4: 0x60f809  jalr        $v1
label_4f2ef8:
    if (ctx->pc == 0x4F2EF8u) {
        ctx->pc = 0x4F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EF4u;
        // 0x4f2ef8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2EFCu;
        goto label_4f2efc;
    }
    ctx->pc = 0x4F2EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F2EFCu);
        ctx->pc = 0x4F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EF4u;
        // 0x4f2ef8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2EF4u, 0x4F2EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2EFCu;
label_4f2efc:
    // 0x4f2efc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f2efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f2f00:
    // 0x4f2f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2f04:
    // 0x4f2f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2f08:
    // 0x4f2f08: 0x3e00008  jr          $ra
label_4f2f0c:
    if (ctx->pc == 0x4F2F0Cu) {
        ctx->pc = 0x4F2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2F08u;
        // 0x4f2f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2F10u;
        goto label_fallthrough_0x4f2f08;
    }
    ctx->pc = 0x4F2F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2F08u;
        // 0x4f2f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f2f08:
    ctx->pc = 0x4F2F10u;
}
