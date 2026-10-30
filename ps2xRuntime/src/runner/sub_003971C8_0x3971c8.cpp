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

// Function: sub_003971C8
// Address: 0x3971c8 - 0x397230
void sub_003971C8_0x3971c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003971C8_0x3971c8");
#endif

    switch (ctx->pc) {
        case 0x3971e4u: goto label_3971e4;
        case 0x3971f8u: goto label_3971f8;
        case 0x397204u: goto label_397204;
        case 0x397214u: goto label_397214;
        case 0x39721cu: goto label_39721c;
        default: break;
    }

    ctx->pc = 0x3971c8u;

    // 0x3971c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3971c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3971cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3971ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3971d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3971d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3971d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3971d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3971d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3971d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3971dc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3971DCu;
    SET_GPR_U32(ctx, 31, 0x3971E4u);
    ctx->pc = 0x3971E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3971DCu;
    // 0x3971e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3971DCu, 0x3971E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971E4u;
label_3971e4:
    // 0x3971e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3971e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3971e8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3971E8u;
    {
        const bool branch_taken_0x3971e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3971ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971E8u;
        // 0x3971ec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3971e8) {
            ctx->pc = 0x39721Cu;
            goto label_39721c;
        }
    }
    ctx->pc = 0x3971F0u;
    // 0x3971f0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3971F0u;
    SET_GPR_U32(ctx, 31, 0x3971F8u);
    ctx->pc = 0x3971F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3971F0u;
    // 0x3971f4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3971F0u, 0x3971F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971F8u;
label_3971f8:
    // 0x3971f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3971f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3971fc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3971FCu;
    SET_GPR_U32(ctx, 31, 0x397204u);
    ctx->pc = 0x397200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3971FCu;
    // 0x397200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3971FCu, 0x397204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397204u;
label_397204:
    // 0x397204: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x397208: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x397208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x39720c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39720Cu;
    SET_GPR_U32(ctx, 31, 0x397214u);
    ctx->pc = 0x397210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39720Cu;
    // 0x397210: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39720Cu, 0x397214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397214u;
label_397214:
    // 0x397214: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x397214u;
    SET_GPR_U32(ctx, 31, 0x39721Cu);
    ctx->pc = 0x397218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397214u;
    // 0x397218: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x397214u, 0x39721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39721Cu;
label_39721c:
    // 0x39721c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39721cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397220: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x397220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397228: 0x3e00008  jr          $ra
    ctx->pc = 0x397228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397228u;
        // 0x39722c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397230u;
}
