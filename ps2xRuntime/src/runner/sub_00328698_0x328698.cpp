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

// Function: sub_00328698
// Address: 0x328698 - 0x328708
void sub_00328698_0x328698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328698_0x328698");
#endif

    switch (ctx->pc) {
        case 0x3286e8u: goto label_3286e8;
        case 0x3286f8u: goto label_3286f8;
        default: break;
    }

    ctx->pc = 0x328698u;

    // 0x328698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32869c: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x32869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x3286a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3286a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3286a4: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3286a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x3286a8: 0x24c65b40  addiu       $a2, $a2, 0x5B40
    ctx->pc = 0x3286a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23360));
    // 0x3286ac: 0x8ca37ff0  lw          $v1, 0x7FF0($a1)
    ctx->pc = 0x3286acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32752)));
    // 0x3286b0: 0x8ca27fe0  lw          $v0, 0x7FE0($a1)
    ctx->pc = 0x3286b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32736)));
    // 0x3286b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3286b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3286b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3286b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3286bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3286bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3286c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3286c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3286c4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x3286c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3286c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3286c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3286cc: 0x80e30002  lb          $v1, 0x2($a3)
    ctx->pc = 0x3286ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3286d0: 0x80c20002  lb          $v0, 0x2($a2)
    ctx->pc = 0x3286d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3286d4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3286D4u;
    {
        const bool branch_taken_0x3286d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3286d4) {
            ctx->pc = 0x3286D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3286D4u;
            // 0x3286d8: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3286F0u;
            goto label_3286f0;
        }
    }
    ctx->pc = 0x3286DCu;
    // 0x3286dc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3286dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3286e0: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3286E0u;
    SET_GPR_U32(ctx, 31, 0x3286E8u);
    ctx->pc = 0x3286E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286E0u;
    // 0x3286e4: 0x24a55320  addiu       $a1, $a1, 0x5320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3286E0u, 0x3286E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286E8u;
label_3286e8:
    // 0x3286e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3286E8u;
    {
        const bool branch_taken_0x3286e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286E8u;
        // 0x3286ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286e8) {
            ctx->pc = 0x3286FCu;
            goto label_3286fc;
        }
    }
    ctx->pc = 0x3286F0u;
label_3286f0:
    // 0x3286f0: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3286F0u;
    SET_GPR_U32(ctx, 31, 0x3286F8u);
    ctx->pc = 0x3286F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286F0u;
    // 0x3286f4: 0x24a55348  addiu       $a1, $a1, 0x5348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3286F0u, 0x3286F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286F8u;
label_3286f8:
    // 0x3286f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3286f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3286fc:
    // 0x3286fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3286FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286FCu;
        // 0x328700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3286FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328704u;
    // 0x328704: 0x0  nop
    ctx->pc = 0x328704u;
    // NOP
    ctx->pc = 0x328708u;
}
