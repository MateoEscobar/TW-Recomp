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

// Function: sub_0047FFA0
// Address: 0x47ffa0 - 0x47fff0
void sub_0047FFA0_0x47ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FFA0_0x47ffa0");
#endif

    switch (ctx->pc) {
        case 0x47ffa0u: goto label_47ffa0;
        case 0x47ffa4u: goto label_47ffa4;
        case 0x47ffa8u: goto label_47ffa8;
        case 0x47ffacu: goto label_47ffac;
        case 0x47ffb0u: goto label_47ffb0;
        case 0x47ffb4u: goto label_47ffb4;
        case 0x47ffb8u: goto label_47ffb8;
        case 0x47ffbcu: goto label_47ffbc;
        case 0x47ffc0u: goto label_47ffc0;
        case 0x47ffc4u: goto label_47ffc4;
        case 0x47ffc8u: goto label_47ffc8;
        case 0x47ffccu: goto label_47ffcc;
        case 0x47ffd0u: goto label_47ffd0;
        case 0x47ffd4u: goto label_47ffd4;
        case 0x47ffd8u: goto label_47ffd8;
        case 0x47ffdcu: goto label_47ffdc;
        case 0x47ffe0u: goto label_47ffe0;
        case 0x47ffe4u: goto label_47ffe4;
        case 0x47ffe8u: goto label_47ffe8;
        case 0x47ffecu: goto label_47ffec;
        default: break;
    }

    ctx->pc = 0x47ffa0u;

label_47ffa0:
    // 0x47ffa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_47ffa4:
    // 0x47ffa4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x47ffa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ffa8:
    // 0x47ffa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47ffac:
    // 0x47ffac: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x47ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_47ffb0:
    // 0x47ffb0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x47ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_47ffb4:
    // 0x47ffb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_47ffb8:
    if (ctx->pc == 0x47FFB8u) {
        ctx->pc = 0x47FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FFB4u;
        // 0x47ffb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FFBCu;
        goto label_47ffbc;
    }
    ctx->pc = 0x47FFB4u;
    {
        const bool branch_taken_0x47ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FFB4u;
        // 0x47ffb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ffb4) {
            ctx->pc = 0x47FFD4u;
            goto label_47ffd4;
        }
    }
    ctx->pc = 0x47FFBCu;
label_47ffbc:
    // 0x47ffbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x47ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47ffc0:
    // 0x47ffc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x47ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_47ffc4:
    // 0x47ffc4: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x47ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_47ffc8:
    // 0x47ffc8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x47ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_47ffcc:
    // 0x47ffcc: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x47ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_47ffd0:
    // 0x47ffd0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x47ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_47ffd4:
    // 0x47ffd4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47ffd8:
    // 0x47ffd8: 0x8c62ae34  lw          $v0, -0x51CC($v1)
    ctx->pc = 0x47ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946356)));
label_47ffdc:
    // 0x47ffdc: 0x40f809  jalr        $v0
label_47ffe0:
    if (ctx->pc == 0x47FFE0u) {
        ctx->pc = 0x47FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FFDCu;
        // 0x47ffe0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FFE4u;
        goto label_47ffe4;
    }
    ctx->pc = 0x47FFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FFE4u);
        ctx->pc = 0x47FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FFDCu;
        // 0x47ffe0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FFDCu, 0x47FFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FFE4u;
label_47ffe4:
    // 0x47ffe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ffe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47ffe8:
    // 0x47ffe8: 0x3e00008  jr          $ra
label_47ffec:
    if (ctx->pc == 0x47FFECu) {
        ctx->pc = 0x47FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FFE8u;
        // 0x47ffec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FFF0u;
        goto label_fallthrough_0x47ffe8;
    }
    ctx->pc = 0x47FFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FFE8u;
        // 0x47ffec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47ffe8:
    ctx->pc = 0x47FFF0u;
}
