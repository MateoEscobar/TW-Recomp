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

// Function: sub_003A4FD0
// Address: 0x3a4fd0 - 0x3a5010
void sub_003A4FD0_0x3a4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4FD0_0x3a4fd0");
#endif

    switch (ctx->pc) {
        case 0x3a4ff0u: goto label_3a4ff0;
        case 0x3a4ffcu: goto label_3a4ffc;
        default: break;
    }

    ctx->pc = 0x3a4fd0u;

    // 0x3a4fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4fd4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a4fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a4fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a4fdc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a4fdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a4fe0: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x3a4fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3a4fe4: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x3a4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    // 0x3a4fe8: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x3A4FE8u;
    SET_GPR_U32(ctx, 31, 0x3A4FF0u);
    ctx->pc = 0x3A4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FE8u;
    // 0x3a4fec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x3A4FE8u, 0x3A4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FF0u;
label_3a4ff0:
    // 0x3a4ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a4ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ff4: 0xc065be4  jal         func_196F90
    ctx->pc = 0x3A4FF4u;
    SET_GPR_U32(ctx, 31, 0x3A4FFCu);
    ctx->pc = 0x3A4FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FF4u;
    // 0x3a4ff8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196F90u, 0x3A4FF4u, 0x3A4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FFCu;
label_3a4ffc:
    // 0x3a4ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a4ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5004: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5004u;
        // 0x3a5008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A500Cu;
    // 0x3a500c: 0x0  nop
    ctx->pc = 0x3a500cu;
    // NOP
    ctx->pc = 0x3a5010u;
}
