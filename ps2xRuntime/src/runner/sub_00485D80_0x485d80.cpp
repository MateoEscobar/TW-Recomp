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

// Function: sub_00485D80
// Address: 0x485d80 - 0x485dd8
void sub_00485D80_0x485d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485D80_0x485d80");
#endif

    switch (ctx->pc) {
        case 0x485d80u: goto label_485d80;
        case 0x485d84u: goto label_485d84;
        case 0x485d88u: goto label_485d88;
        case 0x485d8cu: goto label_485d8c;
        case 0x485d90u: goto label_485d90;
        case 0x485d94u: goto label_485d94;
        case 0x485d98u: goto label_485d98;
        case 0x485d9cu: goto label_485d9c;
        case 0x485da0u: goto label_485da0;
        case 0x485da4u: goto label_485da4;
        case 0x485da8u: goto label_485da8;
        case 0x485dacu: goto label_485dac;
        case 0x485db0u: goto label_485db0;
        case 0x485db4u: goto label_485db4;
        case 0x485db8u: goto label_485db8;
        case 0x485dbcu: goto label_485dbc;
        case 0x485dc0u: goto label_485dc0;
        case 0x485dc4u: goto label_485dc4;
        case 0x485dc8u: goto label_485dc8;
        case 0x485dccu: goto label_485dcc;
        case 0x485dd0u: goto label_485dd0;
        case 0x485dd4u: goto label_485dd4;
        default: break;
    }

    ctx->pc = 0x485d80u;

label_485d80:
    // 0x485d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x485d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_485d84:
    // 0x485d84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x485d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_485d88:
    // 0x485d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_485d8c:
    // 0x485d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485d90:
    // 0x485d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_485d94:
    // 0x485d94: 0xc130632  jal         func_4C18C8
label_485d98:
    if (ctx->pc == 0x485D98u) {
        ctx->pc = 0x485D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485D94u;
        // 0x485d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485D9Cu;
        goto label_485d9c;
    }
    ctx->pc = 0x485D94u;
    SET_GPR_U32(ctx, 31, 0x485D9Cu);
    ctx->pc = 0x485D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485D94u;
    // 0x485d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C18C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C18C8u, 0x485D94u, 0x485D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485D9Cu;
label_485d9c:
    // 0x485d9c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_485da0:
    if (ctx->pc == 0x485DA0u) {
        ctx->pc = 0x485DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485D9Cu;
        // 0x485da0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485DA4u;
        goto label_485da4;
    }
    ctx->pc = 0x485D9Cu;
    {
        const bool branch_taken_0x485d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485d9c) {
            ctx->pc = 0x485DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485D9Cu;
            // 0x485da0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485DC4u;
            goto label_485dc4;
        }
    }
    ctx->pc = 0x485DA4u;
label_485da4:
    // 0x485da4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x485da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_485da8:
    // 0x485da8: 0x40f809  jalr        $v0
label_485dac:
    if (ctx->pc == 0x485DACu) {
        ctx->pc = 0x485DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485DA8u;
        // 0x485dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485DB0u;
        goto label_485db0;
    }
    ctx->pc = 0x485DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485DB0u);
        ctx->pc = 0x485DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485DA8u;
        // 0x485dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485DA8u, 0x485DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485DB0u;
label_485db0:
    // 0x485db0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x485db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485db4:
    // 0x485db4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x485db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_485db8:
    // 0x485db8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_485dbc:
    if (ctx->pc == 0x485DBCu) {
        ctx->pc = 0x485DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485DB8u;
        // 0x485dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485DC0u;
        goto label_485dc0;
    }
    ctx->pc = 0x485DB8u;
    {
        const bool branch_taken_0x485db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x485DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485DB8u;
        // 0x485dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485db8) {
            ctx->pc = 0x485DC4u;
            goto label_485dc4;
        }
    }
    ctx->pc = 0x485DC0u;
label_485dc0:
    // 0x485dc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485dc4:
    // 0x485dc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x485dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485dc8:
    // 0x485dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485dcc:
    // 0x485dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_485dd0:
    // 0x485dd0: 0x3e00008  jr          $ra
label_485dd4:
    if (ctx->pc == 0x485DD4u) {
        ctx->pc = 0x485DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485DD0u;
        // 0x485dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485DD8u;
        goto label_fallthrough_0x485dd0;
    }
    ctx->pc = 0x485DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485DD0u;
        // 0x485dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x485dd0:
    ctx->pc = 0x485DD8u;
}
