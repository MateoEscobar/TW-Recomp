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

// Function: sub_004CB4A8
// Address: 0x4cb4a8 - 0x4cb518
void sub_004CB4A8_0x4cb4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB4A8_0x4cb4a8");
#endif

    switch (ctx->pc) {
        case 0x4cb4ccu: goto label_4cb4cc;
        case 0x4cb4f4u: goto label_4cb4f4;
        default: break;
    }

    ctx->pc = 0x4cb4a8u;

    // 0x4cb4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cb4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cb4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cb4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cb4b0: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4cb4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4cb4b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4cb4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4cb4b8: 0x8e042840  lw          $a0, 0x2840($s0)
    ctx->pc = 0x4cb4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532840u));
    // 0x4cb4bc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CB4BCu;
    {
        const bool branch_taken_0x4cb4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb4bc) {
            ctx->pc = 0x4CB4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB4BCu;
            // 0x4cb4c0: 0x3c100053  lui         $s0, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CB4E0u;
            goto label_4cb4e0;
        }
    }
    ctx->pc = 0x4CB4C4u;
    // 0x4cb4c4: 0xc132364  jal         func_4C8D90
    ctx->pc = 0x4CB4C4u;
    SET_GPR_U32(ctx, 31, 0x4CB4CCu);
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4CB4C4u, 0x4CB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB4CCu;
label_4cb4cc:
    // 0x4cb4cc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4cb4d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4cb4d4: 0xac6238d4  sw          $v0, 0x38D4($v1)
    ctx->pc = 0x4cb4d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5338D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5338D4u, _value); } while (0);
    // 0x4cb4d8: 0xae002840  sw          $zero, 0x2840($s0)
    ctx->pc = 0x4cb4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10304), GPR_U32(ctx, 0));
    // 0x4cb4dc: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4cb4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
label_4cb4e0:
    // 0x4cb4e0: 0x8e042854  lw          $a0, 0x2854($s0)
    ctx->pc = 0x4cb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10324)));
    // 0x4cb4e4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CB4E4u;
    {
        const bool branch_taken_0x4cb4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb4e4) {
            ctx->pc = 0x4CB4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB4E4u;
            // 0x4cb4e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CB508u;
            goto label_4cb508;
        }
    }
    ctx->pc = 0x4CB4ECu;
    // 0x4cb4ec: 0xc132364  jal         func_4C8D90
    ctx->pc = 0x4CB4ECu;
    SET_GPR_U32(ctx, 31, 0x4CB4F4u);
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4CB4ECu, 0x4CB4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB4F4u;
label_4cb4f4:
    // 0x4cb4f4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cb4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4cb4f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4cb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4cb4fc: 0xac6238d8  sw          $v0, 0x38D8($v1)
    ctx->pc = 0x4cb4fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5338D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5338D8u, _value); } while (0);
    // 0x4cb500: 0xae002854  sw          $zero, 0x2854($s0)
    ctx->pc = 0x4cb500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10324), GPR_U32(ctx, 0));
    // 0x4cb504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cb508:
    // 0x4cb508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cb508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb50c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB50Cu;
        // 0x4cb510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB514u;
    // 0x4cb514: 0x0  nop
    ctx->pc = 0x4cb514u;
    // NOP
    ctx->pc = 0x4cb518u;
}
