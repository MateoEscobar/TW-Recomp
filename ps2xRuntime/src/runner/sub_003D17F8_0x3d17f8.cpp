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

// Function: sub_003D17F8
// Address: 0x3d17f8 - 0x3d1830
void sub_003D17F8_0x3d17f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D17F8_0x3d17f8");
#endif

    switch (ctx->pc) {
        case 0x3d17f8u: goto label_3d17f8;
        case 0x3d17fcu: goto label_3d17fc;
        case 0x3d1800u: goto label_3d1800;
        case 0x3d1804u: goto label_3d1804;
        case 0x3d1808u: goto label_3d1808;
        case 0x3d180cu: goto label_3d180c;
        case 0x3d1810u: goto label_3d1810;
        case 0x3d1814u: goto label_3d1814;
        case 0x3d1818u: goto label_3d1818;
        case 0x3d181cu: goto label_3d181c;
        case 0x3d1820u: goto label_3d1820;
        case 0x3d1824u: goto label_3d1824;
        case 0x3d1828u: goto label_3d1828;
        case 0x3d182cu: goto label_3d182c;
        default: break;
    }

    ctx->pc = 0x3d17f8u;

label_3d17f8:
    // 0x3d17f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d17f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d17fc:
    // 0x3d17fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d17fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d1800:
    // 0x3d1800: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d1800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d1804:
    // 0x3d1804: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d1804u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d1808:
    // 0x3d1808: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d1808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d180c:
    // 0x3d180c: 0x40f809  jalr        $v0
label_3d1810:
    if (ctx->pc == 0x3D1810u) {
        ctx->pc = 0x3D1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D180Cu;
        // 0x3d1810: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1814u;
        goto label_3d1814;
    }
    ctx->pc = 0x3D180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1814u);
        ctx->pc = 0x3D1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D180Cu;
        // 0x3d1810: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D180Cu, 0x3D1814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1814u;
label_3d1814:
    // 0x3d1814: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d1814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d1818:
    // 0x3d1818: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3d1818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d181c:
    // 0x3d181c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d181cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1820:
    // 0x3d1820: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d1820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3d1824:
    // 0x3d1824: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3d1828:
    // 0x3d1828: 0x3e00008  jr          $ra
label_3d182c:
    if (ctx->pc == 0x3D182Cu) {
        ctx->pc = 0x3D182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1828u;
        // 0x3d182c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1830u;
        goto label_fallthrough_0x3d1828;
    }
    ctx->pc = 0x3D1828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1828u;
        // 0x3d182c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d1828:
    ctx->pc = 0x3D1830u;
}
