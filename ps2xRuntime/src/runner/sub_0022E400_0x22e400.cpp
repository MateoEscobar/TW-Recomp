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

// Function: sub_0022E400
// Address: 0x22e400 - 0x22e4c0
void sub_0022E400_0x22e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E400_0x22e400");
#endif

    switch (ctx->pc) {
        case 0x22e42cu: goto label_22e42c;
        case 0x22e444u: goto label_22e444;
        case 0x22e44cu: goto label_22e44c;
        case 0x22e464u: goto label_22e464;
        case 0x22e46cu: goto label_22e46c;
        case 0x22e484u: goto label_22e484;
        case 0x22e48cu: goto label_22e48c;
        case 0x22e4a8u: goto label_22e4a8;
        default: break;
    }

    ctx->pc = 0x22e400u;

    // 0x22e400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e404: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22e408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e40c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e414: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22e414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x22e418: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22e418u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22e41c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22E41Cu;
    {
        const bool branch_taken_0x22e41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E41Cu;
        // 0x22e420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e41c) {
            ctx->pc = 0x22E4A8u;
            goto label_22e4a8;
        }
    }
    ctx->pc = 0x22E424u;
    // 0x22e424: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22E424u;
    SET_GPR_U32(ctx, 31, 0x22E42Cu);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E424u, 0x22E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E42Cu;
label_22e42c:
    // 0x22e42c: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22e42cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22e430: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e434: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E434u;
    {
        const bool branch_taken_0x22e434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E434u;
        // 0x22e438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e434) {
            ctx->pc = 0x22E444u;
            goto label_22e444;
        }
    }
    ctx->pc = 0x22E43Cu;
    // 0x22e43c: 0xc08b808  jal         func_22E020
    ctx->pc = 0x22E43Cu;
    SET_GPR_U32(ctx, 31, 0x22E444u);
    ctx->pc = 0x22E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E43Cu;
    // 0x22e440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E020u, 0x22E43Cu, 0x22E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E444u;
label_22e444:
    // 0x22e444: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22E444u;
    SET_GPR_U32(ctx, 31, 0x22E44Cu);
    ctx->pc = 0x22E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E444u;
    // 0x22e448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E444u, 0x22E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E44Cu;
label_22e44c:
    // 0x22e44c: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22e44cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22e450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e454: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E454u;
    {
        const bool branch_taken_0x22e454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E454u;
        // 0x22e458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e454) {
            ctx->pc = 0x22E464u;
            goto label_22e464;
        }
    }
    ctx->pc = 0x22E45Cu;
    // 0x22e45c: 0xc08b642  jal         func_22D908
    ctx->pc = 0x22E45Cu;
    SET_GPR_U32(ctx, 31, 0x22E464u);
    ctx->pc = 0x22E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E45Cu;
    // 0x22e460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D908u, 0x22E45Cu, 0x22E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E464u;
label_22e464:
    // 0x22e464: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22E464u;
    SET_GPR_U32(ctx, 31, 0x22E46Cu);
    ctx->pc = 0x22E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E464u;
    // 0x22e468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E464u, 0x22E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E46Cu;
label_22e46c:
    // 0x22e46c: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22e46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22e470: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e474: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E474u;
    {
        const bool branch_taken_0x22e474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E474u;
        // 0x22e478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e474) {
            ctx->pc = 0x22E484u;
            goto label_22e484;
        }
    }
    ctx->pc = 0x22E47Cu;
    // 0x22e47c: 0xc08b8cc  jal         func_22E330
    ctx->pc = 0x22E47Cu;
    SET_GPR_U32(ctx, 31, 0x22E484u);
    ctx->pc = 0x22E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E47Cu;
    // 0x22e480: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E330u, 0x22E47Cu, 0x22E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E484u;
label_22e484:
    // 0x22e484: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x22E484u;
    SET_GPR_U32(ctx, 31, 0x22E48Cu);
    ctx->pc = 0x22E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E484u;
    // 0x22e488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E484u, 0x22E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E48Cu;
label_22e48c:
    // 0x22e48c: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22e48cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22e490: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22e494: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E494u;
    {
        const bool branch_taken_0x22e494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e494) {
            ctx->pc = 0x22E498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E494u;
            // 0x22e498: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E4ACu;
            goto label_22e4ac;
        }
    }
    ctx->pc = 0x22E49Cu;
    // 0x22e49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4a0: 0xc08b956  jal         func_22E558
    ctx->pc = 0x22E4A0u;
    SET_GPR_U32(ctx, 31, 0x22E4A8u);
    ctx->pc = 0x22E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4A0u;
    // 0x22e4a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E558u, 0x22E4A0u, 0x22E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4A8u;
label_22e4a8:
    // 0x22e4a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e4ac:
    // 0x22e4ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x22E4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4B4u;
        // 0x22e4b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E4BCu;
    // 0x22e4bc: 0x0  nop
    ctx->pc = 0x22e4bcu;
    // NOP
    ctx->pc = 0x22e4c0u;
}
