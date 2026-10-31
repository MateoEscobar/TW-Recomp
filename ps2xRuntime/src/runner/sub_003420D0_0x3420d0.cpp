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

// Function: sub_003420D0
// Address: 0x3420d0 - 0x342130
void sub_003420D0_0x3420d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003420D0_0x3420d0");
#endif

    switch (ctx->pc) {
        case 0x3420fcu: goto label_3420fc;
        case 0x342118u: goto label_342118;
        default: break;
    }

    ctx->pc = 0x3420d0u;

    // 0x3420d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3420d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3420d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3420d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3420d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3420d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3420dc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3420DCu;
    {
        const bool branch_taken_0x3420dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3420E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420DCu;
        // 0x3420e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420dc) {
            ctx->pc = 0x342104u;
            goto label_342104;
        }
    }
    ctx->pc = 0x3420E4u;
    // 0x3420e4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x3420e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3420e8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3420E8u;
    {
        const bool branch_taken_0x3420e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3420e8) {
            ctx->pc = 0x3420ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3420E8u;
            // 0x3420ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342120u;
            goto label_342120;
        }
    }
    ctx->pc = 0x3420F0u;
    // 0x3420f0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3420f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x3420f4: 0xc0cf49e  jal         func_33D278
    ctx->pc = 0x3420F4u;
    SET_GPR_U32(ctx, 31, 0x3420FCu);
    ctx->pc = 0x3420F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420F4u;
    // 0x3420f8: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D278u, 0x3420F4u, 0x3420FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420FCu;
label_3420fc:
    // 0x3420fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3420FCu;
    {
        const bool branch_taken_0x3420fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420FCu;
        // 0x342100: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420fc) {
            ctx->pc = 0x34211Cu;
            goto label_34211c;
        }
    }
    ctx->pc = 0x342104u;
label_342104:
    // 0x342104: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x342104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x342108: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342108u;
    {
        const bool branch_taken_0x342108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342108u;
        // 0x34210c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342108) {
            ctx->pc = 0x342118u;
            goto label_342118;
        }
    }
    ctx->pc = 0x342110u;
    // 0x342110: 0xc0cf4b2  jal         func_33D2C8
    ctx->pc = 0x342110u;
    SET_GPR_U32(ctx, 31, 0x342118u);
    ctx->pc = 0x342114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342110u;
    // 0x342114: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2C8u, 0x342110u, 0x342118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342118u;
label_342118:
    // 0x342118: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x342118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_34211c:
    // 0x34211c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34211cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342120:
    // 0x342120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342124: 0x3e00008  jr          $ra
    ctx->pc = 0x342124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342124u;
        // 0x342128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34212Cu;
    // 0x34212c: 0x0  nop
    ctx->pc = 0x34212cu;
    // NOP
    ctx->pc = 0x342130u;
}
