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

// Function: sub_00483110
// Address: 0x483110 - 0x483180
void sub_00483110_0x483110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483110_0x483110");
#endif

    switch (ctx->pc) {
        case 0x483110u: goto label_483110;
        case 0x483114u: goto label_483114;
        case 0x483118u: goto label_483118;
        case 0x48311cu: goto label_48311c;
        case 0x483120u: goto label_483120;
        case 0x483124u: goto label_483124;
        case 0x483128u: goto label_483128;
        case 0x48312cu: goto label_48312c;
        case 0x483130u: goto label_483130;
        case 0x483134u: goto label_483134;
        case 0x483138u: goto label_483138;
        case 0x48313cu: goto label_48313c;
        case 0x483140u: goto label_483140;
        case 0x483144u: goto label_483144;
        case 0x483148u: goto label_483148;
        case 0x48314cu: goto label_48314c;
        case 0x483150u: goto label_483150;
        case 0x483154u: goto label_483154;
        case 0x483158u: goto label_483158;
        case 0x48315cu: goto label_48315c;
        case 0x483160u: goto label_483160;
        case 0x483164u: goto label_483164;
        case 0x483168u: goto label_483168;
        case 0x48316cu: goto label_48316c;
        case 0x483170u: goto label_483170;
        case 0x483174u: goto label_483174;
        case 0x483178u: goto label_483178;
        case 0x48317cu: goto label_48317c;
        default: break;
    }

    ctx->pc = 0x483110u;

label_483110:
    // 0x483110: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x483110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_483114:
    // 0x483114: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_483118:
    // 0x483118: 0x8c62ad2c  lw          $v0, -0x52D4($v1)
    ctx->pc = 0x483118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946092)));
label_48311c:
    // 0x48311c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x48311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_483120:
    // 0x483120: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x483120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_483124:
    // 0x483124: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x483124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_483128:
    // 0x483128: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x483128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48312c:
    // 0x48312c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48312cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483130:
    // 0x483130: 0x40f809  jalr        $v0
label_483134:
    if (ctx->pc == 0x483134u) {
        ctx->pc = 0x483134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483130u;
        // 0x483134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483138u;
        goto label_483138;
    }
    ctx->pc = 0x483130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483138u);
        ctx->pc = 0x483134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483130u;
        // 0x483134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483130u, 0x483138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483138u;
label_483138:
    // 0x483138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48313c:
    // 0x48313c: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_483140:
    if (ctx->pc == 0x483140u) {
        ctx->pc = 0x483140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48313Cu;
        // 0x483140: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483144u;
        goto label_483144;
    }
    ctx->pc = 0x48313Cu;
    {
        const bool branch_taken_0x48313c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x48313c) {
            ctx->pc = 0x483140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48313Cu;
            // 0x483140: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483170u;
            goto label_483170;
        }
    }
    ctx->pc = 0x483144u;
label_483144:
    // 0x483144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483148:
    // 0x483148: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x483148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_48314c:
    // 0x48314c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48314cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_483150:
    // 0x483150: 0xc11eff2  jal         func_47BFC8
label_483154:
    if (ctx->pc == 0x483154u) {
        ctx->pc = 0x483154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483150u;
        // 0x483154: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483158u;
        goto label_483158;
    }
    ctx->pc = 0x483150u;
    SET_GPR_U32(ctx, 31, 0x483158u);
    ctx->pc = 0x483154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483150u;
    // 0x483154: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x483150u, 0x483158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483158u;
label_483158:
    // 0x483158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x483158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_48315c:
    // 0x48315c: 0xc11f024  jal         func_47C090
label_483160:
    if (ctx->pc == 0x483160u) {
        ctx->pc = 0x483160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48315Cu;
        // 0x483160: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483164u;
        goto label_483164;
    }
    ctx->pc = 0x48315Cu;
    SET_GPR_U32(ctx, 31, 0x483164u);
    ctx->pc = 0x483160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48315Cu;
    // 0x483160: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x48315Cu, 0x483164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483164u;
label_483164:
    // 0x483164: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_483168:
    if (ctx->pc == 0x483168u) {
        ctx->pc = 0x483168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483164u;
        // 0x483168: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48316Cu;
        goto label_48316c;
    }
    ctx->pc = 0x483164u;
    {
        const bool branch_taken_0x483164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483164u;
        // 0x483168: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483164) {
            ctx->pc = 0x483170u;
            goto label_483170;
        }
    }
    ctx->pc = 0x48316Cu;
label_48316c:
    // 0x48316c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_483170:
    // 0x483170: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x483170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_483174:
    // 0x483174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x483174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_483178:
    // 0x483178: 0x3e00008  jr          $ra
label_48317c:
    if (ctx->pc == 0x48317Cu) {
        ctx->pc = 0x48317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483178u;
        // 0x48317c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483180u;
        goto label_fallthrough_0x483178;
    }
    ctx->pc = 0x483178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483178u;
        // 0x48317c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x483178:
    ctx->pc = 0x483180u;
}
