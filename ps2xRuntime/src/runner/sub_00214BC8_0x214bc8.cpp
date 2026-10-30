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

// Function: sub_00214BC8
// Address: 0x214bc8 - 0x214c28
void sub_00214BC8_0x214bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214BC8_0x214bc8");
#endif

    switch (ctx->pc) {
        case 0x214c08u: goto label_214c08;
        case 0x214c18u: goto label_214c18;
        default: break;
    }

    ctx->pc = 0x214bc8u;

    // 0x214bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214bcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x214bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x214bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bd8: 0x8e024130  lw          $v0, 0x4130($s0)
    ctx->pc = 0x214bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16688)));
    // 0x214bdc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x214BDCu;
    {
        const bool branch_taken_0x214bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BDCu;
        // 0x214be0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bdc) {
            ctx->pc = 0x214C18u;
            goto label_214c18;
        }
    }
    ctx->pc = 0x214BE4u;
    // 0x214be4: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x214be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x214be8: 0x24c6fa10  addiu       $a2, $a2, -0x5F0
    ctx->pc = 0x214be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965776));
    // 0x214bec: 0x86044140  lh          $a0, 0x4140($s0)
    ctx->pc = 0x214becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16704)));
    // 0x214bf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x214bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x214bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x214bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214bf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x214bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x214bfc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x214bfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214c00: 0xc05a916  jal         func_16A458
    ctx->pc = 0x214C00u;
    SET_GPR_U32(ctx, 31, 0x214C08u);
    ctx->pc = 0x214C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C00u;
    // 0x214c04: 0x7e0340e0  sq          $v1, 0x40E0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16608), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A458u, 0x214C00u, 0x214C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C08u;
label_214c08:
    // 0x214c08: 0xae02413c  sw          $v0, 0x413C($s0)
    ctx->pc = 0x214c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16700), GPR_U32(ctx, 2));
    // 0x214c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c10: 0xc084f9a  jal         func_213E68
    ctx->pc = 0x214C10u;
    SET_GPR_U32(ctx, 31, 0x214C18u);
    ctx->pc = 0x214C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C10u;
    // 0x214c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E68u, 0x214C10u, 0x214C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C18u;
label_214c18:
    // 0x214c18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x214c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214c20: 0x3e00008  jr          $ra
    ctx->pc = 0x214C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C20u;
        // 0x214c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214C28u;
}
