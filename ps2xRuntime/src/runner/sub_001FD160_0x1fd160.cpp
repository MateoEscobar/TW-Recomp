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

// Function: sub_001FD160
// Address: 0x1fd160 - 0x1fd1c8
void sub_001FD160_0x1fd160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD160_0x1fd160");
#endif

    switch (ctx->pc) {
        case 0x1fd160u: goto label_1fd160;
        case 0x1fd164u: goto label_1fd164;
        case 0x1fd168u: goto label_1fd168;
        case 0x1fd16cu: goto label_1fd16c;
        case 0x1fd170u: goto label_1fd170;
        case 0x1fd174u: goto label_1fd174;
        case 0x1fd178u: goto label_1fd178;
        case 0x1fd17cu: goto label_1fd17c;
        case 0x1fd180u: goto label_1fd180;
        case 0x1fd184u: goto label_1fd184;
        case 0x1fd188u: goto label_1fd188;
        case 0x1fd18cu: goto label_1fd18c;
        case 0x1fd190u: goto label_1fd190;
        case 0x1fd194u: goto label_1fd194;
        case 0x1fd198u: goto label_1fd198;
        case 0x1fd19cu: goto label_1fd19c;
        case 0x1fd1a0u: goto label_1fd1a0;
        case 0x1fd1a4u: goto label_1fd1a4;
        case 0x1fd1a8u: goto label_1fd1a8;
        case 0x1fd1acu: goto label_1fd1ac;
        case 0x1fd1b0u: goto label_1fd1b0;
        case 0x1fd1b4u: goto label_1fd1b4;
        case 0x1fd1b8u: goto label_1fd1b8;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1c0u: goto label_1fd1c0;
        case 0x1fd1c4u: goto label_1fd1c4;
        default: break;
    }

    ctx->pc = 0x1fd160u;

label_1fd160:
    // 0x1fd160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fd164:
    // 0x1fd164: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fd168:
    // 0x1fd168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd16c:
    // 0x1fd16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd170:
    // 0x1fd170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd174:
    // 0x1fd174: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fd174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1fd178:
    // 0x1fd178: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1fd17c:
    if (ctx->pc == 0x1FD17Cu) {
        ctx->pc = 0x1FD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD178u;
        // 0x1fd17c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD180u;
        goto label_1fd180;
    }
    ctx->pc = 0x1FD178u;
    {
        const bool branch_taken_0x1fd178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD178u;
        // 0x1fd17c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd178) {
            ctx->pc = 0x1FD1ACu;
            goto label_1fd1ac;
        }
    }
    ctx->pc = 0x1FD180u;
label_1fd180:
    // 0x1fd180: 0xc06a3aa  jal         func_1A8EA8
label_1fd184:
    if (ctx->pc == 0x1FD184u) {
        ctx->pc = 0x1FD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD180u;
        // 0x1fd184: 0x8e0500a4  lw          $a1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD188u;
        goto label_1fd188;
    }
    ctx->pc = 0x1FD180u;
    SET_GPR_U32(ctx, 31, 0x1FD188u);
    ctx->pc = 0x1FD184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD180u;
    // 0x1fd184: 0x8e0500a4  lw          $a1, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1FD180u, 0x1FD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD188u;
label_1fd188:
    // 0x1fd188: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fd18c:
    if (ctx->pc == 0x1FD18Cu) {
        ctx->pc = 0x1FD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD188u;
        // 0x1fd18c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD190u;
        goto label_1fd190;
    }
    ctx->pc = 0x1FD188u;
    {
        const bool branch_taken_0x1fd188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD188u;
        // 0x1fd18c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd188) {
            ctx->pc = 0x1FD1B0u;
            goto label_1fd1b0;
        }
    }
    ctx->pc = 0x1FD190u;
label_1fd190:
    // 0x1fd190: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x1fd190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1fd194:
    // 0x1fd194: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fd194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd198:
    // 0x1fd198: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fd198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fd19c:
    // 0x1fd19c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fd1a0:
    // 0x1fd1a0: 0x40f809  jalr        $v0
label_1fd1a4:
    if (ctx->pc == 0x1FD1A4u) {
        ctx->pc = 0x1FD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1A0u;
        // 0x1fd1a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1A8u;
        goto label_1fd1a8;
    }
    ctx->pc = 0x1FD1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD1A8u);
        ctx->pc = 0x1FD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1A0u;
        // 0x1fd1a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1A0u, 0x1FD1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD1A8u;
label_1fd1a8:
    // 0x1fd1a8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1fd1a8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fd1ac:
    // 0x1fd1ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fd1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd1b0:
    // 0x1fd1b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd1b4:
    // 0x1fd1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd1b8:
    // 0x1fd1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd1bc:
    // 0x1fd1bc: 0x3e00008  jr          $ra
label_1fd1c0:
    if (ctx->pc == 0x1FD1C0u) {
        ctx->pc = 0x1FD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1BCu;
        // 0x1fd1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1C4u;
        goto label_1fd1c4;
    }
    ctx->pc = 0x1FD1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1BCu;
        // 0x1fd1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD1C4u;
label_1fd1c4:
    // 0x1fd1c4: 0x0  nop
    ctx->pc = 0x1fd1c4u;
    // NOP
    ctx->pc = 0x1fd1c8u;
}
