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

// Function: sub_001C45A0
// Address: 0x1c45a0 - 0x1c4640
void sub_001C45A0_0x1c45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C45A0_0x1c45a0");
#endif

    switch (ctx->pc) {
        case 0x1c45d8u: goto label_1c45d8;
        case 0x1c45e8u: goto label_1c45e8;
        case 0x1c45f4u: goto label_1c45f4;
        case 0x1c4600u: goto label_1c4600;
        case 0x1c4610u: goto label_1c4610;
        case 0x1c4618u: goto label_1c4618;
        default: break;
    }

    ctx->pc = 0x1c45a0u;

    // 0x1c45a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c45a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c45a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c45a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c45a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c45a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c45ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c45acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c45b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c45b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c45b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c45b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c45bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c45c0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C45C0u;
    {
        const bool branch_taken_0x1c45c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45C0u;
        // 0x1c45c4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45c0) {
            ctx->pc = 0x1C4618u;
            goto label_1c4618;
        }
    }
    ctx->pc = 0x1C45C8u;
    // 0x1c45c8: 0x59180  sll         $s2, $a1, 6
    ctx->pc = 0x1c45c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1c45cc: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x1c45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c45d0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C45D0u;
    SET_GPR_U32(ctx, 31, 0x1C45D8u);
    ctx->pc = 0x1C45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45D0u;
    // 0x1c45d4: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C45D0u, 0x1C45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45D8u;
label_1c45d8:
    // 0x1c45d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C45D8u;
    {
        const bool branch_taken_0x1c45d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45D8u;
        // 0x1c45dc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45d8) {
            ctx->pc = 0x1C4618u;
            goto label_1c4618;
        }
    }
    ctx->pc = 0x1C45E0u;
    // 0x1c45e0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x1C45E0u;
    SET_GPR_U32(ctx, 31, 0x1C45E8u);
    ctx->pc = 0x1C45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45E0u;
    // 0x1c45e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1C45E0u, 0x1C45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45E8u;
label_1c45e8:
    // 0x1c45e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1c45ec: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x1C45ECu;
    SET_GPR_U32(ctx, 31, 0x1C45F4u);
    ctx->pc = 0x1C45F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45ECu;
    // 0x1c45f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1C45ECu, 0x1C45F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45F4u;
label_1c45f4:
    // 0x1c45f4: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x1c45f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c45f8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C45F8u;
    SET_GPR_U32(ctx, 31, 0x1C4600u);
    ctx->pc = 0x1C45FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45F8u;
    // 0x1c45fc: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C45F8u, 0x1C4600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4600u;
label_1c4600:
    // 0x1c4600: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c4600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1c4604: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1c4604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c4608: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1C4608u;
    SET_GPR_U32(ctx, 31, 0x1C4610u);
    ctx->pc = 0x1C460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4608u;
    // 0x1c460c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1C4608u, 0x1C4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4610u;
label_1c4610:
    // 0x1c4610: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1C4610u;
    SET_GPR_U32(ctx, 31, 0x1C4618u);
    ctx->pc = 0x1C4614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4610u;
    // 0x1c4614: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1C4610u, 0x1C4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4618u;
label_1c4618:
    // 0x1c4618: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c4618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c461c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c461cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4624: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c4624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c462c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C462Cu;
        // 0x1c4630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4634u;
    // 0x1c4634: 0x0  nop
    ctx->pc = 0x1c4634u;
    // NOP
    // 0x1c4638: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c4638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c463c: 0x0  nop
    ctx->pc = 0x1c463cu;
    // NOP
    ctx->pc = 0x1c4640u;
}
