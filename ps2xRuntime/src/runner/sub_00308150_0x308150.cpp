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

// Function: sub_00308150
// Address: 0x308150 - 0x3081a8
void sub_00308150_0x308150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308150_0x308150");
#endif

    switch (ctx->pc) {
        case 0x308150u: goto label_308150;
        case 0x308154u: goto label_308154;
        case 0x308158u: goto label_308158;
        case 0x30815cu: goto label_30815c;
        case 0x308160u: goto label_308160;
        case 0x308164u: goto label_308164;
        case 0x308168u: goto label_308168;
        case 0x30816cu: goto label_30816c;
        case 0x308170u: goto label_308170;
        case 0x308174u: goto label_308174;
        case 0x308178u: goto label_308178;
        case 0x30817cu: goto label_30817c;
        case 0x308180u: goto label_308180;
        case 0x308184u: goto label_308184;
        case 0x308188u: goto label_308188;
        case 0x30818cu: goto label_30818c;
        case 0x308190u: goto label_308190;
        case 0x308194u: goto label_308194;
        case 0x308198u: goto label_308198;
        case 0x30819cu: goto label_30819c;
        case 0x3081a0u: goto label_3081a0;
        case 0x3081a4u: goto label_3081a4;
        default: break;
    }

    ctx->pc = 0x308150u;

label_308150:
    // 0x308150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_308154:
    // 0x308154: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x308154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_308158:
    // 0x308158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30815c:
    // 0x30815c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30815cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308160:
    // 0x308160: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x308160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_308164:
    // 0x308164: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_308168:
    if (ctx->pc == 0x308168u) {
        ctx->pc = 0x308168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308164u;
        // 0x308168: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30816Cu;
        goto label_30816c;
    }
    ctx->pc = 0x308164u;
    {
        const bool branch_taken_0x308164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308164) {
            ctx->pc = 0x308168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308164u;
            // 0x308168: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308198u;
            goto label_308198;
        }
    }
    ctx->pc = 0x30816Cu;
label_30816c:
    // 0x30816c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x30816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_308170:
    // 0x308170: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308174:
    // 0x308174: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308178:
    // 0x308178: 0x40f809  jalr        $v0
label_30817c:
    if (ctx->pc == 0x30817Cu) {
        ctx->pc = 0x30817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308178u;
        // 0x30817c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308180u;
        goto label_308180;
    }
    ctx->pc = 0x308178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308180u);
        ctx->pc = 0x30817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308178u;
        // 0x30817c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308178u, 0x308180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308180u;
label_308180:
    // 0x308180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308184:
    // 0x308184: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_308188:
    if (ctx->pc == 0x308188u) {
        ctx->pc = 0x308188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308184u;
        // 0x308188: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30818Cu;
        goto label_30818c;
    }
    ctx->pc = 0x308184u;
    {
        const bool branch_taken_0x308184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x308184) {
            ctx->pc = 0x308188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308184u;
            // 0x308188: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308198u;
            goto label_308198;
        }
    }
    ctx->pc = 0x30818Cu;
label_30818c:
    // 0x30818c: 0xc0c1de2  jal         func_307788
label_308190:
    if (ctx->pc == 0x308190u) {
        ctx->pc = 0x308190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30818Cu;
        // 0x308190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308194u;
        goto label_308194;
    }
    ctx->pc = 0x30818Cu;
    SET_GPR_U32(ctx, 31, 0x308194u);
    ctx->pc = 0x308190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30818Cu;
    // 0x308190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307788u, 0x30818Cu, 0x308194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308194u;
label_308194:
    // 0x308194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x308194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_308198:
    // 0x308198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30819c:
    // 0x30819c: 0x3e00008  jr          $ra
label_3081a0:
    if (ctx->pc == 0x3081A0u) {
        ctx->pc = 0x3081A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30819Cu;
        // 0x3081a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3081A4u;
        goto label_3081a4;
    }
    ctx->pc = 0x30819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3081A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30819Cu;
        // 0x3081a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30819Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3081A4u;
label_3081a4:
    // 0x3081a4: 0x0  nop
    ctx->pc = 0x3081a4u;
    // NOP
    ctx->pc = 0x3081a8u;
}
