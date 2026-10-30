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

// Function: sub_00323BC8
// Address: 0x323bc8 - 0x323c40
void sub_00323BC8_0x323bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323BC8_0x323bc8");
#endif

    switch (ctx->pc) {
        case 0x323c14u: goto label_323c14;
        default: break;
    }

    ctx->pc = 0x323bc8u;

    // 0x323bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323bcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323bd4: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x323BD4u;
    {
        const bool branch_taken_0x323bd4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BD4u;
        // 0x323bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323bd4) {
            ctx->pc = 0x323BF4u;
            goto label_323bf4;
        }
    }
    ctx->pc = 0x323BDCu;
    // 0x323bdc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323be0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x323be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323be4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x323be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x323be8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x323be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323bec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323BECu;
    {
        const bool branch_taken_0x323bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BECu;
        // 0x323bf0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323bec) {
            ctx->pc = 0x323C04u;
            goto label_323c04;
        }
    }
    ctx->pc = 0x323BF4u;
label_323bf4:
    // 0x323bf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323bf8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323bfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x323bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x323c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x323c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_323c04:
    // 0x323c04: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x323c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c0c: 0xc0cc728  jal         func_331CA0
    ctx->pc = 0x323C0Cu;
    SET_GPR_U32(ctx, 31, 0x323C14u);
    ctx->pc = 0x323C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C0Cu;
    // 0x323c10: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331CA0u, 0x323C0Cu, 0x323C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C14u;
label_323c14:
    // 0x323c14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x323c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323c18: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x323c18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323c1c: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x323c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x323c20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323c24: 0xfc857ff0  sd          $a1, 0x7FF0($a0)
    ctx->pc = 0x323c24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32752), GPR_U64(ctx, 5));
    // 0x323c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323c2c: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x323c2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323c30: 0xfc837ff8  sd          $v1, 0x7FF8($a0)
    ctx->pc = 0x323c30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32760), GPR_U64(ctx, 3));
    // 0x323c34: 0x3e00008  jr          $ra
    ctx->pc = 0x323C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C34u;
        // 0x323c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323C3Cu;
    // 0x323c3c: 0x0  nop
    ctx->pc = 0x323c3cu;
    // NOP
    ctx->pc = 0x323c40u;
}
