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

// Function: sub_0042F050
// Address: 0x42f050 - 0x42f0e8
void sub_0042F050_0x42f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F050_0x42f050");
#endif

    switch (ctx->pc) {
        case 0x42f050u: goto label_42f050;
        case 0x42f054u: goto label_42f054;
        case 0x42f058u: goto label_42f058;
        case 0x42f05cu: goto label_42f05c;
        case 0x42f060u: goto label_42f060;
        case 0x42f064u: goto label_42f064;
        case 0x42f068u: goto label_42f068;
        case 0x42f06cu: goto label_42f06c;
        case 0x42f070u: goto label_42f070;
        case 0x42f074u: goto label_42f074;
        case 0x42f078u: goto label_42f078;
        case 0x42f07cu: goto label_42f07c;
        case 0x42f080u: goto label_42f080;
        case 0x42f084u: goto label_42f084;
        case 0x42f088u: goto label_42f088;
        case 0x42f08cu: goto label_42f08c;
        case 0x42f090u: goto label_42f090;
        case 0x42f094u: goto label_42f094;
        case 0x42f098u: goto label_42f098;
        case 0x42f09cu: goto label_42f09c;
        case 0x42f0a0u: goto label_42f0a0;
        case 0x42f0a4u: goto label_42f0a4;
        case 0x42f0a8u: goto label_42f0a8;
        case 0x42f0acu: goto label_42f0ac;
        case 0x42f0b0u: goto label_42f0b0;
        case 0x42f0b4u: goto label_42f0b4;
        case 0x42f0b8u: goto label_42f0b8;
        case 0x42f0bcu: goto label_42f0bc;
        case 0x42f0c0u: goto label_42f0c0;
        case 0x42f0c4u: goto label_42f0c4;
        case 0x42f0c8u: goto label_42f0c8;
        case 0x42f0ccu: goto label_42f0cc;
        case 0x42f0d0u: goto label_42f0d0;
        case 0x42f0d4u: goto label_42f0d4;
        case 0x42f0d8u: goto label_42f0d8;
        case 0x42f0dcu: goto label_42f0dc;
        case 0x42f0e0u: goto label_42f0e0;
        case 0x42f0e4u: goto label_42f0e4;
        default: break;
    }

    ctx->pc = 0x42f050u;

label_42f050:
    // 0x42f050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x42f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_42f054:
    // 0x42f054: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_42f058:
    // 0x42f058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_42f05c:
    // 0x42f05c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42f05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42f060:
    // 0x42f060: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x42f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_42f064:
    // 0x42f064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42f064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42f068:
    // 0x42f068: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x42f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_42f06c:
    // 0x42f06c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x42f06cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_42f070:
    // 0x42f070: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x42f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_42f074:
    // 0x42f074: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x42f074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_42f078:
    // 0x42f078: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42f078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_42f07c:
    // 0x42f07c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x42f07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42f080:
    // 0x42f080: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x42f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_42f084:
    // 0x42f084: 0xc10bbde  jal         func_42EF78
label_42f088:
    if (ctx->pc == 0x42F088u) {
        ctx->pc = 0x42F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F084u;
        // 0x42f088: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F08Cu;
        goto label_42f08c;
    }
    ctx->pc = 0x42F084u;
    SET_GPR_U32(ctx, 31, 0x42F08Cu);
    ctx->pc = 0x42F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F084u;
    // 0x42f088: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF78u, 0x42F084u, 0x42F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F08Cu;
label_42f08c:
    // 0x42f08c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_42f090:
    if (ctx->pc == 0x42F090u) {
        ctx->pc = 0x42F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F08Cu;
        // 0x42f090: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F094u;
        goto label_42f094;
    }
    ctx->pc = 0x42F08Cu;
    {
        const bool branch_taken_0x42f08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F08Cu;
        // 0x42f090: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f08c) {
            ctx->pc = 0x42F0C0u;
            goto label_42f0c0;
        }
    }
    ctx->pc = 0x42F094u;
label_42f094:
    // 0x42f094: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x42f094u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_42f098:
    // 0x42f098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42f098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42f09c:
    // 0x42f09c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x42f09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42f0a0:
    // 0x42f0a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x42f0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42f0a4:
    // 0x42f0a4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x42f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_42f0a8:
    // 0x42f0a8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x42f0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42f0ac:
    // 0x42f0ac: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x42f0acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42f0b0:
    // 0x42f0b0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x42f0b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_42f0b4:
    // 0x42f0b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x42f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_42f0b8:
    // 0x42f0b8: 0x40f809  jalr        $v0
label_42f0bc:
    if (ctx->pc == 0x42F0BCu) {
        ctx->pc = 0x42F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F0B8u;
        // 0x42f0bc: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F0C0u;
        goto label_42f0c0;
    }
    ctx->pc = 0x42F0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42F0C0u);
        ctx->pc = 0x42F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F0B8u;
        // 0x42f0bc: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F0B8u, 0x42F0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42F0C0u;
label_42f0c0:
    // 0x42f0c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x42f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_42f0c4:
    // 0x42f0c4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x42f0c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42f0c8:
    // 0x42f0c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x42f0c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42f0cc:
    // 0x42f0cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x42f0ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42f0d0:
    // 0x42f0d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42f0d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42f0d4:
    // 0x42f0d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42f0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42f0d8:
    // 0x42f0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42f0dc:
    // 0x42f0dc: 0x3e00008  jr          $ra
label_42f0e0:
    if (ctx->pc == 0x42F0E0u) {
        ctx->pc = 0x42F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F0DCu;
        // 0x42f0e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F0E4u;
        goto label_42f0e4;
    }
    ctx->pc = 0x42F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F0DCu;
        // 0x42f0e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F0E4u;
label_42f0e4:
    // 0x42f0e4: 0x0  nop
    ctx->pc = 0x42f0e4u;
    // NOP
    ctx->pc = 0x42f0e8u;
}
