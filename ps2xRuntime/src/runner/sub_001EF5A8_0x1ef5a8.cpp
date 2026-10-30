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

// Function: sub_001EF5A8
// Address: 0x1ef5a8 - 0x1ef660
void sub_001EF5A8_0x1ef5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF5A8_0x1ef5a8");
#endif

    switch (ctx->pc) {
        case 0x1ef61cu: goto label_1ef61c;
        case 0x1ef62cu: goto label_1ef62c;
        case 0x1ef640u: goto label_1ef640;
        default: break;
    }

    ctx->pc = 0x1ef5a8u;

    // 0x1ef5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef5ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ef5b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef5b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef5bc: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x1ef5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ef5c0: 0x26030158  addiu       $v1, $s0, 0x158
    ctx->pc = 0x1ef5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1ef5c4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1ef5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ef5c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ef5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef5cc: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF5CCu;
    {
        const bool branch_taken_0x1ef5cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5CCu;
        // 0x1ef5d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5cc) {
            ctx->pc = 0x1EF634u;
            goto label_1ef634;
        }
    }
    ctx->pc = 0x1EF5D4u;
    // 0x1ef5d4: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1ef5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ef5d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF5D8u;
    {
        const bool branch_taken_0x1ef5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5D8u;
        // 0x1ef5dc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5d8) {
            ctx->pc = 0x1EF5F8u;
            goto label_1ef5f8;
        }
    }
    ctx->pc = 0x1EF5E0u;
    // 0x1ef5e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ef5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef5e4: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x1ef5e4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ef5e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ef5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef5ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ef5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef5f0: 0x10670004  beq         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF5F0u;
    {
        const bool branch_taken_0x1ef5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1EF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5F0u;
        // 0x1ef5f4: 0x2cc20002  sltiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5f0) {
            ctx->pc = 0x1EF604u;
            goto label_1ef604;
        }
    }
    ctx->pc = 0x1EF5F8u;
label_1ef5f8:
    // 0x1ef5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef5fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF5FCu;
    {
        const bool branch_taken_0x1ef5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5FCu;
        // 0x1ef600: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5fc) {
            ctx->pc = 0x1EF614u;
            goto label_1ef614;
        }
    }
    ctx->pc = 0x1EF604u;
label_1ef604:
    // 0x1ef604: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF604u;
    {
        const bool branch_taken_0x1ef604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF604u;
        // 0x1ef608: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef604) {
            ctx->pc = 0x1EF634u;
            goto label_1ef634;
        }
    }
    ctx->pc = 0x1EF60Cu;
    // 0x1ef60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef610: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x1ef610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_1ef614:
    // 0x1ef614: 0xc07bd24  jal         func_1EF490
    ctx->pc = 0x1EF614u;
    SET_GPR_U32(ctx, 31, 0x1EF61Cu);
    ctx->pc = 0x1EF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF490u, 0x1EF614u, 0x1EF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF61Cu;
label_1ef61c:
    // 0x1ef61c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ef61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1ef620: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ef620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef624: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1EF624u;
    SET_GPR_U32(ctx, 31, 0x1EF62Cu);
    ctx->pc = 0x1EF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF624u;
    // 0x1ef628: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EF624u, 0x1EF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF62Cu;
label_1ef62c:
    // 0x1ef62c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF62Cu;
    {
        const bool branch_taken_0x1ef62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF62Cu;
        // 0x1ef630: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef62c) {
            ctx->pc = 0x1EF650u;
            goto label_1ef650;
        }
    }
    ctx->pc = 0x1EF634u;
label_1ef634:
    // 0x1ef634: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ef634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ef638: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1EF638u;
    SET_GPR_U32(ctx, 31, 0x1EF640u);
    ctx->pc = 0x1EF63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF638u;
    // 0x1ef63c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EF638u, 0x1EF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF640u;
label_1ef640:
    // 0x1ef640: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1ef640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ef644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef648: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x1ef648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x1ef64c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ef64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef650:
    // 0x1ef650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef658: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF658u;
        // 0x1ef65c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF660u;
}
