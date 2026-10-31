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

// Function: sub_001F1B90
// Address: 0x1f1b90 - 0x1f1c08
void sub_001F1B90_0x1f1b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1B90_0x1f1b90");
#endif

    switch (ctx->pc) {
        case 0x1f1bb4u: goto label_1f1bb4;
        case 0x1f1becu: goto label_1f1bec;
        default: break;
    }

    ctx->pc = 0x1f1b90u;

    // 0x1f1b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f1b94: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1f1b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f1b98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f1b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f1b9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f1b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f1ba0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1f1ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1f1ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1bac: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1F1BACu;
    SET_GPR_U32(ctx, 31, 0x1F1BB4u);
    ctx->pc = 0x1F1BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BACu;
    // 0x1f1bb0: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1F1BACu, 0x1F1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BB4u;
label_1f1bb4:
    // 0x1f1bb4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f1bb8: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1f1bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1f1bbc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f1bc0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1f1bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1f1bc4: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x1f1bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
    // 0x1f1bc8: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x1f1bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
    // 0x1f1bcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f1bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1bd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bd4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f1bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f1bd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bdc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f1bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1be0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1f1be0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1be4: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1F1BE4u;
    SET_GPR_U32(ctx, 31, 0x1F1BECu);
    ctx->pc = 0x1F1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BE4u;
    // 0x1f1be8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1F1BE4u, 0x1F1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BECu;
label_1f1bec:
    // 0x1f1bec: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1f1becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1f1bf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f1bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1bf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f1bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1bfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f1c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C00u;
        // 0x1f1c04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1C08u;
}
