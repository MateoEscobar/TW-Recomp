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

// Function: sub_00198190
// Address: 0x198190 - 0x198220
void sub_00198190_0x198190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198190_0x198190");
#endif

    switch (ctx->pc) {
        case 0x1981bcu: goto label_1981bc;
        case 0x1981d8u: goto label_1981d8;
        case 0x1981e8u: goto label_1981e8;
        case 0x198200u: goto label_198200;
        default: break;
    }

    ctx->pc = 0x198190u;

    // 0x198190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198194: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x198194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x198198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19819c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1981a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1981a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1981a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1981a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1981A8u;
    {
        const bool branch_taken_0x1981a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1981ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981A8u;
        // 0x1981ac: 0x8cb10004  lw          $s1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981a8) {
            ctx->pc = 0x1981C4u;
            goto label_1981c4;
        }
    }
    ctx->pc = 0x1981B0u;
    // 0x1981b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1981b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1981b4: 0xc10c978  jal         func_4325E0
    ctx->pc = 0x1981B4u;
    SET_GPR_U32(ctx, 31, 0x1981BCu);
    ctx->pc = 0x1981B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1981B4u;
    // 0x1981b8: 0x248436f8  addiu       $a0, $a0, 0x36F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x1981B4u, 0x1981BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981BCu;
label_1981bc:
    // 0x1981bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1981BCu;
    {
        const bool branch_taken_0x1981bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981BCu;
        // 0x1981c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981bc) {
            ctx->pc = 0x198208u;
            goto label_198208;
        }
    }
    ctx->pc = 0x1981C4u;
label_1981c4:
    // 0x1981c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1981c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1981c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1981C8u;
    {
        const bool branch_taken_0x1981c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1981CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981C8u;
        // 0x1981cc: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981c8) {
            ctx->pc = 0x1981E0u;
            goto label_1981e0;
        }
    }
    ctx->pc = 0x1981D0u;
    // 0x1981d0: 0xc10c978  jal         func_4325E0
    ctx->pc = 0x1981D0u;
    SET_GPR_U32(ctx, 31, 0x1981D8u);
    ctx->pc = 0x1981D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1981D0u;
    // 0x1981d4: 0x24843728  addiu       $a0, $a0, 0x3728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x1981D0u, 0x1981D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981D8u;
label_1981d8:
    // 0x1981d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1981D8u;
    {
        const bool branch_taken_0x1981d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D8u;
        // 0x1981dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981d8) {
            ctx->pc = 0x198208u;
            goto label_198208;
        }
    }
    ctx->pc = 0x1981E0u;
label_1981e0:
    // 0x1981e0: 0xc1194f6  jal         func_4653D8
    ctx->pc = 0x1981E0u;
    SET_GPR_U32(ctx, 31, 0x1981E8u);
    ctx->pc = 0x1981E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1981E0u;
    // 0x1981e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4653D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4653D8u, 0x1981E0u, 0x1981E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981E8u;
label_1981e8:
    // 0x1981e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1981e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1981ec: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1981ECu;
    {
        const bool branch_taken_0x1981ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1981F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981ECu;
        // 0x1981f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981ec) {
            ctx->pc = 0x198208u;
            goto label_198208;
        }
    }
    ctx->pc = 0x1981F4u;
    // 0x1981f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1981f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981f8: 0xc119578  jal         func_4655E0
    ctx->pc = 0x1981F8u;
    SET_GPR_U32(ctx, 31, 0x198200u);
    ctx->pc = 0x1981FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1981F8u;
    // 0x1981fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655E0u, 0x1981F8u, 0x198200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198200u;
label_198200:
    // 0x198200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198208:
    // 0x198208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19820c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19820cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198214: 0x3e00008  jr          $ra
    ctx->pc = 0x198214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198214u;
        // 0x198218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19821Cu;
    // 0x19821c: 0x0  nop
    ctx->pc = 0x19821cu;
    // NOP
    ctx->pc = 0x198220u;
}
