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

// Function: sub_0019F270
// Address: 0x19f270 - 0x19f320
void sub_0019F270_0x19f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F270_0x19f270");
#endif

    switch (ctx->pc) {
        case 0x19f298u: goto label_19f298;
        case 0x19f2e0u: goto label_19f2e0;
        case 0x19f2fcu: goto label_19f2fc;
        case 0x19f308u: goto label_19f308;
        default: break;
    }

    ctx->pc = 0x19f270u;

    // 0x19f270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f274: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19f274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19f278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19f278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19f27c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x19f27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f280: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19f284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f28c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F28Cu;
    {
        const bool branch_taken_0x19f28c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F28Cu;
        // 0x19f290: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f28c) {
            ctx->pc = 0x19F2B4u;
            goto label_19f2b4;
        }
    }
    ctx->pc = 0x19F294u;
    // 0x19f294: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x19f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_19f298:
    // 0x19f298: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f29c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19f29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19f2a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19f2a4: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x19f2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19f2a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19f2ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19F2ACu;
    {
        const bool branch_taken_0x19f2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2ACu;
        // 0x19f2b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2ac) {
            ctx->pc = 0x19F298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f298;
        }
    }
    ctx->pc = 0x19F2B4u;
label_19f2b4:
    // 0x19f2b4: 0x26300480  addiu       $s0, $s1, 0x480
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x19f2b8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x19f2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19f2bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f2c0: 0xae20044c  sw          $zero, 0x44C($s1)
    ctx->pc = 0x19f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1100), GPR_U32(ctx, 0));
    // 0x19f2c4: 0xae200450  sw          $zero, 0x450($s1)
    ctx->pc = 0x19f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 0));
    // 0x19f2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2cc: 0xae200454  sw          $zero, 0x454($s1)
    ctx->pc = 0x19f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 0));
    // 0x19f2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2d4: 0xae270448  sw          $a3, 0x448($s1)
    ctx->pc = 0x19f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1096), GPR_U32(ctx, 7));
    // 0x19f2d8: 0xc068848  jal         func_1A2120
    ctx->pc = 0x19F2D8u;
    SET_GPR_U32(ctx, 31, 0x19F2E0u);
    ctx->pc = 0x19F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2D8u;
    // 0x19f2dc: 0xae22045c  sw          $v0, 0x45C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x19F2D8u, 0x19F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2E0u;
label_19f2e0:
    // 0x19f2e0: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x19f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x19f2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2e8: 0xae320458  sw          $s2, 0x458($s1)
    ctx->pc = 0x19f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 18));
    // 0x19f2ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f2f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19f2f4: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x19F2F4u;
    SET_GPR_U32(ctx, 31, 0x19F2FCu);
    ctx->pc = 0x19F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2F4u;
    // 0x19f2f8: 0x8c450440  lw          $a1, 0x440($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x19F2F4u, 0x19F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2FCu;
label_19f2fc:
    // 0x19f2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f300: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x19F300u;
    SET_GPR_U32(ctx, 31, 0x19F308u);
    ctx->pc = 0x19F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F300u;
    // 0x19f304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x19F300u, 0x19F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F308u;
label_19f308:
    // 0x19f308: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19f308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f30c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19f30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f310: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19f310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f318: 0x3e00008  jr          $ra
    ctx->pc = 0x19F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F318u;
        // 0x19f31c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F320u;
}
