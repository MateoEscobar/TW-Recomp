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

// Function: sub_00408D90
// Address: 0x408d90 - 0x408e38
void sub_00408D90_0x408d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408D90_0x408d90");
#endif

    switch (ctx->pc) {
        case 0x408db4u: goto label_408db4;
        case 0x408dc4u: goto label_408dc4;
        case 0x408dd8u: goto label_408dd8;
        case 0x408decu: goto label_408dec;
        case 0x408dfcu: goto label_408dfc;
        case 0x408e08u: goto label_408e08;
        case 0x408e20u: goto label_408e20;
        default: break;
    }

    ctx->pc = 0x408d90u;

    // 0x408d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x408d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x408d94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x408d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x408d9c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x408d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x408da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x408da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408da4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x408da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x408da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408dac: 0xc10311e  jal         func_40C478
    ctx->pc = 0x408DACu;
    SET_GPR_U32(ctx, 31, 0x408DB4u);
    ctx->pc = 0x408DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408DACu;
    // 0x408db0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x408DACu, 0x408DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408DB4u;
label_408db4:
    // 0x408db4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x408DB4u;
    {
        const bool branch_taken_0x408db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x408DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408DB4u;
        // 0x408db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408db4) {
            ctx->pc = 0x408E10u;
            goto label_408e10;
        }
    }
    ctx->pc = 0x408DBCu;
    // 0x408dbc: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408DBCu;
    SET_GPR_U32(ctx, 31, 0x408DC4u);
    ctx->pc = 0x408DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408DBCu;
    // 0x408dc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408DBCu, 0x408DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408DC4u;
label_408dc4:
    // 0x408dc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x408DC4u;
    {
        const bool branch_taken_0x408dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x408DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408DC4u;
        // 0x408dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408dc4) {
            ctx->pc = 0x408E10u;
            goto label_408e10;
        }
    }
    ctx->pc = 0x408DCCu;
    // 0x408dcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x408dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408dd0: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408DD0u;
    SET_GPR_U32(ctx, 31, 0x408DD8u);
    ctx->pc = 0x408DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408DD0u;
    // 0x408dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408DD0u, 0x408DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408DD8u;
label_408dd8:
    // 0x408dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x408dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408de0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408de4: 0xc102488  jal         func_409220
    ctx->pc = 0x408DE4u;
    SET_GPR_U32(ctx, 31, 0x408DECu);
    ctx->pc = 0x408DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408DE4u;
    // 0x408de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x408DE4u, 0x408DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408DECu;
label_408dec:
    // 0x408dec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x408decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408df0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x408df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408df4: 0xc1026de  jal         func_409B78
    ctx->pc = 0x408DF4u;
    SET_GPR_U32(ctx, 31, 0x408DFCu);
    ctx->pc = 0x408DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408DF4u;
    // 0x408df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409B78u, 0x408DF4u, 0x408DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408DFCu;
label_408dfc:
    // 0x408dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408e00: 0xc10255a  jal         func_409568
    ctx->pc = 0x408E00u;
    SET_GPR_U32(ctx, 31, 0x408E08u);
    ctx->pc = 0x408E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408E00u;
    // 0x408e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409568u, 0x408E00u, 0x408E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408E08u;
label_408e08:
    // 0x408e08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x408E08u;
    {
        const bool branch_taken_0x408e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408E08u;
        // 0x408e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408e08) {
            ctx->pc = 0x408E24u;
            goto label_408e24;
        }
    }
    ctx->pc = 0x408E10u;
label_408e10:
    // 0x408e10: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408e18: 0xc10241a  jal         func_409068
    ctx->pc = 0x408E18u;
    SET_GPR_U32(ctx, 31, 0x408E20u);
    ctx->pc = 0x408E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408E18u;
    // 0x408e1c: 0x24a57e60  addiu       $a1, $a1, 0x7E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408E18u, 0x408E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408E20u;
label_408e20:
    // 0x408e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408e24:
    // 0x408e24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x408e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x408e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408e30: 0x3e00008  jr          $ra
    ctx->pc = 0x408E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408E30u;
        // 0x408e34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408E38u;
}
