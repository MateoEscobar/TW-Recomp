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

// Function: sub_001F3128
// Address: 0x1f3128 - 0x1f31b0
void sub_001F3128_0x1f3128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3128_0x1f3128");
#endif

    switch (ctx->pc) {
        case 0x1f3128u: goto label_1f3128;
        case 0x1f312cu: goto label_1f312c;
        case 0x1f3130u: goto label_1f3130;
        case 0x1f3134u: goto label_1f3134;
        case 0x1f3138u: goto label_1f3138;
        case 0x1f313cu: goto label_1f313c;
        case 0x1f3140u: goto label_1f3140;
        case 0x1f3144u: goto label_1f3144;
        case 0x1f3148u: goto label_1f3148;
        case 0x1f314cu: goto label_1f314c;
        case 0x1f3150u: goto label_1f3150;
        case 0x1f3154u: goto label_1f3154;
        case 0x1f3158u: goto label_1f3158;
        case 0x1f315cu: goto label_1f315c;
        case 0x1f3160u: goto label_1f3160;
        case 0x1f3164u: goto label_1f3164;
        case 0x1f3168u: goto label_1f3168;
        case 0x1f316cu: goto label_1f316c;
        case 0x1f3170u: goto label_1f3170;
        case 0x1f3174u: goto label_1f3174;
        case 0x1f3178u: goto label_1f3178;
        case 0x1f317cu: goto label_1f317c;
        case 0x1f3180u: goto label_1f3180;
        case 0x1f3184u: goto label_1f3184;
        case 0x1f3188u: goto label_1f3188;
        case 0x1f318cu: goto label_1f318c;
        case 0x1f3190u: goto label_1f3190;
        case 0x1f3194u: goto label_1f3194;
        case 0x1f3198u: goto label_1f3198;
        case 0x1f319cu: goto label_1f319c;
        case 0x1f31a0u: goto label_1f31a0;
        case 0x1f31a4u: goto label_1f31a4;
        case 0x1f31a8u: goto label_1f31a8;
        case 0x1f31acu: goto label_1f31ac;
        default: break;
    }

    ctx->pc = 0x1f3128u;

label_1f3128:
    // 0x1f3128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f312c:
    // 0x1f312c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1f312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1f3130:
    // 0x1f3130: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f3130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f3134:
    // 0x1f3134: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3138:
    // 0x1f3138: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f3138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f313c:
    // 0x1f313c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f313cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3140:
    // 0x1f3140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3144:
    // 0x1f3144: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f3144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3148:
    // 0x1f3148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f314c:
    // 0x1f314c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f314cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3150:
    // 0x1f3150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3154:
    // 0x1f3154: 0x8e27009c  lw          $a3, 0x9C($s1)
    ctx->pc = 0x1f3154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f3158:
    // 0x1f3158: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f3158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f315c:
    // 0x1f315c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1f315cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1f3160:
    // 0x1f3160: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1f3160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f3164:
    // 0x1f3164: 0x60f809  jalr        $v1
label_1f3168:
    if (ctx->pc == 0x1F3168u) {
        ctx->pc = 0x1F3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3164u;
        // 0x1f3168: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F316Cu;
        goto label_1f316c;
    }
    ctx->pc = 0x1F3164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F316Cu);
        ctx->pc = 0x1F3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3164u;
        // 0x1f3168: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3164u, 0x1F316Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F316Cu;
label_1f316c:
    // 0x1f316c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f3170:
    // 0x1f3170: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_1f3174:
    if (ctx->pc == 0x1F3174u) {
        ctx->pc = 0x1F3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3170u;
        // 0x1f3174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3178u;
        goto label_1f3178;
    }
    ctx->pc = 0x1F3170u;
    {
        const bool branch_taken_0x1f3170 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3170u;
        // 0x1f3174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3170) {
            ctx->pc = 0x1F3198u;
            goto label_1f3198;
        }
    }
    ctx->pc = 0x1F3178u;
label_1f3178:
    // 0x1f3178: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f3178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f317c:
    // 0x1f317c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f3180:
    // 0x1f3180: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1f3180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1f3184:
    // 0x1f3184: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1f3184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1f3188:
    // 0x1f3188: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1f3188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_1f318c:
    // 0x1f318c: 0xc043f0c  jal         func_10FC30
label_1f3190:
    if (ctx->pc == 0x1F3190u) {
        ctx->pc = 0x1F3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F318Cu;
        // 0x1f3190: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3194u;
        goto label_1f3194;
    }
    ctx->pc = 0x1F318Cu;
    SET_GPR_U32(ctx, 31, 0x1F3194u);
    ctx->pc = 0x1F3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F318Cu;
    // 0x1f3190: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F318Cu, 0x1F3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3194u;
label_1f3194:
    // 0x1f3194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3198:
    // 0x1f3198: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f3198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f319c:
    // 0x1f319c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f319cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f31a0:
    // 0x1f31a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f31a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f31a4:
    // 0x1f31a4: 0x3e00008  jr          $ra
label_1f31a8:
    if (ctx->pc == 0x1F31A8u) {
        ctx->pc = 0x1F31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31A4u;
        // 0x1f31a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31ACu;
        goto label_1f31ac;
    }
    ctx->pc = 0x1F31A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31A4u;
        // 0x1f31a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F31A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F31ACu;
label_1f31ac:
    // 0x1f31ac: 0x0  nop
    ctx->pc = 0x1f31acu;
    // NOP
    ctx->pc = 0x1f31b0u;
}
