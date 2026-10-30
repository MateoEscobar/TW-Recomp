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

// Function: sub_00352430
// Address: 0x352430 - 0x3524a8
void sub_00352430_0x352430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352430_0x352430");
#endif

    switch (ctx->pc) {
        case 0x35245cu: goto label_35245c;
        case 0x352488u: goto label_352488;
        case 0x352490u: goto label_352490;
        default: break;
    }

    ctx->pc = 0x352430u;

    // 0x352430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x352434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x352434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x352438: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x352438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35243c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35243cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x352444: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x352444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352448: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x352448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35244c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x35244cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x352450: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x352450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x352454: 0xc0d4826  jal         func_352098
    ctx->pc = 0x352454u;
    SET_GPR_U32(ctx, 31, 0x35245Cu);
    ctx->pc = 0x352458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352454u;
    // 0x352458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352098u, 0x352454u, 0x35245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35245Cu;
label_35245c:
    // 0x35245c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x35245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x352460: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x352460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x352464: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x352464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x352468: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x352468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x35246c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x35246cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x352470: 0x82020018  lb          $v0, 0x18($s0)
    ctx->pc = 0x352470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x352474: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x352474u;
    {
        const bool branch_taken_0x352474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352474u;
        // 0x352478: 0x34821001  ori         $v0, $a0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352474) {
            ctx->pc = 0x352480u;
            goto label_352480;
        }
    }
    ctx->pc = 0x35247Cu;
    // 0x35247c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x35247cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_352480:
    // 0x352480: 0xc0d4c56  jal         func_353158
    ctx->pc = 0x352480u;
    SET_GPR_U32(ctx, 31, 0x352488u);
    ctx->pc = 0x352484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352480u;
    // 0x352484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353158u, 0x352480u, 0x352488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352488u;
label_352488:
    // 0x352488: 0xc0d4c72  jal         func_3531C8
    ctx->pc = 0x352488u;
    SET_GPR_U32(ctx, 31, 0x352490u);
    ctx->pc = 0x35248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352488u;
    // 0x35248c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3531C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3531C8u, 0x352488u, 0x352490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352490u;
label_352490:
    // 0x352490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x352490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35249c: 0x3e00008  jr          $ra
    ctx->pc = 0x35249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3524A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35249Cu;
        // 0x3524a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35249Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3524A4u;
    // 0x3524a4: 0x0  nop
    ctx->pc = 0x3524a4u;
    // NOP
    ctx->pc = 0x3524a8u;
}
