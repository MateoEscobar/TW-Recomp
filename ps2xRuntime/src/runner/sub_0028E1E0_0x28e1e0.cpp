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

// Function: sub_0028E1E0
// Address: 0x28e1e0 - 0x28e248
void sub_0028E1E0_0x28e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E1E0_0x28e1e0");
#endif

    switch (ctx->pc) {
        case 0x28e1e0u: goto label_28e1e0;
        case 0x28e1e4u: goto label_28e1e4;
        case 0x28e1e8u: goto label_28e1e8;
        case 0x28e1ecu: goto label_28e1ec;
        case 0x28e1f0u: goto label_28e1f0;
        case 0x28e1f4u: goto label_28e1f4;
        case 0x28e1f8u: goto label_28e1f8;
        case 0x28e1fcu: goto label_28e1fc;
        case 0x28e200u: goto label_28e200;
        case 0x28e204u: goto label_28e204;
        case 0x28e208u: goto label_28e208;
        case 0x28e20cu: goto label_28e20c;
        case 0x28e210u: goto label_28e210;
        case 0x28e214u: goto label_28e214;
        case 0x28e218u: goto label_28e218;
        case 0x28e21cu: goto label_28e21c;
        case 0x28e220u: goto label_28e220;
        case 0x28e224u: goto label_28e224;
        case 0x28e228u: goto label_28e228;
        case 0x28e22cu: goto label_28e22c;
        case 0x28e230u: goto label_28e230;
        case 0x28e234u: goto label_28e234;
        case 0x28e238u: goto label_28e238;
        case 0x28e23cu: goto label_28e23c;
        case 0x28e240u: goto label_28e240;
        case 0x28e244u: goto label_28e244;
        default: break;
    }

    ctx->pc = 0x28e1e0u;

label_28e1e0:
    // 0x28e1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28e1e4:
    // 0x28e1e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28e1e8:
    // 0x28e1e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28e1ec:
    // 0x28e1ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e1f0:
    // 0x28e1f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28e1f4:
    // 0x28e1f4: 0xc0a3792  jal         func_28DE48
label_28e1f8:
    if (ctx->pc == 0x28E1F8u) {
        ctx->pc = 0x28E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1F4u;
        // 0x28e1f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1FCu;
        goto label_28e1fc;
    }
    ctx->pc = 0x28E1F4u;
    SET_GPR_U32(ctx, 31, 0x28E1FCu);
    ctx->pc = 0x28E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E1F4u;
    // 0x28e1f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x28E1F4u, 0x28E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1FCu;
label_28e1fc:
    // 0x28e1fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e200:
    // 0x28e200: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_28e204:
    if (ctx->pc == 0x28E204u) {
        ctx->pc = 0x28E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E200u;
        // 0x28e204: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E208u;
        goto label_28e208;
    }
    ctx->pc = 0x28E200u;
    {
        const bool branch_taken_0x28e200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28e200) {
            ctx->pc = 0x28E204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E200u;
            // 0x28e204: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E234u;
            goto label_28e234;
        }
    }
    ctx->pc = 0x28E208u;
label_28e208:
    // 0x28e208: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28e20c:
    // 0x28e20c: 0x261001a4  addiu       $s0, $s0, 0x1A4
    ctx->pc = 0x28e20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
label_28e210:
    // 0x28e210: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28e210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28e214:
    // 0x28e214: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28e218:
    // 0x28e218: 0x40f809  jalr        $v0
label_28e21c:
    if (ctx->pc == 0x28E21Cu) {
        ctx->pc = 0x28E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E218u;
        // 0x28e21c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E220u;
        goto label_28e220;
    }
    ctx->pc = 0x28E218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E220u);
        ctx->pc = 0x28E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E218u;
        // 0x28e21c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E218u, 0x28E220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E220u;
label_28e220:
    // 0x28e220: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28e220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28e224:
    // 0x28e224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e228:
    // 0x28e228: 0xc13b6bc  jal         func_4EDAF0
label_28e22c:
    if (ctx->pc == 0x28E22Cu) {
        ctx->pc = 0x28E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E228u;
        // 0x28e22c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E230u;
        goto label_28e230;
    }
    ctx->pc = 0x28E228u;
    SET_GPR_U32(ctx, 31, 0x28E230u);
    ctx->pc = 0x28E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E228u;
    // 0x28e22c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDAF0u, 0x28E228u, 0x28E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E230u;
label_28e230:
    // 0x28e230: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28e230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e234:
    // 0x28e234: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28e234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e238:
    // 0x28e238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28e238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28e23c:
    // 0x28e23c: 0x3e00008  jr          $ra
label_28e240:
    if (ctx->pc == 0x28E240u) {
        ctx->pc = 0x28E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E23Cu;
        // 0x28e240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E244u;
        goto label_28e244;
    }
    ctx->pc = 0x28E23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E23Cu;
        // 0x28e240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E244u;
label_28e244:
    // 0x28e244: 0x0  nop
    ctx->pc = 0x28e244u;
    // NOP
    ctx->pc = 0x28e248u;
}
