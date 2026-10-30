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

// Function: sub_001612B0
// Address: 0x1612b0 - 0x161340
void sub_001612B0_0x1612b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001612B0_0x1612b0");
#endif

    switch (ctx->pc) {
        case 0x1612dcu: goto label_1612dc;
        case 0x1612f0u: goto label_1612f0;
        case 0x161308u: goto label_161308;
        case 0x16131cu: goto label_16131c;
        case 0x161330u: goto label_161330;
        default: break;
    }

    ctx->pc = 0x1612b0u;

    // 0x1612b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1612b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1612b4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1612b8: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1612bc: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1612bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1612c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1612c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1612c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1612c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1612c8: 0x946256dc  lhu         $v0, 0x56DC($v1)
    ctx->pc = 0x1612c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
    // 0x1612cc: 0x452018  mult        $a0, $v0, $a1
    ctx->pc = 0x1612ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1612d0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1612d4: 0xc080fde  jal         func_203F78
    ctx->pc = 0x1612D4u;
    SET_GPR_U32(ctx, 31, 0x1612DCu);
    ctx->pc = 0x1612D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1612D4u;
    // 0x1612d8: 0x245014e8  addiu       $s0, $v0, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F78u, 0x1612D4u, 0x1612DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612DCu;
label_1612dc:
    // 0x1612dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1612DCu;
    {
        const bool branch_taken_0x1612dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612DCu;
        // 0x1612e0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612dc) {
            ctx->pc = 0x1612F8u;
            goto label_1612f8;
        }
    }
    ctx->pc = 0x1612E4u;
    // 0x1612e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1612e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612e8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1612E8u;
    SET_GPR_U32(ctx, 31, 0x1612F0u);
    ctx->pc = 0x1612ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1612E8u;
    // 0x1612ec: 0x24a50460  addiu       $a1, $a1, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1612E8u, 0x1612F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612F0u;
label_1612f0:
    // 0x1612f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1612F0u;
    {
        const bool branch_taken_0x1612f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612F0u;
        // 0x1612f4: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612f0) {
            ctx->pc = 0x161310u;
            goto label_161310;
        }
    }
    ctx->pc = 0x1612F8u;
label_1612f8:
    // 0x1612f8: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1612f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x1612fc: 0x26106da8  addiu       $s0, $s0, 0x6DA8
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28072));
    // 0x161300: 0xc058e22  jal         func_163888
    ctx->pc = 0x161300u;
    SET_GPR_U32(ctx, 31, 0x161308u);
    ctx->pc = 0x161304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161300u;
    // 0x161304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163888u, 0x161300u, 0x161308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161308u;
label_161308:
    // 0x161308: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161308u;
    {
        const bool branch_taken_0x161308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161308u;
        // 0x16130c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161308) {
            ctx->pc = 0x161320u;
            goto label_161320;
        }
    }
    ctx->pc = 0x161310u;
label_161310:
    // 0x161310: 0x26106dc8  addiu       $s0, $s0, 0x6DC8
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28104));
    // 0x161314: 0xc058828  jal         func_1620A0
    ctx->pc = 0x161314u;
    SET_GPR_U32(ctx, 31, 0x16131Cu);
    ctx->pc = 0x161318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161314u;
    // 0x161318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x161314u, 0x16131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16131Cu;
label_16131c:
    // 0x16131c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_161320:
    // 0x161320: 0xac506dec  sw          $s0, 0x6DEC($v0)
    ctx->pc = 0x161320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28140), GPR_U32(ctx, 16));
    // 0x161324: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x161324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x161328: 0xc051636  jal         func_1458D8
    ctx->pc = 0x161328u;
    SET_GPR_U32(ctx, 31, 0x161330u);
    ctx->pc = 0x16132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161328u;
    // 0x16132c: 0x24841340  addiu       $a0, $a0, 0x1340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458D8u, 0x161328u, 0x161330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161330u;
label_161330:
    // 0x161330: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161338: 0x3e00008  jr          $ra
    ctx->pc = 0x161338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161338u;
        // 0x16133c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161340u;
}
