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

// Function: sub_00447C70
// Address: 0x447c70 - 0x447d10
void sub_00447C70_0x447c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447C70_0x447c70");
#endif

    switch (ctx->pc) {
        case 0x447c80u: goto label_447c80;
        case 0x447cdcu: goto label_447cdc;
        default: break;
    }

    ctx->pc = 0x447c70u;

    // 0x447c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x447c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x447c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x447c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x447c78: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x447C78u;
    SET_GPR_U32(ctx, 31, 0x447C80u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x447C78u, 0x447C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447C80u;
label_447c80:
    // 0x447c80: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x447c80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x447c84: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x447c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x447c88: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x447c88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x447c8c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x447c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x447c90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x447c90u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x10000000
    // 0x447c94: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x447c94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x447c98: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x447c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x447c9c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x447c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x447ca0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x447ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x447ca4: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x447ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x447ca8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x447ca8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x447cac: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x447cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x447cb0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x447cb0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x447cb4: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x447cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x447cb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x447cb8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0));
    // 0x447cbc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x447cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x447cc0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x447cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x447cc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x447cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x447cc8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x447cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x447ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x447CCCu;
    {
        const bool branch_taken_0x447ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447CCCu;
        // 0x447cd0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ccc) {
            ctx->pc = 0x447CE0u;
            goto label_447ce0;
        }
    }
    ctx->pc = 0x447CD4u;
    // 0x447cd4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x447CD4u;
    SET_GPR_U32(ctx, 31, 0x447CDCu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x447CD4u, 0x447CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447CDCu;
label_447cdc:
    // 0x447cdc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_447ce0:
    // 0x447ce0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x447ce4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x447ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x447ce8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x447ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x447cec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x447cecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x447cf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x447cf4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x447cf4u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x447cf8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x447cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x447cfc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x447cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x447d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x447d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x447d04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x447d04u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x447d08: 0x3e00008  jr          $ra
    ctx->pc = 0x447D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447D08u;
        // 0x447d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447D10u;
}
