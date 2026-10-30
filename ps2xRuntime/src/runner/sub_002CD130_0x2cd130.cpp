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

// Function: sub_002CD130
// Address: 0x2cd130 - 0x2cd198
void sub_002CD130_0x2cd130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD130_0x2cd130");
#endif

    switch (ctx->pc) {
        case 0x2cd130u: goto label_2cd130;
        case 0x2cd134u: goto label_2cd134;
        case 0x2cd138u: goto label_2cd138;
        case 0x2cd13cu: goto label_2cd13c;
        case 0x2cd140u: goto label_2cd140;
        case 0x2cd144u: goto label_2cd144;
        case 0x2cd148u: goto label_2cd148;
        case 0x2cd14cu: goto label_2cd14c;
        case 0x2cd150u: goto label_2cd150;
        case 0x2cd154u: goto label_2cd154;
        case 0x2cd158u: goto label_2cd158;
        case 0x2cd15cu: goto label_2cd15c;
        case 0x2cd160u: goto label_2cd160;
        case 0x2cd164u: goto label_2cd164;
        case 0x2cd168u: goto label_2cd168;
        case 0x2cd16cu: goto label_2cd16c;
        case 0x2cd170u: goto label_2cd170;
        case 0x2cd174u: goto label_2cd174;
        case 0x2cd178u: goto label_2cd178;
        case 0x2cd17cu: goto label_2cd17c;
        case 0x2cd180u: goto label_2cd180;
        case 0x2cd184u: goto label_2cd184;
        case 0x2cd188u: goto label_2cd188;
        case 0x2cd18cu: goto label_2cd18c;
        case 0x2cd190u: goto label_2cd190;
        case 0x2cd194u: goto label_2cd194;
        default: break;
    }

    ctx->pc = 0x2cd130u;

label_2cd130:
    // 0x2cd130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cd134:
    // 0x2cd134: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cd134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2cd138:
    // 0x2cd138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd13c:
    // 0x2cd13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cd140:
    // 0x2cd140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cd144:
    // 0x2cd144: 0xc0e40a2  jal         func_390288
label_2cd148:
    if (ctx->pc == 0x2CD148u) {
        ctx->pc = 0x2CD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD144u;
        // 0x2cd148: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD14Cu;
        goto label_2cd14c;
    }
    ctx->pc = 0x2CD144u;
    SET_GPR_U32(ctx, 31, 0x2CD14Cu);
    ctx->pc = 0x2CD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD144u;
    // 0x2cd148: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2CD144u, 0x2CD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD14Cu;
label_2cd14c:
    // 0x2cd14c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cd14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd150:
    // 0x2cd150: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
label_2cd154:
    if (ctx->pc == 0x2CD154u) {
        ctx->pc = 0x2CD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD150u;
        // 0x2cd154: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD158u;
        goto label_2cd158;
    }
    ctx->pc = 0x2CD150u;
    {
        const bool branch_taken_0x2cd150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd150) {
            ctx->pc = 0x2CD154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD150u;
            // 0x2cd154: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD184u;
            goto label_2cd184;
        }
    }
    ctx->pc = 0x2CD158u;
label_2cd158:
    // 0x2cd158: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cd158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd15c:
    // 0x2cd15c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd160:
    // 0x2cd160: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cd160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cd164:
    // 0x2cd164: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cd164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cd168:
    // 0x2cd168: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cd16c:
    // 0x2cd16c: 0x40f809  jalr        $v0
label_2cd170:
    if (ctx->pc == 0x2CD170u) {
        ctx->pc = 0x2CD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD16Cu;
        // 0x2cd170: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD174u;
        goto label_2cd174;
    }
    ctx->pc = 0x2CD16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD174u);
        ctx->pc = 0x2CD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD16Cu;
        // 0x2cd170: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD16Cu, 0x2CD174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD174u;
label_2cd174:
    // 0x2cd174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd178:
    // 0x2cd178: 0xc10586e  jal         func_4161B8
label_2cd17c:
    if (ctx->pc == 0x2CD17Cu) {
        ctx->pc = 0x2CD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD178u;
        // 0x2cd17c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD180u;
        goto label_2cd180;
    }
    ctx->pc = 0x2CD178u;
    SET_GPR_U32(ctx, 31, 0x2CD180u);
    ctx->pc = 0x2CD17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD178u;
    // 0x2cd17c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2CD178u, 0x2CD180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD180u;
label_2cd180:
    // 0x2cd180: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cd180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cd184:
    // 0x2cd184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd188:
    // 0x2cd188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd18c:
    // 0x2cd18c: 0x3e00008  jr          $ra
label_2cd190:
    if (ctx->pc == 0x2CD190u) {
        ctx->pc = 0x2CD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD18Cu;
        // 0x2cd190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD194u;
        goto label_2cd194;
    }
    ctx->pc = 0x2CD18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD18Cu;
        // 0x2cd190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD194u;
label_2cd194:
    // 0x2cd194: 0x0  nop
    ctx->pc = 0x2cd194u;
    // NOP
    ctx->pc = 0x2cd198u;
}
