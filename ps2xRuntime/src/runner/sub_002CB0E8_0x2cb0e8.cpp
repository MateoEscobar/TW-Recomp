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

// Function: sub_002CB0E8
// Address: 0x2cb0e8 - 0x2cb138
void sub_002CB0E8_0x2cb0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB0E8_0x2cb0e8");
#endif

    switch (ctx->pc) {
        case 0x2cb0e8u: goto label_2cb0e8;
        case 0x2cb0ecu: goto label_2cb0ec;
        case 0x2cb0f0u: goto label_2cb0f0;
        case 0x2cb0f4u: goto label_2cb0f4;
        case 0x2cb0f8u: goto label_2cb0f8;
        case 0x2cb0fcu: goto label_2cb0fc;
        case 0x2cb100u: goto label_2cb100;
        case 0x2cb104u: goto label_2cb104;
        case 0x2cb108u: goto label_2cb108;
        case 0x2cb10cu: goto label_2cb10c;
        case 0x2cb110u: goto label_2cb110;
        case 0x2cb114u: goto label_2cb114;
        case 0x2cb118u: goto label_2cb118;
        case 0x2cb11cu: goto label_2cb11c;
        case 0x2cb120u: goto label_2cb120;
        case 0x2cb124u: goto label_2cb124;
        case 0x2cb128u: goto label_2cb128;
        case 0x2cb12cu: goto label_2cb12c;
        case 0x2cb130u: goto label_2cb130;
        case 0x2cb134u: goto label_2cb134;
        default: break;
    }

    ctx->pc = 0x2cb0e8u;

label_2cb0e8:
    // 0x2cb0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cb0ec:
    // 0x2cb0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb0f0:
    // 0x2cb0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cb0f4:
    // 0x2cb0f4: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x2cb0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_2cb0f8:
    // 0x2cb0f8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_2cb0fc:
    if (ctx->pc == 0x2CB0FCu) {
        ctx->pc = 0x2CB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0F8u;
        // 0x2cb0fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB100u;
        goto label_2cb100;
    }
    ctx->pc = 0x2CB0F8u;
    {
        const bool branch_taken_0x2cb0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0F8u;
        // 0x2cb0fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0f8) {
            ctx->pc = 0x2CB130u;
            goto label_2cb130;
        }
    }
    ctx->pc = 0x2CB100u;
label_2cb100:
    // 0x2cb100: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cb100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb104:
    // 0x2cb104: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cb104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb108:
    // 0x2cb108: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cb108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cb10c:
    // 0x2cb10c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb110:
    // 0x2cb110: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb114:
    // 0x2cb114: 0x40f809  jalr        $v0
label_2cb118:
    if (ctx->pc == 0x2CB118u) {
        ctx->pc = 0x2CB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB114u;
        // 0x2cb118: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB11Cu;
        goto label_2cb11c;
    }
    ctx->pc = 0x2CB114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB11Cu);
        ctx->pc = 0x2CB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB114u;
        // 0x2cb118: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB114u, 0x2CB11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB11Cu;
label_2cb11c:
    // 0x2cb11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb120:
    // 0x2cb120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb124:
    // 0x2cb124: 0xc08e1a4  jal         func_238690
label_2cb128:
    if (ctx->pc == 0x2CB128u) {
        ctx->pc = 0x2CB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB124u;
        // 0x2cb128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB12Cu;
        goto label_2cb12c;
    }
    ctx->pc = 0x2CB124u;
    SET_GPR_U32(ctx, 31, 0x2CB12Cu);
    ctx->pc = 0x2CB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB124u;
    // 0x2cb128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2CB124u, 0x2CB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB12Cu;
label_2cb12c:
    // 0x2cb12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb130:
    // 0x2cb130: 0x3e00008  jr          $ra
label_2cb134:
    if (ctx->pc == 0x2CB134u) {
        ctx->pc = 0x2CB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB130u;
        // 0x2cb134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB138u;
        goto label_fallthrough_0x2cb130;
    }
    ctx->pc = 0x2CB130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB130u;
        // 0x2cb134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cb130:
    ctx->pc = 0x2CB138u;
}
