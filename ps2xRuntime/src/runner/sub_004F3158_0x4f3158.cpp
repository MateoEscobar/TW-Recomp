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

// Function: sub_004F3158
// Address: 0x4f3158 - 0x4f31c8
void sub_004F3158_0x4f3158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3158_0x4f3158");
#endif

    switch (ctx->pc) {
        case 0x4f3158u: goto label_4f3158;
        case 0x4f315cu: goto label_4f315c;
        case 0x4f3160u: goto label_4f3160;
        case 0x4f3164u: goto label_4f3164;
        case 0x4f3168u: goto label_4f3168;
        case 0x4f316cu: goto label_4f316c;
        case 0x4f3170u: goto label_4f3170;
        case 0x4f3174u: goto label_4f3174;
        case 0x4f3178u: goto label_4f3178;
        case 0x4f317cu: goto label_4f317c;
        case 0x4f3180u: goto label_4f3180;
        case 0x4f3184u: goto label_4f3184;
        case 0x4f3188u: goto label_4f3188;
        case 0x4f318cu: goto label_4f318c;
        case 0x4f3190u: goto label_4f3190;
        case 0x4f3194u: goto label_4f3194;
        case 0x4f3198u: goto label_4f3198;
        case 0x4f319cu: goto label_4f319c;
        case 0x4f31a0u: goto label_4f31a0;
        case 0x4f31a4u: goto label_4f31a4;
        case 0x4f31a8u: goto label_4f31a8;
        case 0x4f31acu: goto label_4f31ac;
        case 0x4f31b0u: goto label_4f31b0;
        case 0x4f31b4u: goto label_4f31b4;
        case 0x4f31b8u: goto label_4f31b8;
        case 0x4f31bcu: goto label_4f31bc;
        case 0x4f31c0u: goto label_4f31c0;
        case 0x4f31c4u: goto label_4f31c4;
        default: break;
    }

    ctx->pc = 0x4f3158u;

label_4f3158:
    // 0x4f3158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f315c:
    // 0x4f315c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f3160:
    // 0x4f3160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3164:
    // 0x4f3164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3168:
    // 0x4f3168: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f3168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f316c:
    // 0x4f316c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f316cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f3170:
    // 0x4f3170: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f3170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f3174:
    // 0x4f3174: 0x40f809  jalr        $v0
label_4f3178:
    if (ctx->pc == 0x4F3178u) {
        ctx->pc = 0x4F3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3174u;
        // 0x4f3178: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F317Cu;
        goto label_4f317c;
    }
    ctx->pc = 0x4F3174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F317Cu);
        ctx->pc = 0x4F3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3174u;
        // 0x4f3178: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3174u, 0x4F317Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F317Cu;
label_4f317c:
    // 0x4f317c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_4f3180:
    if (ctx->pc == 0x4F3180u) {
        ctx->pc = 0x4F3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F317Cu;
        // 0x4f3180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3184u;
        goto label_4f3184;
    }
    ctx->pc = 0x4F317Cu;
    {
        const bool branch_taken_0x4f317c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F317Cu;
        // 0x4f3180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f317c) {
            ctx->pc = 0x4F31B4u;
            goto label_4f31b4;
        }
    }
    ctx->pc = 0x4F3184u;
label_4f3184:
    // 0x4f3184: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4f3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f3188:
    // 0x4f3188: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f3188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f318c:
    // 0x4f318c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4f318cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f3190:
    // 0x4f3190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f3190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f3194:
    // 0x4f3194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f3198:
    // 0x4f3198: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4f3198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f319c:
    // 0x4f319c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4f31a0:
    if (ctx->pc == 0x4F31A0u) {
        ctx->pc = 0x4F31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F319Cu;
        // 0x4f31a0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F31A4u;
        goto label_4f31a4;
    }
    ctx->pc = 0x4F319Cu;
    {
        const bool branch_taken_0x4f319c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F319Cu;
        // 0x4f31a0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f319c) {
            ctx->pc = 0x4F31B0u;
            goto label_4f31b0;
        }
    }
    ctx->pc = 0x4F31A4u;
label_4f31a4:
    // 0x4f31a4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f31a8:
    // 0x4f31a8: 0x24425138  addiu       $v0, $v0, 0x5138
    ctx->pc = 0x4f31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20792));
label_4f31ac:
    // 0x4f31ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4f31acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4f31b0:
    // 0x4f31b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4f31b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f31b4:
    // 0x4f31b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f31b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f31b8:
    // 0x4f31b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f31b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f31bc:
    // 0x4f31bc: 0x3e00008  jr          $ra
label_4f31c0:
    if (ctx->pc == 0x4F31C0u) {
        ctx->pc = 0x4F31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31BCu;
        // 0x4f31c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F31C4u;
        goto label_4f31c4;
    }
    ctx->pc = 0x4F31BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31BCu;
        // 0x4f31c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F31BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F31C4u;
label_4f31c4:
    // 0x4f31c4: 0x0  nop
    ctx->pc = 0x4f31c4u;
    // NOP
    ctx->pc = 0x4f31c8u;
}
