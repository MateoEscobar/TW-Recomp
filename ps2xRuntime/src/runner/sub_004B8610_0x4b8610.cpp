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

// Function: sub_004B8610
// Address: 0x4b8610 - 0x4b8660
void sub_004B8610_0x4b8610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8610_0x4b8610");
#endif

    switch (ctx->pc) {
        case 0x4b8634u: goto label_4b8634;
        case 0x4b864cu: goto label_4b864c;
        default: break;
    }

    ctx->pc = 0x4b8610u;

    // 0x4b8610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b8614: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4b8614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4b8618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b8618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b861c: 0x8c625b40  lw          $v0, 0x5B40($v1)
    ctx->pc = 0x4b861cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715B40u));
    // 0x4b8620: 0x24705b40  addiu       $s0, $v1, 0x5B40
    ctx->pc = 0x4b8620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x4b8624: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B8624u;
    {
        const bool branch_taken_0x4b8624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8624u;
        // 0x4b8628: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8624) {
            ctx->pc = 0x4B864Cu;
            goto label_4b864c;
        }
    }
    ctx->pc = 0x4B862Cu;
    // 0x4b862c: 0xc12bfe4  jal         func_4AFF90
    ctx->pc = 0x4B862Cu;
    SET_GPR_U32(ctx, 31, 0x4B8634u);
    ctx->pc = 0x4AFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFF90u, 0x4B862Cu, 0x4B8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8634u;
label_4b8634:
    // 0x4b8634: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4b8634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4b8638: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4b8638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4b863c: 0x24a50ec8  addiu       $a1, $a1, 0xEC8
    ctx->pc = 0x4b863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
    // 0x4b8640: 0x24c65b00  addiu       $a2, $a2, 0x5B00
    ctx->pc = 0x4b8640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23296));
    // 0x4b8644: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x4B8644u;
    SET_GPR_U32(ctx, 31, 0x4B864Cu);
    ctx->pc = 0x4B8648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8644u;
    // 0x4b8648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x4B8644u, 0x4B864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B864Cu;
label_4b864c:
    // 0x4b864c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b864cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8658: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8658u;
        // 0x4b865c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8660u;
}
