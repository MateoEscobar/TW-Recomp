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

// Function: sub_001C7408
// Address: 0x1c7408 - 0x1c7488
void sub_001C7408_0x1c7408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7408_0x1c7408");
#endif

    switch (ctx->pc) {
        case 0x1c7444u: goto label_1c7444;
        case 0x1c7458u: goto label_1c7458;
        default: break;
    }

    ctx->pc = 0x1c7408u;

    // 0x1c7408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c740c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7410: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c7410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c7414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c741c: 0x8e220504  lw          $v0, 0x504($s1)
    ctx->pc = 0x1c741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1284)));
    // 0x1c7420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7420u;
    {
        const bool branch_taken_0x1c7420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7420u;
        // 0x1c7424: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7420) {
            ctx->pc = 0x1C7430u;
            goto label_1c7430;
        }
    }
    ctx->pc = 0x1C7428u;
    // 0x1c7428: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C7428u;
    {
        const bool branch_taken_0x1c7428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7428u;
        // 0x1c742c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7428) {
            ctx->pc = 0x1C7470u;
            goto label_1c7470;
        }
    }
    ctx->pc = 0x1C7430u;
label_1c7430:
    // 0x1c7430: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C7430u;
    {
        const bool branch_taken_0x1c7430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7430u;
        // 0x1c7434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7430) {
            ctx->pc = 0x1C7470u;
            goto label_1c7470;
        }
    }
    ctx->pc = 0x1C7438u;
    // 0x1c7438: 0xae200504  sw          $zero, 0x504($s1)
    ctx->pc = 0x1c7438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1284), GPR_U32(ctx, 0));
    // 0x1c743c: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x1C743Cu;
    SET_GPR_U32(ctx, 31, 0x1C7444u);
    ctx->pc = 0x1C7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C743Cu;
    // 0x1c7440: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1C743Cu, 0x1C7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7444u;
label_1c7444:
    // 0x1c7444: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c7444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c7448: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c7448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c744c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1c744cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1c7450: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1C7450u;
    SET_GPR_U32(ctx, 31, 0x1C7458u);
    ctx->pc = 0x1C7454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7450u;
    // 0x1c7454: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1C7450u, 0x1C7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7458u;
label_1c7458:
    // 0x1c7458: 0xae220500  sw          $v0, 0x500($s1)
    ctx->pc = 0x1c7458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1280), GPR_U32(ctx, 2));
    // 0x1c745c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c7460: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1c7460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1c7464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7468: 0x8e0304f0  lw          $v1, 0x4F0($s0)
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x1c746c: 0xae2304fc  sw          $v1, 0x4FC($s1)
    ctx->pc = 0x1c746cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1276), GPR_U32(ctx, 3));
label_1c7470:
    // 0x1c7470: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c7470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c747c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C747Cu;
        // 0x1c7480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7484u;
    // 0x1c7484: 0x0  nop
    ctx->pc = 0x1c7484u;
    // NOP
    ctx->pc = 0x1c7488u;
}
