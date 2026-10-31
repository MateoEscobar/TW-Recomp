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

// Function: sub_0031C1F8
// Address: 0x31c1f8 - 0x31c258
void sub_0031C1F8_0x31c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C1F8_0x31c1f8");
#endif

    switch (ctx->pc) {
        case 0x31c23cu: goto label_31c23c;
        default: break;
    }

    ctx->pc = 0x31c1f8u;

    // 0x31c1f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31c1fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31c1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c204: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31c204u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31c208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c20c: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x31c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x31c210: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x31c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31c214: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x31c214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31c218: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x31C218u;
    {
        const bool branch_taken_0x31c218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C218u;
        // 0x31c21c: 0x24420bb8  addiu       $v0, $v0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c218) {
            ctx->pc = 0x31C248u;
            goto label_31c248;
        }
    }
    ctx->pc = 0x31C220u;
    // 0x31c220: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31c220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31c224: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x31c224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x31c228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c22c: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x31c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x31c230: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x31c230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x31c234: 0xc0e6960  jal         func_39A580
    ctx->pc = 0x31C234u;
    SET_GPR_U32(ctx, 31, 0x31C23Cu);
    ctx->pc = 0x31C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C234u;
    // 0x31c238: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A580u, 0x31C234u, 0x31C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C23Cu;
label_31c23c:
    // 0x31c23c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31c23cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c240: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31C240u;
    {
        const bool branch_taken_0x31c240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C240u;
        // 0x31c244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c240) {
            ctx->pc = 0x31C24Cu;
            goto label_31c24c;
        }
    }
    ctx->pc = 0x31C248u;
label_31c248:
    // 0x31c248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31c248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c24c:
    // 0x31c24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c250: 0x3e00008  jr          $ra
    ctx->pc = 0x31C250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C250u;
        // 0x31c254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C258u;
}
