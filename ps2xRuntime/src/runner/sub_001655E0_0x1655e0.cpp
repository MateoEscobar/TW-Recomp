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

// Function: sub_001655E0
// Address: 0x1655e0 - 0x165640
void sub_001655E0_0x1655e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001655E0_0x1655e0");
#endif

    switch (ctx->pc) {
        case 0x1655e0u: goto label_1655e0;
        case 0x1655e4u: goto label_1655e4;
        case 0x1655e8u: goto label_1655e8;
        case 0x1655ecu: goto label_1655ec;
        case 0x1655f0u: goto label_1655f0;
        case 0x1655f4u: goto label_1655f4;
        case 0x1655f8u: goto label_1655f8;
        case 0x1655fcu: goto label_1655fc;
        case 0x165600u: goto label_165600;
        case 0x165604u: goto label_165604;
        case 0x165608u: goto label_165608;
        case 0x16560cu: goto label_16560c;
        case 0x165610u: goto label_165610;
        case 0x165614u: goto label_165614;
        case 0x165618u: goto label_165618;
        case 0x16561cu: goto label_16561c;
        case 0x165620u: goto label_165620;
        case 0x165624u: goto label_165624;
        case 0x165628u: goto label_165628;
        case 0x16562cu: goto label_16562c;
        case 0x165630u: goto label_165630;
        case 0x165634u: goto label_165634;
        case 0x165638u: goto label_165638;
        case 0x16563cu: goto label_16563c;
        default: break;
    }

    ctx->pc = 0x1655e0u;

label_1655e0:
    // 0x1655e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1655e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1655e4:
    // 0x1655e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1655e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1655e8:
    // 0x1655e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1655e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1655ec:
    // 0x1655ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1655ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1655f0:
    // 0x1655f0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1655f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1655f4:
    // 0x1655f4: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_1655f8:
    if (ctx->pc == 0x1655F8u) {
        ctx->pc = 0x1655F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655F4u;
        // 0x1655f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655FCu;
        goto label_1655fc;
    }
    ctx->pc = 0x1655F4u;
    {
        const bool branch_taken_0x1655f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655f4) {
            ctx->pc = 0x1655F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655F4u;
            // 0x1655f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165630u;
            goto label_165630;
        }
    }
    ctx->pc = 0x1655FCu;
label_1655fc:
    // 0x1655fc: 0xc0c1a14  jal         func_306850
label_165600:
    if (ctx->pc == 0x165600u) {
        ctx->pc = 0x165604u;
        goto label_165604;
    }
    ctx->pc = 0x1655FCu;
    SET_GPR_U32(ctx, 31, 0x165604u);
    ctx->pc = 0x306850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306850u, 0x1655FCu, 0x165604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165604u;
label_165604:
    // 0x165604: 0xc0c197e  jal         func_3065F8
label_165608:
    if (ctx->pc == 0x165608u) {
        ctx->pc = 0x165608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165604u;
        // 0x165608: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16560Cu;
        goto label_16560c;
    }
    ctx->pc = 0x165604u;
    SET_GPR_U32(ctx, 31, 0x16560Cu);
    ctx->pc = 0x165608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165604u;
    // 0x165608: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3065F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3065F8u, 0x165604u, 0x16560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16560Cu;
label_16560c:
    // 0x16560c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_165610:
    // 0x165610: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x165610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_165614:
    // 0x165614: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_165618:
    // 0x165618: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x165618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16561c:
    // 0x16561c: 0x40f809  jalr        $v0
label_165620:
    if (ctx->pc == 0x165620u) {
        ctx->pc = 0x165620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16561Cu;
        // 0x165620: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165624u;
        goto label_165624;
    }
    ctx->pc = 0x16561Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165624u);
        ctx->pc = 0x165620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16561Cu;
        // 0x165620: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16561Cu, 0x165624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165624u;
label_165624:
    // 0x165624: 0xa20200dd  sb          $v0, 0xDD($s0)
    ctx->pc = 0x165624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 2));
label_165628:
    // 0x165628: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x165628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_16562c:
    // 0x16562c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16562cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165630:
    // 0x165630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165634:
    // 0x165634: 0x3e00008  jr          $ra
label_165638:
    if (ctx->pc == 0x165638u) {
        ctx->pc = 0x165638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165634u;
        // 0x165638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16563Cu;
        goto label_16563c;
    }
    ctx->pc = 0x165634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165634u;
        // 0x165638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16563Cu;
label_16563c:
    // 0x16563c: 0x0  nop
    ctx->pc = 0x16563cu;
    // NOP
    ctx->pc = 0x165640u;
}
