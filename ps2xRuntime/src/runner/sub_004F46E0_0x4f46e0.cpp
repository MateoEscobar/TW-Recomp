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

// Function: sub_004F46E0
// Address: 0x4f46e0 - 0x4f4740
void sub_004F46E0_0x4f46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F46E0_0x4f46e0");
#endif

    switch (ctx->pc) {
        case 0x4f46e0u: goto label_4f46e0;
        case 0x4f46e4u: goto label_4f46e4;
        case 0x4f46e8u: goto label_4f46e8;
        case 0x4f46ecu: goto label_4f46ec;
        case 0x4f46f0u: goto label_4f46f0;
        case 0x4f46f4u: goto label_4f46f4;
        case 0x4f46f8u: goto label_4f46f8;
        case 0x4f46fcu: goto label_4f46fc;
        case 0x4f4700u: goto label_4f4700;
        case 0x4f4704u: goto label_4f4704;
        case 0x4f4708u: goto label_4f4708;
        case 0x4f470cu: goto label_4f470c;
        case 0x4f4710u: goto label_4f4710;
        case 0x4f4714u: goto label_4f4714;
        case 0x4f4718u: goto label_4f4718;
        case 0x4f471cu: goto label_4f471c;
        case 0x4f4720u: goto label_4f4720;
        case 0x4f4724u: goto label_4f4724;
        case 0x4f4728u: goto label_4f4728;
        case 0x4f472cu: goto label_4f472c;
        case 0x4f4730u: goto label_4f4730;
        case 0x4f4734u: goto label_4f4734;
        case 0x4f4738u: goto label_4f4738;
        case 0x4f473cu: goto label_4f473c;
        default: break;
    }

    ctx->pc = 0x4f46e0u;

label_4f46e0:
    // 0x4f46e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f46e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f46e4:
    // 0x4f46e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f46e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f46e8:
    // 0x4f46e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f46ec:
    // 0x4f46ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f46ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f46f0:
    // 0x4f46f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f46f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f46f4:
    // 0x4f46f4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f46f8:
    if (ctx->pc == 0x4F46F8u) {
        ctx->pc = 0x4F46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46F4u;
        // 0x4f46f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F46FCu;
        goto label_4f46fc;
    }
    ctx->pc = 0x4F46F4u;
    {
        const bool branch_taken_0x4f46f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46F4u;
        // 0x4f46f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f46f4) {
            ctx->pc = 0x4F472Cu;
            goto label_4f472c;
        }
    }
    ctx->pc = 0x4F46FCu;
label_4f46fc:
    // 0x4f46fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4700:
    // 0x4f4700: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f4700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f4704:
    // 0x4f4704: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f4704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f4708:
    // 0x4f4708: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f4708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f470c:
    // 0x4f470c: 0x60f809  jalr        $v1
label_4f4710:
    if (ctx->pc == 0x4F4710u) {
        ctx->pc = 0x4F4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F470Cu;
        // 0x4f4710: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4714u;
        goto label_4f4714;
    }
    ctx->pc = 0x4F470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4714u);
        ctx->pc = 0x4F4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F470Cu;
        // 0x4f4710: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F470Cu, 0x4F4714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4714u;
label_4f4714:
    // 0x4f4714: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f4718:
    // 0x4f4718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f471c:
    // 0x4f471c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x4f471cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_4f4720:
    // 0x4f4720: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4f4720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4f4724:
    // 0x4f4724: 0x60f809  jalr        $v1
label_4f4728:
    if (ctx->pc == 0x4F4728u) {
        ctx->pc = 0x4F4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4724u;
        // 0x4f4728: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F472Cu;
        goto label_4f472c;
    }
    ctx->pc = 0x4F4724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F472Cu);
        ctx->pc = 0x4F4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4724u;
        // 0x4f4728: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4724u, 0x4F472Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F472Cu;
label_4f472c:
    // 0x4f472c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f472cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4730:
    // 0x4f4730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f4730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4734:
    // 0x4f4734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4738:
    // 0x4f4738: 0x3e00008  jr          $ra
label_4f473c:
    if (ctx->pc == 0x4F473Cu) {
        ctx->pc = 0x4F473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4738u;
        // 0x4f473c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4740u;
        goto label_fallthrough_0x4f4738;
    }
    ctx->pc = 0x4F4738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4738u;
        // 0x4f473c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f4738:
    ctx->pc = 0x4F4740u;
}
