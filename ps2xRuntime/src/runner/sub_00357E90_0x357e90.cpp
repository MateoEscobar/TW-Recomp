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

// Function: sub_00357E90
// Address: 0x357e90 - 0x357f28
void sub_00357E90_0x357e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357E90_0x357e90");
#endif

    switch (ctx->pc) {
        case 0x357eb0u: goto label_357eb0;
        case 0x357ec8u: goto label_357ec8;
        case 0x357edcu: goto label_357edc;
        case 0x357ef0u: goto label_357ef0;
        case 0x357f00u: goto label_357f00;
        case 0x357f08u: goto label_357f08;
        default: break;
    }

    ctx->pc = 0x357e90u;

    // 0x357e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357e94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357e98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357ea8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357EA8u;
    SET_GPR_U32(ctx, 31, 0x357EB0u);
    ctx->pc = 0x357EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357EA8u;
    // 0x357eac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357EA8u, 0x357EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357EB0u;
label_357eb0:
    // 0x357eb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357eb4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357EB4u;
    {
        const bool branch_taken_0x357eb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357EB4u;
        // 0x357eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357eb4) {
            ctx->pc = 0x357ECCu;
            goto label_357ecc;
        }
    }
    ctx->pc = 0x357EBCu;
    // 0x357ebc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357ec0: 0xc10241a  jal         func_409068
    ctx->pc = 0x357EC0u;
    SET_GPR_U32(ctx, 31, 0x357EC8u);
    ctx->pc = 0x357EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357EC0u;
    // 0x357ec4: 0x24a59170  addiu       $a1, $a1, -0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357EC0u, 0x357EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357EC8u;
label_357ec8:
    // 0x357ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357ecc:
    // 0x357ecc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357ed0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x357ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357ed4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x357ED4u;
    SET_GPR_U32(ctx, 31, 0x357EDCu);
    ctx->pc = 0x357ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357ED4u;
    // 0x357ed8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x357ED4u, 0x357EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357EDCu;
label_357edc:
    // 0x357edc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357EDCu;
    {
        const bool branch_taken_0x357edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357EDCu;
        // 0x357ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357edc) {
            ctx->pc = 0x357EF4u;
            goto label_357ef4;
        }
    }
    ctx->pc = 0x357EE4u;
    // 0x357ee4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357ee8: 0xc10241a  jal         func_409068
    ctx->pc = 0x357EE8u;
    SET_GPR_U32(ctx, 31, 0x357EF0u);
    ctx->pc = 0x357EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357EE8u;
    // 0x357eec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357EE8u, 0x357EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357EF0u;
label_357ef0:
    // 0x357ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357ef4:
    // 0x357ef4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357ef8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x357EF8u;
    SET_GPR_U32(ctx, 31, 0x357F00u);
    ctx->pc = 0x357EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357EF8u;
    // 0x357efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x357EF8u, 0x357F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F00u;
label_357f00:
    // 0x357f00: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x357F00u;
    SET_GPR_U32(ctx, 31, 0x357F08u);
    ctx->pc = 0x357F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F00u;
    // 0x357f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x357F00u, 0x357F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F08u;
label_357f08:
    // 0x357f08: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x357f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x357f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x357F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F1Cu;
        // 0x357f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F24u;
    // 0x357f24: 0x0  nop
    ctx->pc = 0x357f24u;
    // NOP
    ctx->pc = 0x357f28u;
}
