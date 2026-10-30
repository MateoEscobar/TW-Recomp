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

// Function: sub_0041C2D0
// Address: 0x41c2d0 - 0x41c338
void sub_0041C2D0_0x41c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C2D0_0x41c2d0");
#endif

    switch (ctx->pc) {
        case 0x41c2d0u: goto label_41c2d0;
        case 0x41c2d4u: goto label_41c2d4;
        case 0x41c2d8u: goto label_41c2d8;
        case 0x41c2dcu: goto label_41c2dc;
        case 0x41c2e0u: goto label_41c2e0;
        case 0x41c2e4u: goto label_41c2e4;
        case 0x41c2e8u: goto label_41c2e8;
        case 0x41c2ecu: goto label_41c2ec;
        case 0x41c2f0u: goto label_41c2f0;
        case 0x41c2f4u: goto label_41c2f4;
        case 0x41c2f8u: goto label_41c2f8;
        case 0x41c2fcu: goto label_41c2fc;
        case 0x41c300u: goto label_41c300;
        case 0x41c304u: goto label_41c304;
        case 0x41c308u: goto label_41c308;
        case 0x41c30cu: goto label_41c30c;
        case 0x41c310u: goto label_41c310;
        case 0x41c314u: goto label_41c314;
        case 0x41c318u: goto label_41c318;
        case 0x41c31cu: goto label_41c31c;
        case 0x41c320u: goto label_41c320;
        case 0x41c324u: goto label_41c324;
        case 0x41c328u: goto label_41c328;
        case 0x41c32cu: goto label_41c32c;
        case 0x41c330u: goto label_41c330;
        case 0x41c334u: goto label_41c334;
        default: break;
    }

    ctx->pc = 0x41c2d0u;

label_41c2d0:
    // 0x41c2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41c2d4:
    // 0x41c2d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41c2d8:
    // 0x41c2d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41c2dc:
    // 0x41c2dc: 0x48400  sll         $s0, $a0, 16
    ctx->pc = 0x41c2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_41c2e0:
    // 0x41c2e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41c2e4:
    // 0x41c2e4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_41c2e8:
    // 0x41c2e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41c2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41c2ec:
    // 0x41c2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41c2f0:
    // 0x41c2f0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x41c2f0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_41c2f4:
    // 0x41c2f4: 0xc0e409a  jal         func_390268
label_41c2f8:
    if (ctx->pc == 0x41C2F8u) {
        ctx->pc = 0x41C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2F4u;
        // 0x41c2f8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C2FCu;
        goto label_41c2fc;
    }
    ctx->pc = 0x41C2F4u;
    SET_GPR_U32(ctx, 31, 0x41C2FCu);
    ctx->pc = 0x41C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C2F4u;
    // 0x41c2f8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41C2F4u, 0x41C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C2FCu;
label_41c2fc:
    // 0x41c2fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c300:
    // 0x41c300: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41c300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41c304:
    // 0x41c304: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x41c304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41c308:
    // 0x41c308: 0xa0f809  jalr        $a1
label_41c30c:
    if (ctx->pc == 0x41C30Cu) {
        ctx->pc = 0x41C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C308u;
        // 0x41c30c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C310u;
        goto label_41c310;
    }
    ctx->pc = 0x41C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x41C310u);
        ctx->pc = 0x41C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C308u;
        // 0x41c30c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C308u, 0x41C310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C310u;
label_41c310:
    // 0x41c310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41c310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c314:
    // 0x41c314: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41c314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41c318:
    // 0x41c318: 0xc107720  jal         func_41DC80
label_41c31c:
    if (ctx->pc == 0x41C31Cu) {
        ctx->pc = 0x41C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C318u;
        // 0x41c31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C320u;
        goto label_41c320;
    }
    ctx->pc = 0x41C318u;
    SET_GPR_U32(ctx, 31, 0x41C320u);
    ctx->pc = 0x41C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C318u;
    // 0x41c31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DC80u, 0x41C318u, 0x41C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C320u;
label_41c320:
    // 0x41c320: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41c320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c324:
    // 0x41c324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41c324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c328:
    // 0x41c328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41c32c:
    // 0x41c32c: 0x3e00008  jr          $ra
label_41c330:
    if (ctx->pc == 0x41C330u) {
        ctx->pc = 0x41C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C32Cu;
        // 0x41c330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C334u;
        goto label_41c334;
    }
    ctx->pc = 0x41C32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C32Cu;
        // 0x41c330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C334u;
label_41c334:
    // 0x41c334: 0x0  nop
    ctx->pc = 0x41c334u;
    // NOP
    ctx->pc = 0x41c338u;
}
