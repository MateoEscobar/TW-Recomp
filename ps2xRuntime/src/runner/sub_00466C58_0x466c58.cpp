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

// Function: sub_00466C58
// Address: 0x466c58 - 0x466cc0
void sub_00466C58_0x466c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466C58_0x466c58");
#endif

    switch (ctx->pc) {
        case 0x466c58u: goto label_466c58;
        case 0x466c5cu: goto label_466c5c;
        case 0x466c60u: goto label_466c60;
        case 0x466c64u: goto label_466c64;
        case 0x466c68u: goto label_466c68;
        case 0x466c6cu: goto label_466c6c;
        case 0x466c70u: goto label_466c70;
        case 0x466c74u: goto label_466c74;
        case 0x466c78u: goto label_466c78;
        case 0x466c7cu: goto label_466c7c;
        case 0x466c80u: goto label_466c80;
        case 0x466c84u: goto label_466c84;
        case 0x466c88u: goto label_466c88;
        case 0x466c8cu: goto label_466c8c;
        case 0x466c90u: goto label_466c90;
        case 0x466c94u: goto label_466c94;
        case 0x466c98u: goto label_466c98;
        case 0x466c9cu: goto label_466c9c;
        case 0x466ca0u: goto label_466ca0;
        case 0x466ca4u: goto label_466ca4;
        case 0x466ca8u: goto label_466ca8;
        case 0x466cacu: goto label_466cac;
        case 0x466cb0u: goto label_466cb0;
        case 0x466cb4u: goto label_466cb4;
        case 0x466cb8u: goto label_466cb8;
        case 0x466cbcu: goto label_466cbc;
        default: break;
    }

    ctx->pc = 0x466c58u;

label_466c58:
    // 0x466c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_466c5c:
    // 0x466c5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x466c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_466c60:
    // 0x466c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x466c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_466c64:
    // 0x466c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x466c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_466c68:
    // 0x466c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_466c6c:
    // 0x466c6c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x466c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_466c70:
    // 0x466c70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_466c74:
    if (ctx->pc == 0x466C74u) {
        ctx->pc = 0x466C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466C70u;
        // 0x466c74: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466C78u;
        goto label_466c78;
    }
    ctx->pc = 0x466C70u;
    {
        const bool branch_taken_0x466c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x466C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466C70u;
        // 0x466c74: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466c70) {
            ctx->pc = 0x466C88u;
            goto label_466c88;
        }
    }
    ctx->pc = 0x466C78u;
label_466c78:
    // 0x466c78: 0x2622ad18  addiu       $v0, $s1, -0x52E8
    ctx->pc = 0x466c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_466c7c:
    // 0x466c7c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x466c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_466c80:
    // 0x466c80: 0x60f809  jalr        $v1
label_466c84:
    if (ctx->pc == 0x466C84u) {
        ctx->pc = 0x466C88u;
        goto label_466c88;
    }
    ctx->pc = 0x466C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x466C88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466C80u, 0x466C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x466C88u;
label_466c88:
    // 0x466c88: 0xc119e74  jal         func_4679D0
label_466c8c:
    if (ctx->pc == 0x466C8Cu) {
        ctx->pc = 0x466C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466C88u;
        // 0x466c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466C90u;
        goto label_466c90;
    }
    ctx->pc = 0x466C88u;
    SET_GPR_U32(ctx, 31, 0x466C90u);
    ctx->pc = 0x466C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466C88u;
    // 0x466c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4679D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679D0u, 0x466C88u, 0x466C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466C90u;
label_466c90:
    // 0x466c90: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x466c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_466c94:
    // 0x466c94: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x466c94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_466c98:
    // 0x466c98: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x466c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_466c9c:
    // 0x466c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x466c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_466ca0:
    // 0x466ca0: 0x40f809  jalr        $v0
label_466ca4:
    if (ctx->pc == 0x466CA4u) {
        ctx->pc = 0x466CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466CA0u;
        // 0x466ca4: 0x8cc4e698  lw          $a0, -0x1968($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466CA8u;
        goto label_466ca8;
    }
    ctx->pc = 0x466CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x466CA8u);
        ctx->pc = 0x466CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466CA0u;
        // 0x466ca4: 0x8cc4e698  lw          $a0, -0x1968($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960792)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466CA0u, 0x466CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x466CA8u;
label_466ca8:
    // 0x466ca8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x466ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466cac:
    // 0x466cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x466cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466cb0:
    // 0x466cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466cb4:
    // 0x466cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_466cb8:
    // 0x466cb8: 0x3e00008  jr          $ra
label_466cbc:
    if (ctx->pc == 0x466CBCu) {
        ctx->pc = 0x466CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466CB8u;
        // 0x466cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466CC0u;
        goto label_fallthrough_0x466cb8;
    }
    ctx->pc = 0x466CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466CB8u;
        // 0x466cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x466cb8:
    ctx->pc = 0x466CC0u;
}
