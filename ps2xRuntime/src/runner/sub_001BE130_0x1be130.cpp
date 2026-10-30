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

// Function: sub_001BE130
// Address: 0x1be130 - 0x1be198
void sub_001BE130_0x1be130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE130_0x1be130");
#endif

    switch (ctx->pc) {
        case 0x1be130u: goto label_1be130;
        case 0x1be134u: goto label_1be134;
        case 0x1be138u: goto label_1be138;
        case 0x1be13cu: goto label_1be13c;
        case 0x1be140u: goto label_1be140;
        case 0x1be144u: goto label_1be144;
        case 0x1be148u: goto label_1be148;
        case 0x1be14cu: goto label_1be14c;
        case 0x1be150u: goto label_1be150;
        case 0x1be154u: goto label_1be154;
        case 0x1be158u: goto label_1be158;
        case 0x1be15cu: goto label_1be15c;
        case 0x1be160u: goto label_1be160;
        case 0x1be164u: goto label_1be164;
        case 0x1be168u: goto label_1be168;
        case 0x1be16cu: goto label_1be16c;
        case 0x1be170u: goto label_1be170;
        case 0x1be174u: goto label_1be174;
        case 0x1be178u: goto label_1be178;
        case 0x1be17cu: goto label_1be17c;
        case 0x1be180u: goto label_1be180;
        case 0x1be184u: goto label_1be184;
        case 0x1be188u: goto label_1be188;
        case 0x1be18cu: goto label_1be18c;
        case 0x1be190u: goto label_1be190;
        case 0x1be194u: goto label_1be194;
        default: break;
    }

    ctx->pc = 0x1be130u;

label_1be130:
    // 0x1be130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1be134:
    // 0x1be134: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1be134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1be138:
    // 0x1be138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1be13c:
    // 0x1be13c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be140:
    // 0x1be140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1be144:
    // 0x1be144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1be144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be148:
    // 0x1be148: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1be148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1be14c:
    // 0x1be14c: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1be150:
    // 0x1be150: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1be154:
    // 0x1be154: 0x40f809  jalr        $v0
label_1be158:
    if (ctx->pc == 0x1BE158u) {
        ctx->pc = 0x1BE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE154u;
        // 0x1be158: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE15Cu;
        goto label_1be15c;
    }
    ctx->pc = 0x1BE154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE15Cu);
        ctx->pc = 0x1BE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE154u;
        // 0x1be158: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE154u, 0x1BE15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE15Cu;
label_1be15c:
    // 0x1be15c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1be160:
    if (ctx->pc == 0x1BE160u) {
        ctx->pc = 0x1BE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE15Cu;
        // 0x1be160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE164u;
        goto label_1be164;
    }
    ctx->pc = 0x1BE15Cu;
    {
        const bool branch_taken_0x1be15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE15Cu;
        // 0x1be160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be15c) {
            ctx->pc = 0x1BE174u;
            goto label_1be174;
        }
    }
    ctx->pc = 0x1BE164u;
label_1be164:
    // 0x1be164: 0xc06f786  jal         func_1BDE18
label_1be168:
    if (ctx->pc == 0x1BE168u) {
        ctx->pc = 0x1BE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE164u;
        // 0x1be168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE16Cu;
        goto label_1be16c;
    }
    ctx->pc = 0x1BE164u;
    SET_GPR_U32(ctx, 31, 0x1BE16Cu);
    ctx->pc = 0x1BE168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE164u;
    // 0x1be168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE18u, 0x1BE164u, 0x1BE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE16Cu;
label_1be16c:
    // 0x1be16c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1be170:
    if (ctx->pc == 0x1BE170u) {
        ctx->pc = 0x1BE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE16Cu;
        // 0x1be170: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE174u;
        goto label_1be174;
    }
    ctx->pc = 0x1BE16Cu;
    {
        const bool branch_taken_0x1be16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE16Cu;
        // 0x1be170: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be16c) {
            ctx->pc = 0x1BE180u;
            goto label_1be180;
        }
    }
    ctx->pc = 0x1BE174u;
label_1be174:
    // 0x1be174: 0xc06f81c  jal         func_1BE070
label_1be178:
    if (ctx->pc == 0x1BE178u) {
        ctx->pc = 0x1BE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE174u;
        // 0x1be178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE17Cu;
        goto label_1be17c;
    }
    ctx->pc = 0x1BE174u;
    SET_GPR_U32(ctx, 31, 0x1BE17Cu);
    ctx->pc = 0x1BE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE174u;
    // 0x1be178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE070u, 0x1BE174u, 0x1BE17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE17Cu;
label_1be17c:
    // 0x1be17c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1be180:
    // 0x1be180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1be184:
    // 0x1be184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be188:
    // 0x1be188: 0x3e00008  jr          $ra
label_1be18c:
    if (ctx->pc == 0x1BE18Cu) {
        ctx->pc = 0x1BE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE188u;
        // 0x1be18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE190u;
        goto label_1be190;
    }
    ctx->pc = 0x1BE188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE188u;
        // 0x1be18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE190u;
label_1be190:
    // 0x1be190: 0xac460040  sw          $a2, 0x40($v0)
    ctx->pc = 0x1be190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
label_1be194:
    // 0x1be194: 0x0  nop
    ctx->pc = 0x1be194u;
    // NOP
    ctx->pc = 0x1be198u;
}
