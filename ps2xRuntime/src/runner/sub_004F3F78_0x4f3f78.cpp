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

// Function: sub_004F3F78
// Address: 0x4f3f78 - 0x4f3fd8
void sub_004F3F78_0x4f3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3F78_0x4f3f78");
#endif

    switch (ctx->pc) {
        case 0x4f3f78u: goto label_4f3f78;
        case 0x4f3f7cu: goto label_4f3f7c;
        case 0x4f3f80u: goto label_4f3f80;
        case 0x4f3f84u: goto label_4f3f84;
        case 0x4f3f88u: goto label_4f3f88;
        case 0x4f3f8cu: goto label_4f3f8c;
        case 0x4f3f90u: goto label_4f3f90;
        case 0x4f3f94u: goto label_4f3f94;
        case 0x4f3f98u: goto label_4f3f98;
        case 0x4f3f9cu: goto label_4f3f9c;
        case 0x4f3fa0u: goto label_4f3fa0;
        case 0x4f3fa4u: goto label_4f3fa4;
        case 0x4f3fa8u: goto label_4f3fa8;
        case 0x4f3facu: goto label_4f3fac;
        case 0x4f3fb0u: goto label_4f3fb0;
        case 0x4f3fb4u: goto label_4f3fb4;
        case 0x4f3fb8u: goto label_4f3fb8;
        case 0x4f3fbcu: goto label_4f3fbc;
        case 0x4f3fc0u: goto label_4f3fc0;
        case 0x4f3fc4u: goto label_4f3fc4;
        case 0x4f3fc8u: goto label_4f3fc8;
        case 0x4f3fccu: goto label_4f3fcc;
        case 0x4f3fd0u: goto label_4f3fd0;
        case 0x4f3fd4u: goto label_4f3fd4;
        default: break;
    }

    ctx->pc = 0x4f3f78u;

label_4f3f78:
    // 0x4f3f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f3f7c:
    // 0x4f3f7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f3f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f3f80:
    // 0x4f3f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f3f84:
    // 0x4f3f84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f3f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3f88:
    // 0x4f3f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3f8c:
    // 0x4f3f8c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f3f90:
    if (ctx->pc == 0x4F3F90u) {
        ctx->pc = 0x4F3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F8Cu;
        // 0x4f3f90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3F94u;
        goto label_4f3f94;
    }
    ctx->pc = 0x4F3F8Cu;
    {
        const bool branch_taken_0x4f3f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F8Cu;
        // 0x4f3f90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3f8c) {
            ctx->pc = 0x4F3FC4u;
            goto label_4f3fc4;
        }
    }
    ctx->pc = 0x4F3F94u;
label_4f3f94:
    // 0x4f3f94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f3f98:
    // 0x4f3f98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f3f9c:
    // 0x4f3f9c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f3f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f3fa0:
    // 0x4f3fa0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f3fa4:
    // 0x4f3fa4: 0x60f809  jalr        $v1
label_4f3fa8:
    if (ctx->pc == 0x4F3FA8u) {
        ctx->pc = 0x4F3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FA4u;
        // 0x4f3fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3FACu;
        goto label_4f3fac;
    }
    ctx->pc = 0x4F3FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3FACu);
        ctx->pc = 0x4F3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FA4u;
        // 0x4f3fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3FA4u, 0x4F3FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3FACu;
label_4f3fac:
    // 0x4f3fac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f3facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f3fb0:
    // 0x4f3fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f3fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3fb4:
    // 0x4f3fb4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x4f3fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_4f3fb8:
    // 0x4f3fb8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4f3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4f3fbc:
    // 0x4f3fbc: 0x60f809  jalr        $v1
label_4f3fc0:
    if (ctx->pc == 0x4F3FC0u) {
        ctx->pc = 0x4F3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FBCu;
        // 0x4f3fc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3FC4u;
        goto label_4f3fc4;
    }
    ctx->pc = 0x4F3FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3FC4u);
        ctx->pc = 0x4F3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FBCu;
        // 0x4f3fc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3FBCu, 0x4F3FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3FC4u;
label_4f3fc4:
    // 0x4f3fc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f3fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3fc8:
    // 0x4f3fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3fcc:
    // 0x4f3fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3fd0:
    // 0x4f3fd0: 0x3e00008  jr          $ra
label_4f3fd4:
    if (ctx->pc == 0x4F3FD4u) {
        ctx->pc = 0x4F3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FD0u;
        // 0x4f3fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3FD8u;
        goto label_fallthrough_0x4f3fd0;
    }
    ctx->pc = 0x4F3FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FD0u;
        // 0x4f3fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f3fd0:
    ctx->pc = 0x4F3FD8u;
}
