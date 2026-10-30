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

// Function: sub_00353158
// Address: 0x353158 - 0x3531a8
void sub_00353158_0x353158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353158_0x353158");
#endif

    switch (ctx->pc) {
        case 0x353158u: goto label_353158;
        case 0x35315cu: goto label_35315c;
        case 0x353160u: goto label_353160;
        case 0x353164u: goto label_353164;
        case 0x353168u: goto label_353168;
        case 0x35316cu: goto label_35316c;
        case 0x353170u: goto label_353170;
        case 0x353174u: goto label_353174;
        case 0x353178u: goto label_353178;
        case 0x35317cu: goto label_35317c;
        case 0x353180u: goto label_353180;
        case 0x353184u: goto label_353184;
        case 0x353188u: goto label_353188;
        case 0x35318cu: goto label_35318c;
        case 0x353190u: goto label_353190;
        case 0x353194u: goto label_353194;
        case 0x353198u: goto label_353198;
        case 0x35319cu: goto label_35319c;
        case 0x3531a0u: goto label_3531a0;
        case 0x3531a4u: goto label_3531a4;
        default: break;
    }

    ctx->pc = 0x353158u;

label_353158:
    // 0x353158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35315c:
    // 0x35315c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x35315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_353160:
    // 0x353160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x353160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_353164:
    // 0x353164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_353168:
    // 0x353168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35316c:
    // 0x35316c: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x35316cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_353170:
    // 0x353170: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x353170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_353174:
    // 0x353174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_353178:
    // 0x353178: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x353178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_35317c:
    // 0x35317c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_353180:
    // 0x353180: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x353180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_353184:
    // 0x353184: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x353184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_353188:
    // 0x353188: 0x40f809  jalr        $v0
label_35318c:
    if (ctx->pc == 0x35318Cu) {
        ctx->pc = 0x35318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353188u;
        // 0x35318c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353190u;
        goto label_353190;
    }
    ctx->pc = 0x353188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x353190u);
        ctx->pc = 0x35318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353188u;
        // 0x35318c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353188u, 0x353190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353190u;
label_353190:
    // 0x353190: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x353190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_353194:
    // 0x353194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x353194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353198:
    // 0x353198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35319c:
    // 0x35319c: 0x3e00008  jr          $ra
label_3531a0:
    if (ctx->pc == 0x3531A0u) {
        ctx->pc = 0x3531A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35319Cu;
        // 0x3531a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3531A4u;
        goto label_3531a4;
    }
    ctx->pc = 0x35319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3531A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35319Cu;
        // 0x3531a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3531A4u;
label_3531a4:
    // 0x3531a4: 0x0  nop
    ctx->pc = 0x3531a4u;
    // NOP
    ctx->pc = 0x3531a8u;
}
