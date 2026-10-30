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

// Function: sub_00323C40
// Address: 0x323c40 - 0x323cd8
void sub_00323C40_0x323c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323C40_0x323c40");
#endif

    switch (ctx->pc) {
        case 0x323c7cu: goto label_323c7c;
        case 0x323c88u: goto label_323c88;
        case 0x323cb8u: goto label_323cb8;
        default: break;
    }

    ctx->pc = 0x323c40u;

    // 0x323c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323c44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x323c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323c54: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x323C54u;
    {
        const bool branch_taken_0x323c54 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C54u;
        // 0x323c58: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c54) {
            ctx->pc = 0x323C6Cu;
            goto label_323c6c;
        }
    }
    ctx->pc = 0x323C5Cu;
    // 0x323c5c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323c60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x323c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x323C64u;
    {
        const bool branch_taken_0x323c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C64u;
        // 0x323c68: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c64) {
            ctx->pc = 0x323C74u;
            goto label_323c74;
        }
    }
    ctx->pc = 0x323C6Cu;
label_323c6c:
    // 0x323c6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323c70: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_323c74:
    // 0x323c74: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x323C74u;
    SET_GPR_U32(ctx, 31, 0x323C7Cu);
    ctx->pc = 0x323C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C74u;
    // 0x323c78: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x323C74u, 0x323C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C7Cu;
label_323c7c:
    // 0x323c7c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x323c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x323c80: 0xc0cc6ea  jal         func_331BA8
    ctx->pc = 0x323C80u;
    SET_GPR_U32(ctx, 31, 0x323C88u);
    ctx->pc = 0x323C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C80u;
    // 0x323c84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331BA8u, 0x323C80u, 0x323C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C88u;
label_323c88:
    // 0x323c88: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x323c88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323c8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x323c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323c90: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x323c90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x323c94: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x323c94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323c98: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x323c98u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x323c9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323ca0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323ca4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323CA4u;
    {
        const bool branch_taken_0x323ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x323ca4) {
            ctx->pc = 0x323CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323CA4u;
            // 0x323ca8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323CBCu;
            goto label_323cbc;
        }
    }
    ctx->pc = 0x323CACu;
    // 0x323cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cb0: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323CB0u;
    SET_GPR_U32(ctx, 31, 0x323CB8u);
    ctx->pc = 0x323CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323CB0u;
    // 0x323cb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323CB0u, 0x323CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CB8u;
label_323cb8:
    // 0x323cb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323cbc:
    // 0x323cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323cc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x323cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x323cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323cc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323ccc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x323CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CD0u;
        // 0x323cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323CD8u;
}
