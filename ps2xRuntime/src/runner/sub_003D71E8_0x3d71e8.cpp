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

// Function: sub_003D71E8
// Address: 0x3d71e8 - 0x3d7230
void sub_003D71E8_0x3d71e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D71E8_0x3d71e8");
#endif

    switch (ctx->pc) {
        case 0x3d71e8u: goto label_3d71e8;
        case 0x3d71ecu: goto label_3d71ec;
        case 0x3d71f0u: goto label_3d71f0;
        case 0x3d71f4u: goto label_3d71f4;
        case 0x3d71f8u: goto label_3d71f8;
        case 0x3d71fcu: goto label_3d71fc;
        case 0x3d7200u: goto label_3d7200;
        case 0x3d7204u: goto label_3d7204;
        case 0x3d7208u: goto label_3d7208;
        case 0x3d720cu: goto label_3d720c;
        case 0x3d7210u: goto label_3d7210;
        case 0x3d7214u: goto label_3d7214;
        case 0x3d7218u: goto label_3d7218;
        case 0x3d721cu: goto label_3d721c;
        case 0x3d7220u: goto label_3d7220;
        case 0x3d7224u: goto label_3d7224;
        case 0x3d7228u: goto label_3d7228;
        case 0x3d722cu: goto label_3d722c;
        default: break;
    }

    ctx->pc = 0x3d71e8u;

label_3d71e8:
    // 0x3d71e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d71e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d71ec:
    // 0x3d71ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d71ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d71f0:
    // 0x3d71f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d71f4:
    // 0x3d71f4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d71f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d71f8:
    // 0x3d71f8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d71fc:
    // 0x3d71fc: 0x40f809  jalr        $v0
label_3d7200:
    if (ctx->pc == 0x3D7200u) {
        ctx->pc = 0x3D7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71FCu;
        // 0x3d7200: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7204u;
        goto label_3d7204;
    }
    ctx->pc = 0x3D71FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7204u);
        ctx->pc = 0x3D7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71FCu;
        // 0x3d7200: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D71FCu, 0x3D7204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7204u;
label_3d7204:
    // 0x3d7204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d7204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7208:
    // 0x3d7208: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d7208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d720c:
    // 0x3d720c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d7210:
    if (ctx->pc == 0x3D7210u) {
        ctx->pc = 0x3D7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D720Cu;
        // 0x3d7210: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7214u;
        goto label_3d7214;
    }
    ctx->pc = 0x3D720Cu;
    {
        const bool branch_taken_0x3d720c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D720Cu;
        // 0x3d7210: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d720c) {
            ctx->pc = 0x3D7220u;
            goto label_3d7220;
        }
    }
    ctx->pc = 0x3D7214u;
label_3d7214:
    // 0x3d7214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d7214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7218:
    // 0x3d7218: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d721c:
    if (ctx->pc == 0x3D721Cu) {
        ctx->pc = 0x3D721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7218u;
        // 0x3d721c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7220u;
        goto label_3d7220;
    }
    ctx->pc = 0x3D7218u;
    {
        const bool branch_taken_0x3d7218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7218u;
        // 0x3d721c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7218) {
            ctx->pc = 0x3D7224u;
            goto label_3d7224;
        }
    }
    ctx->pc = 0x3D7220u;
label_3d7220:
    // 0x3d7220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7224:
    // 0x3d7224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7228:
    // 0x3d7228: 0x3e00008  jr          $ra
label_3d722c:
    if (ctx->pc == 0x3D722Cu) {
        ctx->pc = 0x3D722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7228u;
        // 0x3d722c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7230u;
        goto label_fallthrough_0x3d7228;
    }
    ctx->pc = 0x3D7228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7228u;
        // 0x3d722c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7228:
    ctx->pc = 0x3D7230u;
}
