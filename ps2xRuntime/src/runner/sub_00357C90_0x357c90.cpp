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

// Function: sub_00357C90
// Address: 0x357c90 - 0x357d28
void sub_00357C90_0x357c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357C90_0x357c90");
#endif

    switch (ctx->pc) {
        case 0x357cb0u: goto label_357cb0;
        case 0x357cc8u: goto label_357cc8;
        case 0x357cdcu: goto label_357cdc;
        case 0x357cf0u: goto label_357cf0;
        case 0x357d00u: goto label_357d00;
        case 0x357d08u: goto label_357d08;
        default: break;
    }

    ctx->pc = 0x357c90u;

    // 0x357c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357c98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357ca8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357CA8u;
    SET_GPR_U32(ctx, 31, 0x357CB0u);
    ctx->pc = 0x357CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CA8u;
    // 0x357cac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357CA8u, 0x357CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CB0u;
label_357cb0:
    // 0x357cb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cb4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357CB4u;
    {
        const bool branch_taken_0x357cb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357CB4u;
        // 0x357cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357cb4) {
            ctx->pc = 0x357CCCu;
            goto label_357ccc;
        }
    }
    ctx->pc = 0x357CBCu;
    // 0x357cbc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357cc0: 0xc10241a  jal         func_409068
    ctx->pc = 0x357CC0u;
    SET_GPR_U32(ctx, 31, 0x357CC8u);
    ctx->pc = 0x357CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CC0u;
    // 0x357cc4: 0x24a590e8  addiu       $a1, $a1, -0x6F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357CC0u, 0x357CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CC8u;
label_357cc8:
    // 0x357cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357ccc:
    // 0x357ccc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357cd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x357cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357cd4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x357CD4u;
    SET_GPR_U32(ctx, 31, 0x357CDCu);
    ctx->pc = 0x357CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CD4u;
    // 0x357cd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x357CD4u, 0x357CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CDCu;
label_357cdc:
    // 0x357cdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357CDCu;
    {
        const bool branch_taken_0x357cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357CDCu;
        // 0x357ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357cdc) {
            ctx->pc = 0x357CF4u;
            goto label_357cf4;
        }
    }
    ctx->pc = 0x357CE4u;
    // 0x357ce4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357ce8: 0xc10241a  jal         func_409068
    ctx->pc = 0x357CE8u;
    SET_GPR_U32(ctx, 31, 0x357CF0u);
    ctx->pc = 0x357CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CE8u;
    // 0x357cec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357CE8u, 0x357CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CF0u;
label_357cf0:
    // 0x357cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357cf4:
    // 0x357cf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357cf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x357CF8u;
    SET_GPR_U32(ctx, 31, 0x357D00u);
    ctx->pc = 0x357CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CF8u;
    // 0x357cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x357CF8u, 0x357D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D00u;
label_357d00:
    // 0x357d00: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x357D00u;
    SET_GPR_U32(ctx, 31, 0x357D08u);
    ctx->pc = 0x357D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D00u;
    // 0x357d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x357D00u, 0x357D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D08u;
label_357d08:
    // 0x357d08: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x357d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x357d0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x357D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D1Cu;
        // 0x357d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D24u;
    // 0x357d24: 0x0  nop
    ctx->pc = 0x357d24u;
    // NOP
    ctx->pc = 0x357d28u;
}
