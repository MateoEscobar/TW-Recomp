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

// Function: sub_00207CB8
// Address: 0x207cb8 - 0x207d40
void sub_00207CB8_0x207cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207CB8_0x207cb8");
#endif

    switch (ctx->pc) {
        case 0x207cb8u: goto label_207cb8;
        case 0x207cbcu: goto label_207cbc;
        case 0x207cc0u: goto label_207cc0;
        case 0x207cc4u: goto label_207cc4;
        case 0x207cc8u: goto label_207cc8;
        case 0x207cccu: goto label_207ccc;
        case 0x207cd0u: goto label_207cd0;
        case 0x207cd4u: goto label_207cd4;
        case 0x207cd8u: goto label_207cd8;
        case 0x207cdcu: goto label_207cdc;
        case 0x207ce0u: goto label_207ce0;
        case 0x207ce4u: goto label_207ce4;
        case 0x207ce8u: goto label_207ce8;
        case 0x207cecu: goto label_207cec;
        case 0x207cf0u: goto label_207cf0;
        case 0x207cf4u: goto label_207cf4;
        case 0x207cf8u: goto label_207cf8;
        case 0x207cfcu: goto label_207cfc;
        case 0x207d00u: goto label_207d00;
        case 0x207d04u: goto label_207d04;
        case 0x207d08u: goto label_207d08;
        case 0x207d0cu: goto label_207d0c;
        case 0x207d10u: goto label_207d10;
        case 0x207d14u: goto label_207d14;
        case 0x207d18u: goto label_207d18;
        case 0x207d1cu: goto label_207d1c;
        case 0x207d20u: goto label_207d20;
        case 0x207d24u: goto label_207d24;
        case 0x207d28u: goto label_207d28;
        case 0x207d2cu: goto label_207d2c;
        case 0x207d30u: goto label_207d30;
        case 0x207d34u: goto label_207d34;
        case 0x207d38u: goto label_207d38;
        case 0x207d3cu: goto label_207d3c;
        default: break;
    }

    ctx->pc = 0x207cb8u;

label_207cb8:
    // 0x207cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_207cbc:
    // 0x207cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207cc0:
    // 0x207cc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x207cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_207cc4:
    // 0x207cc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207cc8:
    // 0x207cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207ccc:
    // 0x207ccc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x207cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_207cd0:
    // 0x207cd0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_207cd4:
    if (ctx->pc == 0x207CD4u) {
        ctx->pc = 0x207CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CD0u;
        // 0x207cd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CD8u;
        goto label_207cd8;
    }
    ctx->pc = 0x207CD0u;
    {
        const bool branch_taken_0x207cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CD0u;
        // 0x207cd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cd0) {
            ctx->pc = 0x207D2Cu;
            goto label_207d2c;
        }
    }
    ctx->pc = 0x207CD8u;
label_207cd8:
    // 0x207cd8: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_207cdc:
    // 0x207cdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x207cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207ce0:
    // 0x207ce0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x207ce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_207ce4:
    // 0x207ce4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x207ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_207ce8:
    // 0x207ce8: 0x60f809  jalr        $v1
label_207cec:
    if (ctx->pc == 0x207CECu) {
        ctx->pc = 0x207CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CE8u;
        // 0x207cec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CF0u;
        goto label_207cf0;
    }
    ctx->pc = 0x207CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207CF0u);
        ctx->pc = 0x207CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CE8u;
        // 0x207cec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207CE8u, 0x207CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207CF0u;
label_207cf0:
    // 0x207cf0: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x207cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_207cf4:
    // 0x207cf4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x207cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_207cf8:
    // 0x207cf8: 0x26108c10  addiu       $s0, $s0, -0x73F0
    ctx->pc = 0x207cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937616));
label_207cfc:
    // 0x207cfc: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x207cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_207d00:
    // 0x207d00: 0xc138e72  jal         func_4E39C8
label_207d04:
    if (ctx->pc == 0x207D04u) {
        ctx->pc = 0x207D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D00u;
        // 0x207d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D08u;
        goto label_207d08;
    }
    ctx->pc = 0x207D00u;
    SET_GPR_U32(ctx, 31, 0x207D08u);
    ctx->pc = 0x207D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D00u;
    // 0x207d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x207D00u, 0x207D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D08u;
label_207d08:
    // 0x207d08: 0xc073462  jal         func_1CD188
label_207d0c:
    if (ctx->pc == 0x207D0Cu) {
        ctx->pc = 0x207D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D08u;
        // 0x207d0c: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D10u;
        goto label_207d10;
    }
    ctx->pc = 0x207D08u;
    SET_GPR_U32(ctx, 31, 0x207D10u);
    ctx->pc = 0x207D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D08u;
    // 0x207d0c: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x207D08u, 0x207D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D10u;
label_207d10:
    // 0x207d10: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x207d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_207d14:
    // 0x207d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207d18:
    // 0x207d18: 0xc139138  jal         func_4E44E0
label_207d1c:
    if (ctx->pc == 0x207D1Cu) {
        ctx->pc = 0x207D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D18u;
        // 0x207d1c: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D20u;
        goto label_207d20;
    }
    ctx->pc = 0x207D18u;
    SET_GPR_U32(ctx, 31, 0x207D20u);
    ctx->pc = 0x207D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D18u;
    // 0x207d1c: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x207D18u, 0x207D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D20u;
label_207d20:
    // 0x207d20: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x207d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_207d24:
    // 0x207d24: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x207d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_207d28:
    // 0x207d28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x207d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207d2c:
    // 0x207d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207d30:
    // 0x207d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207d34:
    // 0x207d34: 0x3e00008  jr          $ra
label_207d38:
    if (ctx->pc == 0x207D38u) {
        ctx->pc = 0x207D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D34u;
        // 0x207d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D3Cu;
        goto label_207d3c;
    }
    ctx->pc = 0x207D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D34u;
        // 0x207d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D3Cu;
label_207d3c:
    // 0x207d3c: 0x0  nop
    ctx->pc = 0x207d3cu;
    // NOP
    ctx->pc = 0x207d40u;
}
