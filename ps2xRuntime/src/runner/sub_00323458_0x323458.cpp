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

// Function: sub_00323458
// Address: 0x323458 - 0x3234b8
void sub_00323458_0x323458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323458_0x323458");
#endif

    switch (ctx->pc) {
        case 0x32346cu: goto label_32346c;
        case 0x32349cu: goto label_32349c;
        default: break;
    }

    ctx->pc = 0x323458u;

    // 0x323458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32345c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323464: 0xc0c8ca6  jal         func_323298
    ctx->pc = 0x323464u;
    SET_GPR_U32(ctx, 31, 0x32346Cu);
    ctx->pc = 0x323468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323464u;
    // 0x323468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323298u, 0x323464u, 0x32346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32346Cu;
label_32346c:
    // 0x32346c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x32346cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323470: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x323470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323474: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x323474u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x323478: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x323478u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32347c: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x32347cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x323480: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323484: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323488: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323488u;
    {
        const bool branch_taken_0x323488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x323488) {
            ctx->pc = 0x32348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323488u;
            // 0x32348c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3234A0u;
            goto label_3234a0;
        }
    }
    ctx->pc = 0x323490u;
    // 0x323490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323494: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323494u;
    SET_GPR_U32(ctx, 31, 0x32349Cu);
    ctx->pc = 0x323498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323494u;
    // 0x323498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323494u, 0x32349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32349Cu;
label_32349c:
    // 0x32349c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3234a0:
    // 0x3234a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3234a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3234a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3234a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3234a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3234a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3234ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3234acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3234b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3234B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3234B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234B0u;
        // 0x3234b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3234B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3234B8u;
}
