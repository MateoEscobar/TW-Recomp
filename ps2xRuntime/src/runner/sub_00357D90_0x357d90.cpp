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

// Function: sub_00357D90
// Address: 0x357d90 - 0x357e28
void sub_00357D90_0x357d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357D90_0x357d90");
#endif

    switch (ctx->pc) {
        case 0x357db0u: goto label_357db0;
        case 0x357dc8u: goto label_357dc8;
        case 0x357ddcu: goto label_357ddc;
        case 0x357df0u: goto label_357df0;
        case 0x357e00u: goto label_357e00;
        case 0x357e08u: goto label_357e08;
        default: break;
    }

    ctx->pc = 0x357d90u;

    // 0x357d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357d98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357da8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357DA8u;
    SET_GPR_U32(ctx, 31, 0x357DB0u);
    ctx->pc = 0x357DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357DA8u;
    // 0x357dac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357DA8u, 0x357DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357DB0u;
label_357db0:
    // 0x357db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357db4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357DB4u;
    {
        const bool branch_taken_0x357db4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DB4u;
        // 0x357db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357db4) {
            ctx->pc = 0x357DCCu;
            goto label_357dcc;
        }
    }
    ctx->pc = 0x357DBCu;
    // 0x357dbc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357dc0: 0xc10241a  jal         func_409068
    ctx->pc = 0x357DC0u;
    SET_GPR_U32(ctx, 31, 0x357DC8u);
    ctx->pc = 0x357DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357DC0u;
    // 0x357dc4: 0x24a59140  addiu       $a1, $a1, -0x6EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357DC0u, 0x357DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357DC8u;
label_357dc8:
    // 0x357dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357dcc:
    // 0x357dcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357dd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x357dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357dd4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x357DD4u;
    SET_GPR_U32(ctx, 31, 0x357DDCu);
    ctx->pc = 0x357DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357DD4u;
    // 0x357dd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x357DD4u, 0x357DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357DDCu;
label_357ddc:
    // 0x357ddc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357DDCu;
    {
        const bool branch_taken_0x357ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DDCu;
        // 0x357de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ddc) {
            ctx->pc = 0x357DF4u;
            goto label_357df4;
        }
    }
    ctx->pc = 0x357DE4u;
    // 0x357de4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357de8: 0xc10241a  jal         func_409068
    ctx->pc = 0x357DE8u;
    SET_GPR_U32(ctx, 31, 0x357DF0u);
    ctx->pc = 0x357DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357DE8u;
    // 0x357dec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357DE8u, 0x357DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357DF0u;
label_357df0:
    // 0x357df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357df4:
    // 0x357df4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357df8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x357DF8u;
    SET_GPR_U32(ctx, 31, 0x357E00u);
    ctx->pc = 0x357DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357DF8u;
    // 0x357dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x357DF8u, 0x357E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E00u;
label_357e00:
    // 0x357e00: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x357E00u;
    SET_GPR_U32(ctx, 31, 0x357E08u);
    ctx->pc = 0x357E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E00u;
    // 0x357e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x357E00u, 0x357E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E08u;
label_357e08:
    // 0x357e08: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x357e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x357e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x357E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E1Cu;
        // 0x357e20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357E24u;
    // 0x357e24: 0x0  nop
    ctx->pc = 0x357e24u;
    // NOP
    ctx->pc = 0x357e28u;
}
